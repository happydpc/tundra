#include "QtScriptBindingsHelpers.h"

static QScriptValue Transform_Transform(QScriptContext *context, QScriptEngine *engine)
{
    if (context->argumentCount() != 0) { printf("Error! Invalid number of arguments passed to function Transform_Transform in file %s, line %d!\nExpected 0, but got %d!\n", __FILE__, __LINE__, context->argumentCount()); return QScriptValue(); }
    Transform ret;
    return TypeToQScriptValue(engine, ret);
}

static QScriptValue Transform_Transform_Vector3df_Vector3df_Vector3df(QScriptContext *context, QScriptEngine *engine)
{
    if (context->argumentCount() != 3) { printf("Error! Invalid number of arguments passed to function Transform_Transform_Vector3df_Vector3df_Vector3df in file %s, line %d!\nExpected 3, but got %d!\n", __FILE__, __LINE__, context->argumentCount()); return QScriptValue(); }
    Vector3df pos_ = TypeFromQScriptValue<Vector3df>(context->argument(0));
    Vector3df rot_ = TypeFromQScriptValue<Vector3df>(context->argument(1));
    Vector3df scale = TypeFromQScriptValue<Vector3df>(context->argument(2));
    Transform ret(pos_, rot_, scale);
    return TypeToQScriptValue(engine, ret);
}

static QScriptValue Transform_Transform_float3x3(QScriptContext *context, QScriptEngine *engine)
{
    if (context->argumentCount() != 1) { printf("Error! Invalid number of arguments passed to function Transform_Transform_float3x3 in file %s, line %d!\nExpected 1, but got %d!\n", __FILE__, __LINE__, context->argumentCount()); return QScriptValue(); }
    float3x3 m = TypeFromQScriptValue<float3x3>(context->argument(0));
    Transform ret(m);
    return TypeToQScriptValue(engine, ret);
}

static QScriptValue Transform_Transform_float3x4(QScriptContext *context, QScriptEngine *engine)
{
    if (context->argumentCount() != 1) { printf("Error! Invalid number of arguments passed to function Transform_Transform_float3x4 in file %s, line %d!\nExpected 1, but got %d!\n", __FILE__, __LINE__, context->argumentCount()); return QScriptValue(); }
    float3x4 m = TypeFromQScriptValue<float3x4>(context->argument(0));
    Transform ret(m);
    return TypeToQScriptValue(engine, ret);
}

static QScriptValue Transform_Transform_float4x4(QScriptContext *context, QScriptEngine *engine)
{
    if (context->argumentCount() != 1) { printf("Error! Invalid number of arguments passed to function Transform_Transform_float4x4 in file %s, line %d!\nExpected 1, but got %d!\n", __FILE__, __LINE__, context->argumentCount()); return QScriptValue(); }
    float4x4 m = TypeFromQScriptValue<float4x4>(context->argument(0));
    Transform ret(m);
    return TypeToQScriptValue(engine, ret);
}

static QScriptValue Transform_SetPos_float_float_float(QScriptContext *context, QScriptEngine *engine)
{
    if (context->argumentCount() != 3) { printf("Error! Invalid number of arguments passed to function Transform_SetPos_float_float_float in file %s, line %d!\nExpected 3, but got %d!\n", __FILE__, __LINE__, context->argumentCount()); return QScriptValue(); }
    Transform *This = TypeFromQScriptValue<Transform*>(context->thisObject());
    if (!This) { printf("Error! Invalid context->thisObject in function Transform_SetPos_float_float_float in file %s, line %d\n!", __FILE__, __LINE__); return QScriptValue(); }
    float x = TypeFromQScriptValue<float>(context->argument(0));
    float y = TypeFromQScriptValue<float>(context->argument(1));
    float z = TypeFromQScriptValue<float>(context->argument(2));
    This->SetPos(x, y, z);
    return QScriptValue();
}

