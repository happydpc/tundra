// For conditions of distribution and use, see copyright notice in license.txt

#ifndef incl_OgreRenderingModule_h
#define incl_OgreRenderingModule_h

#include "Foundation.h"
#include "ModuleInterface.h"
#include "Renderer.h"
#include "ConsoleCommandServiceInterface.h"
#include "OgreModuleApi.h"

namespace Foundation
{
    class Framework;
}

namespace OgreRenderer
{
    class Renderer;
    typedef boost::shared_ptr<Renderer> RendererPtr;
    
    //! A renderer module using Ogre
    class OGRE_MODULE_API OgreRenderingModule : public Foundation::ModuleInterfaceImpl
    {
    public:
        OgreRenderingModule();
        virtual ~OgreRenderingModule();

        virtual void Load();
        virtual void Unload();
        virtual void PreInitialize();
        virtual void Initialize();
        virtual void PostInitialize();
        virtual void Uninitialize();
        virtual void Update(Core::f64 frametime);
        
        //! returns renderer
        RendererPtr GetRenderer() const { return renderer_; }
        
        MODULE_LOGGING_FUNCTIONS;

        //! returns name of this module. Needed for logging.
        static const std::string &NameStatic() { return Foundation::Module::NameFromType(type_static_); }

        static const Foundation::Module::Type type_static_ = Foundation::Module::MT_Renderer;
    private:
        //! renderer
        RendererPtr renderer_;
    };
}

#endif
