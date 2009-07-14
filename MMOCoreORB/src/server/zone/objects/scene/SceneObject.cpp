/*
 *	server/zone/objects/scene/SceneObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "SceneObject.h"

#include "server/zone/ZoneProcessServerImplementation.h"

/*
 *	SceneObjectStub
 */

SceneObject::SceneObject(LuaObject* templateData, SceneObject* parent) : ManagedObject(DummyConstructorParameter::instance()) {
	_impl = new SceneObjectImplementation(templateData, parent);
	_impl->_setStub(this);
}

SceneObject::SceneObject(DummyConstructorParameter* param) : ManagedObject(param) {
}

SceneObject::~SceneObject() {
}

void SceneObject::_addSerializableVariables() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->addSerializableVariables();
}

void SceneObject::serialize(String& data) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addAsciiParameter(data);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->serialize(data);
}

void SceneObject::deSerialize(const String& data) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addAsciiParameter(data);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->deSerialize(data);
}

void SceneObject::redeploy() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->redeploy();
}

void SceneObject::scheduleUndeploy() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->scheduleUndeploy();
}

void SceneObject::undeploy() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->undeploy();
}

void SceneObject::removeUndeploymentEvent() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->removeUndeploymentEvent();
}

bool SceneObject::isPlayer() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		return method.executeWithBooleanReturn();
	} else
		return ((SceneObjectImplementation*) _impl)->isPlayer();
}

bool SceneObject::addObject(String& slot, SceneObject* object) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addAsciiParameter(slot);
		method.addObjectParameter(object);

		return method.executeWithBooleanReturn();
	} else
		return ((SceneObjectImplementation*) _impl)->addObject(slot, object);
}

bool SceneObject::removeObject(String& slot) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addAsciiParameter(slot);

		return method.executeWithBooleanReturn();
	} else
		return ((SceneObjectImplementation*) _impl)->removeObject(slot);
}

void SceneObject::_create(ZoneClientSession* client) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addObjectParameter(client);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->create(client);
}

void SceneObject::_destroy(ZoneClientSession* client) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addObjectParameter(client);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->destroy(client);
}

void SceneObject::sendTo(SceneObject* player, bool doClose) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addObjectParameter(player);
		method.addBooleanParameter(doClose);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->sendTo(player, doClose);
}

unsigned long long SceneObject::getObjectID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((SceneObjectImplementation*) _impl)->getObjectID();
}

float SceneObject::getPositionX() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);

		return method.executeWithFloatReturn();
	} else
		return ((SceneObjectImplementation*) _impl)->getPositionX();
}

float SceneObject::getPositionZ() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);

		return method.executeWithFloatReturn();
	} else
		return ((SceneObjectImplementation*) _impl)->getPositionZ();
}

float SceneObject::getPositionY() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		return method.executeWithFloatReturn();
	} else
		return ((SceneObjectImplementation*) _impl)->getPositionY();
}

float SceneObject::getDirectionX() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);

		return method.executeWithFloatReturn();
	} else
		return ((SceneObjectImplementation*) _impl)->getDirectionX();
}

float SceneObject::getDirectionZ() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);

		return method.executeWithFloatReturn();
	} else
		return ((SceneObjectImplementation*) _impl)->getDirectionZ();
}

float SceneObject::getDirectionY() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);

		return method.executeWithFloatReturn();
	} else
		return ((SceneObjectImplementation*) _impl)->getDirectionY();
}

float SceneObject::getDirectionW() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);

		return method.executeWithFloatReturn();
	} else
		return ((SceneObjectImplementation*) _impl)->getDirectionW();
}

unsigned int SceneObject::getObjectCRC() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((SceneObjectImplementation*) _impl)->getObjectCRC();
}

StringId* SceneObject::getObjectName() {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((SceneObjectImplementation*) _impl)->getObjectName();
}

unsigned int SceneObject::getGameObjectType() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((SceneObjectImplementation*) _impl)->getGameObjectType();
}

void SceneObject::setPosition(float x, float z, float y) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);
		method.addFloatParameter(x);
		method.addFloatParameter(z);
		method.addFloatParameter(y);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->setPosition(x, z, y);
}

void SceneObject::setGameObjectType(unsigned int type) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);
		method.addUnsignedIntParameter(type);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->setGameObjectType(type);
}

void SceneObject::setObjectCRC(unsigned int objCRC) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);
		method.addUnsignedIntParameter(objCRC);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->setObjectCRC(objCRC);
}

void SceneObject::setParent(SceneObject* parent) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);
		method.addObjectParameter(parent);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->setParent(parent);
}

/*
 *	SceneObjectImplementation
 */

SceneObjectImplementation::~SceneObjectImplementation() {
}

void SceneObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (SceneObject*) stub;
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* SceneObjectImplementation::_getStub() {
	return _this;
}

void SceneObjectImplementation::serialize(String& data) {
	// server/zone/objects/scene/SceneObject.idl(285):  Serializable.serialize(data);
	Serializable::serialize(data);
}

void SceneObjectImplementation::deSerialize(const String& data) {
	// server/zone/objects/scene/SceneObject.idl(289):  Serializable.deSerialize(data);
	Serializable::deSerialize(data);
}