static QScriptValue Transform_SetRot_float_float_float(QScriptContext *context, QScriptEngine *engine)
{
    if (context->argumentCount() != 3) { printf("Error! Invalid number of arguments passed to function Transform_SetRot_float_float_float in file %s, line %d!\nExpected 3, but got %d!\n", __FILE__, __LINE__, context->argumentCount()); return QScriptValue(); }
    Transform *This = TypeFromQScriptValue<Transform*>(context->thisObject());
    if (!This) { printf("Error! Invalid context->thisObject in function Transform_SetRot_float_float_float in file %s, line %d\n!", __FILE__, __LINE__); return QScriptValue(); }
    float x = TypeFromQScriptValue<float>(context->argument(0));
    float y = TypeFromQScriptValue<float>(context->argument(1));
    float z = TypeFromQScriptValue<float>(context->argument(2));
    This->SetRot(x, y, z);
    return QScriptValue();
}

static QScriptValue Transform_SetScale_float_float_float(QScriptContext *context, QScriptEngine *engine)
{
    if (context->argumentCount() != 3) { printf("Error! Invalid number of arguments passed to function Transform_SetScale_float_float_float in file %s, line %d!\nExpected 3, but got %d!\n", __FILE__, __LINE__, context->argumentCount()); return QScriptValue(); }
    Transform *This = TypeFromQScriptValue<Transform*>(context->thisObject());
    if (!This) { printf("Error! Invalid context->thisObject in function Transform_SetScale_float_float_float in file %s, line %d\n!", __FILE__, __LINE__); return QScriptValue(); }
    float x = TypeFromQScriptValue<float>(context->argument(0));
    float y = TypeFromQScriptValue<float>(context->argument(1));
    float z = TypeFromQScriptValue<float>(context->argument(2));
    This->SetScale(x, y, z);
    return QScriptValue();
}

static QScriptValue Transform_ToFloat3x4(QScriptContext *context, QScriptEngine *engine)
{
    if (context->argumentCount() != 0) { printf("Error! Invalid number of arguments passed to function Transform_ToFloat3x4 in file %s, line %d!\nExpected 0, but got %d!\n", __FILE__, __LINE__, context->argumentCount()); return QScriptValue(); }
    Transform *This = TypeFromQScriptValue<Transform*>(context->thisObject());
    if (!This) { printf("Error! Invalid context->thisObject in function Transform_ToFloat3x4 in file %s, line %d\n!", __FILE__, __LINE__); return QScriptValue(); }
    float3x4 ret = This->ToFloat3x4();
    return TypeToQScriptValue(engine, ret);
}

static QScriptValue Transform_ToFloat4x4(QScriptContext *context, QScriptEngine *engine)
{
    if (context->argumentCount() != 0) { printf("Error! Invalid number of arguments passed to function Transform_ToFloat4x4 in file %s, line %d!\nExpected 0, but got %d!\n", __FILE__, __LINE__, context->argumentCount()); return QScriptValue(); }
    Transform *This = TypeFromQScriptValue<Transform*>(context->thisObject());
    if (!This) { printf("Error! Invalid context->thisObject in function Transform_ToFloat4x4 in file %s, line %d\n!", __FILE__, __LINE__); return QScriptValue(); }
    float4x4 ret = This->ToFloat4x4();
    return TypeToQScriptValue(engine, ret);
}

static QScriptValue Transform_FromFloat3x4_float3x4(QScriptContext *context, QScriptEngine *engine)
{
    if (context->argumentCount() != 1) { printf("Error! Invalid number of arguments passed to function Transform_FromFloat3x4_float3x4 in file %s, line %d!\nExpected 1, but got %d!\n", __FILE__, __LINE__, context->argumentCount()); return QScriptValue(); }
    Transform *This = TypeFromQScriptValue<Transform*>(context->thisObject());
    if (!This) { printf("Error! Invalid context->thisObject in function Transform_FromFloat3x4_float3x4 in file %s, line %d\n!", __FILE__, __LINE__); return QScriptValue(); }
    float3x4 m = TypeFromQScriptValue<float3x4>(context->argument(0));
    This->FromFloat3x4(m);
    return QScriptValue();
}

static QScriptValue Transform_FromFloat4x4_float4x4(QScriptContext *context, QScriptEngine *engine)
{
    if (context->argumentCount() != 1) { printf("Error! Invalid number of arguments passed to function Transform_FromFloat4x4_float4x4 in file %s, line %d!\nExpected 1, but got %d!\n", __FILE__, __LINE__, context->argumentCount()); return QScriptValue(); }
    Transform *This = TypeFromQScriptValue<Transform*>(context->thisObject());
    if (!This) { printf("Error! Invalid context->thisObject in function Transform_FromFloat4x4_float4x4 in file %s, line %d\n!", __FILE__, __LINE__); return QScriptValue(); }
    float4x4 m = TypeFromQScriptValue<float4x4>(context->argument(0));
    This->FromFloat4x4(m);
    return QScriptValue();
}

