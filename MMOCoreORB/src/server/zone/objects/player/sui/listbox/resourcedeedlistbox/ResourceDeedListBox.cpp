/*
 *	server/zone/objects/player/sui/listbox/resourcedeedlistbox/ResourceDeedListBox.cpp generated by engine3 IDL compiler 0.60
 */

#include "ResourceDeedListBox.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	ResourceDeedListBoxStub
 */

enum {RPC_FINALIZE__ = 6,RPC_INITIALIZETRANSIENTMEMBERS__,RPC_ADDBOX__STRING_,RPC_GETBOXCOUNT__,RPC_GETBOX__INT_,RPC_REMOVEBOX__,RPC_GETCURRENTBOX__,RPC_GETPREVIOUSBOX__};

ResourceDeedListBox::ResourceDeedListBox(CreatureObject* player, unsigned int windowType, unsigned int listBoxType) : SuiListBox(DummyConstructorParameter::instance()) {
	ResourceDeedListBoxImplementation* _implementation = new ResourceDeedListBoxImplementation(player, windowType, listBoxType);
	_impl = _implementation;
	_impl->_setStub(this);
}

ResourceDeedListBox::ResourceDeedListBox(DummyConstructorParameter* param) : SuiListBox(param) {
}

ResourceDeedListBox::~ResourceDeedListBox() {
}


void ResourceDeedListBox::initializeTransientMembers() {
	ResourceDeedListBoxImplementation* _implementation = (ResourceDeedListBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void ResourceDeedListBox::addBox(const String& name) {
	ResourceDeedListBoxImplementation* _implementation = (ResourceDeedListBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDBOX__STRING_);
		method.addAsciiParameter(name);

		method.executeWithVoidReturn();
	} else
		_implementation->addBox(name);
}

int ResourceDeedListBox::getBoxCount() {
	ResourceDeedListBoxImplementation* _implementation = (ResourceDeedListBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETBOXCOUNT__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getBoxCount();
}

String ResourceDeedListBox::getBox(int index) {
	ResourceDeedListBoxImplementation* _implementation = (ResourceDeedListBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETBOX__INT_);
		method.addSignedIntParameter(index);

		method.executeWithAsciiReturn(_return_getBox);
		return _return_getBox;
	} else
		return _implementation->getBox(index);
}

void ResourceDeedListBox::removeBox() {
	ResourceDeedListBoxImplementation* _implementation = (ResourceDeedListBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_REMOVEBOX__);

		method.executeWithVoidReturn();
	} else
		_implementation->removeBox();
}

String ResourceDeedListBox::getCurrentBox() {
	ResourceDeedListBoxImplementation* _implementation = (ResourceDeedListBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETCURRENTBOX__);

		method.executeWithAsciiReturn(_return_getCurrentBox);
		return _return_getCurrentBox;
	} else
		return _implementation->getCurrentBox();
}

String ResourceDeedListBox::getPreviousBox() {
	ResourceDeedListBoxImplementation* _implementation = (ResourceDeedListBoxImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETPREVIOUSBOX__);

		method.executeWithAsciiReturn(_return_getPreviousBox);
		return _return_getPreviousBox;
	} else
		return _implementation->getPreviousBox();
}

DistributedObjectServant* ResourceDeedListBox::_getImplementation() {

	_updated = true;
	return _impl;
}

void ResourceDeedListBox::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ResourceDeedListBoxImplementation
 */

ResourceDeedListBoxImplementation::ResourceDeedListBoxImplementation(DummyConstructorParameter* param) : SuiListBoxImplementation(param) {
	_initializeImplementation();
}


ResourceDeedListBoxImplementation::~ResourceDeedListBoxImplementation() {
	ResourceDeedListBoxImplementation::finalize();
}