void SceneObjectImplementation::redeploy() {
}

void SceneObjectImplementation::scheduleUndeploy() {
}

void SceneObjectImplementation::undeploy() {
}

void SceneObjectImplementation::removeUndeploymentEvent() {
}

bool SceneObjectImplementation::isPlayer() {
	// server/zone/objects/scene/SceneObject.idl(305):  return true;
	return true;
}

bool SceneObjectImplementation::addObject(String& slot, SceneObject* object) {
	// server/zone/objects/scene/SceneObject.idl(317):  return true;
	return true;
}

bool SceneObjectImplementation::removeObject(String& slot) {
	// server/zone/objects/scene/SceneObject.idl(321):  return true;
	return true;
}

void SceneObjectImplementation::sendTo(SceneObject* player, bool doClose) {
}

unsigned long long SceneObjectImplementation::getObjectID() {
	// server/zone/objects/scene/SceneObject.idl(333):  return QuadTreeEntry.objectID;
	return QuadTreeEntry::objectID;
}

float SceneObjectImplementation::getPositionX() {
	// server/zone/objects/scene/SceneObject.idl(337):  return QuadTreeEntry.getPositionX();
	return QuadTreeEntry::getPositionX();
}

float SceneObjectImplementation::getPositionZ() {
	// server/zone/objects/scene/SceneObject.idl(341):  return QuadTreeEntry.getPositionZ();
	return QuadTreeEntry::getPositionZ();
}

float SceneObjectImplementation::getPositionY() {
	// server/zone/objects/scene/SceneObject.idl(345):  return QuadTreeEntry.getPositionY();
	return QuadTreeEntry::getPositionY();
}

float SceneObjectImplementation::getDirectionX() {
	// server/zone/objects/scene/SceneObject.idl(349):  return direction.getX();
	return direction->getX();
}

float SceneObjectImplementation::getDirectionZ() {
	// server/zone/objects/scene/SceneObject.idl(353):  return direction.getZ();
	return direction->getZ();
}

float SceneObjectImplementation::getDirectionY() {
	// server/zone/objects/scene/SceneObject.idl(357):  return direction.getY();
	return direction->getY();
}

float SceneObjectImplementation::getDirectionW() {
	// server/zone/objects/scene/SceneObject.idl(361):  return direction.getW();
	return direction->getW();
}

unsigned int SceneObjectImplementation::getObjectCRC() {
	// server/zone/objects/scene/SceneObject.idl(365):  return this.objectCRC;
	return this->objectCRC;
}

StringId* SceneObjectImplementation::getObjectName() {
	// server/zone/objects/scene/SceneObject.idl(369):  return this.objectName;
	return this->objectName;
}

unsigned int SceneObjectImplementation::getGameObjectType() {
	// server/zone/objects/scene/SceneObject.idl(373):  return this.gameObjectType;
	return this->gameObjectType;
}

void SceneObjectImplementation::setPosition(float x, float z, float y) {
	// server/zone/objects/scene/SceneObject.idl(377):  QuadTreeEntry.setPosition(x, z, y);
	QuadTreeEntry::setPosition(x, z, y);
}

void SceneObjectImplementation::setGameObjectType(unsigned int type) {
	// server/zone/objects/scene/SceneObject.idl(381):  this.gameObjectType = type;
	this->gameObjectType = type;
}

void SceneObjectImplementation::setObjectCRC(unsigned int objCRC) {
	// server/zone/objects/scene/SceneObject.idl(385):  this.objectCRC = objCRC;
	this->objectCRC = objCRC;
}

void SceneObjectImplementation::setParent(SceneObject* parent) {
	// server/zone/objects/scene/SceneObject.idl(389):  this.parent = parent;
	this->parent = parent;
}

/*
 *	SceneObjectAdapter
 */