static QScriptValue Transform_SetRotation_float3x3(QScriptContext *context, QScriptEngine *engine)
{
    if (context->argumentCount() != 1) { printf("Error! Invalid number of arguments passed to function Transform_SetRotation_float3x3 in file %s, line %d!\nExpected 1, but got %d!\n", __FILE__, __LINE__, context->argumentCount()); return QScriptValue(); }
    Transform *This = TypeFromQScriptValue<Transform*>(context->thisObject());
    if (!This) { printf("Error! Invalid context->thisObject in function Transform_SetRotation_float3x3 in file %s, line %d\n!", __FILE__, __LINE__); return QScriptValue(); }
    float3x3 mat = TypeFromQScriptValue<float3x3>(context->argument(0));
    This->SetRotation(mat);
    return QScriptValue();
}

static QScriptValue Transform_SetRotation_Quat(QScriptContext *context, QScriptEngine *engine)
{
    if (context->argumentCount() != 1) { printf("Error! Invalid number of arguments passed to function Transform_SetRotation_Quat in file %s, line %d!\nExpected 1, but got %d!\n", __FILE__, __LINE__, context->argumentCount()); return QScriptValue(); }
    Transform *This = TypeFromQScriptValue<Transform*>(context->thisObject());
    if (!This) { printf("Error! Invalid context->thisObject in function Transform_SetRotation_Quat in file %s, line %d\n!", __FILE__, __LINE__); return QScriptValue(); }
    Quat q = TypeFromQScriptValue<Quat>(context->argument(0));
    This->SetRotation(q);
    return QScriptValue();
}

static QScriptValue Transform_Rotation3x3(QScriptContext *context, QScriptEngine *engine)
{
    if (context->argumentCount() != 0) { printf("Error! Invalid number of arguments passed to function Transform_Rotation3x3 in file %s, line %d!\nExpected 0, but got %d!\n", __FILE__, __LINE__, context->argumentCount()); return QScriptValue(); }
    Transform *This = TypeFromQScriptValue<Transform*>(context->thisObject());
    if (!This) { printf("Error! Invalid context->thisObject in function Transform_Rotation3x3 in file %s, line %d\n!", __FILE__, __LINE__); return QScriptValue(); }
    float3x3 ret = This->Rotation3x3();
    return TypeToQScriptValue(engine, ret);
}

static QScriptValue Transform_RotationQuat(QScriptContext *context, QScriptEngine *engine)
{
    if (context->argumentCount() != 0) { printf("Error! Invalid number of arguments passed to function Transform_RotationQuat in file %s, line %d!\nExpected 0, but got %d!\n", __FILE__, __LINE__, context->argumentCount()); return QScriptValue(); }
    Transform *This = TypeFromQScriptValue<Transform*>(context->thisObject());
    if (!This) { printf("Error! Invalid context->thisObject in function Transform_RotationQuat in file %s, line %d\n!", __FILE__, __LINE__); return QScriptValue(); }
    Quat ret = This->RotationQuat();
    return TypeToQScriptValue(engine, ret);
}

static QScriptValue Transform_Mul_Transform(QScriptContext *context, QScriptEngine *engine)
{
    if (context->argumentCount() != 1) { printf("Error! Invalid number of arguments passed to function Transform_Mul_Transform in file %s, line %d!\nExpected 1, but got %d!\n", __FILE__, __LINE__, context->argumentCount()); return QScriptValue(); }
    Transform *This = TypeFromQScriptValue<Transform*>(context->thisObject());
    if (!This) { printf("Error! Invalid context->thisObject in function Transform_Mul_Transform in file %s, line %d\n!", __FILE__, __LINE__); return QScriptValue(); }
    Transform rhs = TypeFromQScriptValue<Transform>(context->argument(0));
    Transform ret = This->Mul(rhs);
    return TypeToQScriptValue(engine, ret);
}

