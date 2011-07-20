/*
 *	server/zone/objects/creature/trainer/TrainerCreature.h generated by engine3 IDL compiler 0.60
 */

#ifndef TRAINERCREATURE_H_
#define TRAINERCREATURE_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

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

#include "server/zone/objects/creature/professions/Profession.h"

#include "server/zone/objects/creature/professions/ProfessionReference.h"

#include "engine/core/ManagedObject.h"

#include "engine/lua/LuaObject.h"

#include "system/util/Vector.h"

#include "system/lang/Time.h"

#include "system/util/SortedVector.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace trainer {

class TrainerCreature : public CreatureObject {
public:
	TrainerCreature();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void activateRecovery();

	void sendInitialMessage(CreatureObject* player);

	void sendInitialChoices(CreatureObject* player);

	void sendConversationStartTo(SceneObject* obj);

	void sendSkillBoxes(CreatureObject* player, bool checkXp);

	void sendSkillBoxList(CreatureObject* player, bool checkLearned);

	void sendConfirmation(CreatureObject* player);

	void selectConversationOption(int option, SceneObject* obj);

	void setTrainerID(int id);

	void setProfession(Profession* prof);

	int getTrainerID();

	String getLocation();

	void setLocation(const String& loc);

	bool isTrainerCreature();

	bool isAttackableBy(CreatureObject* object);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	TrainerCreature(DummyConstructorParameter* param);

	virtual ~TrainerCreature();

	String _return_getLocation;

	friend class TrainerCreatureHelper;
};

} // namespace trainer
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::trainer;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace trainer {

class TrainerCreatureImplementation : public CreatureObjectImplementation {
protected:
	ProfessionReference profession;

	int trainerID;

	String location;

public:
	TrainerCreatureImplementation();

	TrainerCreatureImplementation(DummyConstructorParameter* param);

	void loadTemplateData(SharedObjectTemplate* templateData);

	void activateRecovery();

	void sendInitialMessage(CreatureObject* player);

	void sendInitialChoices(CreatureObject* player);

	void sendConversationStartTo(SceneObject* obj);

	void sendSkillBoxes(CreatureObject* player, bool checkXp);

	void sendSkillBoxList(CreatureObject* player, bool checkLearned);

	void sendConfirmation(CreatureObject* player);

	void selectConversationOption(int option, SceneObject* obj);

	void setTrainerID(int id);

	void setProfession(Profession* prof);

	int getTrainerID();

	String getLocation();

	void setLocation(const String& loc);

	bool isTrainerCreature();

	bool isAttackableBy(CreatureObject* object);

	WeakReference<TrainerCreature*> _this;

	operator const TrainerCreature*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~TrainerCreatureImplementation();

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

	friend class TrainerCreature;
};

class TrainerCreatureAdapter : public CreatureObjectAdapter {
public:
	TrainerCreatureAdapter(TrainerCreatureImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void activateRecovery();

	void sendInitialMessage(CreatureObject* player);

	void sendInitialChoices(CreatureObject* player);

	void sendConversationStartTo(SceneObject* obj);

	void sendSkillBoxes(CreatureObject* player, bool checkXp);

	void sendSkillBoxList(CreatureObject* player, bool checkLearned);

	void sendConfirmation(CreatureObject* player);

	void selectConversationOption(int option, SceneObject* obj);

	void setTrainerID(int id);

	int getTrainerID();

	String getLocation();

	void setLocation(const String& loc);

	bool isTrainerCreature();

	bool isAttackableBy(CreatureObject* object);

protected:
	String _param0_setLocation__String_;
};

class TrainerCreatureHelper : public DistributedObjectClassHelper, public Singleton<TrainerCreatureHelper> {
	static TrainerCreatureHelper* staticInitializer;

public:
	TrainerCreatureHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<TrainerCreatureHelper>;
};

} // namespace trainer
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::trainer;

#endif /*TRAINERCREATURE_H_*/