SceneObjectAdapter::SceneObjectAdapter(SceneObjectImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* SceneObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		addSerializableVariables();
		break;
	case 7:
		serialize(inv->getAsciiParameter(_param0_serialize__String_));
		break;
	case 8:
		deSerialize(inv->getAsciiParameter(_param0_deSerialize__String_));
		break;
	case 9:
		redeploy();
		break;
	case 10:
		scheduleUndeploy();
		break;
	case 11:
		undeploy();
		break;
	case 12:
		removeUndeploymentEvent();
		break;
	case 13:
		resp->insertBoolean(isPlayer());
		break;
	case 14:
		resp->insertBoolean(addObject(inv->getAsciiParameter(_param0_addObject__String_SceneObject_), (SceneObject*) inv->getObjectParameter()));
		break;
	case 15:
		resp->insertBoolean(removeObject(inv->getAsciiParameter(_param0_removeObject__String_)));
		break;
	case 16:
		create((ZoneClientSession*) inv->getObjectParameter());
		break;
	case 17:
		destroy((ZoneClientSession*) inv->getObjectParameter());
		break;
	case 18:
		sendTo((SceneObject*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 19:
		resp->insertLong(getObjectID());
		break;
	case 20:
		resp->insertFloat(getPositionX());
		break;
	case 21:
		resp->insertFloat(getPositionZ());
		break;
	case 22:
		resp->insertFloat(getPositionY());
		break;
	case 23:
		resp->insertFloat(getDirectionX());
		break;
	case 24:
		resp->insertFloat(getDirectionZ());
		break;
	case 25:
		resp->insertFloat(getDirectionY());
		break;
	case 26:
		resp->insertFloat(getDirectionW());
		break;
	case 27:
		resp->insertInt(getObjectCRC());
		break;
	case 28:
		resp->insertInt(getGameObjectType());
		break;
	case 29:
		setPosition(inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter());
		break;
	case 30:
		setGameObjectType(inv->getUnsignedIntParameter());
		break;
	case 31:
		setObjectCRC(inv->getUnsignedIntParameter());
		break;
	case 32:
		setParent((SceneObject*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void SceneObjectAdapter::addSerializableVariables() {
	return ((SceneObjectImplementation*) impl)->addSerializableVariables();
}

void SceneObjectAdapter::serialize(String& data) {
	return ((SceneObjectImplementation*) impl)->serialize(data);
}

void SceneObjectAdapter::deSerialize(const String& data) {
	return ((SceneObjectImplementation*) impl)->deSerialize(data);
}

void SceneObjectAdapter::redeploy() {
	return ((SceneObjectImplementation*) impl)->redeploy();
}

void SceneObjectAdapter::scheduleUndeploy() {
	return ((SceneObjectImplementation*) impl)->scheduleUndeploy();
}

void SceneObjectAdapter::undeploy() {
	return ((SceneObjectImplementation*) impl)->undeploy();
}

void SceneObjectAdapter::removeUndeploymentEvent() {
	return ((SceneObjectImplementation*) impl)->removeUndeploymentEvent();
}

bool SceneObjectAdapter::isPlayer() {
	return ((SceneObjectImplementation*) impl)->isPlayer();
}

bool SceneObjectAdapter::addObject(String& slot, SceneObject* object) {
	return ((SceneObjectImplementation*) impl)->addObject(slot, object);
}

bool SceneObjectAdapter::removeObject(String& slot) {
	return ((SceneObjectImplementation*) impl)->removeObject(slot);
}

void SceneObjectAdapter::create(ZoneClientSession* client) {
	return ((SceneObjectImplementation*) impl)->create(client);
}

void SceneObjectAdapter::destroy(ZoneClientSession* client) {
	return ((SceneObjectImplementation*) impl)->destroy(client);
}

void SceneObjectAdapter::sendTo(SceneObject* player, bool doClose) {
	return ((SceneObjectImplementation*) impl)->sendTo(player, doClose);
}

unsigned long long SceneObjectAdapter::getObjectID() {
	return ((SceneObjectImplementation*) impl)->getObjectID();
}

float SceneObjectAdapter::getPositionX() {
	return ((SceneObjectImplementation*) impl)->getPositionX();
}

float SceneObjectAdapter::getPositionZ() {
	return ((SceneObjectImplementation*) impl)->getPositionZ();
}

float SceneObjectAdapter::getPositionY() {
	return ((SceneObjectImplementation*) impl)->getPositionY();
}

float SceneObjectAdapter::getDirectionX() {
	return ((SceneObjectImplementation*) impl)->getDirectionX();
}

float SceneObjectAdapter::getDirectionZ() {
	return ((SceneObjectImplementation*) impl)->getDirectionZ();
}

float SceneObjectAdapter::getDirectionY() {
	return ((SceneObjectImplementation*) impl)->getDirectionY();
}

float SceneObjectAdapter::getDirectionW() {
	return ((SceneObjectImplementation*) impl)->getDirectionW();
}

unsigned int SceneObjectAdapter::getObjectCRC() {
	return ((SceneObjectImplementation*) impl)->getObjectCRC();
}

unsigned int SceneObjectAdapter::getGameObjectType() {
	return ((SceneObjectImplementation*) impl)->getGameObjectType();
}

void SceneObjectAdapter::setPosition(float x, float z, float y) {
	return ((SceneObjectImplementation*) impl)->setPosition(x, z, y);
}

void SceneObjectAdapter::setGameObjectType(unsigned int type) {
	return ((SceneObjectImplementation*) impl)->setGameObjectType(type);
}

void SceneObjectAdapter::setObjectCRC(unsigned int objCRC) {
	return ((SceneObjectImplementation*) impl)->setObjectCRC(objCRC);
}

void SceneObjectAdapter::setParent(SceneObject* parent) {
	return ((SceneObjectImplementation*) impl)->setParent(parent);
}

/*
 *	SceneObjectHelper
 */

SceneObjectHelper* SceneObjectHelper::staticInitializer = SceneObjectHelper::instance();

SceneObjectHelper::SceneObjectHelper() {
	className = "SceneObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void SceneObjectHelper::finalizeHelper() {
	SceneObjectHelper::finalize();
}

DistributedObject* SceneObjectHelper::instantiateObject() {
	return new SceneObject(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* SceneObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SceneObjectAdapter((SceneObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