static QScriptValue Transform_toString(QScriptContext *context, QScriptEngine *engine)
{
    if (context->argumentCount() != 0) { printf("Error! Invalid number of arguments passed to function Transform_toString in file %s, line %d!\nExpected 0, but got %d!\n", __FILE__, __LINE__, context->argumentCount()); return QScriptValue(); }
    Transform *This = TypeFromQScriptValue<Transform*>(context->thisObject());
    if (!This && context->argumentCount() > 0) This = TypeFromQScriptValue<Transform*>(context->argument(0)); // Qt oddity (bug?): Sometimes the built-in toString() function doesn't give us this from thisObject, but as the first argument.
    if (!This) { printf("Error! Invalid context->thisObject in function Transform_toString in file %s, line %d\n!", __FILE__, __LINE__); return QScriptValue(); }
    QString ret = This->toString();
    return TypeToQScriptValue(engine, ret);
}

static QScriptValue Transform_pos_get(QScriptContext *context, QScriptEngine *engine)
{
    if (context->argumentCount() != 0) { printf("Error! Invalid number of arguments passed to function Transform_pos_get in file %s, line %d!\nExpected 0, but got %d!\n", __FILE__, __LINE__, context->argumentCount()); return QScriptValue(); }
    Transform *This = TypeFromQScriptValue<Transform*>(context->thisObject());
    if (!This) { printf("Error! Invalid context->thisObject in file %s, line %d\n!", __FILE__, __LINE__); return QScriptValue(); }
    return qScriptValueFromValue(context->engine(), This->pos);
}

static QScriptValue Transform_pos_set(QScriptContext *context, QScriptEngine *engine)
{
    if (context->argumentCount() != 1) { printf("Error! Invalid number of arguments passed to function Transform_pos_set in file %s, line %d!\nExpected 1, but got %d!\n", __FILE__, __LINE__, context->argumentCount()); return QScriptValue(); }
    Transform *This = TypeFromQScriptValue<Transform*>(context->thisObject());
    if (!This) { printf("Error! Invalid context->thisObject in file %s, line %d\n!", __FILE__, __LINE__); return QScriptValue(); }
    float3 pos = qscriptvalue_cast<float3>(context->argument(0));
    This->pos = pos;
    return QScriptValue();
}

static QScriptValue Transform_rot_get(QScriptContext *context, QScriptEngine *engine)
{
    if (context->argumentCount() != 0) { printf("Error! Invalid number of arguments passed to function Transform_rot_get in file %s, line %d!\nExpected 0, but got %d!\n", __FILE__, __LINE__, context->argumentCount()); return QScriptValue(); }
//    Transform *This = TypeFromQScriptValue<Transform*>(context->thisObject());
//    if (!This) { printf("Error! Invalid context->thisObject in file %s, line %d\n!", __FILE__, __LINE__); return QScriptValue(); }
    Transform This = TypeFromQScriptValue<Transform>(context->thisObject());
    return qScriptValueFromValue(context->engine(), This.rot);
}

static QScriptValue Transform_rot_set(QScriptContext *context, QScriptEngine *engine)
{
    if (context->argumentCount() != 1) { printf("Error! Invalid number of arguments passed to function Transform_rot_set in file %s, line %d!\nExpected 1, but got %d!\n", __FILE__, __LINE__, context->argumentCount()); return QScriptValue(); }
    Transform *This = TypeFromQScriptValue<Transform*>(context->thisObject());
    if (!This) { printf("Error! Invalid context->thisObject in file %s, line %d\n!", __FILE__, __LINE__); return QScriptValue(); }
    float3 rot = qscriptvalue_cast<float3>(context->argument(0));
    This->rot = rot;
    return QScriptValue();
}

static QScriptValue Transform_scale_get(QScriptContext *context, QScriptEngine *engine)
{
    if (context->argumentCount() != 0) { printf("Error! Invalid number of arguments passed to function Transform_scale_get in file %s, line %d!\nExpected 0, but got %d!\n", __FILE__, __LINE__, context->argumentCount()); return QScriptValue(); }
    Transform *This = TypeFromQScriptValue<Transform*>(context->thisObject());
    if (!This) { printf("Error! Invalid context->thisObject in file %s, line %d\n!", __FILE__, __LINE__); return QScriptValue(); }
    return qScriptValueFromValue(context->engine(), This->scale);
}

