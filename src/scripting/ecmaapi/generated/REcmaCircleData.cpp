// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is copyable.
        
        #include "REcmaCircleData.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaEntityData.h"
                
                  #include "REcmaCircle.h"
                 void REcmaCircleData::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RCircleData*) 0)));
        protoCreated = true;
    }

    
        // primary base class REntityData:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<REntityData*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        REcmaCircle::initEcma(engine, proto);
          
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    
    // copy:
    REcmaHelper::registerFunction(&engine, proto, copy, "copy");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class REntityData
        REcmaHelper::registerFunction(&engine, proto, getREntityData, "getREntityData");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, getType, "getType");
            
            REcmaHelper::registerFunction(&engine, proto, getCircle, "getCircle");
            
            REcmaHelper::registerFunction(&engine, proto, getCenter, "getCenter");
            
            REcmaHelper::registerFunction(&engine, proto, getRadius, "getRadius");
            
            REcmaHelper::registerFunction(&engine, proto, getReferencePoints, "getReferencePoints");
            
            REcmaHelper::registerFunction(&engine, proto, moveReferencePoint, "moveReferencePoint");
            
            REcmaHelper::registerFunction(&engine, proto, castToShape, "castToShape");
            
            REcmaHelper::registerFunction(&engine, proto, getShapes, "getShapes");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RCircleData*>(), *proto);

        
                engine.setDefaultPrototype(qMetaTypeId<
                RCircleData
                > (), *proto);
            
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RCircleData",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaCircleData::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RCircleData(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // copyable class:
            RCircleData
                    cppResult;
                
            result = engine->newVariant(
            context->thisObject(), qVariantFromValue(cppResult));
        
    } else 

    if( context->argumentCount() ==
        1
                && (
                
                        context->argument(
                        0
                        ).isVariant()
                        ||
                    
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: RCircle */
            
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RCircle*
                    ap0 =
                    qscriptvalue_cast<
                    RCircle*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RCircleData: Argument 0 is not of type RCircle.",
                               context);                    
                    }
                    RCircle 
                    a0 = 
                    *ap0;
                
    // end of arguments

    // call C++ constructor:
    
            // copyable class:
            RCircleData
                    cppResult(
                    a0
                    );
                
            result = engine->newVariant(
            context->thisObject(), qVariantFromValue(cppResult));
        
    } else 

    if( context->argumentCount() ==
        2
                && (
                
                        context->argument(
                        0
                        ).isVariant()
                        ||
                    
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: RVector */
            
                && (
                
                        context->argument(
                        1
                        ).isNumber()
                ) /* type: double */
            
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RVector*
                    ap0 =
                    qscriptvalue_cast<
                    RVector*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RCircleData: Argument 0 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a0 = 
                    *ap0;
                
                    // argument isStandardType
                    double
                    a1 =
                    (double)
                    
                    context->argument( 1 ).
                    toNumber();
                
    // end of arguments

    // call C++ constructor:
    
            // copyable class:
            RCircleData
                    cppResult(
                    a0
        ,
    a1
                    );
                
            result = engine->newVariant(
            context->thisObject(), qVariantFromValue(cppResult));
        
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RCircleData(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaCircleData::getREntityData(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                REntityData* cppResult =
                    qscriptvalue_cast<RCircleData*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaCircleData::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RCircleData"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaCircleData::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("REntityData");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaCircleData::getType
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaCircleData::getType", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaCircleData::getType";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RCircleData* self = 
                        getSelf("getType", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RS::EntityType'
    RS::EntityType cppResult =
        
               self->getType();
        // return type: RS::EntityType
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RCircleData.getType().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaCircleData::getType", context, engine);
            return result;
        }
         QScriptValue
        REcmaCircleData::getCircle
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaCircleData::getCircle", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaCircleData::getCircle";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RCircleData* self = 
                        getSelf("getCircle", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RCircle'
    RCircle cppResult =
        
               self->getCircle();
        // return type: RCircle
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RCircleData.getCircle().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaCircleData::getCircle", context, engine);
            return result;
        }
         QScriptValue
        REcmaCircleData::getCenter
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaCircleData::getCenter", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaCircleData::getCenter";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RCircleData* self = 
                        getSelf("getCenter", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RVector'
    RVector cppResult =
        
               self->getCenter();
        // return type: RVector
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RCircleData.getCenter().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaCircleData::getCenter", context, engine);
            return result;
        }
         QScriptValue
        REcmaCircleData::getRadius
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaCircleData::getRadius", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaCircleData::getRadius";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RCircleData* self = 
                        getSelf("getRadius", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'double'
    double cppResult =
        
               self->getRadius();
        // return type: double
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RCircleData.getRadius().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaCircleData::getRadius", context, engine);
            return result;
        }
         QScriptValue
        REcmaCircleData::getReferencePoints
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaCircleData::getReferencePoints", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaCircleData::getReferencePoints";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RCircleData* self = 
                        getSelf("getReferencePoints", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QList < RRefPoint >'
    QList < RRefPoint > cppResult =
        
               self->getReferencePoints();
        // return type: QList < RRefPoint >
                // List of ...:
                result = REcmaHelper::listToScriptValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: RS::ProjectionRenderingHint */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    RS::ProjectionRenderingHint
                    a0 =
                    (RS::ProjectionRenderingHint)
                    (int)
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'QList < RRefPoint >'
    QList < RRefPoint > cppResult =
        
               self->getReferencePoints(a0);
        // return type: QList < RRefPoint >
                // List of ...:
                result = REcmaHelper::listToScriptValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RCircleData.getReferencePoints().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaCircleData::getReferencePoints", context, engine);
            return result;
        }
         QScriptValue
        REcmaCircleData::moveReferencePoint
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaCircleData::moveReferencePoint", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaCircleData::moveReferencePoint";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RCircleData* self = 
                        getSelf("moveReferencePoint", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RVector */
     && (
            context->argument(1).isVariant() || 
            context->argument(1).isQObject() || 
            context->argument(1).isNull()
        ) /* type: RVector */
    
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RVector*
                    ap0 =
                    qscriptvalue_cast<
                    RVector*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RCircleData: Argument 0 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a0 = 
                    *ap0;
                
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RVector*
                    ap1 =
                    qscriptvalue_cast<
                    RVector*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if (ap1 == NULL) {
                           return REcmaHelper::throwError("RCircleData: Argument 1 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a1 = 
                    *ap1;
                
    // end of arguments

    // call C++ function:
    // return type 'bool'
    bool cppResult =
        
               self->moveReferencePoint(a0
        ,
    a1);
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RCircleData.moveReferencePoint().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaCircleData::moveReferencePoint", context, engine);
            return result;
        }
         QScriptValue
        REcmaCircleData::castToShape
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaCircleData::castToShape", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaCircleData::castToShape";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RCircleData* self = 
                        getSelf("castToShape", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RShape *'
    RShape * cppResult =
        
               self->castToShape();
        // return type: RShape *
                // RShape:
                result = REcmaHelper::toScriptValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RCircleData.castToShape().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaCircleData::castToShape", context, engine);
            return result;
        }
         QScriptValue
        REcmaCircleData::getShapes
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaCircleData::getShapes", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaCircleData::getShapes";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RCircleData* self = 
                        getSelf("getShapes", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QList < QSharedPointer < RShape > >'
    QList < QSharedPointer < RShape > > cppResult =
        
               self->getShapes();
        // return type: QList < QSharedPointer < RShape > >
                // List of ...:
                result = REcmaHelper::listToScriptValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RBox */
    
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RBox*
                    ap0 =
                    qscriptvalue_cast<
                    RBox*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RCircleData: Argument 0 is not of type RBox.",
                               context);                    
                    }
                    RBox 
                    a0 = 
                    *ap0;
                
    // end of arguments

    // call C++ function:
    // return type 'QList < QSharedPointer < RShape > >'
    QList < QSharedPointer < RShape > > cppResult =
        
               self->getShapes(a0);
        // return type: QList < QSharedPointer < RShape > >
                // List of ...:
                result = REcmaHelper::listToScriptValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RBox */
     && (
            context->argument(1).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RBox*
                    ap0 =
                    qscriptvalue_cast<
                    RBox*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RCircleData: Argument 0 is not of type RBox.",
                               context);                    
                    }
                    RBox 
                    a0 = 
                    *ap0;
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'QList < QSharedPointer < RShape > >'
    QList < QSharedPointer < RShape > > cppResult =
        
               self->getShapes(a0
        ,
    a1);
        // return type: QList < QSharedPointer < RShape > >
                // List of ...:
                result = REcmaHelper::listToScriptValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    3 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RBox */
     && (
            context->argument(1).isBool()
        ) /* type: bool */
     && (
            context->argument(2).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RBox*
                    ap0 =
                    qscriptvalue_cast<
                    RBox*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RCircleData: Argument 0 is not of type RBox.",
                               context);                    
                    }
                    RBox 
                    a0 = 
                    *ap0;
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
                    // argument isStandardType
                    bool
                    a2 =
                    (bool)
                    
                    context->argument( 2 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'QList < QSharedPointer < RShape > >'
    QList < QSharedPointer < RShape > > cppResult =
        
               self->getShapes(a0
        ,
    a1
        ,
    a2);
        // return type: QList < QSharedPointer < RShape > >
                // List of ...:
                result = REcmaHelper::listToScriptValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RCircleData.getShapes().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaCircleData::getShapes", context, engine);
            return result;
        }
         QScriptValue REcmaCircleData::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RCircleData* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RCircleData(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaCircleData::copy
    (QScriptContext *context, QScriptEngine *engine)
    
    {
        RCircleData cp = qscriptvalue_cast<RCircleData>(context->thisObject());
        return qScriptValueFromValue(engine, cp);
    }
     QScriptValue REcmaCircleData::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RCircleData* self = getSelf("RCircleData", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RCircleData* REcmaCircleData::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RCircleData* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RCircleData >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RCircleData.%1(): "
                        "This object is not a RCircleData").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RCircleData* REcmaCircleData::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RCircleData* selfBase = getSelf(fName, context);
                RCircleData* self = dynamic_cast<RCircleData*>(selfBase);
                //return REcmaHelper::scriptValueTo<RCircleData >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RCircleData.%1(): "
                    "This object is not a RCircleData").arg(fName),
                    context);
            }

            return self;
            


        }
        