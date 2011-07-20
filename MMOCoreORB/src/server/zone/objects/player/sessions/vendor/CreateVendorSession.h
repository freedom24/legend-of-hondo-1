/*
 *	server/zone/objects/player/sessions/vendor/CreateVendorSession.h generated by engine3 IDL compiler 0.60
 */

#ifndef CREATEVENDORSESSION_H_
#define CREATEVENDORSESSION_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {
namespace objects {
namespace tangible {

class TangibleObject;

} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible;

#include "engine/core/ManagedObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/scene/SessionFacadeType.h"

#include "server/zone/objects/player/sui/listbox/SuiListBox.h"

#include "server/zone/objects/player/sui/inputbox/SuiInputBox.h"

#include "server/zone/managers/vendor/VendorSelectionNode.h"

#include "engine/log/Logger.h"

#include "engine/core/ManagedReference.h"

#include "engine/util/Facade.h"

#include "system/lang/ref/Reference.h"

namespace server {
namespace zone {
namespace objects {
namespace player {

class CreateVendorSession : public Facade {
public:
	CreateVendorSession(CreatureObject* parent);

	void initalizeWindow(CreatureObject* pl);

	void handleMenuSelect(byte menuID);

	void createVendor(String& name);

	int initializeSession();

	int cancelSession();

	int clearSession();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	CreateVendorSession(DummyConstructorParameter* param);

	virtual ~CreateVendorSession();

	friend class CreateVendorSessionHelper;
};

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {
namespace objects {
namespace player {

class CreateVendorSessionImplementation : public FacadeImplementation {
protected:
	ManagedWeakReference<CreatureObject* > player;

	ManagedWeakReference<SceneObject* > vendor;

private:
	Reference<VendorSelectionNode* > currentNode;

protected:
	ManagedReference<SuiListBox* > suiSelectVendor;

	ManagedReference<SuiInputBox* > suiNameVendor;

private:
	String templatePath;

public:
	CreateVendorSessionImplementation(CreatureObject* parent);

	CreateVendorSessionImplementation(DummyConstructorParameter* param);

	void initalizeWindow(CreatureObject* pl);

	void handleMenuSelect(byte menuID);

	void createVendor(String& name);

	int initializeSession();

	int cancelSession();

	int clearSession();

	WeakReference<CreateVendorSession*> _this;

	operator const CreateVendorSession*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~CreateVendorSessionImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();
	bool readObjectMember(ObjectInputStream* stream, const String& name);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class CreateVendorSession;
};

class CreateVendorSessionAdapter : public FacadeAdapter {
public:
	CreateVendorSessionAdapter(CreateVendorSessionImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initalizeWindow(CreatureObject* pl);

	void handleMenuSelect(byte menuID);

	void createVendor(String& name);

	int initializeSession();

	int cancelSession();

	int clearSession();

protected:
	String _param0_createVendor__String_;
};

class CreateVendorSessionHelper : public DistributedObjectClassHelper, public Singleton<CreateVendorSessionHelper> {
	static CreateVendorSessionHelper* staticInitializer;

public:
	CreateVendorSessionHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<CreateVendorSessionHelper>;
};

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

#endif /*CREATEVENDORSESSION_H_*/