static QScriptValue Transform_scale_set(QScriptContext *context, QScriptEngine *engine)
{
    if (context->argumentCount() != 1) { printf("Error! Invalid number of arguments passed to function Transform_scale_set in file %s, line %d!\nExpected 1, but got %d!\n", __FILE__, __LINE__, context->argumentCount()); return QScriptValue(); }
    Transform *This = TypeFromQScriptValue<Transform*>(context->thisObject());
    if (!This) { printf("Error! Invalid context->thisObject in file %s, line %d\n!", __FILE__, __LINE__); return QScriptValue(); }
    float3 scale = qscriptvalue_cast<float3>(context->argument(0));
    This->scale = scale;
    return QScriptValue();
}

static QScriptValue Transform_ctor(QScriptContext *context, QScriptEngine *engine)
{
    if (context->argumentCount() == 0)
        return Transform_Transform(context, engine);
    if (context->argumentCount() == 3 && QSVIsOfType<Vector3df>(context->argument(0)) && QSVIsOfType<Vector3df>(context->argument(1)) && QSVIsOfType<Vector3df>(context->argument(2)))
        return Transform_Transform_Vector3df_Vector3df_Vector3df(context, engine);
    if (context->argumentCount() == 1 && QSVIsOfType<float3x3>(context->argument(0)))
        return Transform_Transform_float3x3(context, engine);
    if (context->argumentCount() == 1 && QSVIsOfType<float3x4>(context->argument(0)))
        return Transform_Transform_float3x4(context, engine);
    if (context->argumentCount() == 1 && QSVIsOfType<float4x4>(context->argument(0)))
        return Transform_Transform_float4x4(context, engine);
    printf("Transform_ctor failed to choose the right function to call! Did you use 'var x = Transform();' instead of 'var x = new Transform();'?\n"); return QScriptValue();
}

static QScriptValue Transform_SetRotation_selector(QScriptContext *context, QScriptEngine *engine)
{
    if (context->argumentCount() == 1 && QSVIsOfType<float3x3>(context->argument(0)))
        return Transform_SetRotation_float3x3(context, engine);
    if (context->argumentCount() == 1 && QSVIsOfType<Quat>(context->argument(0)))
        return Transform_SetRotation_Quat(context, engine);
    printf("Transform_SetRotation_selector failed to choose the right function to call in file %s, line %d!\n", __FILE__, __LINE__); return QScriptValue();
}

