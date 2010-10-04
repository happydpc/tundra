// For conditions of distribution and use, see copyright notice in license.txt

#ifndef incl_ECEditorModule_ECComponentEditor_h
#define incl_ECEditorModule_ECComponentEditor_h

#include "ForwardDefines.h"
#include "AttributeChangeType.h"

#include <QObject>
#include <map>
#include <set>

class QtAbstractPropertyBrowser;
class QtProperty;
class QtGroupPropertyManager;

namespace ECEditor
{
    class ECAttributeEditorBase;

    //! ECComponentEditor is responsible to create the all attribute editors for each component (Note! each component must contain same attributes).
    /*! ECComponentEditor will only accept same type of components. If the attribute type is supported component editor will create ECAttributeEditor object
     *  and insert it to ECBrower object.
     *  \ingroup ECEditorModuleClient.
     */
    class ECComponentEditor : public QObject
    {
        Q_OBJECT
    public:
        ECComponentEditor(ComponentPtr component, QtAbstractPropertyBrowser *propertyBrowser);
        virtual ~ECComponentEditor();

        //! Check if this component editor is holding spesific property as it's root property.
        bool ContainProperty(QtProperty *property) const;

        //! Get group property pointer.
        QtProperty *RootProperty() const {return groupProperty_;}

        int ComponentsCount() const { return components_.size(); }

        int AttributeCount() const { return attributeEditors_.size(); }

        //! Add new component into the editor.
        void AddNewComponent(ComponentPtr component, bool updateUi = true);

        //! Remove component from the editor.
        void RemoveComponent(IComponent *component);

        //void UpdateEditorUI();

    public slots:
        //! W
        //! \bug When user reinitialize the attribute editor's properties the order will go invalid.
        //void AttributeEditorUpdated(const std::string &attributeName);

    private slots:
        //! When component's attribute has been changed, this method is called.
        //! Method will ask the ECAttributeEditor to update it's fields to new attribute values (UpdateEditorUI).
        void AttributeChanged(IAttribute* attribute, AttributeChange::Type change);

    private:
        //! Method is trying to find the right attribute type by using a dynamic_cast and if attribute is succefully casted 
        //! a new ECAttributeEditor instance is created and it's pointer returned to a user. If attribute type is not supported
        //! the method will return a null pointer.
        //! @return return attribute pointer if attribute type is supported and if not return null pointer.
        static ECAttributeEditorBase *CreateAttributeEditor(QtAbstractPropertyBrowser *browser, ECComponentEditor *editor, IAttribute &attribute);

        //! Initialize editor and create attribute editors.
        //! @param component component is used to figure out what attrubtes it contain and what
        //! attribute editors need to be created to this component editor.
        void InitializeEditor(ComponentPtr component);

        //! Create new attribute editors for spesific component.
        //! @param component Compoent that we need to use, to get all attributes that we want to edit.
        void CreateAttributeEditors(ComponentPtr component);

        void UpdateGroupPropertyText();

        typedef std::map<std::string, ECAttributeEditorBase*> AttributeEditorMap;
        AttributeEditorMap attributeEditors_;
        typedef std::set<ComponentWeakPtr> ComponentSet;
        ComponentSet components_;
        QtProperty *groupProperty_;
        QtGroupPropertyManager *groupPropertyManager_;
        QtAbstractPropertyBrowser *propertyBrowser_;
        QString typeName_;
        QString name_;
    };
}

#endif