void ResourceDeedListBoxImplementation::_initializeImplementation() {
	_setClassHelper(ResourceDeedListBoxHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void ResourceDeedListBoxImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (ResourceDeedListBox*) stub;
	SuiListBoxImplementation::_setStub(stub);
}

DistributedObjectStub* ResourceDeedListBoxImplementation::_getStub() {
	return _this;
}

ResourceDeedListBoxImplementation::operator const ResourceDeedListBox*() {
	return _this;
}

void ResourceDeedListBoxImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ResourceDeedListBoxImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ResourceDeedListBoxImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ResourceDeedListBoxImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ResourceDeedListBoxImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ResourceDeedListBoxImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ResourceDeedListBoxImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void ResourceDeedListBoxImplementation::_serializationHelperMethod() {
	SuiListBoxImplementation::_serializationHelperMethod();

	_setClassName("ResourceDeedListBox");

}

void ResourceDeedListBoxImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(ResourceDeedListBoxImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ResourceDeedListBoxImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (SuiListBoxImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void ResourceDeedListBoxImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ResourceDeedListBoxImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ResourceDeedListBoxImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;

	return 0 + SuiListBoxImplementation::writeObjectMembers(stream);
}

ResourceDeedListBoxImplementation::ResourceDeedListBoxImplementation(CreatureObject* player, unsigned int windowType, unsigned int listBoxType) : SuiListBoxImplementation(player, windowType, SuiBox::LISTBOX) {
	_initializeImplementation();
}

void ResourceDeedListBoxImplementation::addBox(const String& name) {
	// server/zone/objects/player/sui/listbox/resourcedeedlistbox/ResourceDeedListBox.idl():  		boxes.add(name);
	(&boxes)->add(name);
}

int ResourceDeedListBoxImplementation::getBoxCount() {
	// server/zone/objects/player/sui/listbox/resourcedeedlistbox/ResourceDeedListBox.idl():  		return boxes.size();
	return (&boxes)->size();
}

String ResourceDeedListBoxImplementation::getBox(int index) {
	// server/zone/objects/player/sui/listbox/resourcedeedlistbox/ResourceDeedListBox.idl():  		return boxes.get(index);
	return (&boxes)->get(index);
}

String ResourceDeedListBoxImplementation::getCurrentBox() {
	// server/zone/objects/player/sui/listbox/resourcedeedlistbox/ResourceDeedListBox.idl():  		return boxes.get(boxes.size() - 1);
	return (&boxes)->get((&boxes)->size() - 1);
}

/*
 *	ResourceDeedListBoxAdapter
 */

ResourceDeedListBoxAdapter::ResourceDeedListBoxAdapter(ResourceDeedListBoxImplementation* obj) : SuiListBoxAdapter(obj) {
}

Packet* ResourceDeedListBoxAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_FINALIZE__:
		finalize();
		break;
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_ADDBOX__STRING_:
		addBox(inv->getAsciiParameter(_param0_addBox__String_));
		break;
	case RPC_GETBOXCOUNT__:
		resp->insertSignedInt(getBoxCount());
		break;
	case RPC_GETBOX__INT_:
		resp->insertAscii(getBox(inv->getSignedIntParameter()));
		break;
	case RPC_REMOVEBOX__:
		removeBox();
		break;
	case RPC_GETCURRENTBOX__:
		resp->insertAscii(getCurrentBox());
		break;
	case RPC_GETPREVIOUSBOX__:
		resp->insertAscii(getPreviousBox());
		break;
	default:
		return NULL;
	}

	return resp;
}

void ResourceDeedListBoxAdapter::finalize() {
	((ResourceDeedListBoxImplementation*) impl)->finalize();
}

void ResourceDeedListBoxAdapter::initializeTransientMembers() {
	((ResourceDeedListBoxImplementation*) impl)->initializeTransientMembers();
}

void ResourceDeedListBoxAdapter::addBox(const String& name) {
	((ResourceDeedListBoxImplementation*) impl)->addBox(name);
}

int ResourceDeedListBoxAdapter::getBoxCount() {
	return ((ResourceDeedListBoxImplementation*) impl)->getBoxCount();
}

String ResourceDeedListBoxAdapter::getBox(int index) {
	return ((ResourceDeedListBoxImplementation*) impl)->getBox(index);
}

void ResourceDeedListBoxAdapter::removeBox() {
	((ResourceDeedListBoxImplementation*) impl)->removeBox();
}

String ResourceDeedListBoxAdapter::getCurrentBox() {
	return ((ResourceDeedListBoxImplementation*) impl)->getCurrentBox();
}

String ResourceDeedListBoxAdapter::getPreviousBox() {
	return ((ResourceDeedListBoxImplementation*) impl)->getPreviousBox();
}

/*
 *	ResourceDeedListBoxHelper
 */

ResourceDeedListBoxHelper* ResourceDeedListBoxHelper::staticInitializer = ResourceDeedListBoxHelper::instance();

ResourceDeedListBoxHelper::ResourceDeedListBoxHelper() {
	className = "ResourceDeedListBox";

	Core::getObjectBroker()->registerClass(className, this);
}

void ResourceDeedListBoxHelper::finalizeHelper() {
	ResourceDeedListBoxHelper::finalize();
}

DistributedObject* ResourceDeedListBoxHelper::instantiateObject() {
	return new ResourceDeedListBox(DummyConstructorParameter::instance());
}

DistributedObjectServant* ResourceDeedListBoxHelper::instantiateServant() {
	return new ResourceDeedListBoxImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ResourceDeedListBoxHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ResourceDeedListBoxAdapter((ResourceDeedListBoxImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