class Transform_scriptclass : public QScriptClass
{
public:
    QScriptValue objectPrototype;
    Transform_scriptclass(QScriptEngine *engine):QScriptClass(engine){}
    QScriptValue property(const QScriptValue &object, const QScriptString &name, uint id)
    {
        Transform *This = TypeFromQScriptValue<Transform*>(object);
        if (!This) { printf("Error! Cannot convert QScriptValue to type Transform in file %s, line %d!\nTry using Transform.get%s() and Transform.set%s() to query the member variable '%s'!\n", __FILE__, __LINE__, Capitalize((QString)name).c_str(), Capitalize((QString)name).c_str(), ((QString)name).toStdString().c_str()); return QScriptValue(); }
        QString name_ = (QString)name;
        if (name_ == "pos_") return TypeToQScriptValue(engine(), This->pos);
        if (name_ == "pos_ptr") return TypeToQScriptValue(engine(), &This->pos);
        if (name_ == "rot_") return TypeToQScriptValue(engine(), This->rot);
        if (name_ == "rot_ptr") return TypeToQScriptValue(engine(), &This->rot);
        if (name_ == "scale_") return TypeToQScriptValue(engine(), This->scale);
        if (name_ == "scale_ptr") return TypeToQScriptValue(engine(), &This->scale);
        return QScriptValue();
    }
    void setProperty(QScriptValue &object, const QScriptString &name, uint id, const QScriptValue &value)
    {
        Transform *This = TypeFromQScriptValue<Transform*>(object);
        if (!This) { printf("Error! Cannot convert QScriptValue to type Transform in file %s, line %d!\nTry using Transform.get%s() and Transform.set%s() to query the member variable '%s'!\n", __FILE__, __LINE__, Capitalize((QString)name).c_str(), Capitalize((QString)name).c_str(), ((QString)name).toStdString().c_str()); return; }
        QString name_ = (QString)name;
        if (name_ == "pos_") This->pos = TypeFromQScriptValue<float3>(value);
        if (name_ == "pos_ptr") This->pos = *TypeFromQScriptValue<float3*>(value);
        if (name_ == "rot_") This->rot = TypeFromQScriptValue<float3>(value);
        if (name_ == "rot_ptr") This->rot = *TypeFromQScriptValue<float3*>(value);
        if (name_ == "scale_") This->scale = TypeFromQScriptValue<float3>(value);
        if (name_ == "scale_ptr") This->scale = *TypeFromQScriptValue<float3*>(value);
    }
    QueryFlags queryProperty(const QScriptValue &object, const QScriptString &name, QueryFlags flags, uint *id)
    {
        QString name_ = (QString)name;
        if (name_ == "pos_" || name_ == "pos_ptr") return flags;
        if (name_ == "rot_" || name_ == "rot_ptr") return flags;
        if (name_ == "scale_" || name_ == "scale_ptr") return flags;
        return 0;
    }
    QScriptValue prototype() const { return objectPrototype; }
};
QScriptValue register_Transform_prototype(QScriptEngine *engine)
{
    engine->setDefaultPrototype(qMetaTypeId<Transform*>(), QScriptValue());
    QScriptValue proto = engine->newVariant(qVariantFromValue((Transform*)0));
//    proto.setProperty("SetPos", engine->newFunction(Transform_SetPos_float_float_float, 3));
//    proto.setProperty("SetRot", engine->newFunction(Transform_SetRot_float_float_float, 3));
//    proto.setProperty("SetScale", engine->newFunction(Transform_SetScale_float_float_float, 3));
    proto.setProperty("ToFloat3x4", engine->newFunction(Transform_ToFloat3x4, 0));
    proto.setProperty("ToFloat4x4", engine->newFunction(Transform_ToFloat4x4, 0));
    proto.setProperty("FromFloat3x4", engine->newFunction(Transform_FromFloat3x4_float3x4, 1));
    proto.setProperty("FromFloat4x4", engine->newFunction(Transform_FromFloat4x4_float4x4, 1));
//    proto.setProperty("SetRotation", engine->newFunction(Transform_SetRotation_selector, 1));
    proto.setProperty("Rotation3x3", engine->newFunction(Transform_Rotation3x3, 0));
    proto.setProperty("RotationQuat", engine->newFunction(Transform_RotationQuat, 0));
    proto.setProperty("Mul", engine->newFunction(Transform_Mul_Transform, 1));
    proto.setProperty("toString", engine->newFunction(Transform_toString, 0));
//    proto.setProperty("pos", engine->newFunction(Transform_pos_get, 1));
//    proto.setProperty("setPos", engine->newFunction(Transform_pos_set, 1));
//    proto.setProperty("rot", engine->newFunction(Transform_rot_get, 1));
//    proto.setProperty("setRot", engine->newFunction(Transform_rot_set, 1));
//    proto.setProperty("rot_a", engine->newFunction(Transform_rot_get), QScriptValue::PropertyGetter);
//    proto.setProperty("rot_a", engine->newFunction(Transform_rot_set), QScriptValue::PropertySetter);
//    proto.setProperty("scale", engine->newFunction(Transform_scale_get, 1));
//    proto.setProperty("setScale", engine->newFunction(Transform_scale_set, 1));
    Transform_scriptclass *sc = new Transform_scriptclass(engine);
    engine->setProperty("Transform_scriptclass", QVariant::fromValue<QScriptClass*>(sc));
    proto.setScriptClass(sc);
    sc->objectPrototype = proto;
//    engine->setDefaultPrototype(qMetaTypeId<Transform>(), proto);
//    engine->setDefaultPrototype(qMetaTypeId<Transform*>(), proto);
//    qScriptRegisterMetaType(engine, TypeToQScriptValue<Transform>, fromScriptValueTransform);
    QScriptValue ctor = engine->newFunction(Transform_ctor, proto, 3);
    engine->globalObject().setProperty("Transform", ctor);
    return ctor;
}
