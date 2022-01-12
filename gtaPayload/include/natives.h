#pragma once

// Generated Fri, 07 Jan 2022 17:11:00 GMT
// https://alloc8or.re/rdr3/nativedb/
#include "invoker.h"

namespace BUILTIN
{
	static void WAIT(int ms) { invoke<Void>(0x05FA4E60, ms); } // 0x4EDE34FBADD967A6 0x7715C03B b1207
	static int TIMERA() { return invoke<int>(0x05FA54F0); } // 0x83666F9FB8FEBD4B 0x45C8C188 b1207
	static int TIMERB() { return invoke<int>(0x05FA5510); } // 0xC9D9444186B5A374 0x330A9C0C b1207
	static void SETTIMERA(int value) { invoke<Void>(0x05FA5530, value); } // 0xC1B1E9A034A63A62 0x35785333 b1207
	static void SETTIMERB(int value) { invoke<Void>(0x05FA5550, value); } // 0x5AE11BC36633DE4E 0x27C1B7C6 b1207
	static float TIMESTEP() { return invoke<float>(0x05FA5570); } // 0x0000000050597EE2 0x50597EE2 b1207
	static float SIN(float value) { return invoke<float>(0x05FA55A0, value); } // 0x0BADBFA3B172435F 0xBF987F58 b1207
	static float COS(float value) { return invoke<float>(0x05FA55F0, value); } // 0xD0FFB162F40A139C 0x00238FE9 b1207
	static float SQRT(float value) { return invoke<float>(0x05FA5640, value); } // 0x71D93B57D07F9804 0x145C7701 b1207
	static float POW(float base, float exponent) { return invoke<float>(0x05FA5660, base, exponent); } // 0xE3621CC40F31FE2E 0x85D134F8 b1207
	static float _LOG10(float value) { return invoke<float>(0x05FA56A0, value); } // 0xE816E655DE37FE20 b1232
	static float VMAG(float x, float y, float z) { return invoke<float>(0x05FA5700, x, y, z); } // 0x652D2EEEF1D3E62C 0x1FCF1ECD b1207
	static float VMAG2(float x, float y, float z) { return invoke<float>(0x05FA5770, x, y, z); } // 0xA8CEACB4F35AE058 0xE796E629 b1207
	static float VDIST(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0x05FA57E0, x1, y1, z1, x2, y2, z2); } // 0x2A488C176D52CCA5 0x3C08ECB7 b1207
	static float VDIST2(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0x05FA5870, x1, y1, z1, x2, y2, z2); } // 0xB7A628320EFF8E47 0xC85DEF1F b1207
	static int SHIFT_LEFT(int value, int bitShift) { return invoke<int>(0x05FA58C0, value, bitShift); } // 0xEDD95A39E5544DE8 0x314CC6CD b1207
	static int SHIFT_RIGHT(int value, int bitShift) { return invoke<int>(0x05FA58F0, value, bitShift); } // 0x97EF1E5BCE9DC075 0x352633CA b1207
	static int FLOOR(float value) { return invoke<int>(0x05FA5920, value); } // 0xF34EE736CF047844 0x32E9BE04 b1207
	static int CEIL(float value) { return invoke<int>(0x05FA5950, value); } // 0x11E019C8F43ACC8A 0xD536A1DF b1207
	static int ROUND(float value) { return invoke<int>(0x05FA5990, value); } // 0xF2DB717A73826179 0x323B0E24 b1207
	static float TO_FLOAT(int value) { return invoke<float>(0x05FA59C0, value); } // 0xBBDA792448DB5A89 0x67116627 b1207
	static void SET_THREAD_PRIORITY(int priority) { invoke<Void>(0x05FA59E0, priority); } // 0x42B65DEEF2EDF2A1 b1207
}

namespace AICOVERPOINT
{
	static Entity _0x53E4D0C079CA6855(Any p0) { return invoke<Entity>(0x0213D6E0, p0); } // 0x53E4D0C079CA6855 b1207
	static BOOL _0xC276FE69DDA22BAD(Any p0) { return invoke<BOOL>(0x0213D700, p0); } // 0xC276FE69DDA22BAD b1207
	static int _0x5F5B1B7E8E8F94C6(Ped ped) { return invoke<int>(0x0213D7A0, ped); } // 0x5F5B1B7E8E8F94C6 b1207
	static void TASK_ENTER_COVER(Ped ped) { invoke<Void>(0x0213D8F0, ped); } // 0x4972A022AE6DAFA1 b1207
	static void TASK_EXIT_COVER(Ped ped) { invoke<Void>(0x0213D900, ped); } // 0x2BC4A6D92D140112 b1207
	static int _0x957D7E750216D74B(Ped ped) { return invoke<int>(0x0213D910, ped); } // 0x957D7E750216D74B b1207
	static void _0x89783FDDF079C88D(Any p0) { invoke<Void>(0x0213D9F0, p0); } // 0x89783FDDF079C88D b1207
	static void _0x64340DC208D671D5(const char* coverLayer) { invoke<Void>(0x0213DA00, coverLayer); } // 0x64340DC208D671D5 b1207
	static void _0x7A1FDCF35EAA140F(const char* coverLayer) { invoke<Void>(0x0213DAE0, coverLayer); } // 0x7A1FDCF35EAA140F b1207
	static void _0x2A31D13C5F021D0D(Ped ped) { invoke<Void>(0x0213DB60, ped); } // 0x2A31D13C5F021D0D b1207
	static void _0x3C7A9C2C953128FE(Ped ped) { invoke<Void>(0x0213DC40, ped); } // 0x3C7A9C2C953128FE b1207
	static void _0xEBA51A294C73292E(Any p0) { invoke<Void>(0x0213DD20, p0); } // 0xEBA51A294C73292E b1207
	static void _0x140B3CB1D424A945(Ped ped, Hash weaponHash) { invoke<Void>(0x0213DD30, ped, weaponHash); } // 0x140B3CB1D424A945 b1207
	static BOOL _0x8CBE916CFC64AD5C(Ped ped) { return invoke<BOOL>(0x0213DD40, ped); } // 0x8CBE916CFC64AD5C b1207
	static void _0x1A7A802B2301EDC0(Ped ped) { invoke<Void>(0x0213DD70, ped); } // 0x1A7A802B2301EDC0 b1207
	static void _0x733077295AB51304(Any p0) { invoke<Void>(0x0213DE60, p0); } // 0x733077295AB51304 b1207
	static ScrHandle _ADD_SCRIPTED_COVER_POINT(Any* data) { return invoke<ScrHandle>(0x0213DE70, data); } // 0x975BD6351648935F b1207
}

namespace AITRANSPORT
{
	static void TASK_ENTER_TRANSPORT(Any* args) { invoke<Void>(0x021381B0, args); } // 0xAEE3ADD08829CB6F b1207
	static void TASK_EXIT_TRANSPORT(Any* args) { invoke<Void>(0x021381C0, args); } // 0xC273A5B8488F7838 b1207
	static void SET_PED_ON_TRANSPORT_SEAT(Ped ped, Entity transportEntity, int seat, int flags) { invoke<Void>(0x021381D0, ped, transportEntity, seat, flags); } // 0xE588B5A8A005CB5E b1207
	static void SET_PED_OFF_TRANSPORT_SEAT(Ped ped, int flags) { invoke<Void>(0x021382A0, ped, flags); } // 0x8886D83A430537FD b1207
	static void SET_TRANSPORT_CONFIG_FLAG(Entity transportEntity, int flagId, BOOL value) { invoke<Void>(0x021383F0, transportEntity, flagId, value); } // 0xBA8818212633500A b1207
	static BOOL GET_TRANSPORT_CONFIG_FLAG(Entity transportEntity, int flagId, BOOL p2) { return invoke<BOOL>(0x02138590, transportEntity, flagId, p2); } // 0xF382C92CCC1CCDBC b1207
	static Any _GET_TRANSPORT_USAGE_FLAGS(Entity transportEntity, int* flags) { return invoke<Any>(0x021386C0, transportEntity, flags); } // 0xE195C5A82156321D b1207
	static void _SET_TRANSPORT_USAGE_FLAGS(Entity transportEntity, int flags) { invoke<Void>(0x021387B0, transportEntity, flags); } // 0xE2487779957FE897 b1207
	static void SET_TRANSPORT_ACCESSIBLE_SEAT_FLAGS(Entity transportEntity, int flags) { invoke<Void>(0x02138950, transportEntity, flags); } // 0xDD0660C997DE94FD b1207
	static void _0x4B6C9A43F7D9109B(Any p0, Any p1) { invoke<Void>(0x02138960, p0, p1); } // 0x4B6C9A43F7D9109B b1207
	static Any _0x159EF5B6EDCE00E8(Any p0, Any p1) { return invoke<Any>(0x02138AB0, p0, p1); } // 0x159EF5B6EDCE00E8 b1207
	static Any _0xDC44F405A6B98D03(Any p0, Any p1) { return invoke<Any>(0x02138B80, p0, p1); } // 0xDC44F405A6B98D03 b1207
	static BOOL _IS_TRANSPORT_SEAT_OCCUPIED(Entity transportEntity, int seatIndex) { return invoke<BOOL>(0x02138BB0, transportEntity, seatIndex); } // 0x2E2E06023D07631E b1207
	static Any _0x43FF27FC1829C202(Any p0, Any p1) { return invoke<Any>(0x02138D20, p0, p1); } // 0x43FF27FC1829C202 b1207
	static Ped _GET_PED_IN_TRANSPORT_SEAT(Entity transportEntity, int seatIndex) { return invoke<Ped>(0x02138D50, transportEntity, seatIndex); } // 0xFFEC4B0A1A3ED515 b1207
	static BOOL IS_PED_ENTERING_TRANSPORT(Ped ped, Entity transportEntity, BOOL p2) { return invoke<BOOL>(0x02138D80, ped, transportEntity, p2); } // 0x619E63980BFC0096 b1207
	static BOOL IS_PED_EXITING_TRANSPORT(Ped ped, Entity transportEntity) { return invoke<BOOL>(0x02138E60, ped, transportEntity); } // 0x660639BC60157048 b1207
	static void _0x4248AB2EEB3C75AD(Any p0, Any p1, Any p2) { invoke<Void>(0x02138F30, p0, p1, p2); } // 0x4248AB2EEB3C75AD b1207
	static void _0xB7079F4C72896756(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x02138F50, p0, p1, p2, p3, p4); } // 0xB7079F4C72896756 b1207
	static void _0x5639FBEA922788DA(Any p0) { invoke<Void>(0x02139020, p0); } // 0x5639FBEA922788DA b1207
	static void _0x67F7CEAC2391E114(Any p0, Any p1) { invoke<Void>(0x02139100, p0, p1); } // 0x67F7CEAC2391E114 b1207
	static void _0x8C8371EDFAF014A0(Any p0, Any p1) { invoke<Void>(0x021392C0, p0, p1); } // 0x8C8371EDFAF014A0 b1207
	static void _0xF8C20282B237E3F7(Any p0) { invoke<Void>(0x021393C0, p0); } // 0xF8C20282B237E3F7 b1207
	static void _0x13F138225C202F66(Any p0, Any p1) { invoke<Void>(0x021394B0, p0, p1); } // 0x13F138225C202F66 b1207
}

namespace ANIMSCENE
{
	static AnimScene _CREATE_ANIM_SCENE(const char* animDict, int flags, const char* playbackListName, BOOL p3, BOOL p4) { return invoke<AnimScene>(0x02152840, animDict, flags, playbackListName, p3, p4); } // 0x1FCA98E33C1437B3 b1207
	static void _DELETE_ANIM_SCENE(AnimScene animScene) { invoke<Void>(0x02152880, animScene); } // 0x84EEDB2C6E650000 b1207
	static void TRIGGER_ANIM_SCENE_SKIP(AnimScene animScene) { invoke<Void>(0xDEADBEEF, animScene); } // 0x4B85B3CF9197AEDF b1207
	static Any _0x4B85B3CF91972222(Any p0) { return invoke<Any>(0x02152890, p0); } // 0x4B85B3CF91972222 b1207
	static void _CLEAR_ANIM_SCENE_WAS_SKIPPED(AnimScene animScene) { invoke<Void>(0x021529E0, animScene); } // 0x8A8208AE92BF87A5 b1207
	static BOOL DOES_ANIM_SCENE_EXIST(AnimScene animScene) { return invoke<BOOL>(0x02152A40, animScene); } // 0x25557E324489393C b1207
	static BOOL _DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(AnimScene animScene, const char* entityId) { return invoke<BOOL>(0x02152AD0, animScene, entityId); } // 0x6F1F0B17109309DA b1207
	static BOOL _DOES_ANIM_SCENE_OWNERSHIP_OF_ENTITY_EXIST(AnimScene animScene, const char* entityName) { return invoke<BOOL>(0x02152BE0, animScene, entityName); } // 0x9D1ECA9337BE9FC3 b1207
	static void LOAD_ANIM_SCENE(AnimScene animScene) { invoke<Void>(0x02152D10, animScene); } // 0xAF068580194D9DC7 b1207
	static BOOL IS_ANIM_SCENE_LOADED(AnimScene animScene, BOOL p1, BOOL p2) { return invoke<BOOL>(0x02152D80, animScene, p1, p2); } // 0x477122B8D05E7968 b1207
	static BOOL _IS_ANIM_SCENE_LOADING(AnimScene animScene, BOOL p1) { return invoke<BOOL>(0x02152DC0, animScene, p1); } // 0x59606519FF9D3EC2 b1207
	static BOOL _IS_ANIM_SCENE_METADATA_ASSET_IN_RANGE_LOADING(AnimScene animScene, BOOL p1) { return invoke<BOOL>(0x02152DF0, animScene, p1); } // 0xF8D1D2DAB6007EEF b1207
	static BOOL IS_ANIM_SCENE_METADATA_LOADED(AnimScene animScene, BOOL p1) { return invoke<BOOL>(0x02152E20, animScene, p1); } // 0x95531A4A20CCE7BC b1207
	static int _GET_ANIM_SCENE_PLAYBACK_LIST_PHASE_AUDIO_LOAD_STRESS(AnimScene animScene, const char* phaseName) { return invoke<int>(0x02152E50, animScene, phaseName); } // 0x9E036D5204FFBBC8 b1207
	static void START_ANIM_SCENE(AnimScene animScene) { invoke<Void>(0x02152E80, animScene); } // 0xF4D94AF761768700 b1207
	static void RESET_ANIM_SCENE(AnimScene animScene, const char* p1) { invoke<Void>(0x02152F00, animScene, p1); } // 0x8FDF221F13537936 b1207
	static void ABORT_ANIM_SCENE(AnimScene animScene, BOOL p1) { invoke<Void>(0x02152F10, animScene, p1); } // 0x718CF1328D20C2B3 b1207
	static void RESUME_ANIM_SCENE_FROM_LAST_CHECKPOINT(AnimScene animScene) { invoke<Void>(0x02152FC0, animScene); } // 0x8E1BA705F63C1925 b1207
	static BOOL IS_ANIM_SCENE_RUNNING(AnimScene animScene, BOOL p1) { return invoke<BOOL>(0x02153030, animScene, p1); } // 0xCBFC7725DE6CE2E0 b1207
	static BOOL IS_ANIM_SCENE_FINISHED(AnimScene animScene, BOOL p1) { return invoke<BOOL>(0x02153060, animScene, p1); } // 0xD8254CB2C586412B b1207
	static BOOL IS_ANIM_SCENE_EXITING_THIS_FRAME(AnimScene animScene) { return invoke<BOOL>(0x02153090, animScene); } // 0xCDC5512A407CF08D b1207
	static BOOL HAS_ANIM_SCENE_EXITED(AnimScene animScene, BOOL p1) { return invoke<BOOL>(0x02153130, animScene, p1); } // 0xF94692EB9DC15D74 b1207
	static Any _0x73616E64696C132E(Any p0, Any p1) { return invoke<Any>(0x02153160, p0, p1); } // 0x73616E64696C132E b1207
	static BOOL IS_ANIM_SCENE_IN_SECTION(AnimScene animScene, const char* sectionName, BOOL p2) { return invoke<BOOL>(0x02153190, animScene, sectionName, p2); } // 0x8D81E7824B7753F7 b1207
	static BOOL _IS_ANIM_SCENE_SKIPPABLE(AnimScene animScene) { return invoke<BOOL>(0x021531C0, animScene); } // 0x4CDFFE3189EBDBD0 b1207
	static BOOL _IS_ANIM_SCENE_ABORTED(AnimScene animScene) { return invoke<BOOL>(0x02153220, animScene); } // 0x34A0671BE613D3D0 b1207
	static Any _0xD70C7A30412F8FA0(Any p0) { return invoke<Any>(0x02153280, p0); } // 0xD70C7A30412F8FA0 b1207
	static Any _0x9AAE3C1148A09BCA(Any p0) { return invoke<Any>(0x021532F0, p0); } // 0x9AAE3C1148A09BCA b1207
	static Any _0xA96619FE85159ED2(Any p0) { return invoke<Any>(0x02153360, p0); } // 0xA96619FE85159ED2 b1207
	static void FADE_ANIM_SCENE_AUDIO_IN(AnimScene animScene, float p1) { invoke<Void>(0x021533D0, animScene, p1); } // 0xA41351EA2A18A0AD b1207
	static void FADE_ANIM_SCENE_AUDIO_OUT(AnimScene animScene, float p1) { invoke<Void>(0x02153450, animScene, p1); } // 0x323E3AD772BA5D57 b1207
	static void BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(BOOL p0, BOOL p1) { invoke<Void>(0x021534D0, p0, p1); } // 0x1B70811D3BF75DB9 b1207
	static void SET_ANIM_SCENE_ORIGIN(AnimScene animScene, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, int order) { invoke<Void>(0x021534F0, animScene, posX, posY, posZ, rotX, rotY, rotZ, order); } // 0x020894BF17A02EF2 b1207
	static void GET_ANIM_SCENE_ORIGIN(AnimScene animScene, Vector3* position, Vector3* rotation, int order) { invoke<Void>(0x02153510, animScene, position, rotation, order); } // 0xADF1D53F3B1FE0A7 b1207
	static void SET_ANIM_SCENE_PAUSED(AnimScene animScene, BOOL toggle) { invoke<Void>(0x021537B0, animScene, toggle); } // 0xD6824B7D24DC0CE0 b1207
	static BOOL _IS_ANIM_SCENE_PAUSED(AnimScene animScene) { return invoke<BOOL>(0x02153830, animScene); } // 0x4B4038796F0D6566 b1207
	static void SET_ANIM_SCENE_RATE(AnimScene animScene, float rate) { invoke<Void>(0x02153890, animScene, rate); } // 0x75820B801CFF262A b1207
	static float _GET_ANIM_SCENE_RATE(AnimScene animScene) { return invoke<float>(0x02153900, animScene); } // 0x43C21623E42B821B b1207
	static float GET_ANIM_SCENE_PHASE(AnimScene animScene) { return invoke<float>(0x02153970, animScene); } // 0x3FBC3F51BF12DFBF b1207
	static float _GET_ANIM_SCENE_TIME(AnimScene animScene) { return invoke<float>(0x021539E0, animScene); } // 0x61BE7D6186260002 b1207
	static float _GET_ANIM_SCENE_DURATION(AnimScene animScene) { return invoke<float>(0x02153A40, animScene); } // 0x49F1D143ADE32656 b1207
	static void SET_ANIM_SCENE_ENTITY(AnimScene animScene, const char* entityName, Entity entity, int flags) { invoke<Void>(0x02153AB0, animScene, entityName, entity, flags); } // 0x8B720AD451CA2AB3 b1207
	static void REMOVE_ANIM_SCENE_ENTITY(AnimScene animScene, const char* entityName, Entity entity) { invoke<Void>(0x02153AD0, animScene, entityName, entity); } // 0x2BF96692C67F3E53 b1207
	static BOOL IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(AnimScene animScene, const char* entityName) { return invoke<BOOL>(0x02153AF0, animScene, entityName); } // 0x005E6F28DD7ED58D b1207
	static BOOL COULD_ANIM_SCENE_ENTITY_REACH_EXIT_NEXT_FRAME(AnimScene animScene, const char* entityName, Any p2, Any p3) { return invoke<BOOL>(0xDEADBEEF, animScene, entityName, p2, p3); } // 0x73616E64696C616E b1207
	static BOOL HAS_ENTITY_EXITED_ANIM_SCENE(AnimScene animScene, const char* entityName) { return invoke<BOOL>(0x02153C90, animScene, entityName); } // 0xB89FCFF19DAFFF28 b1207
	static BOOL _HAS_ENTITY_ENTERED_ANIM_SCENE(AnimScene animScene, const char* entityName) { return invoke<BOOL>(0x02153DD0, animScene, entityName); } // 0x337F1CC8EE895601 b1207
	static Ped _GET_ANIM_SCENE_PED(AnimScene animScene, const char* name, BOOL isNetwork) { return invoke<Ped>(0x02153E90, animScene, name, isNetwork); } // 0xE5822422197BBBA3 b1207
	static Object _GET_ANIM_SCENE_OBJECT(AnimScene animScene, const char* name, BOOL isNetwork) { return invoke<Object>(0x02153EC0, animScene, name, isNetwork); } // 0xFB5674687A1B2814 b1207
	static Vehicle _GET_ANIM_SCENE_VEHICLE(AnimScene animScene, const char* name, BOOL isNetwork) { return invoke<Vehicle>(0x02153EF0, animScene, name, isNetwork); } // 0x430EE0A19BC5A287 b1207
	static void SET_ANIM_SCENE_BOOL(AnimScene animScene, const char* name, BOOL value, BOOL p3) { invoke<Void>(0x02153F20, animScene, name, value, p3); } // 0x519E96C2C68B404B b1207
	static BOOL GET_ANIM_SCENE_BOOL(AnimScene animScene, const char* name) { return invoke<BOOL>(0x02153F50, animScene, name); } // 0x07A6F6447ECA9B64 b1207
	static void SET_ANIM_SCENE_FLOAT(AnimScene animScene, const char* name, float value, BOOL p3, BOOL p4) { invoke<Void>(0x02154080, animScene, name, value, p3, p4); } // 0x6BC5104E68CBEFE8 b1207
	static float GET_ANIM_SCENE_FLOAT(AnimScene animScene, const char* name) { return invoke<float>(0x021540B0, animScene, name); } // 0xCC24CB07F60B496E b1207
	static void SET_ANIM_SCENE_INT(AnimScene animScene, const char* name, int value, BOOL p3) { invoke<Void>(0x021541F0, animScene, name, value, p3); } // 0x3A379D2166CF5B92 b1207
	static int GET_ANIM_SCENE_INT(AnimScene animScene, const char* name) { return invoke<int>(0x02154210, animScene, name); } // 0x2B7277484CC095FD b1207
	static BOOL GET_ANIM_SCENE_ENTITY_LOCATION_DATA(AnimScene animScene, const char* entityName, Vector3* matrix, BOOL p3, const char* playbackListName, int p5) { return invoke<BOOL>(0x02154340, animScene, entityName, matrix, p3, playbackListName, p5); } // 0x8398438D8F14F56D b1207
	static BOOL IS_ENTITY_PLAYING_ANIM_SCENE(Entity entity, AnimScene animScene) { return invoke<BOOL>(0x02154380, entity, animScene); } // 0x3AB6C7B0BB0DF4B1 b1207
	static void ATTACH_ANIM_SCENE_TO_ENTITY(AnimScene animScene, Entity entity, int p2) { invoke<Void>(0x021543B0, animScene, entity, p2); } // 0xDC418495DBA327A1 b1207
	static void ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(AnimScene animScene, Entity entity, int p2) { invoke<Void>(0x021543D0, animScene, entity, p2); } // 0x1C0B105C3F30B88D b1207
	static void DETACH_ANIM_SCENE(AnimScene animScene) { invoke<Void>(0x021543F0, animScene); } // 0x6843A1AA3A336DFF b1207
	static void DETACH_ANIM_SCENE_PRESERVING_LOCATION(AnimScene animScene) { invoke<Void>(0x02154490, animScene); } // 0xA2507C4948C83D2E b1207
	static void TAKE_OWNERSHIP_OF_ANIM_SCENE(AnimScene animScene) { invoke<Void>(0x02154560, animScene); } // 0xF7A4C571E572D237 b1207
	static BOOL CHECK_OWNERSHIP_OF_ANIM_SCENE(AnimScene animScene) { return invoke<BOOL>(0x02154570, animScene); } // 0x661B8683611B9B97 b1207
	static void SET_ANIM_SCENE_PLAYBACK_LIST(AnimScene animScene, const char* playbackListName) { invoke<Void>(0x021545A0, animScene, playbackListName); } // 0xAB5E7CAB074D6B84 b1207
	static Any _0x1C5D33A4293E6DDE(Any p0, Any p1) { return invoke<Any>(0x021545B0, p0, p1); } // 0x1C5D33A4293E6DDE b1207
	static BOOL _DOES_ANIM_SCENE_PLAY_LIST_EXIST(AnimScene animScene, const char* playbackListName) { return invoke<BOOL>(0x02154640, animScene, playbackListName); } // 0xA9016536015DE29D b1207
	static void SET_ANIM_SCENE_PLAY_LIST(AnimScene animScene, const char* playlistName, BOOL p2) { invoke<Void>(0x02154750, animScene, playlistName, p2); } // 0x15598CFB25F3DC7E b1207
	static BOOL _IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(AnimScene animScene, const char* phaseName) { return invoke<BOOL>(0x02154880, animScene, phaseName); } // 0x1F0E401031E20146 b1207
	static BOOL REQUEST_ANIM_SCENE_PLAY_LIST(AnimScene animScene, const char* playlistName) { return invoke<BOOL>(0x02154910, animScene, playlistName); } // 0xDF7B5144E25CD3FE b1207
	static BOOL _RELEASE_ANIM_SCENE_PLAY_LIST(AnimScene animScene, const char* playlistName) { return invoke<BOOL>(0x02154A10, animScene, playlistName); } // 0xAE6ADA8FE7E84ACC b1207
	static Hash _GET_ANIM_SCENE_DICT(AnimScene animScene) { return invoke<Hash>(0x02154AD0, animScene); } // 0xAE5ADA4FE3E21ADC b1207
	static Any _0x1407F5115FB9583E(Any p0, Any p1) { return invoke<Any>(0x02154B30, p0, p1); } // 0x1407F5115FB9583E b1207
	static BOOL _IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(AnimScene animScene, const char* phaseName) { return invoke<BOOL>(0x02154CA0, animScene, phaseName); } // 0x23E33CB9F4A3F547 b1207
	static BOOL _IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(AnimScene animScene, const char* phaseName) { return invoke<BOOL>(0x02154DB0, animScene, phaseName); } // 0x0DF57F86FE71DBE5 b1207
	static void _0x1AD896BF43619551() { invoke<Void>(0x02154EC0); } // 0x1AD896BF43619551 b1207
	static int GET_ANIM_SCENE_CURRENT_ACTIVE_CAMERA_COUNT(AnimScene animScene) { return invoke<int>(0x02154ED0, animScene); } // 0x4822A65D5AF64E69 b1207
	static Any _0x5D7BFDA2290B4E39(Any p0) { return invoke<Any>(0x02154F40, p0); } // 0x5D7BFDA2290B4E39 b1207
	static BOOL _IS_MGM_SYSTEM_LOADED(const char* mgmFilename) { return invoke<BOOL>(0x02154F70, mgmFilename); } // 0xFDFC14799373283F b1207
	static BOOL _LOAD_MGM_ASSETS(const char* mgmFilename) { return invoke<BOOL>(0x02154FA0, mgmFilename); } // 0xB727A847862CB00A b1207
	static int _CREATE_MGM_SYSTEM(const char* mgmFilename) { return invoke<int>(0x02154FD0, mgmFilename); } // 0xA1300DE03E5D1973 b1207
	static void _DELETE_MGM_SYSTEM(int mgmHandle) { invoke<Void>(0x021550F0, mgmHandle); } // 0x53CB3970BA02E3CC b1207
	static void _0xB1A196BAFE650402(int mgmHandle, Ped ped) { invoke<Void>(0x021551D0, mgmHandle, ped); } // 0xB1A196BAFE650402 b1207
	static void _0xAE6DE22DE0ED4554(int mgmHandle, Ped ped) { invoke<Void>(0x02155310, mgmHandle, ped); } // 0xAE6DE22DE0ED4554 b1207
	static Any _0x61B2AAEF645DDAF0(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x02155450, p0, p1, p2, p3, p4); } // 0x61B2AAEF645DDAF0 b1207
	static void _0x07706C4CC9C6CC9E(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x02155490, p0, p1, p2, p3, p4); } // 0x07706C4CC9C6CC9E b1207
	static void _0x3641FCD53E59B335(int mgmHandle, Ped ped, const char* secondaryVoiceString) { invoke<Void>(0x021554B0, mgmHandle, ped, secondaryVoiceString); } // 0x3641FCD53E59B335 b1207
	static void _0x99B2A2E3655DEAF1(Any p0, Any p1) { invoke<Void>(0x021554D0, p0, p1); } // 0x99B2A2E3655DEAF1 b1207
	static void _0xBC781D24AA11F179(Any p0) { invoke<Void>(0x021554E0, p0); } // 0xBC781D24AA11F179 b1207
	static Any _0x3B393716C3FD8237(Any p0) { return invoke<Any>(0x02155600, p0); } // 0x3B393716C3FD8237 b1207
	static void _0xE12D7B4B959644CD() { invoke<Void>(0x02155630); } // 0xE12D7B4B959644CD b1207
	static void _0xC1193521E3B9FADD(Any p0, Any p1) { invoke<Void>(0x02155640, p0, p1); } // 0xC1193521E3B9FADD b1207
	static void _REQUEST_PHOTO_MODE_FREEZE() { invoke<Void>(0x02155730); } // 0x7C709C01D43D94CD b1207
	static void _REQUEST_PHOTO_MODE_DEFREEZE() { invoke<Void>(0x02155810); } // 0x41AFA5F228B0B6B0 b1207
	static Any _0x2DB524750DC41ED4() { return invoke<Any>(0x02155820); } // 0x2DB524750DC41ED4 b1207
	static Any _0xEA41D44A8D42057B() { return invoke<Any>(0x02155840); } // 0xEA41D44A8D42057B b1207
	static void _PAUSE_SCRIPT_THREADS(BOOL toggle) { invoke<Void>(0x02155860, toggle); } // 0x37C1257849DEF24A b1207
	static void _0xCDCD7B2D49AEE73A(Any p0) { invoke<Void>(0x021558F0, p0); } // 0xCDCD7B2D49AEE73A b1207
	static BOOL WAS_ANIM_SCENE_SKIPPED(AnimScene animScene) { return invoke<BOOL>(0x021559F0, animScene); } // 0xEF324E9550A394D5 b1207
}

namespace _NAMESPACE4
{
	static void _0xC31C44C43B48FDE3(Any* gamerHandle, int p1) { invoke<Void>(0x02155C90, gamerHandle, p1); } // 0xC31C44C43B48FDE3 b1207
}

namespace ATTRIBUTE
{
	static void SET_ATTRIBUTE_BASE_RANK(Ped ped, int attributeIndex, int newValue) { invoke<Void>(0x0215B1F0, ped, attributeIndex, newValue); } // 0x5DA12E025D47D4E5 b1207
	static int GET_ATTRIBUTE_RANK(Ped ped, int attributeIndex) { return invoke<int>(0x0215B380, ped, attributeIndex); } // 0xA4C8E23E29040DE0 b1207
	static int GET_ATTRIBUTE_BASE_RANK(Ped ped, int attributeIndex) { return invoke<int>(0x0215B490, ped, attributeIndex); } // 0x147149F2E909323C b1207
	static int GET_ATTRIBUTE_BONUS_RANK(Ped ped, int coreIndex) { return invoke<int>(0x0215B5A0, ped, coreIndex); } // 0x0EFA71F4B4330E04 b1207
	static int GET_MAX_ATTRIBUTE_RANK(Ped ped, int attributeIndex) { return invoke<int>(0x0215B6B0, ped, attributeIndex); } // 0x704674A0535A471D b1207
	static void SET_ATTRIBUTE_BONUS_RANK(Ped ped, int attributeIndex, int newValue) { invoke<Void>(0x0215B7C0, ped, attributeIndex, newValue); } // 0x920F9488BD115EFB b1207
	static int GET_DEFAULT_ATTRIBUTE_RANK(Ped ped, int attributeIndex) { return invoke<int>(0x0215B930, ped, attributeIndex); } // 0x958DD43D41F89A47 b1207
	static int GET_DEFAULT_MAX_ATTRIBUTE_RANK(Ped ped, int attributeIndex) { return invoke<int>(0x0215B960, ped, attributeIndex); } // 0x7C059C55AD940CB4 b1207
	static void ADD_ATTRIBUTE_POINTS(Ped ped, int attributeIndex, int p2) { invoke<Void>(0x0215B990, ped, attributeIndex, p2); } // 0x75415EE0CB583760 b1207
	static void SET_ATTRIBUTE_POINTS(Ped ped, int attributeIndex, int p2) { invoke<Void>(0x0215BB00, ped, attributeIndex, p2); } // 0x09A59688C26D88DF b1207
	static int GET_ATTRIBUTE_POINTS(Ped ped, int attributeIndex) { return invoke<int>(0x0215BC60, ped, attributeIndex); } // 0x219DA04BAA9CB065 b1207
	static int GET_MAX_ATTRIBUTE_POINTS(Ped ped, int attributeIndex) { return invoke<int>(0x0215BD70, ped, attributeIndex); } // 0x223BF310F854871C b1207
	static void _SET_ATTRIBUTE_CORE_VALUE(Ped ped, int coreIndex, int value) { invoke<Void>(0x0215BEA0, ped, coreIndex, value); } // 0xC6258F41D86676E0 b1207
	static int _GET_ATTRIBUTE_CORE_VALUE(Ped ped, int coreIndex) { return invoke<int>(0x0215BF70, ped, coreIndex); } // 0x36731AC041289BB1 b1207
	static int GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(Hash modelHash, int attributeIndex, int rank) { return invoke<int>(0x0215C030, modelHash, attributeIndex, rank); } // 0x94A7F191DB49A44D b1207
	static void ENABLE_ATTRIBUTE_OVERPOWER(Ped ped, int attributeIndex, float value, BOOL makeSound) { invoke<Void>(0x0215C060, ped, attributeIndex, value, makeSound); } // 0xF6A7C08DF2E28B28 b1207
	static void _ENABLE_ATTRIBUTE_CORE_OVERPOWER(Ped ped, int coreIndex, float value, BOOL makeSound) { invoke<Void>(0x0215C1D0, ped, coreIndex, value, makeSound); } // 0x4AF5A4C7B9157D14 b1207
	static void DISABLE_ATTRIBUTE_OVERPOWER(Ped ped, int attributeIndex) { invoke<Void>(0x0215C340, ped, attributeIndex); } // 0xF8DAC3D85636C241 b1207
	static BOOL _IS_ATTRIBUTE_OVERPOWERED(Ped ped, int attributeIndex) { return invoke<BOOL>(0x0215C490, ped, attributeIndex); } // 0x103C2F885ABEB00B b1207
	static BOOL _IS_ATTRIBUTE_CORE_OVERPOWERED(Ped ped, int coreIndex) { return invoke<BOOL>(0x0215C550, ped, coreIndex); } // 0x200373A8DF081F22 b1207
	static float _GET_ATTRIBUTE_OVERPOWER_SECONDS_LEFT(Ped ped, int attributeIndex) { return invoke<float>(0x0215C610, ped, attributeIndex); } // 0x4C9F782180712742 b1207
	static float _GET_ATTRIBUTE_CORE_OVERPOWER_SECONDS_LEFT(Ped ped, int coreIndex) { return invoke<float>(0x0215C6D0, ped, coreIndex); } // 0xB429F58803D285B1 b1207
	static void _START_ITEM_PREVIEW(Any p0, Any p1) { invoke<Void>(0x0215C790, p0, p1); } // 0x7E2C766ADB2C5F1A b1207
	static void STOP_ITEM_PREVIEW() { invoke<Void>(0x0215C7A0); } // 0xD962F8579D702DB5 b1207
	static void _SET_STATUS_EFFECT_CORE_ICON(int statusEffectType) { invoke<Void>(0x0215C7F0, statusEffectType); } // 0xA4D3A1C008F250DF b1207
	static void _SET_STATUS_EFFECT_PERIODIC_ICON(int statusEffectType) { invoke<Void>(0x0215C850, statusEffectType); } // 0xFB6E111908502871 b1207
	static void _STOP_STATUS_EFFECT_PERIODIC_ICON(int statusEffectType) { invoke<Void>(0x0215C8B0, statusEffectType); } // 0x3FC4C027FD0936F4 b1207
}

namespace AUDIO
{
	static void _0x7455CD705F7E933E() { invoke<Void>(0x02181C50); } // 0x7455CD705F7E933E b1207
	static void CLEAR_CONVERSATION_HISTORY() { invoke<Void>(0x02181C70); } // 0x33D51F801CB16E4F b1207
	static void _0xEF51242E35242B47(Any p0) { invoke<Void>(0x02181CE0, p0); } // 0xEF51242E35242B47 b1207
	static BOOL CREATE_NEW_SCRIPTED_CONVERSATION(const char* convoRoot) { return invoke<BOOL>(0x02181D40, convoRoot); } // 0xD2C91A0B572AAE56 0xB2BC25F8 b1207
	static Any _0xDF947FE0D551684E(Any p0, Any p1) { return invoke<Any>(0x02181E20, p0, p1); } // 0xDF947FE0D551684E b1207
	static void ADD_PED_TO_CONVERSATION(const char* p0, Ped ped, const char* p2) { invoke<Void>(0x02181EE0, p0, ped, p2); } // 0x95D9F4BC443956E7 0xF8D5EB86 b1207
	static void _0xA2323A2EAE32A290(Any p0, Any p1, Any p2) { invoke<Void>(0x02181FA0, p0, p1, p2); } // 0xA2323A2EAE32A290 b1207
	static Any _0x79F9C57B8D0DFE90(Any p0, Any p1) { return invoke<Any>(0x02181FC0, p0, p1); } // 0x79F9C57B8D0DFE90 b1207
	static void START_SCRIPT_CONVERSATION(const char* convoRoot, BOOL p1, BOOL p2, BOOL clone) { invoke<Void>(0x02182110, convoRoot, p1, p2, clone); } // 0x6B17C62C9635D2DC 0xE5DE7D9D b1207
	static void PRELOAD_SCRIPT_CONVERSATION(const char* convoRoot, BOOL p1, BOOL p2, BOOL clone) { invoke<Void>(0x02182140, convoRoot, p1, p2, clone); } // 0x3B3CAD6166916D87 0xDDF5C579 b1207
	static void START_PRELOADED_CONVERSATION(const char* convoRoot) { invoke<Void>(0x02182170, convoRoot); } // 0x23641AFE870AF385 0xA170261B b1207
	static Any _0x0CB3D1919E8D7CBA(Any p0) { return invoke<Any>(0x02182260, p0); } // 0x0CB3D1919E8D7CBA b1207
	static Any _0xFE5C6177064BD390(Any p0) { return invoke<Any>(0x02182390, p0); } // 0xFE5C6177064BD390 b1207
	static BOOL _IS_SCRIPTED_CONVERSATION_CREATED(const char* convoRoot) { return invoke<BOOL>(0x02182410, convoRoot); } // 0xD89504D9D7D5057D b1207
	static Any _0x5A13586A9447931F(Any p0) { return invoke<Any>(0x02182510, p0); } // 0x5A13586A9447931F b1207
	static BOOL IS_SCRIPTED_CONVERSATION_LOADED(const char* convoRoot) { return invoke<BOOL>(0x021825B0, convoRoot); } // 0xDF0D54BE7A776737 0xE1870EA9 b1207
	static Any _0xA2CAC9DEF0195E6F(Any p0) { return invoke<Any>(0x021826C0, p0); } // 0xA2CAC9DEF0195E6F b1207
	static BOOL IS_SCRIPTED_CONVERSATION_PLAYING(const char* p0) { return invoke<BOOL>(0x02182710, p0); } // 0x1ECC76792F661CF5 b1207
	static Any _0xF01C570E0A0A1E67(Any p0) { return invoke<Any>(0x02182740, p0); } // 0xF01C570E0A0A1E67 b1207
	static Any _0x847748AE5D7B1071(Any p0) { return invoke<Any>(0x02182840, p0); } // 0x847748AE5D7B1071 b1207
	static Any _0xD0730C1FA40348D9(Any p0) { return invoke<Any>(0x021828E0, p0); } // 0xD0730C1FA40348D9 b1207
	static int GET_CURRENT_SCRIPTED_CONVERSATION_LINE(const char* p0) { return invoke<int>(0x021829F0, p0); } // 0x480357EE890C295A 0x9620E41F b1207
	static void PAUSE_SCRIPTED_CONVERSATION(const char* p0, BOOL p1, BOOL p2, BOOL p3, BOOL p4) { invoke<Void>(0x02182AF0, p0, p1, p2, p3, p4); } // 0x8530AD776CD72B12 0xE2C9C6F8 b1207
	static void RESTART_SCRIPTED_CONVERSATION(const char* p0) { invoke<Void>(0x02182B30, p0); } // 0x9AEB285D1818C9AC 0x6CB24B56 b1207
	static void _0x36559148B78853B3(Any p0, Any p1, Any p2) { invoke<Void>(0x02182C10, p0, p1, p2); } // 0x36559148B78853B3 b1207
	static int STOP_SCRIPTED_CONVERSATION(const char* p0, BOOL p1, BOOL p2) { return invoke<int>(0x02182D20, p0, p1, p2); } // 0xD79DEEFB53455EBA 0xAB77DA7D b1207
	static void SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE(const char* p0) { invoke<Void>(0x02182E30, p0); } // 0x9663FE6B7A61EB00 0x85C98304 b1207
	static Any _0xF336E9F989B3518F(Any p0) { return invoke<Any>(0x02182E40, p0); } // 0xF336E9F989B3518F b1207
	static Any _0x254B0241E964B450(Any p0, Any p1) { return invoke<Any>(0x02182E70, p0, p1); } // 0x254B0241E964B450 b1207
	static Any _0x152ED1B56E8F1F50(Any p0, Any p1) { return invoke<Any>(0x02182F90, p0, p1); } // 0x152ED1B56E8F1F50 b1207
	static Any _0x935DBD96D4A3DA1F(Any p0, Any p1) { return invoke<Any>(0x021830B0, p0, p1); } // 0x935DBD96D4A3DA1F b1207
	static Any _0x295859EB18F48D82(Any p0) { return invoke<Any>(0x021830E0, p0); } // 0x295859EB18F48D82 b1207
	static void _0x40CA665AB9D8D505(const char* convoRoot, int singleLineIndex) { invoke<Void>(0x02183110, convoRoot, singleLineIndex); } // 0x40CA665AB9D8D505 b1207
	static void _0xF232C2C546AC16D0(Any p0) { invoke<Void>(0x021831F0, p0); } // 0xF232C2C546AC16D0 b1207
	static void _0x1E6F9A9FE1A99F36(Any p0) { invoke<Void>(0x02183220, p0); } // 0x1E6F9A9FE1A99F36 b1207
	static void REGISTER_SCRIPT_WITH_AUDIO(int p0) { invoke<Void>(0x02183310, p0); } // 0xC6ED9D5092438D91 0xA6203643 b1207
	static void UNREGISTER_SCRIPT_WITH_AUDIO() { invoke<Void>(0x02183320); } // 0xA8638BE228D4751A 0x66728EFE b1207
	static BOOL REQUEST_SCRIPT_AUDIO_BANK(const char* audioBank) { return invoke<BOOL>(0x02183330, audioBank); } // 0x2F844A8B08D76685 0x21322887 b1207
	static void RELEASE_NAMED_SCRIPT_AUDIO_BANK(const char* audioBank) { invoke<Void>(0x02183370, audioBank); } // 0x77ED170667F50170 0x16707ABC b1207
	static void RELEASE_SCRIPT_AUDIO_BANK() { invoke<Void>(0x021833C0); } // 0x7A2D8AD0A9EB9C3F 0x22F865E5 b1207
	static int GET_SOUND_ID() { return invoke<int>(0x021833F0); } // 0x430386FE9BF80B45 0x6AE0AD56 b1207
	static void RELEASE_SOUND_ID(int soundId) { invoke<Void>(0x02183450, soundId); } // 0x353FC880830B88FA 0x9C080899 b1207
	static void PLAY_SOUND(const char* audioName, const char* audioRef, BOOL p2, Any p3, BOOL p4, Any p5) { invoke<Void>(0x02183460, audioName, audioRef, p2, p3, p4, p5); } // 0x7FF4944CC209192D 0xB6E1917F b1207
	static void PLAY_SOUND_FRONTEND(const char* audioName, const char* audioRef, BOOL p2, Any p3) { invoke<Void>(0x02183480, audioName, audioRef, p2, p3); } // 0x67C540AA08E4A6F5 0x2E458F74 b1207
	static void _PLAY_SOUND_FROM_ITEM(Hash item, Hash soundSet, Any p2) { invoke<Void>(0x021835C0, item, soundSet, p2); } // 0xE8EAFF7B41EDD291 b1207
	static void PLAY_SOUND_FROM_ENTITY(const char* audioName, Entity entity, const char* audioRef, BOOL isNetwork, Any p4, Any p5) { invoke<Void>(0x021835E0, audioName, entity, audioRef, isNetwork, p4, p5); } // 0x6FB1DA3CA9DA7D90 b1207
	static void _PLAY_SOUND_FROM_POSITION(const char* audioName, float x, float y, float z, const char* audioRef, BOOL isNetwork, Any p6, BOOL p7, Any p8) { invoke<Void>(0x021836D0, audioName, x, y, z, audioRef, isNetwork, p6, p7, p8); } // 0xCCE219C922737BFA b1207
	static void _STOP_SOUND_WITH_NAME(const char* audioName, const char* audioRef) { invoke<Void>(0x02183760, audioName, audioRef); } // 0x0F2A2175734926D8 b1207
	static Any _0x580D71DFE0088E34(Any p0, Any p1) { return invoke<Any>(0x02183780, p0, p1); } // 0x580D71DFE0088E34 b1207
	static BOOL _IS_SCRIPTED_AUDIO_CUSTOM(Hash item, Hash soundSet) { return invoke<BOOL>(0x02183900, item, soundSet); } // 0x6DF942C4179BE5AB b1207
	static void _0x9821B68CD3E05F2B(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02183960, p0, p1, p2, p3); } // 0x9821B68CD3E05F2B b1207
	static void _SET_WHISTLE_CONFIG_FOR_PED(Ped ped, const char* whistleConfig, float value) { invoke<Void>(0x02183A80, ped, whistleConfig, value); } // 0x9963681A8BC69BF3 b1207
	static void _0x2E31ACA7477CF00F(Any p0, Any p1, Any p2) { invoke<Void>(0x02183AA0, p0, p1, p2); } // 0x2E31ACA7477CF00F b1207
	static void _0xCE5D0FFE83939AF1(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02183B40, p0, p1, p2, p3); } // 0xCE5D0FFE83939AF1 b1207
	static void _PLAY_SOUND_FROM_ENTITY_WITH_SET(int soundId, const char* soundName, Entity entity, const char* soundsetName, BOOL p4, Any p5) { invoke<Void>(0x02183C80, soundId, soundName, entity, soundsetName, p4, p5); } // 0xF1C5310FEAA36B48 b1207
	static void _0xDCF5BA95BBF0FABA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0x02183D80, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xDCF5BA95BBF0FABA b1207
	static void _0x0286617C8FC50A53(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02183E10, p0, p1, p2, p3); } // 0x0286617C8FC50A53 b1207
	static void _0x3210BCB36AF7621B(int soundId) { invoke<Void>(0x02183E40, soundId); } // 0x3210BCB36AF7621B b1207
	static void _0x503703EC1781B7D6(Any p0, Any p1, Any p2) { invoke<Void>(0x02183E50, p0, p1, p2); } // 0x503703EC1781B7D6 b1207
	static BOOL PREPARE_SOUND(const char* soundName, const char* soundsetName, int soundId) { return invoke<BOOL>(0x02183F70, soundName, soundsetName, soundId); } // 0xE368E8422C860BA7 b1207
	static void _RELEASE_SHARD_SOUNDS(const char* soundName, const char* soundsetName) { invoke<Void>(0x02183FB0, soundName, soundsetName); } // 0x9D746964E0CF2C5F b1207
	static BOOL PREPARE_SOUNDSET(const char* soundsetName, BOOL p1) { return invoke<BOOL>(0x02184160, soundsetName, p1); } // 0xD9130842D7226045 b1207
	static void _RELEASE_SOUNDSET(const char* soundsetName) { invoke<Void>(0x021841D0, soundsetName); } // 0x531A78D6BF27014B b1207
	static BOOL PREPARE_SOUND_WITH_ENTITY(const char* soundName, Entity entity, const char* soundsetName, int soundId) { return invoke<BOOL>(0x02184270, soundName, entity, soundsetName, soundId); } // 0x4AD019591E94C064 b1207
	static void _0x3E93DDDCBB6111E4(Any p0, Any p1) { invoke<Void>(0x02184360, p0, p1); } // 0x3E93DDDCBB6111E4 b1207
	static Any _0x714A0EA7DE1167BE(const char* audioName, const char* soundsetName) { return invoke<Any>(0x02184420, audioName, soundsetName); } // 0x714A0EA7DE1167BE b1207
	static Any _0x84848E1C0FC67DBB(Any p0) { return invoke<Any>(0x02184520, p0); } // 0x84848E1C0FC67DBB b1207
	static BOOL PLAY_PED_AMBIENT_SPEECH_NATIVE(Ped ped, Any* params) { return invoke<BOOL>(0x02184610, ped, params); } // 0x8E04FEDD28D42462 0x5C57B85D b1207
	static BOOL PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE(float x, float y, float z, Any* params) { return invoke<BOOL>(0x02184640, x, y, z, params); } // 0xED640017ED337E45 0xA1A1402E b1207
	static Any _0x72E4D1C4639BC465(Any p0, Any p1) { return invoke<Any>(0x021847B0, p0, p1); } // 0x72E4D1C4639BC465 b1207
	static Any _0xB18FEC133C7C6C69(Any p0) { return invoke<Any>(0x021847E0, p0); } // 0xB18FEC133C7C6C69 b1207
	static void _0xDC93F0948F2C28F4(Any p0) { invoke<Void>(0x02184870, p0); } // 0xDC93F0948F2C28F4 b1207
	static void _0x0D7FD6A55FD63AEF(Any p0, Any p1, Any p2) { invoke<Void>(0x021848D0, p0, p1, p2); } // 0x0D7FD6A55FD63AEF b1207
	static void _0x660A8F876DF1D4F8(Any p0) { invoke<Void>(0x02184940, p0); } // 0x660A8F876DF1D4F8 b1207
	static void _0x380A2E353AD30917(Any p0, Any p1, Any p2) { invoke<Void>(0x021849B0, p0, p1, p2); } // 0x380A2E353AD30917 b1207
	static void _0x0FAF7171BF613B80(Any p0) { invoke<Void>(0x02184B90, p0); } // 0x0FAF7171BF613B80 b1207
	static void PLAY_PAIN(Ped ped, int painId, float p2, BOOL p3, BOOL isNetwork) { invoke<Void>(0x02184CA0, ped, painId, p2, p3, isNetwork); } // 0xBC9AE166038A5CEC 0x874BD6CB b1207
	static void _0x6652B0C8F3D414D0(Any p0) { invoke<Void>(0x02184CD0, p0); } // 0x6652B0C8F3D414D0 b1207
	static void _0xF092B6030D6FD49C(int ropeId, const char* name) { invoke<Void>(0x02184E40, ropeId, name); } // 0xF092B6030D6FD49C b1207
	static void _0x2651DDC0EA269073(int ropeId, float p1) { invoke<Void>(0x02184F20, ropeId, p1); } // 0x2651DDC0EA269073 b1207
	static void SET_AMBIENT_VOICE_NAME(Ped ped, const char* name) { invoke<Void>(0x02184FB0, ped, name); } // 0x6C8065A3B780185B 0xBD2EA1A1 b1207
	static void _SET_VOFX_PED_VOICE(Ped ped, Hash voice) { invoke<Void>(0x02185080, ped, voice); } // 0x2703EFB583F0949A b1207
	static void STOP_CURRENT_PLAYING_SPEECH(Ped ped, Any p1) { invoke<Void>(0x021852C0, ped, p1); } // 0x79D2F0E66F81D90D 0x5B7463F4 b1207
	static void STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Ped ped, Any p1) { invoke<Void>(0x021852D0, ped, p1); } // 0xB8BEC0CA6F0EDB0F 0xBB8E64BF b1207
	static BOOL IS_AMBIENT_SPEECH_PLAYING(Ped ped) { return invoke<BOOL>(0x021852E0, ped); } // 0x9072C8B49907BFAD 0x1972E8AA b1207
	static BOOL IS_SCRIPTED_SPEECH_PLAYING(Any p0) { return invoke<BOOL>(0x02185490, p0); } // 0xCC9AA18DCC7084F4 0x2C653904 b1207
	static BOOL IS_ANY_SPEECH_PLAYING(Ped ped) { return invoke<BOOL>(0x02185640, ped); } // 0x729072355FA39EC9 0x2B74A6D6 b1207
	static Any _0x2B101AD9F651243A() { return invoke<Any>(0x021857F0); } // 0x2B101AD9F651243A b1207
	static Any _0x4A98E228A936DBCC(Any p0) { return invoke<Any>(0x02185810, p0); } // 0x4A98E228A936DBCC b1207
	static Any _0x6BFFB7C276866996(Any p0) { return invoke<Any>(0x02185A00, p0); } // 0x6BFFB7C276866996 b1207
	static BOOL DOES_CONTEXT_EXIST_FOR_THIS_PED(Ped ped, const char* speechName, BOOL unk) { return invoke<BOOL>(0x02185B00, ped, speechName, unk); } // 0x49B99BF3FDA89A7A 0x8BD5F11E b1207
	static Any _0xF0EE69F500952FA5(Any p0) { return invoke<Any>(0x02185BE0, p0); } // 0xF0EE69F500952FA5 b1207
	static Any _0x9D6DEC9791A4E501(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x02185D10, p0, p1, p2, p3); } // 0x9D6DEC9791A4E501 b1207
	static void _0x864A842B86993851(Ped ped) { invoke<Void>(0x02185F90, ped); } // 0x864A842B86993851 b1207
	static BOOL IS_PED_IN_CURRENT_CONVERSATION(Any p0, Any p1, Any p2) { return invoke<BOOL>(0x02186020, p0, p1, p2); } // 0x049E937F18F4020C 0x7B2F0743 b1207
	static Any _0x54B187F111D9C6F8(Any p0, Any p1) { return invoke<Any>(0x02186240, p0, p1); } // 0x54B187F111D9C6F8 b1207
	static void SET_PED_IS_DRUNK(Ped ped, BOOL toggle) { invoke<Void>(0x02186310, ped, toggle); } // 0x95D2D383D5396B8A 0xD2EA77A3 b1207
	static void _0x3A00D87B20A2A5E4(Any p0, Any p1) { invoke<Void>(0x02186440, p0, p1); } // 0x3A00D87B20A2A5E4 b1207
	static void _0xD47D47EFBF103FB8(Any p0, Any p1) { invoke<Void>(0x02186570, p0, p1); } // 0xD47D47EFBF103FB8 b1207
	static void PLAY_ANIMAL_VOCALIZATION(Ped pedHandle, const char* vocalizationName, BOOL p2) { invoke<Void>(0x02186700, pedHandle, vocalizationName, p2); } // 0xEE066C7006C49C0A 0x498849F3 b1207
	static void _0x0E53530D9B2DB01D(Any p0, Any p1, Any p2) { invoke<Void>(0x02186990, p0, p1, p2); } // 0x0E53530D9B2DB01D b1311
	static BOOL IS_ANIMAL_VOCALIZATION_PLAYING(Ped pedHandle) { return invoke<BOOL>(0x02186C80, pedHandle); } // 0xC265DF9FB44A9FBD 0x0CBAF2EF b1207
	static void SET_ANIMAL_MOOD(Ped animal, int mood) { invoke<Void>(0x02186E40, animal, mood); } // 0xCC97B29285B1DC3B 0x3EA7C6CB b1207
	static void _0xFCDEC42B1C78B7F8(Any p0, Any p1) { invoke<Void>(0x02186ED0, p0, p1); } // 0xFCDEC42B1C78B7F8 b1207
	static void _0xEB4D592620B8C209(Any p0) { invoke<Void>(0x02187000, p0); } // 0xEB4D592620B8C209 b1207
	static void _0xA6847BBA4FCDD13F(Any p0, Any p1) { invoke<Void>(0x02187100, p0, p1); } // 0xA6847BBA4FCDD13F b1207
	static void SET_STATIC_EMITTER_ENABLED(const char* emitterName, BOOL toggle) { invoke<Void>(0x02187340, emitterName, toggle); } // 0x399D2D3B33F1B8EB 0x91F72E92 b1207
	static void PLAY_END_CREDITS_MUSIC(BOOL play) { invoke<Void>(0x02187490, play); } // 0xCD536C4D33DCC900 0x8E88B3CC b1207
	static Any _0x7678FE0455ED1145(Any p0, Any p1, Any p2) { return invoke<Any>(0x021874B0, p0, p1, p2); } // 0x7678FE0455ED1145 b1207
	static Any _0xFFE9C53DEEA3DB0B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0x021874F0, p0, p1, p2, p3, p4, p5, p6); } // 0xFFE9C53DEEA3DB0B b1207
	static void _0x5E3CCF03995388B5(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02187550, p0, p1, p2, p3); } // 0x5E3CCF03995388B5 b1207
	static void _0x43037ABFE214A851() { invoke<Void>(0x021875D0); } // 0x43037ABFE214A851 b1207
	static void SET_AMBIENT_ZONE_STATE(const char* zoneName, BOOL p1, BOOL p2) { invoke<Void>(0x02187790, zoneName, p1, p2); } // 0xBDA07E5950085E46 0x2849CAC9 b1207
	static void CLEAR_AMBIENT_ZONE_STATE(const char* zoneName, BOOL p1) { invoke<Void>(0x02187840, zoneName, p1); } // 0x218DD44AAAC964FF 0xCDFF3C82 b1207
	static void SET_AMBIENT_ZONE_LIST_STATE(Any* p0, BOOL p1, BOOL p2) { invoke<Void>(0x021878F0, p0, p1, p2); } // 0x9748FA4DE50CCE3E 0xBF80B412 b1207
	static void CLEAR_AMBIENT_ZONE_LIST_STATE(Any* p0, BOOL p1) { invoke<Void>(0x02187A50, p0, p1); } // 0x120C48C614909FA4 0x38B9B8D4 b1207
	static void SET_AMBIENT_ZONE_STATE_PERSISTENT(const char* ambientZone, BOOL p1, BOOL p2) { invoke<Void>(0x02187BA0, ambientZone, p1, p2); } // 0x1D6650420CEC9D3B 0xC1FFB672 b1207
	static void SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT(const char* ambientZone, BOOL p1, BOOL p2) { invoke<Void>(0x02187C50, ambientZone, p1, p2); } // 0xF3638DAE8C4045E1 0x5F5A2605 b1207
	static void _0x3743CE6948194349(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x02187DB0, p0, p1, p2, p3, p4); } // 0x3743CE6948194349 b1207
	static BOOL IS_HORN_ACTIVE(Vehicle vehicle) { return invoke<BOOL>(0x02187F00, vehicle); } // 0x9D6BFC12B05C6121 0x20E2BDD0 b1207
	static void _0xFD461D0ABA5559B1(Any p0, Any p1) { invoke<Void>(0x02187FC0, p0, p1); } // 0xFD461D0ABA5559B1 b1207
	static BOOL IS_STREAM_PLAYING(int streamId) { return invoke<BOOL>(0x021880E0, streamId); } // 0xD11FA52EB849D978 0xF1F51A14 b1207
	static BOOL LOAD_STREAM(const char* streamName, const char* soundSet) { return invoke<BOOL>(0x02188110, streamName, soundSet); } // 0x1F1F957154EC51DF 0x0D89599D b1207
	static void PLAY_STREAM_FROM_PED(Ped ped, int streamId) { invoke<Void>(0x021881D0, ped, streamId); } // 0x89049DD63C08B5D1 0xA1D7FABE b1207
	static void PLAY_STREAM_FRONTEND(int streamId) { invoke<Void>(0x02188280, streamId); } // 0x58FCE43488F9F5F4 0x2C2A16BC b1207
	static void PLAY_STREAM_FROM_POSITION(float x, float y, float z, int streamId) { invoke<Void>(0x021882C0, x, y, z, streamId); } // 0x21442F412E8DE56B 0x6FE5D865 b1207
	static void _0x3A3BE6B920525237(Any p0, Any p1) { invoke<Void>(0x021882F0, p0, p1); } // 0x3A3BE6B920525237 b1207
	static void STOP_STREAM(int streamId) { invoke<Void>(0x02188390, streamId); } // 0xA4718A1419D18151 0xD1E364DE b1207
	static void STOP_PED_SPEAKING(Ped ped, BOOL shaking) { invoke<Void>(0x021883B0, ped, shaking); } // 0x9D64D7405520E3D3 0xFF92B49D b1207
	static void DISABLE_PED_PAIN_AUDIO(Ped ped, BOOL toggle) { invoke<Void>(0x021884B0, ped, toggle); } // 0xA9A41C1E940FB0E8 0x3B8E2D5F b1207
	static BOOL IS_AMBIENT_SPEECH_DISABLED(Ped ped) { return invoke<BOOL>(0x02188640, ped); } // 0x932C2D096A2C3FFF 0x109D1F89 b1207
	static Any SET_IS_SCRIPTED_SPEECH_DISABLED(Ped ped, BOOL disabled) { return invoke<Any>(0x02188760, ped, disabled); } // 0xB2DE3AEBE31150E2 b1207
	static void _0x6378A235374B852F(Any p0, Any p1) { invoke<Void>(0x021888F0, p0, p1); } // 0x6378A235374B852F b1207
	static void _0x87E6302FC61208CC(Any p0) { invoke<Void>(0x02188910, p0); } // 0x87E6302FC61208CC b1207
	static void SET_HORN_ENABLED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x02188920, vehicle, toggle); } // 0x76D683C108594D0E 0x6EB92D05 b1207
	static void SET_AUDIO_VEHICLE_PRIORITY(Vehicle vehicle, Any p1) { invoke<Void>(0x02188A00, vehicle, p1); } // 0xE5564483E407F914 0x271A9766 b1207
	static void _0x259ACC5B52A2B2D9(Any p0, Any p1) { invoke<Void>(0x02188AD0, p0, p1); } // 0x259ACC5B52A2B2D9 b1207
	static void _FORCE_VEHICLE_ENGINE_AUDIO(Vehicle vehicle, const char* audioName) { invoke<Void>(0x02188BA0, vehicle, audioName); } // 0x4F0C413926060B38 0x33B0B007 b1207
	static void SET_GPS_ACTIVE(BOOL active) { invoke<Void>(0x02188CF0, active); } // 0x3BD3F52BA9B1E4E8 0x0FC3379A b1207
	static BOOL _START_AUDIO_SCENESET(const char* audioName, const char* sceneset) { return invoke<BOOL>(0x02188D00, audioName, sceneset); } // 0x6339C1EA3979B5F7 b1207
	static void _STOP_AUDIO_SCENESET(const char* sceneset) { invoke<Void>(0x02188E80, sceneset); } // 0x9428447DED71FC7E b1207
	static BOOL _SET_AUDIO_SCENESET(const char* audioName, const char* sceneset) { return invoke<BOOL>(0x02188FB0, audioName, sceneset); } // 0xAC84686C06184B0D b1207
	static BOOL START_AUDIO_SCENE(const char* scene) { return invoke<BOOL>(0x02189130, scene); } // 0x013A80FC08F6E4F2 0xE48D757B b1207
	static Any _0xDC2F83A0612CA34D(Any p0) { return invoke<Any>(0x021891F0, p0); } // 0xDC2F83A0612CA34D b1207
	static void STOP_AUDIO_SCENE(const char* scene) { invoke<Void>(0x02189220, scene); } // 0xDFE8422B3B94E688 0xA08D8C58 b1207
	static void _0x6AB944DF68B512D3(Any p0) { invoke<Void>(0x021893F0, p0); } // 0x6AB944DF68B512D3 b1207
	static void STOP_AUDIO_SCENES() { invoke<Void>(0x02189530); } // 0xBAC7FC81A75EC1A1 0xF6C7342A b1207
	static BOOL IS_AUDIO_SCENE_ACTIVE(const char* scene) { return invoke<BOOL>(0x02189540, scene); } // 0xB65B60556E2A9225 0xACBED05C b1207
	static void SET_AUDIO_SCENE_VARIABLE(const char* scene, const char* variable, float value) { invoke<Void>(0x02189600, scene, variable, value); } // 0xEF21A9EF089A2668 0x19BB3CE8 b1207
	static Any _0x8B25A18E390F75BF(Any p0) { return invoke<Any>(0x02189620, p0); } // 0x8B25A18E390F75BF b1207
	static void ADD_ENTITY_TO_AUDIO_MIX_GROUP(Entity entity, const char* groupName, float p2) { invoke<Void>(0x02189640, entity, groupName, p2); } // 0x153973AB99FE8980 0x2BC93264 b1207
	static Any _0x131EC9247E7A2903(Any p0) { return invoke<Any>(0x02189660, p0); } // 0x131EC9247E7A2903 b1207
	static void REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Entity entity, float p1) { invoke<Void>(0x02189790, entity, p1); } // 0x18EB48CFC41F2EA0 0x308ED0EC b1207
	static Any _0xE600F61F54A444A6() { return invoke<Any>(0x02189860); } // 0xE600F61F54A444A6 b1207
	static BOOL AUDIO_IS_SCRIPTED_MUSIC_PLAYING() { return invoke<BOOL>(0x02189900); } // 0x845FFC3A4FEEFA3E 0x86E995D1 b1207
	static Hash _0xBE28DB99556FF8D9(Entity entity) { return invoke<Hash>(0x021899A0, entity); } // 0xBE28DB99556FF8D9 b1207
	static void _0x8E901B65206C2D3E(Ped ped) { invoke<Void>(0x02189A60, ped); } // 0x8E901B65206C2D3E b1207
	static void _0xC4CFCE4C656EF480(Ped ped) { invoke<Void>(0x02189B10, ped); } // 0xC4CFCE4C656EF480 b1207
	static void _0xABDB4863D3D72021(Entity entity, Any p1, Any p2, float p3, Any p4) { invoke<Void>(0x02189BC0, entity, p1, p2, p3, p4); } // 0xABDB4863D3D72021 b1207
	static void _0xB93A769B8B726950(Ped ped, Hash p1) { invoke<Void>(0x02189D30, ped, p1); } // 0xB93A769B8B726950 b1207
	static void _0xE891504B2F0E2DBA(Any p0, Any p1) { invoke<Void>(0x02189E40, p0, p1); } // 0xE891504B2F0E2DBA b1207
	static void _0x9EB779765E68C52E(Any p0, Any p1) { invoke<Void>(0x02189EF0, p0, p1); } // 0x9EB779765E68C52E b1207
	static void _0xE9694B2D6CB87B06(Entity entity, Any p1) { invoke<Void>(0x02189FA0, entity, p1); } // 0xE9694B2D6CB87B06 b1232
	static Any _0x886657C5B3D8EDE3(Entity entity) { return invoke<Any>(0x0218A0E0, entity); } // 0x886657C5B3D8EDE3 b1232
	static Any _0xC68C02DE259C927C(Any p0) { return invoke<Any>(0x0218A230, p0); } // 0xC68C02DE259C927C b1232
	static Any _0x2FFF4A78384AFFDF(Entity entity) { return invoke<Any>(0x0218A300, entity); } // 0x2FFF4A78384AFFDF b1436
	static AnimScene _0x62377977E4F08668(Entity entity) { return invoke<AnimScene>(0x0218A3D0, entity); } // 0x62377977E4F08668 b1436
	static Any _0x2DBBF0C5E19383EE(Any p0) { return invoke<Any>(0x0218A490, p0); } // 0x2DBBF0C5E19383EE b1232
	static Any _0xD05A460328560477(Any p0) { return invoke<Any>(0x0218A560, p0); } // 0xD05A460328560477 b1232
	static void _0x8D29FDF565DED9AE(Any p0, Any p1, Any p2) { invoke<Void>(0x0218A620, p0, p1, p2); } // 0x8D29FDF565DED9AE b1232
	static void _0x448F2647DD6F2E27(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x0218A6F0, p0, p1, p2, p3, p4); } // 0x448F2647DD6F2E27 b1232
	static void _0x139A4B9DF2D26CBF(Any p0, Any p1) { invoke<Void>(0x0218A710, p0, p1); } // 0x139A4B9DF2D26CBF b1232
	static void _0x018ABE833CA64D2A(Any p0, Any p1) { invoke<Void>(0x0218A7C0, p0, p1); } // 0x018ABE833CA64D2A b1232
	static void _0xBC07CA8FD710E7FD(Any p0, Any p1) { invoke<Void>(0x0218A880, p0, p1); } // 0xBC07CA8FD710E7FD b1232
	static BOOL PREPARE_MUSIC_EVENT(const char* eventName) { return invoke<BOOL>(0x0218A940, eventName); } // 0x1E5185B72EF5158A 0x534A5C1C b1207
	static BOOL CANCEL_MUSIC_EVENT(const char* eventName) { return invoke<BOOL>(0x0218AA20, eventName); } // 0x5B17A90291133DA5 0x89FF942D b1207
	static BOOL TRIGGER_MUSIC_EVENT(const char* eventName) { return invoke<BOOL>(0x0218AB10, eventName); } // 0x706D57B0F50DA710 0xB6094948 b1207
	static Any _0x05D6195FB4D428F4(Any p0) { return invoke<Any>(0x0218ABD0, p0); } // 0x05D6195FB4D428F4 b1207
	static int GET_MUSIC_PLAYTIME() { return invoke<int>(0x0218AC80); } // 0xE7A0D23DC414507B 0xD633C809 b1207
	static void _0xF64034D533CE8AAC(Any p0, Any p1, Any p2) { invoke<Void>(0x0218AD30, p0, p1, p2); } // 0xF64034D533CE8AAC b1207
	static void _0x149AEE66F0CB3A99(float p0, float p1) { invoke<Void>(0x0218AD70, p0, p1); } // 0x149AEE66F0CB3A99 0xE64F97A0 b1207
	static void _0xDAD6CD07CAA4F382() { invoke<Void>(0x0218ADD0); } // 0xDAD6CD07CAA4F382 b1207
	static void _0x8BF907833BE275DE(float p0, float p1) { invoke<Void>(0x0218AE20, p0, p1); } // 0x8BF907833BE275DE b1207
	static void FORCE_PED_PANIC_WALLA() { invoke<Void>(0x0218AE80); } // 0x062D5EAD4DA2FA6A 0xD87AF337 b1207
	static void _0x138ADB94F8B90616() { invoke<Void>(0x0218AE90); } // 0x138ADB94F8B90616 b1207
	static void _0xBF4DC1784BE94DFA(Ped ped, BOOL p1, Hash hash) { invoke<Void>(0x0218AEA0, ped, p1, hash); } // 0xBF4DC1784BE94DFA b1207
	static void SET_AUDIO_FLAG(const char* flagName, BOOL toggle) { invoke<Void>(0x0218AEC0, flagName, toggle); } // 0xB9EFD5C25018725A 0x1C09C9E0 b1207
	static void _0x6DA15746D5CC1A92(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x0218B040, p0, p1, p2, p3, p4, p5); } // 0x6DA15746D5CC1A92 b1207
	static void _0x078F77FD1A43EAB3(Any p0, Any p1) { invoke<Void>(0x0218B060, p0, p1); } // 0x078F77FD1A43EAB3 b1207
	static void _0x3D0BBCCF401B5FDB() { invoke<Void>(0x0218B120); } // 0x3D0BBCCF401B5FDB b1207
	static void SET_PORTAL_SETTINGS_OVERRIDE(const char* p0, const char* p1) { invoke<Void>(0x0218B1D0, p0, p1); } // 0x044DBAD7A7FA2BE5 0x8AD670EC b1207
	static void REMOVE_PORTAL_SETTINGS_OVERRIDE(const char* p0) { invoke<Void>(0x0218B1E0, p0); } // 0xB4BBFD9CD8B3922B 0xD24B4D0C b1207
	static void _0xEA546C31FD45F8CD(Any p0) { invoke<Void>(0x0218B2F0, p0); } // 0xEA546C31FD45F8CD b1207
	static Any _0x44A5EEF54F62E823(Any p0) { return invoke<Any>(0x0218B3E0, p0); } // 0x44A5EEF54F62E823 b1207
	static void _0x017492B2201E3428(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x0218B4E0, p0, p1, p2, p3); } // 0x017492B2201E3428 b1207
	static void _0xC886CD666ADD42E1(Any p0, Any p1) { invoke<Void>(0x0218B780, p0, p1); } // 0xC886CD666ADD42E1 b1207
	static void _0x5AE0CB5F35F034FD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x0218B8A0, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x5AE0CB5F35F034FD b1207
	static void _0x821C32C728B24477(Any p0, Any p1, Any p2) { invoke<Void>(0x0218B8E0, p0, p1, p2); } // 0x821C32C728B24477 b1207
	static void _0x06C5DF5EE444BC6B(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x0218BA10, p0, p1, p2, p3, p4); } // 0x06C5DF5EE444BC6B b1207
	static void _0x341CDD17EFC2472E(Any p0, Any p1) { invoke<Void>(0x0218BA40, p0, p1); } // 0x341CDD17EFC2472E b1207
	static void _0x7E176C676F8652A9(Any p0) { invoke<Void>(0x0218BA50, p0); } // 0x7E176C676F8652A9 b1207
	static Any _0x2B9C37C01BF25EDB(Any p0) { return invoke<Any>(0x0218BA60, p0); } // 0x2B9C37C01BF25EDB b1207
	static Any _0xA6A3A3F96B8B030E() { return invoke<Any>(0x0218BC10); } // 0xA6A3A3F96B8B030E b1207
	static int _GET_LOADED_STREAM_ID_FROM_CREATION(const char* streamName, const char* soundSet) { return invoke<int>(0x0218BD20, streamName, soundSet); } // 0x0556C784FA056628 b1207
	static Any _0xC369E2234E34A0CA(Any p0, Any p1) { return invoke<Any>(0x0218BDE0, p0, p1); } // 0xC369E2234E34A0CA b1207
	static void _0x35B8C070E0C16E2F(Any p0, Any p1) { invoke<Void>(0x0218BF40, p0, p1); } // 0x35B8C070E0C16E2F b1207
	static void _0xE7E6CB8B713ED190() { invoke<Void>(0x0218BFE0); } // 0xE7E6CB8B713ED190 b1207
	static void _0x569ABC36E28DDEAA() { invoke<Void>(0x0218BFF0); } // 0x569ABC36E28DDEAA b1207
	static void _0x839C9F124BE74D94(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x0218C000, p0, p1, p2, p3, p4); } // 0x839C9F124BE74D94 b1207
	static void _0x374F0E716BFCDE82(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x0218C040, p0, p1, p2, p3); } // 0x374F0E716BFCDE82 b1207
	static void _0x3E98AC9D8C56C62C(Any p0) { invoke<Void>(0x0218C280, p0); } // 0x3E98AC9D8C56C62C b1207
	static void _0xCBF2BEBB468A34F3(Any p0) { invoke<Void>(0x0218C2A0, p0); } // 0xCBF2BEBB468A34F3 b1207
	static void _0xA2B851605748AD0E() { invoke<Void>(0x0218C2C0); } // 0xA2B851605748AD0E b1207
	static void _0xCFAD2C8CD1054523(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x0218C420, p0, p1, p2, p3); } // 0xCFAD2C8CD1054523 b1207
	static void _0xD733528B6C35647A(Any p0, Any p1) { invoke<Void>(0x0218C4C0, p0, p1); } // 0xD733528B6C35647A b1207
	static void _0x5BC885EBD75FAA7D(Any p0, Any p1) { invoke<Void>(0x0218C5A0, p0, p1); } // 0x5BC885EBD75FAA7D b1207
	static void _0x6B7A88A61B41E589(Any p0) { invoke<Void>(0x0218C680, p0); } // 0x6B7A88A61B41E589 b1207
	static void _0x4BE3EC91C01F0FE8() { invoke<Void>(0x0218C830); } // 0x4BE3EC91C01F0FE8 b1207
	static void SET_AUDIO_ONLINE_TRANSITION_STAGE(const char* p0) { invoke<Void>(0x0218C900, p0); } // 0x9B1FC259187C97C0 b1207
	static void _0x2E399EAFBEEA74D5() { invoke<Void>(0x0218C9B0); } // 0x2E399EAFBEEA74D5 b1207
	static void _0x64B956F4E761DF5C(Any p0) { invoke<Void>(0x0218C9E0, p0); } // 0x64B956F4E761DF5C b1207
}

namespace BOUNTY
{
	static BOOL _BOUNTY_REQUEST_PAY_OFF_BOUNTY(Any* outRpcGuid) { return invoke<BOOL>(0x02191990, outRpcGuid); } // 0x537CE992BD2D7BCB b1207
	static BOOL _BOUNTY_REQUEST_PAY_OFF_BOUNTY_EX(Any* outRpcGuid, Hash p1, Hash costType) { return invoke<BOOL>(0x021919F0, outRpcGuid, p1, costType); } // 0x587BCEC31D64F382 b1232
	static BOOL _BOUNTY_REQUEST_SELF_REPORT_CRIME(Any* outRpcGuid, Hash crimeType, BOOL p2) { return invoke<BOOL>(0x02191A50, outRpcGuid, crimeType, p2); } // 0x188B748861B5BA17 b1207
	static BOOL _BOUNTY_REQUEST_SELF_REPORT_KILLED_BY_BOUNTY_HUNTER(Any* outRpcGuid) { return invoke<BOOL>(0x02191AF0, outRpcGuid); } // 0xB462D69D406A2602 b1207
	static BOOL BOUNTY_GET_BOUNTY_ON_PLAYER(Any* gamerHandle, Any* bountyData) { return invoke<BOOL>(0x02191B50, gamerHandle, bountyData); } // 0x4EF23E04A0C8FF51 b1207
	static BOOL _BOUNTY_IS_REQUEST_PENDING(Any* rpcGuid) { return invoke<BOOL>(0x02191CC0, rpcGuid); } // 0x03B61CD51097DE60 b1207
	static BOOL _BOUNTY_REQUEST_BEGIN_WANTED_POSTER(Any* outRpcGuid, int p1) { return invoke<BOOL>(0x02191D40, outRpcGuid, p1); } // 0xFFA13742E43507E3 b1207
	static BOOL _0x81847C2134039BDC(Any* p0) { return invoke<BOOL>(0x02191DE0, p0); } // 0x81847C2134039BDC b1207
	static BOOL _BOUNTY_REQUEST_COMPLETE_WANTED_POSTER(Any* outRpcGuid, Any* p1) { return invoke<BOOL>(0x02191E20, outRpcGuid, p1); } // 0x727AB6F008BB9F29 b1207
	static BOOL _BOUNTY_REQUEST_COMPLETE_SPLIT_WANTED_POSTER(Any* outRpcGuid, Any* p1) { return invoke<BOOL>(0x02191F00, outRpcGuid, p1); } // 0xFBD137BF0EC50FC9 b1207
	static void _BOUNTY_CANCEL_WANTED_POSTER() { invoke<Void>(0x02191FE0); } // 0x6A9DF0FCD0C87FF9 b1207
	static BOOL BOUNTY_REQUEST_BEGIN_LEGENDARY_MISSION(Any* outRpcGuid, int p1, int p2) { return invoke<BOOL>(0x02192070, outRpcGuid, p1, p2); } // 0xFC81D7C7A151CFAA b1207
	static BOOL BOUNTY_REQUEST_BEGIN_LEGENDARY_MISSION_FOR_POSSE(Any* outRpcGuid, int p1, int p2) { return invoke<BOOL>(0x021920D0, outRpcGuid, p1, p2); } // 0x48E4E23F1739E197 b1311
	static BOOL _BOUNTY_REQUEST_COMPLETE_LEGENDARY_MISSION(Any* outRpcGuid, Any* p1) { return invoke<BOOL>(0x02192130, outRpcGuid, p1); } // 0xA7309AC0DCF6D950 b1207
	static void _BOUNTY_CANCEL_LEGENDARY_MISSION() { invoke<Void>(0x02192210); } // 0x2BA1BCC99826CDA2 b1207
	static BOOL BOUNTY_GET_WANTED_POSTER_SLOT(Hash p0, Hash p1, Any* p2) { return invoke<BOOL>(0x02192220, p0, p1, p2); } // 0xB395A44A0C7CA615 b1207
	static BOOL BOUNTY_GET_LEGENDARY_TARGET(Any p0, Any* p1) { return invoke<BOOL>(0x021922F0, p0, p1); } // 0x85E4D7B225A30ED1 b1207
	static BOOL _0x86EC5F83867C4B70(Any* p0) { return invoke<BOOL>(0x02192350, p0); } // 0x86EC5F83867C4B70 b1436
	static BOOL BOUNTY_GET_COOLDOWN_COLLECTION(Any* p0) { return invoke<BOOL>(0x02192390, p0); } // 0x8FAF4D262FABA99C b1207
	static BOOL _BOUNTY_REQUEST_BECOME_TARGET_OF_CHARACTER_BOUNTY_HUNT(Any* outRpcGuid) { return invoke<BOOL>(0x021923C0, outRpcGuid); } // 0xB096547D61868254 b1207
	static BOOL _0x27D3A0E1FE090A43(Any* p0) { return invoke<BOOL>(0x02192420, p0); } // 0x27D3A0E1FE090A43 b1207
	static BOOL _BOUNTY_REQUEST_CLAIM_CHARACTER_BOUNTY(Any* outRpcGuid, int p1, Any* p2) { return invoke<BOOL>(0x02192460, outRpcGuid, p1, p2); } // 0xA9C3B0F746375162 b1207
	static BOOL _BOUNTY_REQUEST_POSSE_LEADER_CLAIM_CHARACTER_BOUNTY(Any* outRpcGuid, int p1, Any* p2) { return invoke<BOOL>(0x02192540, outRpcGuid, p1, p2); } // 0x5B53CA0E2AC3FF45 b1207
	static BOOL _BOUNTY_REQUEST_POSSE_MEMBER_CLAIM_CHARACTER_BOUNTY_SHARE(Any* outRpcGuid, Any* p1) { return invoke<BOOL>(0x02192620, outRpcGuid, p1); } // 0x22D3A61CE053270C b1207
	static void _BOUNTY_CLEAR_BEING_BOUNTY_HUNTER() { invoke<Void>(0x02192700); } // 0xA59D1997ECD99F0A b1207
	static BOOL _BOUNTY_REQUEST_ESCAPED_CHARACTER_BOUNTY_HUNT(Any* outRpcGuid) { return invoke<BOOL>(0x02192710, outRpcGuid); } // 0x12E981D53B07BF48 b1207
	static BOOL _BOUNTY_REQUEST_POSSE_LEADER_ESCAPED_CHARACTER_BOUNTY_HUNT(Any* outRpcGuid) { return invoke<BOOL>(0x02192770, outRpcGuid); } // 0x2D874BA20E8E1F20 b1207
	static BOOL _BOUNTY_REQUEST_POSSE_MEMBER_ESCAPED_CHARACTER_BOUNTY_HUNT(Any* outRpcGuid) { return invoke<BOOL>(0x021927D0, outRpcGuid); } // 0x8521C2E235558278 b1207
	static void _BOUNTY_CLEAR_BEING_TARGET() { invoke<Void>(0x02192830); } // 0x932DB3C05A7465D1 b1207
	static BOOL _BOUNTY_REQUEST_SERVED_FULL_JAIL_SENTENCE(Any* outRpcGuid) { return invoke<BOOL>(0x02192840, outRpcGuid); } // 0x3F73AED12A5EF0FF b1207
	static BOOL _BOUNTY_REQUEST_BRIBE_JAIL_GUARD(Any* outRpcGuid, int p1) { return invoke<BOOL>(0x021928A0, outRpcGuid, p1); } // 0x28717806D3BDD0D0 b1207
	static int _0xF8BCC5ECA33AC9C1() { return invoke<int>(0x02192900); } // 0xF8BCC5ECA33AC9C1 b1207
	static int _0xD6A67E2FF373D0E3(int p0) { return invoke<int>(0x02192920, p0); } // 0xD6A67E2FF373D0E3 b1355
}

namespace BRAIN
{
	static void REGISTER_OBJECT_SCRIPT_BRAIN(const char* scriptName, Hash modelHash, int p2, float activationRange, int p4, int p5) { invoke<Void>(0x02194970, scriptName, modelHash, p2, activationRange, p4, p5); } // 0x16AF9B4EEAC3B305 0xB6BCC608 b1207
	static int _START_PRELOADED_SCRIPT_BRAIN(Entity entity, const char* scriptName, int scriptStackSize, BOOL p3) { return invoke<int>(0x02194A70, entity, scriptName, scriptStackSize, p3); } // 0x4E4507CC5E4DB869 b1207
	static int _START_SCRIPT_BRAIN(Entity entity, const char* scriptName, int p2, Any* p3, int p4, BOOL p5) { return invoke<int>(0x02194AA0, entity, scriptName, p2, p3, p4, p5); } // 0x6F62FAE266DCFC81 b1207
	static void _REMOVE_SCRIPT_BRAIN_ENTITY(Entity entity) { invoke<Void>(0x02194AE0, entity); } // 0x38F1E09224EECA09 b1311
	static Entity _GET_SCRIPT_BRAIN_ENTITY() { return invoke<Entity>(0x02194AF0); } // 0x6818D1A194E29983 b1207
	static void _0xA6AC35DB4A7957A8(int flag) { invoke<Void>(0x02194B60, flag); } // 0xA6AC35DB4A7957A8 b1207
	static void _0x4AA5EA1EDFB25786(int flag) { invoke<Void>(0x02194BA0, flag); } // 0x4AA5EA1EDFB25786 b1207
	static void ENABLE_SCRIPT_BRAIN_SET(int brainSet) { invoke<Void>(0x02194BF0, brainSet); } // 0x1CF6E5C6750EADBD 0x2765919F b1207
	static void DISABLE_SCRIPT_BRAIN_SET(int brainSet) { invoke<Void>(0x02194C00, brainSet); } // 0x3F44EA613A5B2676 0xFBD13FAD b1207
	static void _PREPARE_SCRIPT_BRAIN() { invoke<Void>(0x02194C10); } // 0xA32B0B05EFF75730 0xF3A3AB08 b1207
	static void _0x74C333E34DF74E8A(const char* scriptName) { invoke<Void>(0x02194C80, scriptName); } // 0x74C333E34DF74E8A 0x29CE8BAA b1207
}

namespace CAM
{
	static void RENDER_SCRIPT_CAMS(BOOL render, BOOL ease, int easeTime, BOOL p3, BOOL p4, Any p5) { invoke<Void>(0x021BB630, render, ease, easeTime, p3, p4, p5); } // 0x33281167E4942E4F 0x74337969 b1207
	static void STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(BOOL render, float distance, int blendBackSmoothingType, BOOL p3, BOOL p4, BOOL p5) { invoke<Void>(0x021BB6B0, render, distance, blendBackSmoothingType, p3, p4, p5); } // 0x8C7C7FF7CF0E5153 0xD3C08183 b1207
	static Cam CREATE_CAM(const char* camName, BOOL p1) { return invoke<Cam>(0x021BB730, camName, p1); } // 0xE72CDBA7F0A02DD6 0xE9BF2A7D b1207
	static Cam CREATE_CAM_WITH_PARAMS(const char* camName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fov, BOOL p8, int p9) { return invoke<Cam>(0x021BB7C0, camName, posX, posY, posZ, rotX, rotY, rotZ, fov, p8, p9); } // 0x40C23491CE83708E 0x23B02F15 b1207
	static Cam CREATE_CAMERA(Hash camHash, BOOL p1) { return invoke<Cam>(0x021BB8E0, camHash, p1); } // 0x57CDF879EA466C46 0x5D6739AE b1207
	static Cam CREATE_CAMERA_WITH_PARAMS(Hash camHash, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fov, BOOL p8, Any p9) { return invoke<Cam>(0x021BB9D0, camHash, posX, posY, posZ, rotX, rotY, rotZ, fov, p8, p9); } // 0x98B99B9F27E2D60B 0x0688BE9A b1207
	static void DESTROY_CAM(Cam cam, BOOL p1) { invoke<Void>(0x021BBB50, cam, p1); } // 0x4E67E0B6D7FD5145 0xC39302BD b1207
	static void DESTROY_ALL_CAMS(BOOL p0) { invoke<Void>(0x021BBC50, p0); } // 0x163600D6E136C9F8 0x10C151CE b1207
	static BOOL DOES_CAM_EXIST(Cam cam) { return invoke<BOOL>(0x021BBD70, cam); } // 0x153AD457764FD704 0x1EF89DC0 b1207
	static void SET_CAM_ACTIVE(Cam cam, BOOL active) { invoke<Void>(0x021BBDB0, cam, active); } // 0x87295BCA613800C8 0x064659C2 b1207
	static BOOL IS_CAM_ACTIVE(Cam cam) { return invoke<BOOL>(0x021BBEB0, cam); } // 0x63EFCC7E1810B8E6 0x4B58F177 b1207
	static BOOL IS_CAM_RENDERING(Cam cam) { return invoke<BOOL>(0x021BBF10, cam); } // 0x4415F8A6C536D39F 0x6EC6B5B2 b1207
	static Cam GET_RENDERING_CAM() { return invoke<Cam>(0x021BBF80); } // 0x03A8931ECC8015D6 0x0FCF4DF1 b1207
	static Vector3 GET_CAM_COORD(Cam cam) { return invoke<Vector3>(0x021BBFF0, cam); } // 0x6B12F11C2A9F0344 0x7C40F09C b1207
	static Vector3 GET_CAM_ROT(Cam cam, int rotationOrder) { return invoke<Vector3>(0x021BC050, cam, rotationOrder); } // 0x9BF96B57254E7889 0xDAC84C9F b1207
	static float GET_CAM_FOV(Cam cam) { return invoke<float>(0x021BC0D0, cam); } // 0x8101D32A0A6B0F60 0xD6E9FCF5 b1207
	static void SET_CAM_PARAMS(Cam cam, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fieldOfView, Any p8, int p9, int p10, int p11, Any p12, Any p13) { invoke<Void>(0x021BC120, cam, posX, posY, posZ, rotX, rotY, rotZ, fieldOfView, p8, p9, p10, p11, p12, p13); } // 0xA47BBFFFB83D4D0A 0x2167CEBF b1207
	static void SET_CAM_COORD(Cam cam, float posX, float posY, float posZ) { invoke<Void>(0x021BC240, cam, posX, posY, posZ); } // 0xF9EE7D419EE49DE6 0x7A8053AF b1207
	static void SET_CAM_ROT(Cam cam, float rotX, float rotY, float rotZ, int rotationOrder) { invoke<Void>(0x021BC2F0, cam, rotX, rotY, rotZ, rotationOrder); } // 0x63DFA6810AD78719 0xEE38B3C1 b1207
	static void SET_CAM_FOV(Cam cam, float fieldOfView) { invoke<Void>(0x021BC310, cam, fieldOfView); } // 0x27666E5988D9D429 0xD3D5D74F b1207
	static void SET_CAM_NEAR_CLIP(Cam cam, float nearClip) { invoke<Void>(0x021BC3D0, cam, nearClip); } // 0xA924028272A61364 0x46DB13B1 b1207
	static void SET_CAM_FAR_CLIP(Cam cam, float farClip) { invoke<Void>(0x021BC440, cam, farClip); } // 0x5E32817BF6302111 0x0D23E381 b1207
	static void SET_CAM_MOTION_BLUR_STRENGTH(Cam cam, float strength) { invoke<Void>(0x021BC4F0, cam, strength); } // 0x45FD891364181F9E 0xFD6E0D67 b1207
	static void _0xFC3F638BE2B6BB02() { invoke<Void>(0x021BC570); } // 0xFC3F638BE2B6BB02 b1207
	static void _0xE4B7945EF4F1BFB2(Any p0, Any p1) { invoke<Void>(0x021BC580, p0, p1); } // 0xE4B7945EF4F1BFB2 b1207
	static void _0x1FC6C727D30FFDDE(Any p0) { invoke<Void>(0x021BC590, p0); } // 0x1FC6C727D30FFDDE b1207
	static void ATTACH_CAM_TO_ENTITY(Cam cam, Entity entity, float xOffset, float yOffset, float zOffset, BOOL isRelative) { invoke<Void>(0x021BC600, cam, entity, xOffset, yOffset, zOffset, isRelative); } // 0xFDC0DF7F6FB0A592 0xAD7C45F6 b1207
	static void ATTACH_CAM_TO_PED_BONE(Cam cam, Ped ped, int boneIndex, float x, float y, float z, BOOL heading) { invoke<Void>(0x021BC620, cam, ped, boneIndex, x, y, z, heading); } // 0xDFC1E4A44C0324CA 0x506BB35C b1207
	static void DETACH_CAM(Cam cam) { invoke<Void>(0x021BC640, cam); } // 0x05B41DDBEB559556 0xF4FBF14A b1207
	static void POINT_CAM_AT_COORD(Cam cam, float x, float y, float z) { invoke<Void>(0x021BC6E0, cam, x, y, z); } // 0x948B39341C3A40C2 0x914BC21A b1207
	static void POINT_CAM_AT_ENTITY(Cam cam, Entity entity, float p2, float p3, float p4, BOOL p5) { invoke<Void>(0x021BC7B0, cam, entity, p2, p3, p4, p5); } // 0xFC2867E6074D3A61 0x7597A0F7 b1207
	static void STOP_CAM_POINTING(Cam cam) { invoke<Void>(0x021BC7D0, cam); } // 0xCA1B30A3357C71F1 0x5435F6A5 b1207
	static void _SET_CAM_FOCUS_DISTANCE(Cam cam, float distance) { invoke<Void>(0x021BC870, cam, distance); } // 0x11F32BB61B756732 b1207
	static void _0x9F97E85EC142255E(Any p0, Any p1) { invoke<Void>(0x021BC920, p0, p1); } // 0x9F97E85EC142255E b1207
	static void SET_CAM_AFFECTS_AIMING(Cam cam, BOOL toggle) { invoke<Void>(0x021BC990, cam, toggle); } // 0x3CB9E8BDE5E76F33 0x0C74F9AF b1207
	static void _0x1B8F3CE5A6001298(Cam cam, BOOL p1) { invoke<Void>(0x021BCA50, cam, p1); } // 0x1B8F3CE5A6001298 0xE1A0B2F1 b1207
	static void _0x42ED56B02E05D109(Any p0, BOOL p1) { invoke<Void>(0x021BCB50, p0, p1); } // 0x42ED56B02E05D109 0x43220969 b1207
	static void ADD_CAM_SPLINE_NODE(Cam camera, float x, float y, float z, float xRot, float yRot, float zRot, int length, int p8, int p9) { invoke<Void>(0x021BCC10, camera, x, y, z, xRot, yRot, zRot, length, p8, p9); } // 0xF1F57F9D230F9CD1 0xAD3C7EAA b1207
	static void SET_CAM_SPLINE_PHASE(Cam cam, float p1) { invoke<Void>(0x021BCD40, cam, p1); } // 0xF1898A68E7C15636 0xF0AED233 b1207
	static float GET_CAM_SPLINE_PHASE(Cam cam) { return invoke<float>(0x021BCDF0, cam); } // 0x095EDCD24D90033A 0x39784DD9 b1207
	static void SET_CAM_SPLINE_DURATION(Cam cam, int timeDuration) { invoke<Void>(0x021BCEB0, cam, timeDuration); } // 0xFF6311652CA91015 0x3E91FC8A b1207
	static void SET_CAM_SPLINE_SMOOTHING_STYLE(Cam cam, int smoothingStyle) { invoke<Void>(0x021BCF60, cam, smoothingStyle); } // 0x84B3645618E726B0 0x15E141CE b1207
	static void SET_CAM_ACTIVE_WITH_INTERP(Cam camTo, Cam camFrom, int duration, int easeLocation, int easeRotation) { invoke<Void>(0x021BD010, camTo, camFrom, duration, easeLocation, easeRotation); } // 0x8B15AE2987C1AC8F 0x7983E7F0 b1207
	static BOOL IS_CAM_INTERPOLATING(Cam cam) { return invoke<BOOL>(0x021BD030, cam); } // 0x578F8F1CAA17BD2B 0x7159CB5D b1207
	static void SHAKE_CAM(Cam cam, const char* type, float amplitude) { invoke<Void>(0x021BD140, cam, type, amplitude); } // 0xF9A7BCF5D050D4E7 0x1D4211B0 b1207
	static BOOL IS_CAM_SHAKING(Cam cam) { return invoke<BOOL>(0x021BD280, cam); } // 0x2EEB402BD7320159 0x0961FD9B b1207
	static void STOP_CAM_SHAKING(Cam cam, BOOL p1) { invoke<Void>(0x021BD2F0, cam, p1); } // 0xB78CC4B4706614B0 0x40D0EB87 b1207
	static BOOL PLAY_CAM_ANIM(Cam cam, const char* animName, const char* animDictionary, float x, float y, float z, float xRot, float yRot, float zRot, BOOL p9, int p10) { return invoke<BOOL>(0x021BD350, cam, animName, animDictionary, x, y, z, xRot, yRot, zRot, p9, p10); } // 0xA263DDF694D563F6 0xBCEFB87E b1207
	static void _0xCF69EA05CD9C33C9() { invoke<Void>(0x021BD4B0); } // 0xCF69EA05CD9C33C9 b1207
	static BOOL _IS_ANIM_SCENE_CAM_ACTIVE() { return invoke<BOOL>(0x021BD500); } // 0x20389408F0E93B9A b1207
	static BOOL IS_SCREEN_FADED_OUT() { return invoke<BOOL>(0x021BD530); } // 0xF5472C80DF2FF847 0x9CAA05FA b1207
	static BOOL IS_SCREEN_FADED_IN() { return invoke<BOOL>(0x021BD560); } // 0x37F9A426FBCF4AF2 0x4F37276D b1207
	static BOOL IS_SCREEN_FADING_OUT() { return invoke<BOOL>(0x021BD590); } // 0x02F39BEFE7B88D00 0x79275A57 b1207
	static BOOL IS_SCREEN_FADING_IN() { return invoke<BOOL>(0x021BD5C0); } // 0x0CECCC63FFA2EF24 0xC7C82800 b1207
	static void DO_SCREEN_FADE_IN(int duration) { invoke<Void>(0x021BD5F0, duration); } // 0x6A053CF596F67DF7 0x66C1BDEE b1207
	static void DO_SCREEN_FADE_OUT(int duration) { invoke<Void>(0x021BD6F0, duration); } // 0x40C719A5E410B9E4 0x89D01805 b1207
	static BOOL HAS_LETTER_BOX() { return invoke<BOOL>(0x021BD7B0); } // 0x81DCFD13CF39920E b1207
	static void _REQUEST_LETTER_BOX_NOW(BOOL p0, BOOL p1) { invoke<Void>(0x021BD7D0, p0, p1); } // 0x69D65E89FFD72313 b1207
	static void _REQUEST_LETTER_BOX_OVERTIME(int p0, int p1, BOOL p2, int p3, BOOL p4, BOOL p5) { invoke<Void>(0x021BD8F0, p0, p1, p2, p3, p4, p5); } // 0xE296208C273BD7F0 b1207
	static void _FORCE_LETTER_BOX_THIS_UPDATE() { invoke<Void>(0x021BD970); } // 0xC64ABC0676AF262B b1207
	static float GET_LETTER_BOX_RATIO() { return invoke<float>(0x021BD980); } // 0xA2B1C7EF759A63CE b1207
	static Any _0x73FF6BE63DC18819() { return invoke<Any>(0x021BD990); } // 0x73FF6BE63DC18819 b1207
	static Any _0x450769C833D58844() { return invoke<Any>(0x021BD9A0); } // 0x450769C833D58844 b1207
	static void SET_WIDESCREEN_BORDERS(BOOL p0, int p1) { invoke<Void>(0x021BD9D0, p0, p1); } // 0xD7F4D54CF80AFA34 0x1A75DC9A b1207
	static Vector3 GET_GAMEPLAY_CAM_COORD() { return invoke<Vector3>(0x021BDA10); } // 0x595320200B98596E 0x9388CF79 b1207
	static Vector3 GET_GAMEPLAY_CAM_ROT(int rotationOrder) { return invoke<Vector3>(0x021BDA40, rotationOrder); } // 0x0252D2B5582957A6 0x13A010B5 b1207
	static float GET_GAMEPLAY_CAM_FOV() { return invoke<float>(0x021BDA90); } // 0xF6A96E5ACEEC6E50 0x4D6B3BFA b1207
	static void _0x8459B3E64257B21D(float p0) { invoke<Void>(0x021BDAB0, p0); } // 0x8459B3E64257B21D 0x1126E37C b1207
	static float GET_GAMEPLAY_CAM_RELATIVE_HEADING() { return invoke<float>(0x021BDAF0); } // 0xC4ABF536048998AA 0xCAF839C2 b1207
	static void SET_GAMEPLAY_CAM_RELATIVE_HEADING(float heading, float p1) { invoke<Void>(0x021BDB30, heading, p1); } // 0x5D1EB123EAC5D071 0x20C6217C b1207
	static float GET_GAMEPLAY_CAM_RELATIVE_PITCH() { return invoke<float>(0x021BDC60); } // 0x99AADEBBA803F827 0xFC5A4946 b1207
	static void SET_GAMEPLAY_CAM_RELATIVE_PITCH(float x, float Value2) { invoke<Void>(0x021BDF10, x, Value2); } // 0xFB760AF4F537B8BF 0x6381B963 b1207
	static void _0x0961B089947BA6D0(Any p0) { invoke<Void>(0x021BDF70, p0); } // 0x0961B089947BA6D0 b1207
	static void _0x04084490CC302CFB() { invoke<Void>(0x021BDF90); } // 0x04084490CC302CFB b1207
	static void _0x1DD95A8D6B24A0C9(BOOL p0) { invoke<Void>(0x021BE0C0, p0); } // 0x1DD95A8D6B24A0C9 b1207
	static BOOL _IS_IN_FULL_FIRST_PERSON_MODE() { return invoke<BOOL>(0x021BE0D0); } // 0xD1BA66940E94C547 b1207
	static void SHAKE_GAMEPLAY_CAM(const char* shakeName, float intensity) { invoke<Void>(0x021BE0F0, shakeName, intensity); } // 0xD9B31B4650520529 0xF2EFE660 b1207
	static void _0xC3E9E5D4F413B773(const char* shakeName, float intensity) { invoke<Void>(0x021BE170, shakeName, intensity); } // 0xC3E9E5D4F413B773 b1207
	static BOOL IS_GAMEPLAY_CAM_SHAKING() { return invoke<BOOL>(0x021BE2D0); } // 0xEA4C5F4AA0A4DBEF 0x3457D681 b1207
	static BOOL _0x0060B31968E60E41(const char* shakeName) { return invoke<BOOL>(0x021BE2F0, shakeName); } // 0x0060B31968E60E41 b1207
	static void SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(float amplitude) { invoke<Void>(0x021BE360, amplitude); } // 0x570E35F5C4A44838 0x9219D44A b1207
	static void _0xFEFDDC6E8FDF8A75(const char* shakeName, float intensity) { invoke<Void>(0x021BE3A0, shakeName, intensity); } // 0xFEFDDC6E8FDF8A75 b1207
	static void STOP_GAMEPLAY_CAM_SHAKING(BOOL p0) { invoke<Void>(0x021BE410, p0); } // 0xE0DE43D290FB65F9 0xFD569E4E b1207
	static void _0x4285804FD65D8066(const char* shakeName, BOOL p1) { invoke<Void>(0x021BE430, shakeName, p1); } // 0x4285804FD65D8066 b1207
	static void SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(Ped ped) { invoke<Void>(0x021BE510, ped); } // 0x82E41D6ADE924FCA 0x7D3007A2 b1207
	static BOOL IS_GAMEPLAY_CAM_RENDERING() { return invoke<BOOL>(0x021BE5B0); } // 0x8660EA714834E412 0x0EF276DA b1207
	static BOOL _0x251241CAEC707106() { return invoke<BOOL>(0x021BE5D0); } // 0x251241CAEC707106 0xC0B00C20 b1207
	static BOOL _0x43AB9D5A7D415478() { return invoke<BOOL>(0x021BE600); } // 0x43AB9D5A7D415478 0x60C23785 b1207
	static BOOL IS_GAMEPLAY_CAM_LOOKING_BEHIND() { return invoke<BOOL>(0x021BE630); } // 0x8FE0D24FFD04D5A2 0x33C83F17 b1207
	static void _DISABLE_CAM_COLLISION_FOR_ENTITY(Entity entity) { invoke<Void>(0x021BE730, entity); } // 0xD904F75DBD7AB865 0x2701A9AD b1207
	static void DISABLE_CAM_COLLISION_FOR_OBJECT(Entity entity) { invoke<Void>(0x021BE830, entity); } // 0x7E3F546ACFE6C8D9 0xC4736ED3 b1207
	static void _0x39073DA4EDDBC91D(Any p0) { invoke<Void>(0x021BE8E0, p0); } // 0x39073DA4EDDBC91D b1207
	static void _0x70A6658D476C6187() { invoke<Void>(0x021BE9C0); } // 0x70A6658D476C6187 b1207
	static void _0x18C3DFAC458783BB() { invoke<Void>(0x021BEAB0); } // 0x18C3DFAC458783BB b1207
	static void _0xF1A6FEEDF3776EF9() { invoke<Void>(0x021BEB90); } // 0xF1A6FEEDF3776EF9 b1207
	static void _0xE6F364DE6C2FDEFE() { invoke<Void>(0x021BEC70); } // 0xE6F364DE6C2FDEFE b1207
	static void _0x0F1FFEF5D54AE832() { invoke<Void>(0x021BED50); } // 0x0F1FFEF5D54AE832 b1207
	static void _0x3C8F74E8FE751614() { invoke<Void>(0x021BEE30); } // 0x3C8F74E8FE751614 b1207
	static void _0x06557F6D96C86881() { invoke<Void>(0x021BEE40); } // 0x06557F6D96C86881 b1207
	static BOOL IS_SPHERE_VISIBLE(float x, float y, float z, float radius) { return invoke<BOOL>(0x021BEF20, x, y, z, radius); } // 0x2E941B5FFA2989C6 0xDD1329E2 b1207
	static Any _0x190F7DA1AC09A8EF() { return invoke<Any>(0x021BEFF0); } // 0x190F7DA1AC09A8EF b1207
	static void _0xBCDA0BA8762FACB9(Any p0) { invoke<Void>(0x021BF0E0, p0); } // 0xBCDA0BA8762FACB9 b1207
	static void _0x6C1053C433A573CF(Any p0) { invoke<Void>(0x021BF100, p0); } // 0x6C1053C433A573CF b1207
	static void _0x449995EA846D3FC2(Any p0) { invoke<Void>(0x021BF1D0, p0); } // 0x449995EA846D3FC2 b1207
	static void _CLAMP_GAMEPLAY_CAM_YAW(float minimum, float maximum) { invoke<Void>(0x021BF230, minimum, maximum); } // 0x14F3947318CA8AD2 0x749909AC b1207
	static void _CLAMP_GAMEPLAY_CAM_PITCH(float minimum, float maximum) { invoke<Void>(0x021BF2A0, minimum, maximum); } // 0x326C7AA308F3DF6A 0xFA3A16E7 b1207
	static void _ANIMATE_GAMEPLAY_CAM_ZOOM(float p0, float distance) { invoke<Void>(0x021BF310, p0, distance); } // 0x2126C740A4AC370B 0x77340650 b1207
	static void SET_IN_VEHICLE_CAM_STATE_THIS_UPDATE(Vehicle p0, int p1) { invoke<Void>(0x021BF340, p0, p1); } // 0xFA1D5E8D1C3CCD67 0x4B22C5CB b1207
	static void _DISABLE_FIRST_PERSON_CAM_THIS_FRAME() { invoke<Void>(0x021BF350); } // 0x9C473089A934C930 b1207
	static void _0x77D65669A05D1A1A() { invoke<Void>(0x021BF360); } // 0x77D65669A05D1A1A b1207
	static void _0x8910C24B7E0046EC() { invoke<Void>(0x021BF370); } // 0x8910C24B7E0046EC b1207
	static Any _0x74F1D22EFA71FAB8() { return invoke<Any>(0x021BF3A0); } // 0x74F1D22EFA71FAB8 b1207
	static void _0x718C6ECF5E8CBDD4() { invoke<Void>(0x021BF3C0); } // 0x718C6ECF5E8CBDD4 b1207
	static void _FORCE_THIRD_PERSON_CAM_THIS_FRAME() { invoke<Void>(0x021BF3D0); } // 0x8370D34BD2E60B73 b1207
	static void _FORCE_THIRD_PERSON_CAM_FAR_THIS_FRAME() { invoke<Void>(0x021BF3E0); } // 0x1CFB749AD4317BDE b1207
	static BOOL _FORCE_FIRST_PERSON_CAM_THIS_FRAME() { return invoke<BOOL>(0x021BF3F0); } // 0x90DA5BA5C2635416 b1207
	static void _DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2() { invoke<Void>(0x021BF410); } // 0x05AB44D906738426 b1207
	static void _0x632BE8D84846FA56() { invoke<Void>(0x021BF420); } // 0x632BE8D84846FA56 b1207
	static void _0x71D71E08A7ED5BD7(Any p0) { invoke<Void>(0x021BF430, p0); } // 0x71D71E08A7ED5BD7 b1207
	static BOOL IS_FOLLOW_VEHICLE_CAM_ACTIVE() { return invoke<BOOL>(0x021BF530); } // 0xA40C2F51FB589E9A 0x8DD49B77 b1207
	static void _0x7E40A01B11398FCB() { invoke<Void>(0x021BF620); } // 0x7E40A01B11398FCB b1207
	static BOOL IS_AIM_CAM_ACTIVE() { return invoke<BOOL>(0x021BF630); } // 0x698F456FB909E077 0xC24B4F6F b1232
	static BOOL IS_FIRST_PERSON_AIM_CAM_ACTIVE() { return invoke<BOOL>(0x021BF720); } // 0xF63134C54B6EC212 0xD6280468 b1207
	static BOOL IS_FIRST_PERSON_CAMERA_ACTIVE(Any p0, Any p1, Any p2) { return invoke<BOOL>(0x021BF7B0, p0, p1, p2); } // 0xA24C1D341C6E0D53 b1207
	static Any _0xDC62CD70658E7A02() { return invoke<Any>(0x021BF7F0); } // 0xDC62CD70658E7A02 b1207
	static Any _0x796085220ADCC847() { return invoke<Any>(0x021BF910); } // 0x796085220ADCC847 b1207
	static Any _0xB6A80E1E3A5444F1() { return invoke<Any>(0x021BFA30); } // 0xB6A80E1E3A5444F1 b1311
	static Any _0x8B1A5FE7E41E52B2() { return invoke<Any>(0x021BFB70); } // 0x8B1A5FE7E41E52B2 b1311
	static float GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR() { return invoke<float>(0x021BFCB0); } // 0xB4132CA1B0EE1365 0x33951005 b1207
	static void _0x05BD5E4088B30A66(float p0, float p1) { invoke<Void>(0x021BFCC0, p0, p1); } // 0x05BD5E4088B30A66 0x2F29F0D5 b1207
	static void _SET_FIRST_PERSON_CAM_PITCH_RANGE(float p0, float p1) { invoke<Void>(0x021BFE30, p0, p1); } // 0x715B7F5E8BED32A2 0x76DAC96C b1207
	static void _0xC205B3C54C6A4E37(Any p0) { invoke<Void>(0x021BFE90, p0); } // 0xC205B3C54C6A4E37 b1207
	static Vector3 GET_FINAL_RENDERED_CAM_COORD() { return invoke<Vector3>(0x021BFF50); } // 0x5352E025EC2B416F 0x9C84BDA0 b1207
	static Vector3 GET_FINAL_RENDERED_CAM_ROT(int rotationOrder) { return invoke<Vector3>(0x021BFF70, rotationOrder); } // 0x602685BD85DD26CA 0x1FFBEFC5 b1207
	static float GET_FINAL_RENDERED_CAM_FOV() { return invoke<float>(0x021BFFC0); } // 0x04AF77971E508F6A 0x721B763B b1207
	static void SET_GAMEPLAY_COORD_HINT(float x, float y, float z, int duration, int blendOutDuration, int blendInDuration, int unk) { invoke<Void>(0x021BFFD0, x, y, z, duration, blendOutDuration, blendInDuration, unk); } // 0xFA33B8C69A4A6A0F 0xF27483C9 b1207
	static void SET_GAMEPLAY_PED_HINT(Ped p0, float x1, float y1, float z1, BOOL p4, Any p5, Any p6, Any p7) { invoke<Void>(0x021C0070, p0, x1, y1, z1, p4, p5, p6, p7); } // 0x90FB951648851733 0x7C27343E b1207
	static void SET_GAMEPLAY_VEHICLE_HINT(Any p0, float p1, float p2, float p3, BOOL p4, Any p5, Any p6, Any p7) { invoke<Void>(0x021C00A0, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xE2B2BB7DAC280515 0x2C9A11D8 b1207
	static void SET_GAMEPLAY_OBJECT_HINT(Any p0, float p1, float p2, float p3, BOOL p4, Any p5, Any p6, Any p7) { invoke<Void>(0x021C00D0, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xC40551D65F2BF297 0x2ED5E2F8 b1207
	static void SET_GAMEPLAY_ENTITY_HINT(Entity entity, float xOffset, float yOffset, float zOffset, BOOL p4, int p5, int p6, int p7, Any p8) { invoke<Void>(0x021C0100, entity, xOffset, yOffset, zOffset, p4, p5, p6, p7, p8); } // 0xD1F7F32640ADFD12 0x66C32306 b1207
	static BOOL IS_GAMEPLAY_HINT_ACTIVE() { return invoke<BOOL>(0x021C0140); } // 0x2E04AB5FEE042D4A 0xAD8DA205 b1207
	static void STOP_GAMEPLAY_HINT(BOOL p0) { invoke<Void>(0x021C0180, p0); } // 0x1BCEC33D54CFCA8A 0x1BC28B7B b1207
	static void _0x93759A83D0D844E7(BOOL p0) { invoke<Void>(0x021C01A0, p0); } // 0x93759A83D0D844E7 b1207
	static void _0x88544C0E3291DCAE(Any p0) { invoke<Void>(0x021C01C0, p0); } // 0x88544C0E3291DCAE b1207
	static void SET_GAMEPLAY_HINT_FOV(float FOV) { invoke<Void>(0x021C0200, FOV); } // 0x661E58BC6F00A49A 0x96FD173B b1207
	static void SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(float p0) { invoke<Void>(0x021C0270, p0); } // 0xDDDC54181868F81F 0x72E8CD3A b1207
	static void SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(float p0) { invoke<Void>(0x021C02B0, p0); } // 0x421192A2DA48FD01 0x79472AE3 b1207
	static void _SET_GAMEPLAY_HINT_ANIM_OFFSETX(float p0) { invoke<Void>(0x021C02F0, p0); } // 0xF86B6F93727C59C9 0xFC7464A0 b1207
	static void _SET_GAMEPLAY_HINT_ANIM_OFFSETY(float p0) { invoke<Void>(0x021C0330, p0); } // 0x29E74F819150CC32 0x3554AA0E b1207
	static void _0xF48664E9C83825E3(Any p0, Any p1) { invoke<Void>(0x021C0370, p0, p1); } // 0xF48664E9C83825E3 b1207
	static void _0x1F6EBD94680252CE(Any p0, Any p1) { invoke<Void>(0x021C03E0, p0, p1); } // 0x1F6EBD94680252CE b1207
	static void _0xE28F73212A813E82(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x021C0450, p0, p1, p2, p3); } // 0xE28F73212A813E82 b1207
	static void _0x4D2F46D1B28D90FB(Any p0, Any p1) { invoke<Void>(0x021C0470, p0, p1); } // 0x4D2F46D1B28D90FB b1207
	static void _0x65B205BF30C13DDB(Any p0) { invoke<Void>(0x021C06B0, p0); } // 0x65B205BF30C13DDB b1207
	static void _0x641092322A8852AB() { invoke<Void>(0x021C06C0); } // 0x641092322A8852AB b1207
	static void _0xDB382FE20C2DA222(Any p0) { invoke<Void>(0x021C07B0, p0); } // 0xDB382FE20C2DA222 b1207
	static void _0x2DD3149DC34A3F4C(Any p0) { invoke<Void>(0x021C0850, p0); } // 0x2DD3149DC34A3F4C b1207
	static void _FREEZE_GAMEPLAY_CAM_THIS_FRAME() { invoke<Void>(0x021C08F0); } // 0x027CAB2C3AF27010 b1207
	static void _0x3C486E334520579D() { invoke<Void>(0x021C0940); } // 0x3C486E334520579D b1207
	static void _0x41E452A3C580D1A7() { invoke<Void>(0x021C0950); } // 0x41E452A3C580D1A7 b1207
	static void SET_CINEMATIC_BUTTON_ACTIVE(BOOL p0) { invoke<Void>(0x021C0A30, p0); } // 0xB90411F480457A6C 0x3FBC5D00 b1207
	static BOOL IS_CINEMATIC_CAM_RENDERING() { return invoke<BOOL>(0x021C0A80); } // 0xBF7C780731AADBF8 0x80471AD9 b1207
	static void _DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME() { invoke<Void>(0x021C0AA0); } // 0xA5929C2E57AC90D1 0x5AC6DAC9 b1207
	static void _INVALIDATE_VEHICLE_IDLE_CAM() { invoke<Void>(0x021C0AD0); } // 0x634F4A0562CF19B8 0x65DDE8AF b1207
	static void FORCE_CINEMATIC_RENDERING_THIS_UPDATE(BOOL p0) { invoke<Void>(0x021C0B90, p0); } // 0x702B75DC9D3EDE56 0xFBB85E02 b1207
	static void _0x9AC65A36D3C0C189(Any p0) { invoke<Void>(0x021C0BE0, p0); } // 0x9AC65A36D3C0C189 b1207
	static Any _0x975F6EBB62632FE3() { return invoke<Any>(0x021C0C30); } // 0x975F6EBB62632FE3 b1207
	static void SET_CINEMATIC_MODE_ACTIVE(BOOL p0) { invoke<Void>(0x021C0C50, p0); } // 0xCE7A90B160F75046 0x2009E747 b1207
	static BOOL _0x1811A02277A9E49D() { return invoke<BOOL>(0x021C0CA0); } // 0x1811A02277A9E49D b1207
	static void _0xE3639DB78B3B5400(Any p0) { invoke<Void>(0x021C0CD0, p0); } // 0xE3639DB78B3B5400 b1207
	static void _0x986F7A51EE3E1F92(Any p0, Any p1) { invoke<Void>(0x021C0DF0, p0, p1); } // 0x986F7A51EE3E1F92 b1207
	static void _0x5B637D6F3B67716A(Any p0) { invoke<Void>(0x021C0E10, p0); } // 0x5B637D6F3B67716A b1207
	static void _0xC252C0CC969AF79A(Any p0) { invoke<Void>(0x021C0E20, p0); } // 0xC252C0CC969AF79A b1207
	static void _0xE2BB2D6A9FE2ECDE(Any p0) { invoke<Void>(0x021C0E70, p0); } // 0xE2BB2D6A9FE2ECDE b1207
	static void _0x6E969927CF632608(Any p0) { invoke<Void>(0x021C0EC0, p0); } // 0x6E969927CF632608 b1207
	static Any _0x6072B7420A83A03F() { return invoke<Any>(0x021C0ED0); } // 0x6072B7420A83A03F b1207
	static Any _0x1204EB53A5FBC63D() { return invoke<Any>(0x021C1000); } // 0x1204EB53A5FBC63D b1207
	static void _0x6519238858AF5479(Any p0) { invoke<Void>(0x021C10E0, p0); } // 0x6519238858AF5479 b1207
	static void _0x2F994CC29CAA9D22(Any p0) { invoke<Void>(0x021C1120, p0); } // 0x2F994CC29CAA9D22 b1207
	static Any _0xA14D5FE82BCB1D9E() { return invoke<Any>(0x021C1250); } // 0xA14D5FE82BCB1D9E b1207
	static Any _0x6DFD37E586D4F44F() { return invoke<Any>(0x021C12F0); } // 0x6DFD37E586D4F44F b1207
	static Any _0x80D7A3E39B120BC4() { return invoke<Any>(0x021C13A0); } // 0x80D7A3E39B120BC4 b1207
	static void _0x63E5841A9264D016(Any p0) { invoke<Void>(0x021C1440, p0); } // 0x63E5841A9264D016 b1207
	static void _TRIGGER_MISSION_FAILED_CAM() { invoke<Void>(0x021C1510); } // 0x9A92C06ACBAF9731 b1207
	static void _0x16E9ABDD34DDD931() { invoke<Void>(0x021C1590); } // 0x16E9ABDD34DDD931 b1207
	static BOOL IS_DEATH_FAIL_CAMERA_RUNNING() { return invoke<BOOL>(0x021C15B0); } // 0x139EFB0A71DD9011 b1207
	static Any _0x7CE9DC58E3E4755F() { return invoke<Any>(0x021C1610); } // 0x7CE9DC58E3E4755F b1207
	static void _0x3B8E3AD9677CE12B(Any p0, Any p1, Any p2) { invoke<Void>(0x021C1670, p0, p1, p2); } // 0x3B8E3AD9677CE12B b1207
	static void _0xDF7F5BE9150E47E4(Any p0) { invoke<Void>(0x021C1700, p0); } // 0xDF7F5BE9150E47E4 b1207
	static void _0xB85C13E0BF1F2A1C(Any p0) { invoke<Void>(0x021C1720, p0); } // 0xB85C13E0BF1F2A1C b1207
	static void _0x066167C63111D8CF(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x021C17C0, p0, p1, p2, p3, p4); } // 0x066167C63111D8CF b1207
	static void _0xA8BA2E0204D8486F() { invoke<Void>(0x021C1970); } // 0xA8BA2E0204D8486F b1355
	static void _0xC3742F1FDF0A6824() { invoke<Void>(0x021C1980); } // 0xC3742F1FDF0A6824 b1355
	static void _0x0FF7125F07DEB84F(Any p0, Any p1) { invoke<Void>(0x021C1A60, p0, p1); } // 0x0FF7125F07DEB84F b1207
	static void _0x6CAB0BA160B168D2() { invoke<Void>(0x021C1B10); } // 0x6CAB0BA160B168D2 b1207
	static void _0x1B3C2D961F5FC0E1(Any p0) { invoke<Void>(0x021C1BF0, p0); } // 0x1B3C2D961F5FC0E1 b1207
	static void _0x2412216FCC7B4E3E(Any p0) { invoke<Void>(0x021C1CA0, p0); } // 0x2412216FCC7B4E3E b1207
	static Any _0xAA235E2F2C09E952(Any p0) { return invoke<Any>(0x021C1CE0, p0); } // 0xAA235E2F2C09E952 b1207
	static Any _0x595550376B7EA230(Any p0) { return invoke<Any>(0x021C1D50, p0); } // 0x595550376B7EA230 b1207
	static Any _0x465F04F68AD38197(Any p0, Any p1, Any p2) { return invoke<Any>(0x021C1DC0, p0, p1, p2); } // 0x465F04F68AD38197 b1207
	static Any _0xEA113BF9B0C0C5D7(Any p0, Any p1, Any p2) { return invoke<Any>(0x021C1E40, p0, p1, p2); } // 0xEA113BF9B0C0C5D7 b1207
	static void _0xBC016635D6A73B31(Any* p0, Any* p1, Any p2) { invoke<Void>(0x021C1EC0, p0, p1, p2); } // 0xBC016635D6A73B31 b1207
	static void CINEMATIC_LOCATION_TRIGGER_SCRIPTED_SHOT_EVENT(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x021C1F20, p0, p1, p2, p3); } // 0x02389579A53C3276 b1207
	static void _0xA54D643D0773EB65(Any p0, Any p1, Any p2) { invoke<Void>(0x021C1F90, p0, p1, p2); } // 0xA54D643D0773EB65 b1207
	static void CINEMATIC_LOCATION_STOP_SCRIPTED_SHOT_EVENT(Any p0, Any p1, Any p2) { invoke<Void>(0x021C1FF0, p0, p1, p2); } // 0x6D4D25C2137FF511 b1207
	static Any _0xC3AEBB276825A359(Any* p0, Any* p1, Any p2) { return invoke<Any>(0x021C2060, p0, p1, p2); } // 0xC3AEBB276825A359 b1436
	static Any _0x1D931B7CC0EE3956(Any* p0, Any* p1, Any* p2) { return invoke<Any>(0x021C20D0, p0, p1, p2); } // 0x1D931B7CC0EE3956 b1436
	static void _0x0E94C95EC3185FA9(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x021C2150, p0, p1, p2, p3, p4, p5, p6); } // 0x0E94C95EC3185FA9 b1207
	static void _0x0B0F914459731F60(Any p0, Any p1) { invoke<Void>(0x021C21E0, p0, p1); } // 0x0B0F914459731F60 b1311
	static void _LOAD_CAMERA_DATA_DICT(const char* cameraDictionary) { invoke<Void>(0x021C2340, cameraDictionary); } // 0x6A4D224FC7643941 b1207
	static void _UNLOAD_CAMERA_DATA_DICT(const char* cameraDictionary) { invoke<Void>(0x021C23F0, cameraDictionary); } // 0x798BE43C9393632B b1207
	static BOOL _IS_CAM_DATA_DICT_LOADED(const char* cameraDictionary) { return invoke<BOOL>(0x021C2430, cameraDictionary); } // 0xDD0B7C5AE58F721D b1207
	static Any _0xC285FD21294A1C49(Any p0) { return invoke<Any>(0x021C24A0, p0); } // 0xC285FD21294A1C49 b1207
	static void _CAM_CREATE(const char* cameraDictionary) { invoke<Void>(0x021C2510, cameraDictionary); } // 0xB8B207C34285E978 b1207
	static void _CAM_DESTROY(const char* cameraDictionary) { invoke<Void>(0x021C26C0, cameraDictionary); } // 0x0A5A4F1979ABB40E b1207
	static BOOL _IS_CAMERA_AVAILABLE(const char* cameraDictionary) { return invoke<BOOL>(0x021C26D0, cameraDictionary); } // 0x927B810E43E99932 b1207
	static Any _0x4138EE36BC3DC0A7(Any p0, Any p1) { return invoke<Any>(0x021C2820, p0, p1); } // 0x4138EE36BC3DC0A7 b1207
	static void _0xFEB8646818294C75(Any p0, Any p1) { invoke<Void>(0x021C29A0, p0, p1); } // 0xFEB8646818294C75 b1207
	static void _0x29E6655DF3590B0D(Any p0) { invoke<Void>(0x021C29B0, p0); } // 0x29E6655DF3590B0D b1207
	static void _0xAC77757C05DE9E5A(const char* cameraDictionary) { invoke<Void>(0x021C29C0, cameraDictionary); } // 0xAC77757C05DE9E5A b1207
	static void _0x8E036B41C37D0E5F(Any p0) { invoke<Void>(0x021C29D0, p0); } // 0x8E036B41C37D0E5F b1207
	static void _0x1D9F72DD4FD9A9D7(Any p0) { invoke<Void>(0x021C29E0, p0); } // 0x1D9F72DD4FD9A9D7 b1207
	static void _CAM_CREATE_2(const char* cameraDictionary) { invoke<Void>(0x021C29F0, cameraDictionary); } // 0x7B0279170961A73F b1207
	static void _0x728491FB3DFFEF99(Any p0) { invoke<Void>(0x021C2A00, p0); } // 0x728491FB3DFFEF99 b1207
	static Any _0x14C4A49E36C29E49() { return invoke<Any>(0x022190E0); } // 0x14C4A49E36C29E49 b1207
	static Any _0xF824530B612FE0CE() { return invoke<Any>(0x02219110); } // 0xF824530B612FE0CE b1207
	static Any _0xEF9A3132A0AA6B19() { return invoke<Any>(0x022191B0); } // 0xEF9A3132A0AA6B19 b1207
	static Any _0x5060FA977CEA4455() { return invoke<Any>(0x02219270); } // 0x5060FA977CEA4455 b1207
	static float _GET_PHOTO_MODE_FOCAL_LENGTH() { return invoke<float>(0x02219290); } // 0x2533BAFFBE737E54 b1207
	static float _GET_PHOTO_MODE_FOCUS_DISTANCE() { return invoke<float>(0x022192B0); } // 0x18FC740FFDCD7454 b1207
	static float _GET_PHOTO_MODE_DOF() { return invoke<float>(0x02219390); } // 0x4653A741D17F2CD0 b1207
	static Any _0x2AB7C81B3F70570C() { return invoke<Any>(0x022193B0); } // 0x2AB7C81B3F70570C b1207
	static void _0x8505E05FC8822843(Any p0) { invoke<Void>(0x02219480, p0); } // 0x8505E05FC8822843 b1207
}

namespace CLOCK
{
	static void SET_CLOCK_TIME(int hour, int minute, int second) { invoke<Void>(0x021C5C40, hour, minute, second); } // 0x3A52C59FFB2DEED8 0x26F6AF14 b1207
	static void PAUSE_CLOCK(BOOL toggle, Any unused) { invoke<Void>(0x021C5D20, toggle, unused); } // 0x4D1A590C92BF377E 0xB02D6124 b1207
	static void _PAUSE_CLOCK_THIS_FRAME(BOOL toggle) { invoke<Void>(0x021C5D50, toggle); } // 0x568D998A9FF96774 b1207
	static void ADVANCE_CLOCK_TIME_TO(int hour, int minute, int second) { invoke<Void>(0x021C5D70, hour, minute, second); } // 0x0184750AE88D0B1D 0x57B8DA7C b1207
	static void ADD_TO_CLOCK_TIME(int hours, int minutes, int seconds) { invoke<Void>(0x021C5D90, hours, minutes, seconds); } // 0xAB7C251C7701D336 0xCC40D20D b1207
	static int GET_CLOCK_HOURS() { return invoke<int>(0x021C5DB0); } // 0xC82CF208C2B19199 0x7EF8316F b1207
	static int GET_CLOCK_MINUTES() { return invoke<int>(0x021C5DC0); } // 0x4E162231B823DBBF 0x94AAC486 b1207
	static int GET_CLOCK_SECONDS() { return invoke<int>(0x021C5DD0); } // 0xB6101ABE62B5F080 0x099C927E b1207
	static void _SET_MILLISECONDS_PER_GAME_MINUTE(int ms) { invoke<Void>(0x021C5DE0, ms); } // 0x04EEDB3848DACF68 b1207
	static int _GET_SECONDS_SINCE_BASE_YEAR() { return invoke<int>(0x021C5E00); } // 0x78FD8BE812E436B2 b1207
	static void SET_CLOCK_DATE(int day, int month, int year) { invoke<Void>(0x021C5E30, day, month, year); } // 0x02AD3092562941E2 0x96891C94 b1207
	static int GET_CLOCK_DAY_OF_WEEK() { return invoke<int>(0x021C5F70); } // 0x4DD02D4C7FB30076 0x84E4A289 b1207
	static int GET_CLOCK_DAY_OF_MONTH() { return invoke<int>(0x021C5F80); } // 0xDF2FD796C54480A5 0xC7A5ACB7 b1207
	static int GET_CLOCK_MONTH() { return invoke<int>(0x021C5F90); } // 0x2D44E8FC79EAB1AC 0x3C48A3D5 b1207
	static int GET_CLOCK_YEAR() { return invoke<int>(0x021C5FA0); } // 0xE136DCA28C4A48BA 0xB8BECF15 b1207
	static int GET_MILLISECONDS_PER_GAME_MINUTE() { return invoke<int>(0x021C5FB0); } // 0xE4CB8D126501EC52 0x3B74095C b1207
	static void GET_POSIX_TIME(int* year, int* month, int* day, int* hour, int* minute, int* second) { invoke<Void>(0x021C5FC0, year, month, day, hour, minute, second); } // 0x90338AD4A784E455 0xE15A5281 b1207
	static void _GET_POSIX_TIME_STRUCT(Any* outTime) { invoke<Void>(0x021C6030, outTime); } // 0x86A68E84E5884951 b1207
	static void _ADD_TIME_TO_DATE_TIME(Any* inDateTime, Any* timeToAdd, Any* outDateTime) { invoke<Void>(0x021C6090, inDateTime, timeToAdd, outDateTime); } // 0x28EEACE9B43D9597 b1207
}

namespace COLLECTION
{
	static Any _0x725D52F21A5E9EF6(Any p0) { return invoke<Any>(0x021CAF90, p0); } // 0x725D52F21A5E9EF6 b1207
	static Any _0x6052B4DE6657684F(Any p0) { return invoke<Any>(0x021CAFF0, p0); } // 0x6052B4DE6657684F b1207
	static Any _0x922A79CD4A033B8B(Any p0) { return invoke<Any>(0x021CB050, p0); } // 0x922A79CD4A033B8B b1207
	static Vector3 _0x1F1DD794908C2BFA(Any p0) { return invoke<Vector3>(0x021CB0B0, p0); } // 0x1F1DD794908C2BFA b1207
	static Any _0xF83D3DDA4D3C8169(Any p0) { return invoke<Any>(0x021CB150, p0); } // 0xF83D3DDA4D3C8169 b1207
	static Any _0x9A03F22AD446EEAC(Any p0) { return invoke<Any>(0x021CB1D0, p0); } // 0x9A03F22AD446EEAC b1207
	static void _0x3EA62E56F386C997(Any p0, Any p1) { invoke<Void>(0x021CB250, p0, p1); } // 0x3EA62E56F386C997 b1207
	static void _0x398FAB9C96A81924(Any p0, Any p1) { invoke<Void>(0x021CB2B0, p0, p1); } // 0x398FAB9C96A81924 b1207
	static Any _0x62CAB7DB62EAD434(Any p0, Any p1) { return invoke<Any>(0x021CB310, p0, p1); } // 0x62CAB7DB62EAD434 b1207
	static Any _0x126CBEBBA46693CF(Any p0, Any p1, Any p2) { return invoke<Any>(0x021CB3E0, p0, p1, p2); } // 0x126CBEBBA46693CF b1207
	static Any _0x5461C821D00FE15A(Any p0, Any p1) { return invoke<Any>(0x021CB4C0, p0, p1); } // 0x5461C821D00FE15A b1207
	static Any _0x3A65F4844913A047(Any p0, Any p1) { return invoke<Any>(0x021CB580, p0, p1); } // 0x3A65F4844913A047 b1207
	static Any _0x33825A7388A6B9F6(Any p0, Any p1) { return invoke<Any>(0x021CB640, p0, p1); } // 0x33825A7388A6B9F6 b1207
	static Any _0x755901C7598B97BC(Any p0, Any p1) { return invoke<Any>(0x021CB700, p0, p1); } // 0x755901C7598B97BC b1207
	static Any _0xB9020EC89C07DF04(Any p0, Any p1, Any p2) { return invoke<Any>(0x021CB770, p0, p1, p2); } // 0xB9020EC89C07DF04 b1207
	static Any _0xFC832B06127D8E99(Any p0, Any p1) { return invoke<Any>(0x021CB7F0, p0, p1); } // 0xFC832B06127D8E99 b1207
	static void COLLECTABLE_CATEGORY_SET_HAS_RECEIVED_LIST(Any p0, Any p1, Any p2) { invoke<Void>(0x021CB860, p0, p1, p2); } // 0x0B6D275D2F242E17 b1207
	static Any _0x6BAB7ACED1017204(Any p0, Any p1) { return invoke<Any>(0x021CB8D0, p0, p1); } // 0x6BAB7ACED1017204 b1207
	static Any _0x61BEFBA3CE7A3BC8(Any p0, Any p1) { return invoke<Any>(0x021CB940, p0, p1); } // 0x61BEFBA3CE7A3BC8 b1232
	static Any _0xC4AC39719C1BB559(Any p0, Any p1) { return invoke<Any>(0x021CB9B0, p0, p1); } // 0xC4AC39719C1BB559 b1232
	static Any _0x93F2E7B5DB85657B(Any p0, Any p1) { return invoke<Any>(0x021CBAA0, p0, p1); } // 0x93F2E7B5DB85657B b1207
	static Hash COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(Hash p0, Hash p1) { return invoke<Hash>(0x021CBB90, p0, p1); } // 0xCC644BC1DD655269 b1207
	static Any _0x9ADEE485726025D4(Any p0) { return invoke<Any>(0x021CBC90, p0); } // 0x9ADEE485726025D4 b1207
	static Any _0xD1806FB3EDED6D11(Any p0, Any p1) { return invoke<Any>(0x021CBDB0, p0, p1); } // 0xD1806FB3EDED6D11 b1232
	static Any _0x3FD91F1A148A0468(Any p0, Any p1) { return invoke<Any>(0x021CBEE0, p0, p1); } // 0x3FD91F1A148A0468 b1232
	static Any _0xC3CA424E1F12ED0C(Any p0, Any p1) { return invoke<Any>(0x021CC010, p0, p1); } // 0xC3CA424E1F12ED0C b1232
	static Any _0xD52D20B0C76BB26D(Any p0, Any p1) { return invoke<Any>(0x021CC140, p0, p1); } // 0xD52D20B0C76BB26D b1207
	static Any _0x13AAECDA43318BFE(Any p0, Any p1) { return invoke<Any>(0x021CC220, p0, p1); } // 0x13AAECDA43318BFE b1207
	static Any _0xD297F68928A58130(Any p0, Any p1) { return invoke<Any>(0x021CC300, p0, p1); } // 0xD297F68928A58130 b1232
	static Any _0x775FA1FC87666847(Any p0, Any p1) { return invoke<Any>(0x021CC430, p0, p1); } // 0x775FA1FC87666847 b1232
	static Any _0xEC3959E9950BF56B(Any p0) { return invoke<Any>(0x021CC560, p0); } // 0xEC3959E9950BF56B b1207
}

namespace COMPANION
{
	static void _0xD730281E496621FB(Any p0, Any p1) { invoke<Void>(0x021D2C50, p0, p1); } // 0xD730281E496621FB b1207
	static void _0xBF6583E926D13890(Any p0, Any p1) { invoke<Void>(0x021D2ED0, p0, p1); } // 0xBF6583E926D13890 b1207
	static void _0x0A8FD91EDE7B328A(Any p0, Any p1) { invoke<Void>(0x021D3140, p0, p1); } // 0x0A8FD91EDE7B328A b1207
	static void _0x991E3346D788F20F(Any p0, Any p1) { invoke<Void>(0x021D33C0, p0, p1); } // 0x991E3346D788F20F b1207
	static void _0xCE27824B5968B79A(Any p0, Any p1) { invoke<Void>(0x021D3640, p0, p1); } // 0xCE27824B5968B79A b1207
	static void _0xF06CBB8CCCA823C0(Any p0, Any p1) { invoke<Void>(0x021D38B0, p0, p1); } // 0xF06CBB8CCCA823C0 b1207
	static void _0x2917E634206B9E17(Any p0, Any p1) { invoke<Void>(0x021D3B30, p0, p1); } // 0x2917E634206B9E17 b1207
	static void _0xD428C3F92FC3F6F8(Any p0, Any p1) { invoke<Void>(0x021D3DB0, p0, p1); } // 0xD428C3F92FC3F6F8 b1207
	static void _0xDEB369F6AD168C58(Any p0, Any p1) { invoke<Void>(0x021D3E80, p0, p1); } // 0xDEB369F6AD168C58 b1207
	static void _0x1740E3DEE0AE4D27(Any p0, Any p1) { invoke<Void>(0x021D4100, p0, p1); } // 0x1740E3DEE0AE4D27 b1207
	static void _0x0DE02DA3C0F66955(Any p0, Any p1) { invoke<Void>(0x021D4380, p0, p1); } // 0x0DE02DA3C0F66955 b1207
	static void _0x0F1CD8CA9E65D5F6(Any p0, Any p1) { invoke<Void>(0x021D4450, p0, p1); } // 0x0F1CD8CA9E65D5F6 b1207
	static Any _0xB7E0590C86E1711F(Any p0) { return invoke<Any>(0x021D4460, p0); } // 0xB7E0590C86E1711F b1207
	static void _0xA079FF7CFB9AC8BD(Any p0, Any p1) { invoke<Void>(0x021D46B0, p0, p1); } // 0xA079FF7CFB9AC8BD b1207
	static void _0x61BDA07407754A5C(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x021D46C0, p0, p1, p2, p3); } // 0x61BDA07407754A5C b1207
	static void _0xD55A871E1CE3481B(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x021D4790, p0, p1, p2, p3); } // 0xD55A871E1CE3481B b1207
	static void _0x0C6A00DAE896614C(Any p0, Any p1) { invoke<Void>(0x021D47A0, p0, p1); } // 0x0C6A00DAE896614C b1207
	static void _0x8FB98B719AA0075A(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x021D4870, p0, p1, p2, p3, p4); } // 0x8FB98B719AA0075A b1207
	static void _0x9C902084F48D2E6C(Any p0) { invoke<Void>(0x021D4890, p0); } // 0x9C902084F48D2E6C b1207
	static void _0xD747979C053EFA7A(Any p0) { invoke<Void>(0x021D48A0, p0); } // 0xD747979C053EFA7A b1207
	static void _0x3CAAD93FA5B9579A(Any p0, Any p1, Any p2) { invoke<Void>(0x021D48B0, p0, p1, p2); } // 0x3CAAD93FA5B9579A b1207
	static void _0x7274F84B1501B523(Any p0) { invoke<Void>(0x021D4990, p0); } // 0x7274F84B1501B523 b1207
	static Any _0x722FBE08EF5B87BD(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x021D49A0, p0, p1, p2, p3, p4); } // 0x722FBE08EF5B87BD b1207
	static void _0xCBD9EC60495C728C(Any p0) { invoke<Void>(0x021D49D0, p0); } // 0xCBD9EC60495C728C b1207
	static void _0x72B7F65F11FC8896(Any p0) { invoke<Void>(0x021D49F0, p0); } // 0x72B7F65F11FC8896 b1207
}

namespace COMPENDIUM
{
	static Any _0x725D52F21A5E9E22(Hash category) { return invoke<Any>(0xDEADBEEF, category); } // 0x725D52F21A5E9E22 b1207
	static Any _0x729D52F61A5A9E22(Hash category) { return invoke<Any>(0x021DB2A0, category); } // 0x729D52F61A5A9E22 b1207
	static Any _0x729D52461AEA9E22(Hash category) { return invoke<Any>(0x021DB320, category); } // 0x729D52461AEA9E22 b1207
	static Any COMPENDIUM_GET_SHORT_DESCRIPTION_FROM_PED(Ped ped) { return invoke<Any>(0x021DB3A0, ped); } // 0x6C5E5D48E48B4C65 b1207
	static Any _0x9B657550DF55EC96(Hash p0, Ped ped) { return invoke<Any>(0x021DB3C0, p0, ped); } // 0x9B657550DF55EC96 b1311
	static Any _0xCD278B6BFBDBDC22(Any p0, Any p1) { return invoke<Any>(0x021DB5B0, p0, p1); } // 0xCD278B6BFBDBDC22 b1355
	static Any COMPENDIUM_GET_NUM_ENTRIES_IN_SUBCATEGORY(Hash p0, Hash p1) { return invoke<Any>(0x021DB740, p0, p1); } // 0xF58A0C0E086E8E36 b1311
	static Any COMPENDIUM_GET_ENTRY_BY_INDEX_IN_SUBCATEGORY(Hash p0, Any p1, Any p2) { return invoke<Any>(0x021DB7B0, p0, p1, p2); } // 0x5CEB63B2E3D9895F b1311
	static Any _0x1CFA0219D8E1CF25(Any p0, Any p1) { return invoke<Any>(0x021DB820, p0, p1); } // 0x1CFA0219D8E1CF25 b1311
	static Any COMPENDIUM_GET_ENTRY_BY_STAT_ITEM(Any p0, Any p1) { return invoke<Any>(0x021DB940, p0, p1); } // 0x66EC938394D76C85 b1355
	static Any COMPENDIUM_GET_SUBCATEGORY_TOAST_APP_ID(Any p0, Any p1) { return invoke<Any>(0x021DBA50, p0, p1); } // 0x2BF30D9D4D680112 b1311
	static Any COMPENDIUM_GET_MAP_DISCOVERABLE_FROM_STAT_ITEM(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x021DBAC0, p0, p1, p2, p3); } // 0x729D54121A5E9E20 b1207
	static void COMPENDIUM_ANIMAL_OBSERVED_BY_STAT_NAME(Hash animalType, BOOL p1) { invoke<Void>(0xDEADBEEF, animalType, p1); } // 0x725D52F26A5E9E10 b1207
	static Any _0x23B5E9C5160BC04F(Any p0) { return invoke<Any>(0x021DBB10, p0); } // 0x23B5E9C5160BC04F b1311
	static void COMPENDIUM_ANIMAL_SET_DISCOVERED(Any p0) { invoke<Void>(0x021DBC30, p0); } // 0x67F35C7C9F2BDCFE b1311
	static Any _0x9F678782720349E4(Any p0) { return invoke<Any>(0x021DBD50, p0); } // 0x9F678782720349E4 b1311
	static Any COMPENDIUM_ANIMAL_GET_SAMPLE_INVENTORY_ITEM(Any p0) { return invoke<Any>(0x021DBD70, p0); } // 0x4E4ACAE1C671A9DA b1311
	static Any COMPENDIUM_ANIMAL_HAS_SAMPLE(Any p0) { return invoke<Any>(0x021DBEA0, p0); } // 0x6FC24625E4FCAC27 b1311
	static Any COMPENDIUM_ANIMAL_HAS_STAMP(Any p0) { return invoke<Any>(0x021DC050, p0); } // 0xBCF569FC32FFF456 b1311
	static Any COMPENDIUM_GET_SUBCATEGORY_SAMPLE_TOAST_TITLE(Any p0, Any p1) { return invoke<Any>(0x021DC1F0, p0, p1); } // 0x5E50C67EB60951E6 b1311
	static Any COMPENDIUM_GET_SUBCATEGORY_SAMPLE_TOAST_DESC_PROGRESS(Any p0, Any p1) { return invoke<Any>(0x021DC2A0, p0, p1); } // 0x82BFB5B367957699 b1311
	static Any COMPENDIUM_GET_SUBCATEGORY_SAMPLE_TOAST_DESC_COMPLETE(Any p0, Any p1) { return invoke<Any>(0x021DC350, p0, p1); } // 0x59D4D68CDB82427C b1311
	static void COMPENDIUM_FISH_CAUGHT(Any p0, Any p1) { invoke<Void>(0x021DB200, p0, p1); } // 0x725D52F21A5E9E00 b1207
	static Any COMPENDIUM_FISH_GET_LURE_SUITABILITY_BY_STAT_ITEM(Any p0, Any p1) { return invoke<Any>(0xDEADBEEF, p0, p1); } // 0x725D52F21A5E9E81 b1207
	static void COMPENDIUM_GANG_CAMP_FOUND(Any p0, Any p1) { invoke<Void>(0xDEADBEEF, p0, p1); } // 0x725D52F21A5E9E03 b1207
	static void COMPENDIUM_GANG_AMBUSH_SURVIVED(Any p0) { invoke<Void>(0xDEADBEEF, p0); } // 0x725D52F21A5E9E04 b1207
	static void COMPENDIUM_GANG_ENCOUNTERED(Any p0) { invoke<Void>(0xDEADBEEF, p0); } // 0x725D52F21A5E9E05 b1207
	static void COMPENDIUM_GANG_BOUNTY_CAPTURED(Any p0) { invoke<Void>(0xDEADBEEF, p0); } // 0x725D52F21A5E9E06 b1207
	static void COMPENDIUM_GANG_MEMBER_KILLED(Any p0) { invoke<Void>(0xDEADBEEF, p0); } // 0x725D52F21A5E9E07 b1207
	static void COMPENDIUM_GANG_HIDEOUT_FOUND(Any p0, Any p1) { invoke<Void>(0xDEADBEEF, p0, p1); } // 0x725D52F21A5E9E08 b1207
	static void COMPENDIUM_HERB_PICKED(Hash herbType, float x, float y, float z) { invoke<Void>(0xDEADBEEF, herbType, x, y, z); } // 0x725D52F21A5E9E09 b1207
	static void COMPENDIUM_HORSE_BONDING(Ped ped, int bondingLevel) { invoke<Void>(0xDEADBEEF, ped, bondingLevel); } // 0x725D52F21A5E9E50 b1207
	static void COMPENDIUM_HORSE_WILD_BROKEN(Any p0) { invoke<Void>(0x021DCDF0, p0); } // 0x725852D21A2E9E50 b1207
	static void COMPENDIUM_HORSE_OBSERVED(Any p0, Any p1) { invoke<Void>(0x021DCF30, p0, p1); } // 0x725D58F2125E5E50 b1207
}

namespace CRASHLOG
{
	static void _0x0FD3ECF9D0C8655F(const char* p0) { invoke<Void>(0x021DECA0, p0); } // 0x0FD3ECF9D0C8655F b1207
	static void _0xCA0BAC376C541978(const char* p0) { invoke<Void>(0x021DECC0, p0); } // 0xCA0BAC376C541978 b1207
	static BOOL _0x3A66F1963B223F61(const char* p0) { return invoke<BOOL>(0x021DEDC0, p0); } // 0x3A66F1963B223F61 b1207
	static BOOL _0x7C680FF55617F82F() { return invoke<BOOL>(0x021DEDF0); } // 0x7C680FF55617F82F b1207
	static BOOL _0xD8E3D22AA4F0E0A5(const char* p0) { return invoke<BOOL>(0x021DEE20, p0); } // 0xD8E3D22AA4F0E0A5 b1207
	static BOOL _0xA67F0B039D9CD513(BOOL p0) { return invoke<BOOL>(0x021DEE50, p0); } // 0xA67F0B039D9CD513 b1207
	static BOOL _0xE72E234B30DA7B7A(int p0) { return invoke<BOOL>(0x021DEE90, p0); } // 0xE72E234B30DA7B7A b1207
	static BOOL _0x87F005C969EF1563(float p0) { return invoke<BOOL>(0x021DEEC0, p0); } // 0x87F005C969EF1563 b1207
	static BOOL _0x23CCAB8F40B9CBEE(float x, float y, float z) { return invoke<BOOL>(0x021DEF00, x, y, z); } // 0x23CCAB8F40B9CBEE b1207
	static BOOL _0xF0D545C1EEAD614A() { return invoke<BOOL>(0x021DEF50); } // 0xF0D545C1EEAD614A b1207
	static BOOL _0x33C1D63E55FA4284(const char* p0) { return invoke<BOOL>(0x021DEF80, p0); } // 0x33C1D63E55FA4284 b1207
	static void _0x4E42CA5BCD45444A() { invoke<Void>(0x021DEFB0); } // 0x4E42CA5BCD45444A b1207
	static void _0xDA05310EA94DC8C6(const char* p0, const char* p1) { invoke<Void>(0x021DF0E0, p0, p1); } // 0xDA05310EA94DC8C6 b1436
}

namespace CREW
{
	static BOOL NETWORK_FIND_GAMERS_IN_CREW(Any p0) { return invoke<BOOL>(0x021E58D0, p0); } // 0xE532D6811B3A4D2A 0x7771AB83 b1207
	static BOOL NETWORK_CLAN_SERVICE_IS_VALID() { return invoke<BOOL>(0x021E59A0); } // 0x579CCED0265D4896 0xF5F4BD95 b1207
	static BOOL NETWORK_CLAN_PLAYER_IS_ACTIVE(Any* gamerHandle) { return invoke<BOOL>(0x021E59D0, gamerHandle); } // 0xB124B57F571D8F18 0xAB8319A3 b1207
	static BOOL NETWORK_CLAN_PLAYER_GET_DESC(Any* clanDesc, int bufferSize, Any* gamerHandle) { return invoke<BOOL>(0x021E5AD0, clanDesc, bufferSize, gamerHandle); } // 0xEEE6EACBE8874FBA 0x6EE4A282 b1207
	static int NETWORK_CLAN_GET_LOCAL_MEMBERSHIPS_COUNT() { return invoke<int>(0x021E5B00); } // 0x1F471B79ACC90BEF 0x807B3450 b1207
	static BOOL NETWORK_CLAN_GET_MEMBERSHIP_DESC(Any* memberDesc, int p1) { return invoke<BOOL>(0x021E5B30, memberDesc, p1); } // 0x48DE78AF2C8885B8 0x3369DD1F b1207
	static Any _0x58D378AF2C8765B7(Any p0) { return invoke<Any>(0x021E5B60, p0); } // 0x58D378AF2C8765B7 b1207
	static Any _0xC685B014CE3D988B(Any p0) { return invoke<Any>(0x021E5B90, p0); } // 0xC685B014CE3D988B b1207
	static Any _0x8E2143144B8E188D(Any p0) { return invoke<Any>(0x021E5BD0, p0); } // 0x8E2143144B8E188D b1207
	static BOOL NETWORK_CLAN_REQUEST_EMBLEM(Any p0) { return invoke<BOOL>(0x021E5C10, p0); } // 0x13518FF1C6B28938 0x7963FA4D b1207
	static BOOL NETWORK_CLAN_IS_EMBLEM_READY(Any p0, Any* p1) { return invoke<BOOL>(0x021E5DE0, p0, p1); } // 0xA134777FF7F33331 0x88B13CDC b1207
	static void NETWORK_CLAN_RELEASE_EMBLEM(Any p0) { invoke<Void>(0x021E5ED0, p0); } // 0x113E6E3E50E286B0 0xD6E3D5EA b1207
	static Any NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR() { return invoke<Any>(0x021E60C0); } // 0x9AA46BADAD0E27ED 0xE22445DA b1207
	static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_START(Any* p0, Any p1) { return invoke<BOOL>(0x021E60E0, p0, p1); } // 0xCE86D8191B762107 0x89DB0EC7 b1207
	static Any NETWORK_GET_PRIMARY_CLAN_DATA_PENDING() { return invoke<Any>(0x021E6110); } // 0xB5074DB804E28CE7 0xA4EF02F3 b1207
	static Any NETWORK_GET_PRIMARY_CLAN_DATA_SUCCESS() { return invoke<Any>(0x021E6130); } // 0x5B4F04F19376A0BA 0x068A054E b1207
	static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_NEW(Any* p0, Any* p1) { return invoke<BOOL>(0x021E6150, p0, p1); } // 0xC080FF658B2E41DA 0x9B8631EB b1207
	static Any _0xC080FF658B2E51DA(Any p0) { return invoke<Any>(0xDEADBEEF, p0); } // 0xC080FF658B2E51DA b1207
}

namespace DATABINDING
{
	static Any _DATABINDING_GET_DATA_CONTAINER_FROM_PATH(Any p0) { return invoke<Any>(0x021FC310, p0); } // 0x0C827D175F1292F2 b1207
	static Any _DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Any p0, Any p1) { return invoke<Any>(0xDEADBEEF, p0, p1); } // 0x0C827D175F1292F3 b1207
	static Any _0xD7DB94AB78E8EBE4(Any p0, Any p1) { return invoke<Any>(0x021FC510, p0, p1); } // 0xD7DB94AB78E8EBE4 b1207
	static Any _DATABINDING_ADD_DATA_CONTAINER_FROM_PATH(Any p0, Any p1) { return invoke<Any>(0xDEADBEEF, p0, p1); } // 0x0C827D175F1292F4 b1207
	static Any _DATABINDING_ADD_DATA_CONTAINER_BY_HASH(Any p0, Any p1) { return invoke<Any>(0x021FC850, p0, p1); } // 0x98BB14345BB68257 b1207
	static Any _DATABINDING_ADD_DATA_CONTAINER(Any p0, Any p1) { return invoke<Any>(0x021FC9B0, p0, p1); } // 0xEB4F9A3537EEABCD b1207
	static Any _DATABINDING_ADD_DATA_BOOL_FROM_PATH(Any p0, Any p1, Any p2) { return invoke<Any>(0x021FCB50, p0, p1, p2); } // 0x37BB86A751148A6A b1207
	static Any _DATABINDING_ADD_DATA_BOOL_BY_HASH(Any p0, Any p1, Any p2) { return invoke<Any>(0x021FCD20, p0, p1, p2); } // 0xBC95D3AE2ECA70D6 b1207
	static Any _DATABINDING_ADD_DATA_BOOL(Any p0, Any p1, Any p2) { return invoke<Any>(0x021FCEA0, p0, p1, p2); } // 0x58BAA5F635DA2FF4 b1207
	static Any _DATABINDING_ADD_DATA_INT_BY_HASH(Any p0, Any p1, Any p2) { return invoke<Any>(0x021FD060, p0, p1, p2); } // 0x267F9527F4350ADE b1207
	static Any _DATABINDING_ADD_DATA_INT(Any p0, Any p1, Any p2) { return invoke<Any>(0x021FD1E0, p0, p1, p2); } // 0x307A3247C5457BDE b1207
	static Any _DATABINDING_ADD_DATA_FLOAT(Any p0, Any p1, Any p2) { return invoke<Any>(0x021FD3A0, p0, p1, p2); } // 0x5154228273ADB9A6 b1207
	static Any _DATABINDING_ADD_DATA_HASH_BY_HASH(Any p0, Any p1, Hash p2) { return invoke<Any>(0x021FD540, p0, p1, p2); } // 0x8E173DFB041993C6 b1207
	static Any _DATABINDING_ADD_DATA_HASH(Any p0, Any p1, Any p2) { return invoke<Any>(0x021FD6C0, p0, p1, p2); } // 0x8538F1205D60ECA6 b1207
	static Any _DATABINDING_ADD_DATA_STRING_FROM_PATH(const char* p0, const char* p1, const char* p2) { return invoke<Any>(0x021FD880, p0, p1, p2); } // 0xA381DE86EE170C4A b1207
	static Any _DATABINDING_ADD_DATA_STRING_BY_HASH(Any p0, Any p1, Any p2) { return invoke<Any>(0x021FDA40, p0, p1, p2); } // 0xEAD09E76E22630C3 b1207
	static Any _DATABINDING_ADD_DATA_STRING(Any p0, Any p1, Any p2) { return invoke<Any>(0x021FDBC0, p0, p1, p2); } // 0x617FCA1C5652BBAD b1207
	static Any _DATABINDING_ADD_DATA_GANG_ID(Any p0, Any p1, Any p2) { return invoke<Any>(0x021FDD80, p0, p1, p2); } // 0x7D0F2014DB28DD00 b1207
	static Any _0x7D0F2014DB28DD01(Any p0, Any p1, Any p2) { return invoke<Any>(0xDEADBEEF, p0, p1, p2); } // 0x7D0F2014DB28DD01 b1207
	static Any _0x294AF5323F44B053(Any p0, Any p1, Any p2) { return invoke<Any>(0x021FE0E0, p0, p1, p2); } // 0x294AF5323F44B053 b1207
	static Any _DATABINDING_ADD_UI_ITEM_LIST_FROM_PATH(Any p0, Any p1) { return invoke<Any>(0x021FE160, p0, p1); } // 0xDB5B9A474148F699 b1207
	static Any _DATABINDING_ADD_UI_ITEM_LIST_BY_HASH(Any p0, Any p1) { return invoke<Any>(0x021FE310, p0, p1); } // 0x3C7799283325181B b1207
	static Any _DATABINDING_ADD_UI_ITEM_LIST(Any p0, Any p1) { return invoke<Any>(0x021FE470, p0, p1); } // 0xFE74FA57E0CE6824 b1207
	static void _DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x021FE610, p0, p1, p2, p3); } // 0x5859E970794D92F3 b1207
	static void _DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x021FE770, p0, p1, p2, p3); } // 0xEE97A05C05F16E41 b1207
	static void _DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_PATH_STRING_ALIAS(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x021FE8C0, p0, p1, p2, p3); } // 0x5740774F608E4FC8 b1207
	static void _0x6318FB3BE37E11B3(Any p0, Any p1) { invoke<Void>(0x021FE9A0, p0, p1); } // 0x6318FB3BE37E11B3 b1207
	static void _DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Any p0, Any p1) { invoke<Void>(0x021FEAA0, p0, p1); } // 0xF68B1726EAF7B285 b1207
	static void _DATABINDING_CLEAR_BINDING_ARRAY(Any p0) { invoke<Void>(0x021FEAB0, p0); } // 0xA1F15C1D03DF802D b1207
	static Any _DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Any p0, Any p1) { return invoke<Any>(0x021FEB70, p0, p1); } // 0xE96D7F9FEFCC105F b1207
	static void _DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Any p0, Any p1) { invoke<Void>(0xDEADBEEF, p0, p1); } // 0xFE74FA57E0CE6825 b1207
	static void _DATABINDING_SET_TEMPLATED_UI_ITEM_HASH_ALIAS(Any p0, Any p1, Any p2) { invoke<Void>(0x021FED60, p0, p1, p2); } // 0x0AE7138D0541F2DE b1207
	static Any _0xD48993A61938C64D(Any p0, Any p1) { return invoke<Any>(0x021FEE30, p0, p1); } // 0xD48993A61938C64D b1207
	static Any _DATABINDING_ADD_HASH_ARRAY(Any p0, Any p1) { return invoke<Any>(0x021FEFD0, p0, p1); } // 0x52F5F08278EA5D75 b1207
	static Any _DATABINDING_ADD_STRING_ARRAY(Any p0, Any p1) { return invoke<Any>(0x021FF170, p0, p1); } // 0x1B23E0627BDBFE85 b1207
	static void _0x1919D59E60FD516E(Any p0, Any p1, Any p2) { invoke<Void>(0x021FF310, p0, p1, p2); } // 0x1919D59E60FD516E b1207
	static void _0x7FC60C94C83C5CD7(Any p0, Any p1, Any p2) { invoke<Void>(0x021FF4C0, p0, p1, p2); } // 0x7FC60C94C83C5CD7 b1207
	static void _0xC900CEC8A172375B(Any p0, Any p1, Any p2) { invoke<Void>(0x021FF670, p0, p1, p2); } // 0xC900CEC8A172375B b1207
	static Any _0x02B21B6BEEDD83CC(Any p0, Any p1) { return invoke<Any>(0x021FF850, p0, p1); } // 0x02B21B6BEEDD83CC b1207
	static Any _0xF47E33F8D2523825(Any p0, Any p1) { return invoke<Any>(0x021FF930, p0, p1); } // 0xF47E33F8D2523825 b1207
	static void _0x3BF0767CF33FCC88(Any p0) { invoke<Void>(0x021FFA10, p0); } // 0x3BF0767CF33FCC88 b1207
	static Any _DATABINDING_GET_ARRAY_COUNT(Any p0) { return invoke<Any>(0x021FFAD0, p0); } // 0xD23F5DE04FE717E2 b1207
	template<typename... Args> static void _DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(Any p0, Any p1, Args... args) { invoke<Void>(0xDEADBEEF, p0, p1, args...); } // 0xAB888B4B91046771 b1207
	static void _DATABINDING_WRITE_DATA_BOOL(Any p0, Any p1) { invoke<Void>(0x021F1DC0, p0, p1); } // 0xAB888B4B91046770 b1207
	static void _DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Any p0, Any p1, Any p2) { invoke<Void>(0x021FFCC0, p0, p1, p2); } // 0xBDFE546E4C2D0E21 b1207
	static void _0xBFC83DA249BEFCC9(Any p0, Any p1, Any p2) { invoke<Void>(0x021FFCE0, p0, p1, p2); } // 0xBFC83DA249BEFCC9 b1207
	static void _DATABINDING_WRITE_DATA_INT(Any p0, Any p1) { invoke<Void>(0x021FFE50, p0, p1); } // 0x335C3F6B3766B8D9 b1207
	static void _DATABINDING_WRITE_DATA_INT_FROM_PARENT(Any p0, Any p1, Any p2) { invoke<Void>(0x021FFF70, p0, p1, p2); } // 0x9EFA98238BA08FC4 b1207
	static void _DATABINDING_WRITE_DATA_INT_FROM_PARENT_BY_HASH(Any p0, Any p1, Any p2) { invoke<Void>(0x021FFF90, p0, p1, p2); } // 0x9D6E10A41D6ED6EC b1207
	static void _DATABINDING_WRITE_DATA_FLOAT(Any p0, Any p1) { invoke<Void>(0x02200100, p0, p1); } // 0xDF504BECEB15DA93 b1207
	static void _0x05AC9E1E02975AFB(Any p0, Any p1, Any p2) { invoke<Void>(0x02200220, p0, p1, p2); } // 0x05AC9E1E02975AFB b1207
	static void _DATABINDING_WRITE_DATA_HASH_STRING(Any p0, Any p1) { invoke<Void>(0x02200240, p0, p1); } // 0xACDEF586BD71B1FD b1207
	static void _DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(Any p0, Any p1, Any p2) { invoke<Void>(0x02200360, p0, p1, p2); } // 0x0971F04E1EAA7AE8 b1207
	static void _DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(Any p0, Any p1, Any p2) { invoke<Void>(0x02200380, p0, p1, p2); } // 0x20209529689E0953 b1207
	static void _DATABINDING_WRITE_DATA_STRING(Any p0, Any p1) { invoke<Void>(0x022004F0, p0, p1); } // 0xE1BD342F2872AEE9 b1207
	static void DATABINDING_WRITE_STRING_FROM_PARENT(Any p0, Any p1, Any p2) { invoke<Void>(0x02200600, p0, p1, p2); } // 0x4FF713B2F17A391E b1207
	static void _0xA3BD6FF95E713EE5(Any p0, Any p1, Any p2) { invoke<Void>(0x02200650, p0, p1, p2); } // 0xA3BD6FF95E713EE5 b1207
	static void _0xC70041408E16BE2D(Any p0, Any p1, Any p2) { invoke<Void>(0x02200670, p0, p1, p2); } // 0xC70041408E16BE2D b1207
	static void _0xC70041408E16BE2E(Any p0, Any p1, Any p2) { invoke<Void>(0xDEADBEEF, p0, p1, p2); } // 0xC70041408E16BE2E b1207
	static void _0x422179C7F6AD9304(Any p0, Any p1) { invoke<Void>(0x022006B0, p0, p1); } // 0x422179C7F6AD9304 b1207
	static Any _DATABINDING_READ_DATA_BOOL(Any p0) { return invoke<Any>(0x022006C0, p0); } // 0x5EEFBD4B6D7CD6EB b1207
	static Any _DATABINDING_READ_DATA_BOOL_FROM_PARENT(Any p0, Any p1) { return invoke<Any>(0x02200820, p0, p1); } // 0xA8EDE09FE07BD77F b1207
	static Any _DATABINDING_READ_DATA_BOOL_FROM_PARENT_BY_HASH(Any p0, Any p1) { return invoke<Any>(0x02200880, p0, p1); } // 0x4CDC3FDDFAE07EB3 b1207
	static Any DATABINDING_READ_INT(Any p0) { return invoke<Any>(0x022008B0, p0); } // 0x570784D782597512 b1207
	static Any _DATABINDING_READ_DATA_INT_FROM_PARENT(Any p0, Any p1) { return invoke<Any>(0x02200A10, p0, p1); } // 0xFFC566A4801F6B40 b1207
	static Any _DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(Any p0, Any p1) { return invoke<Any>(0x02200A60, p0, p1); } // 0xB5F668B648EC0970 b1207
	static Any _0x5FE444EB67C70AD4(Any p0) { return invoke<Any>(0x02200A90, p0); } // 0x5FE444EB67C70AD4 b1207
	static Any _0x81D7183E7A8ECA72(Any p0) { return invoke<Any>(0x02200BF0, p0); } // 0x81D7183E7A8ECA72 b1207
	static Any _DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Any p0, Any p1) { return invoke<Any>(0x02200D50, p0, p1); } // 0x9B535990B01B62DE b1207
	static Any _DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(Any p0, Any p1) { return invoke<Any>(0x02200DA0, p0, p1); } // 0x1F43BC25A119B252 b1207
	static Any _DATABINDING_READ_DATA_STRING(Any p0) { return invoke<Any>(0x02200DD0, p0); } // 0x3D290B5FFA7C5151 b1207
	static Any _DATABINDING_READ_DATA_STRING_FROM_PARENT(Any p0, Any p1) { return invoke<Any>(0x02200E00, p0, p1); } // 0x6323AD277C4A2AFB b1207
	static Any _0x6329C34BEE5BFF4B(Any p0, Any p1) { return invoke<Any>(0x02200E60, p0, p1); } // 0x6329C34BEE5BFF4B b1207
	static Any _0xE6AAB897120492D6(Any p0, Any p1) { return invoke<Any>(0x02200E90, p0, p1); } // 0xE6AAB897120492D6 b1207
	static void _0xE6AAB897120492D7(Any p0, Any p1, Any p2) { invoke<Void>(0xDEADBEEF, p0, p1, p2); } // 0xE6AAB897120492D7 b1207
	static void _0xB138CA787F3DD858(Any p0, Any p1, Any p2) { invoke<Void>(0x02200F00, p0, p1, p2); } // 0xB138CA787F3DD858 b1207
	static BOOL DATABINDING_IS_ENTRY_VALID(Hash entryId) { return invoke<BOOL>(0x02201020, entryId); } // 0x1E7130793AAAAB8D b1207
	static void _DATABINDING_REMOVE_DATA_ENTRY(Any p0) { invoke<Void>(0x02201080, p0); } // 0x0AE9938D0541F2DA b1207
	static void _VIRTUAL_COLLECTION_SET_SIZE(Any p0, Any p1) { invoke<Void>(0x02201140, p0, p1); } // 0x9DCE9B01A93B58BC b1207
	static void _VIRTUAL_COLLECTION_SET_INTEREST_INDEX(Any p0, Any p1) { invoke<Void>(0x022011A0, p0, p1); } // 0x49A8447533308BCF b1207
	static void _VIRTUAL_COLLECTION_ITEM_ADD(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02201270, p0, p1, p2, p3); } // 0x6DCBF187221CF73D b1207
	static void _VIRTUAL_COLLECTION_RESET(Any p0) { invoke<Void>(0x02201290, p0); } // 0x09D95666ED2B5F60 b1207
	static Any _VIRTUAL_COLLECTION_EXISTS(Any p0) { return invoke<Any>(0x02201320, p0); } // 0x37963B56755BFB35 b1207
}

namespace DATAFILE
{
	static void DATAFILE_WATCH_REQUEST_ID(int id) { invoke<Void>(0x02210330, id); } // 0xA5834834CA8FD7FC 0x621388FF b1207
	static BOOL DATAFILE_HAS_LOADED_FILE_DATA(Any p0) { return invoke<BOOL>(0x02210340, p0); } // 0x17279C820464CEE0 0x36FB8B3F b1207
	static BOOL DATAFILE_HAS_VALID_FILE_DATA(Any p0) { return invoke<BOOL>(0x02210390, p0); } // 0xE60100389E50EADE 0x2A9411DA b1207
	static BOOL DATAFILE_SELECT_ACTIVE_FILE(Any p0, Any p1) { return invoke<BOOL>(0x02210460, p0, p1); } // 0x46102A0989AD80B5 0xB41064A4 b1207
	static BOOL DATAFILE_DELETE_REQUESTED_FILE(Any p0) { return invoke<BOOL>(0x02210490, p0); } // 0x604B8ED1A482F9DF 0x9DB63CFF b1207
	static Any UGC2_SET_PLAYER_DATA(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x022104C0, p0, p1, p2, p3); } // 0xE79C70E77E0973C7 b1207
	static Any DATAFILE_UGC_SELECT_DATA(Any p0, Any p1, Any p2) { return invoke<Any>(0x022104F0, p0, p1, p2); } // 0x790EC421078F5C4E b1207
	static void DATAFILE_CREATE(int index) { invoke<Void>(0x02210520, index); } // 0x56B7291FB953DD51 0x95F8A221 b1207
	static void DATAFILE_DELETE(int index) { invoke<Void>(0x02210660, index); } // 0x9FB90EEDEA9F2D5C 0xDEF31B0A b1207
	static const char* DATAFILE_GET_FILE_DICT(int index) { return invoke<const char*>(0x02210670, index); } // 0xBBD8CF823CAE557C 0x86DDF9C2 b1207
	static BOOL DATADICT_IS_DICT_VALID(Any p0) { return invoke<BOOL>(0x022106E0, p0); } // 0x4607D57C5F7D332A b1207
	static BOOL DATADICT_IS_ARRAY_VALID(Any p0) { return invoke<BOOL>(0x02210700, p0); } // 0xB04B69CF277D15C0 b1207
	static void DATADICT_SET_INT(Any* objectData, const char* key, int value) { invoke<Void>(0x02210720, objectData, key, value); } // 0x26FDF5E99AA2F3E9 0xEFCF554A b1207
	static BOOL DATADICT_GET_BOOL(Any* objectData, const char* key) { return invoke<BOOL>(0x02210740, objectData, key); } // 0x175E915A486EE548 0x8876C872 b1207
	static int DATADICT_GET_INT(Any* objectData, const char* key) { return invoke<int>(0x02210770, objectData, key); } // 0x9D896A3B87D96E2B 0xA6C68693 b1207
	static float DATADICT_GET_FLOAT(Any* objectData, const char* key) { return invoke<float>(0x022107A0, objectData, key); } // 0x814643ECA258ADF5 0xA92C1AF4 b1207
	static const char* DATADICT_GET_STRING(Any* objectData, const char* key) { return invoke<const char*>(0x022107D0, objectData, key); } // 0xE37B38C0B4E95DFA 0x942160EC b1207
	static Vector3 DATADICT_GET_VECTOR(Any* objectData, const char* key) { return invoke<Vector3>(0x02210800, objectData, key); } // 0xE459C941431E0FFA 0xE84A127A b1207
	static Any* DATADICT_GET_DICT(Any* objectData, const char* key) { return invoke<Any*>(0x02210840, objectData, key); } // 0x4D7A30130F46AC9C 0xC9C13D8D b1207
	static Any* DATADICT_GET_ARRAY(Any* objectData, const char* key) { return invoke<Any*>(0x02210870, objectData, key); } // 0x1B5447CF18544B18 0x1F2F7D00 b1207
	static int DATADICT_GET_TYPE(Any* objectData, const char* key) { return invoke<int>(0x022108A0, objectData, key); } // 0x92E11E3CA4C7CDF0 0x2678342A b1207
	static void _0xBC0DF006A4952C68(Any p0, Any p1, Any p2) { invoke<Void>(0x022108D0, p0, p1, p2); } // 0xBC0DF006A4952C68 b1207
	static void _0x9F130129EBC31B34(Any p0, Any p1, Any p2) { invoke<Void>(0x022109E0, p0, p1, p2); } // 0x9F130129EBC31B34 b1207
	static void _0x277251C161B4C3F4(Any p0, Any p1, Any p2) { invoke<Void>(0x02210AF0, p0, p1, p2); } // 0x277251C161B4C3F4 b1207
	static void _0x1C65CC931C0F946F(Any p0, Any p1, Any p2) { invoke<Void>(0x02210C00, p0, p1, p2); } // 0x1C65CC931C0F946F b1207
	static void _0x7681B677400C7071(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x02210C20, p0, p1, p2, p3, p4); } // 0x7681B677400C7071 b1207
	static BOOL DATAARRAY_GET_BOOL(Any* arrayData, int arrayIndex) { return invoke<BOOL>(0x02210C40, arrayData, arrayIndex); } // 0xAB1231D2DE52F2D3 0xA2E5F921 b1207
	static int DATAARRAY_GET_INT(Any* arrayData, int arrayIndex) { return invoke<int>(0x02210CA0, arrayData, arrayIndex); } // 0x96DEA500B6EBBE53 0xBB120CFC b1207
	static float DATAARRAY_GET_FLOAT(Any* arrayData, int arrayIndex) { return invoke<float>(0x02210D00, arrayData, arrayIndex); } // 0xA9D003CF419CB81E 0x08AD2CC2 b1207
	static const char* DATAARRAY_GET_STRING(Any* arrayData, int arrayIndex) { return invoke<const char*>(0x02210D60, arrayData, arrayIndex); } // 0xB6790A8FF80F889F 0x93F985A6 b1207
	static Vector3 DATAARRAY_GET_VECTOR(Any* arrayData, int arrayIndex) { return invoke<Vector3>(0x02210DD0, arrayData, arrayIndex); } // 0x850DA2750DA14E9A 0x80E3DA55 b1207
	static Any* DATAARRAY_GET_DICT(Any* arrayData, int arrayIndex) { return invoke<Any*>(0x02210E40, arrayData, arrayIndex); } // 0xA010655985853485 0xECE81278 b1207
	static int DATAARRAY_GET_COUNT(Any* arrayData) { return invoke<int>(0x02210EA0, arrayData); } // 0x6A885BF69239E539 0xA8A21766 b1207
	static int DATAARRAY_GET_TYPE(Any* arrayData, int arrayIndex) { return invoke<int>(0x02210ED0, arrayData, arrayIndex); } // 0x151DAFE6B3B9888F 0xFA2402C8 b1207
	static Any _0x4F9E3ED7617123AC(Any p0) { return invoke<Any>(0x02210F20, p0); } // 0x4F9E3ED7617123AC b1207
	static Any _0xCA56DD6AB7A39F64(Any p0) { return invoke<Any>(0x02210FC0, p0); } // 0xCA56DD6AB7A39F64 b1207
	static Any _0xD97D8D905F1562F2(Any p0) { return invoke<Any>(0x022110B0, p0); } // 0xD97D8D905F1562F2 b1207
	static void _DATAFILE_UNLOAD(Any p0) { invoke<Void>(0x02211170, p0); } // 0x129567F0C05F81B9 b1207
	static BOOL PARSEDDATA_IS_FILE_VALID(Any p0) { return invoke<BOOL>(0x02211200, p0); } // 0x7907969497EA92F5 b1207
	static BOOL PARSEDDATA_IS_FILE_LOADED(Any p0) { return invoke<BOOL>(0x02211260, p0); } // 0x603AC35FD4602C76 b1207
	static void _0x3168BA5D6DECE323() { invoke<Void>(0x022112C0); } // 0x3168BA5D6DECE323 b1207
	static Any _DATAFILE_REGISTER_QUERY(Any p0, Any p1, Any p2) { return invoke<Any>(0x022112D0, p0, p1, p2); } // 0xAE156A747C39A741 b1207
	static BOOL PARSEDDATA_RQ_FILLOUT_NODE(int* p0, Any* p1) { return invoke<BOOL>(0x02211450, p0, p1); } // 0x83C3ED532B6E5D07 b1207
	static Any _DATAFILE_GET_NUM_NODES(Any p0) { return invoke<Any>(0x022115A0, p0); } // 0xDF01B1F7A886B42D b1207
	static Any _0xE13634BB6BAF0734(Any p0, Any p1) { return invoke<Any>(0x02211660, p0, p1); } // 0xE13634BB6BAF0734 b1207
	static Any _DATAFILE_GET_NUM_CHILDREN(Any p0, Any p1) { return invoke<Any>(0x02211750, p0, p1); } // 0x6BEB168D5195E7AB b1207
	static BOOL PARSEDDATA_RQ_FILLOUT_HASH(Hash* p0, Any* p1) { return invoke<BOOL>(0x022117E0, p0, p1); } // 0xFBFF3FF2F5E80C0B b1207
	static BOOL _PARSEDDATA_RQ_FILLOUT_STRING_63(char* p0, Any* p1) { return invoke<BOOL>(0x022118F0, p0, p1); } // 0x08EAF8E9F2EB7B2E b1207
	static BOOL PARSEDDATA_RQ_FILLOUT_STRING_127(char* p0, Any* p1) { return invoke<BOOL>(0x022119D0, p0, p1); } // 0x951327435DC5164B b1232
	static BOOL _PARSEDDATA_RQ_FILLOUT_VECTOR(Vector3* p0, Any* p1) { return invoke<BOOL>(0x02211AB0, p0, p1); } // 0x06FBF89B12DA279C b1207
	static BOOL _PARSEDDATA_RQ_FILLOUT_FLOAT(float* p0, Any* p1) { return invoke<BOOL>(0x02211BC0, p0, p1); } // 0x7F034FC3E891B57A b1207
	static BOOL _PARSEDDATA_RQ_FILLOUT_INT(int* p0, Any* p1) { return invoke<BOOL>(0x02211C90, p0, p1); } // 0xEF44ACC657352A35 b1207
	static BOOL _PARSEDDATA_RQ_FILLOUT_BOOL(BOOL* p0, Any* p1) { return invoke<BOOL>(0x02211D60, p0, p1); } // 0x0D9138F3F8261DF7 b1207
	static void _0x91DED5DD64BB2691(Any p0) { invoke<Void>(0x02211E70, p0); } // 0x91DED5DD64BB2691 b1207
	static Any _0xED4413CEE1BF142C(Any p0) { return invoke<Any>(0x02211E80, p0); } // 0xED4413CEE1BF142C b1207
	static Any _0xB2B42607F7867576(Any p0, Any p1, Any p2) { return invoke<Any>(0x02211EB0, p0, p1, p2); } // 0xB2B42607F7867576 b1207
	static Any _0x52FC26D2D2FC2987(Any p0, Any p1, Any p2) { return invoke<Any>(0x02211FB0, p0, p1, p2); } // 0x52FC26D2D2FC2987 b1207
	static Any _0x44B3A36933AC009C(Any p0, Any p1, Any p2) { return invoke<Any>(0x022120B0, p0, p1, p2); } // 0x44B3A36933AC009C b1207
	static Any _0xA63CD20F19B961AB(Any p0, Any p1, Any p2) { return invoke<Any>(0x022121B0, p0, p1, p2); } // 0xA63CD20F19B961AB b1207
}

namespace DEBUG
{
	static Any _0xACF9CB705BEFA8CB() { return invoke<Any>(0x022122C0); } // 0xACF9CB705BEFA8CB b1207
	static Any _0xA8D970D8A72640A6() { return invoke<Any>(0x022122B0); } // 0xA8D970D8A72640A6 b1207
	static const char* _GET_GAME_BUILD_STRING() { return invoke<const char*>(0x022126C0); } // 0x05A5F662AD35C573 b1207
}

namespace DECORATOR
{
	static BOOL DECOR_SET_BOOL(Entity entity, const char* propertyName, BOOL value) { return invoke<BOOL>(0x022148C0, entity, propertyName, value); } // 0xFE26E4609B1C3772 0x8E101F5C b1207
	static BOOL DECOR_SET_FLOAT(Entity entity, const char* propertyName, float value) { return invoke<BOOL>(0x02214B20, entity, propertyName, value); } // 0x238F8B0C1C7FE834 0xBC7BD5CB b1207
	static BOOL DECOR_SET_INT(Entity entity, const char* propertyName, int value) { return invoke<BOOL>(0x02214D80, entity, propertyName, value); } // 0xE88F4D7F52A6090F 0xDB718B21 b1207
	static BOOL _DECOR_SET_UINT8(Entity entity, const char* propertyName, int value) { return invoke<BOOL>(0x02214FE0, entity, propertyName, value); } // 0x4BDC83150D43772D b1207
	static BOOL _DECOR_SET_STRING(Entity entity, const char* propertyName, const char* value) { return invoke<BOOL>(0x02215010, entity, propertyName, value); } // 0x0671C1A3FF7AFDFC b1207
	static BOOL DECOR_GET_BOOL(Entity entity, const char* propertyName) { return invoke<BOOL>(0x02215270, entity, propertyName); } // 0xDEF3F1B071ABB197 0xDBCE51E0 b1207
	static float DECOR_GET_FLOAT(Entity entity, const char* propertyName) { return invoke<float>(0x022153B0, entity, propertyName); } // 0xE5FF70CD842CA9D4 0x8DE5382F b1207
	static int DECOR_GET_INT(Entity entity, const char* propertyName) { return invoke<int>(0x022154E0, entity, propertyName); } // 0x44DB62727762FD9B 0xDDDE59B5 b1207
	static int _DECOR_GET_UINT8(Entity entity, const char* propertyName) { return invoke<int>(0x02215620, entity, propertyName); } // 0xB1682B2443F0540B b1207
	static BOOL DECOR_EXIST_ON(Entity entity, const char* propertyName) { return invoke<BOOL>(0x02215760, entity, propertyName); } // 0xD9D1CDBF3464DCDF 0x74EF9C40 b1207
	static BOOL DECOR_REMOVE(Entity entity, const char* propertyName) { return invoke<BOOL>(0x02215860, entity, propertyName); } // 0x2BA7F5877A088A1D 0xE0E2640B b1207
	static BOOL _DECOR_REMOVE_ALL(Entity entity) { return invoke<BOOL>(0x02215900, entity); } // 0x88942780E0ADEA42 b1207
	static void DECOR_REGISTER(const char* propertyName, int type) { invoke<Void>(0x02215960, propertyName, type); } // 0x0B253D644E3C36B3 0x68BD42A9 b1207
	static void _DECOR_REGISTER_2(const char* propertyName, int type, BOOL p2) { invoke<Void>(0x022159A0, propertyName, type, p2); } // 0x4587374F88B7F6C2 b1207
	static BOOL DECOR_IS_REGISTERED_AS_TYPE(const char* propertyName, int type) { return invoke<BOOL>(0x022159F0, propertyName, type); } // 0x72355278C069F272 0x7CF0971D b1207
}

namespace DLC
{
	static BOOL IS_DLC_PRESENT(Hash dlcHash) { return invoke<BOOL>(0x022166B0, dlcHash); } // 0x2763DC12BBE2BB6F 0x1F321943 b1207
	static BOOL GET_IS_LOADING_SCREEN_ACTIVE() { return invoke<BOOL>(0x022166E0); } // 0x71D4BF5890659B0C 0x517B601B b1207
	static BOOL _GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED() { return invoke<BOOL>(0x02216700); } // 0xA16B4FBA7887D7BA b1207
	static BOOL _GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED() { return invoke<BOOL>(0x02216830); } // 0x1DB9D61E505AE3FC b1207
}

namespace ENTITY
{
	static BOOL DOES_ENTITY_EXIST(Entity entity) { return invoke<BOOL>(0x02258540, entity); } // 0xD42BD6EB2E0F1677 0x3AC90869 b1207
	static BOOL DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Entity entity, BOOL p1) { return invoke<BOOL>(0x02258610, entity, p1); } // 0x622B1980CBE13332 0xACFEB3F9 b1207
	static BOOL DOES_ENTITY_HAVE_DRAWABLE(Entity entity) { return invoke<BOOL>(0x02258760, entity); } // 0x20487F0DA9AF164A 0xA5B33300 b1207
	static BOOL DOES_ENTITY_HAVE_PHYSICS(Entity entity) { return invoke<BOOL>(0x02258820, entity); } // 0xA512B3F1B2A0B51C 0x9BCD2979 b1207
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(Entity entity) { return invoke<BOOL>(0x022588D0, entity); } // 0x73BB763880CD23A6 0x6B74582E b1207
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Entity entity) { return invoke<BOOL>(0x02258A00, entity); } // 0x9934E9C42D52D87E 0x53FD4A25 b1207
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Entity entity) { return invoke<BOOL>(0x02258B30, entity); } // 0x695D7C26DE65C423 0x878C2CE0 b1207
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0x02258C80, p0, p1, p2, p3); } // 0x7B6E7BEC1143AC86 0x07FC77E0 b1207
	static BOOL _0x3EC28DA1FFAC9DDD(Entity entity1, Entity entity2, Any p2, Any p3) { return invoke<BOOL>(0x02258CC0, entity1, entity2, p2, p3); } // 0x3EC28DA1FFAC9DDD b1207
	static Entity _0xAF72EC7E1B54539B(Entity entity) { return invoke<Entity>(0x02258D00, entity); } // 0xAF72EC7E1B54539B b1311
	static BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Entity entity1, Entity entity2, int traceType) { return invoke<BOOL>(0x02258E10, entity1, entity2, traceType); } // 0xFCDFF7B72D23A1AC 0x53576FA7 b1207
	static BOOL HAS_ENTITY_CLEAR_LOS_TO_COORD(Entity entity, float x, float y, float z, int flags) { return invoke<BOOL>(0x02258ED0, entity, x, y, z, flags); } // 0x0C9DBF48C6BA6E4C b1207
	static BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Entity entity1, Entity entity2, int traceType) { return invoke<BOOL>(0x02258F90, entity1, entity2, traceType); } // 0xE88F19660651D566 0x210D87C8 b1207
	static BOOL HAS_ENTITY_COLLIDED_WITH_ANYTHING(Entity entity) { return invoke<BOOL>(0x02259050, entity); } // 0xDF18751EC74F90FF 0x662A2F41 b1207
	static float _0x6D58167F62238284(Vehicle vehicle) { return invoke<float>(0x02259140, vehicle); } // 0x6D58167F62238284 b1207
	static float _0xDFC2B226D56D85F6(Any p0, Any p1) { return invoke<float>(0x02259230, p0, p1); } // 0xDFC2B226D56D85F6 b1207
	static float GET_ANIM_DURATION(const char* animDict, const char* animName) { return invoke<float>(0x02259260, animDict, animName); } // 0x9FFAF4940A54CC09 0x8B5E3E3D b1207
	static Entity GET_ENTITY_ATTACHED_TO(Entity entity) { return invoke<Entity>(0x022592D0, entity); } // 0x56D713888A566481 0xFE1589F9 b1207
	static Vector3 GET_ENTITY_COORDS(Entity entity, BOOL alive, BOOL realCoords) { return invoke<Vector3>(0x022593D0, entity, alive, realCoords); } // 0xA86D5F069399F44D 0x1647F1CB b1207
	static Vector3 GET_ENTITY_FORWARD_VECTOR(Hash entity) { return invoke<Vector3>(0x02259540, entity); } // 0x2412D9C05BB09B97 0x84DCECBF b1207
	static float GET_ENTITY_FORWARD_X(Entity entity) { return invoke<float>(0x02259600, entity); } // 0xDB0954E9960F6457 0x49FAE914 b1207
	static float GET_ENTITY_FORWARD_Y(Entity entity) { return invoke<float>(0x022596D0, entity); } // 0x9A5C073ECBDA7EE7 0x9E2F917C b1207
	static Vector3 _0x935A30AA88FB1014(Any p0) { return invoke<Vector3>(0x022597A0, p0); } // 0x935A30AA88FB1014 b1207
	static float GET_ENTITY_HEADING(Entity entity) { return invoke<float>(0x022598A0, entity); } // 0xC230DD956E2F5507 0x972CC383 b1207
	static int GET_ENTITY_HEALTH(Entity entity) { return invoke<int>(0x02259A10, entity); } // 0x82368787EA73C0F7 0x8E3222B7 b1207
	static float _GET_ENTITY_HEALTH_FLOAT(Entity entity) { return invoke<float>(0x02259B30, entity); } // 0x96C638784DB4C815 b1207
	static BOOL _CHANGE_ENTITY_HEALTH(Entity entity, float amount, Entity entity2, Hash weaponHash) { return invoke<BOOL>(0x02259B60, entity, amount, entity2, weaponHash); } // 0x835F131E7DC8F97A b1207
	static int GET_ENTITY_MAX_HEALTH(Entity entity, BOOL p1) { return invoke<int>(0x02259B90, entity, p1); } // 0x15D757606D170C3C 0xC7AE6AA1 b1207
	static void SET_ENTITY_MAX_HEALTH(Entity entity, int value) { invoke<Void>(0x02259CB0, entity, value); } // 0x166E7CF68597D8B5 0x96F84DF8 b1207
	static float GET_ENTITY_HEIGHT(Entity entity, float X, float Y, float Z, BOOL atTop, BOOL inWorldCoords) { return invoke<float>(0x02259D90, entity, X, Y, Z, atTop, inWorldCoords); } // 0x296DEBC84474B375 0xEE443481 b1207
	static float GET_ENTITY_HEIGHT_ABOVE_GROUND(Entity entity) { return invoke<float>(0x02259DD0, entity); } // 0x0D3B5BAEA08F63E9 0x57F56A4D b1207
	static void _0xF3FDA9A617A15145(Entity entity, Vector3* minimum, Vector3* maximum) { invoke<Void>(0x02259ED0, entity, minimum, maximum); } // 0xF3FDA9A617A15145 b1207
	static void GET_ENTITY_MATRIX(Entity entity, Vector3* rightVector, Vector3* forwardVector, Vector3* upVector, Vector3* position) { invoke<Void>(0x0225A1D0, entity, rightVector, forwardVector, upVector, position); } // 0x3A9B1120AF13FBF2 0xEB9EB001 b1207
	static Hash GET_ENTITY_MODEL(Entity entity) { return invoke<Hash>(0x0225A3E0, entity); } // 0xDA76A9F39210D365 0xDAFCB3EC b1207
	static Hash _GET_PED_ANIMAL_TYPE(Ped ped) { return invoke<Hash>(0x0225A400, ped); } // 0x964000D355219FC0 b1207
	static BOOL GET_IS_ANIMAL(Entity entity) { return invoke<BOOL>(0x0225A4C0, entity); } // 0x9A100F1CF4546629 b1207
	static BOOL _GET_IS_BIRD(Entity entity) { return invoke<BOOL>(0x0225A5A0, entity); } // 0xC346A546612C49A9 b1207
	static BOOL _GET_IS_PREDATOR(Entity entity) { return invoke<BOOL>(0x0225A700, entity); } // 0x5594AFE9DE0C01B7 b1207
	static Vector3 GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Entity entity, float posX, float posY, float posZ) { return invoke<Vector3>(0x0225A810, entity, posX, posY, posZ); } // 0x497C6B1A2C9AE69C 0x6477EC9E b1207
	static Vector3 GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Entity entity, float offsetX, float offsetY, float offsetZ) { return invoke<Vector3>(0x0225A970, entity, offsetX, offsetY, offsetZ); } // 0x1899F328B0E12848 0xABCF043A b1207
	static float GET_ENTITY_PITCH(Entity entity) { return invoke<float>(0x0225AAA0, entity); } // 0xEF355ABEFF7F5005 0xFCE6ECE5 b1207
	static float GET_ENTITY_ROLL(Entity entity) { return invoke<float>(0x0225AD40, entity); } // 0xBF966536FA8B6879 0x36610842 b1207
	static Vector3 GET_ENTITY_ROTATION(Entity entity, int rotationOrder) { return invoke<Vector3>(0x0225AFA0, entity, rotationOrder); } // 0xE09CAF86C32CB48F 0x8FF45B04 b1207
	static Hash _GET_ENTITY_SCRIPT(Entity entity, Any* argStruct) { return invoke<Hash>(0x0225B070, entity, argStruct); } // 0x2A08A32B6D49906F b1207
	static float GET_ENTITY_SPEED(Entity entity) { return invoke<float>(0x0225B1C0, entity); } // 0xFB6BA510A533DF81 0x9E1E4798 b1207
	static Vector3 GET_ENTITY_SPEED_VECTOR(Entity entity, BOOL relative) { return invoke<Vector3>(0x0225B380, entity, relative); } // 0xF2DB09816A419DC5 0x3ED2B997 b1207
	static float GET_ENTITY_UPRIGHT_VALUE(Entity entity) { return invoke<float>(0x0225B520, entity); } // 0x56398BE65160C3BE 0xF4268190 b1207
	static Vector3 GET_ENTITY_VELOCITY(Entity entity, int p1) { return invoke<Vector3>(0x0225B5D0, entity, p1); } // 0x4805D2B1D8CF94A9 0xC14C9B6B b1207
	static Object GET_OBJECT_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Object>(0x0225B630, entity); } // 0x280BBE5601EAA983 0xBC5A9C58 b1207
	static Ped GET_PED_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Ped>(0x0225B640, entity); } // 0x0F16D042BD640EA3 0xC46F74AC b1207
	static Vehicle GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Vehicle>(0x0225B650, entity); } // 0xDF1E5AAC561AFC59 0xC69CF43D b1207
	static Vector3 GET_WORLD_POSITION_OF_ENTITY_BONE(Entity entity, int boneIndex) { return invoke<Vector3>(0x0225B660, entity, boneIndex); } // 0x82CFA50E34681CA5 0x7C6339DF b1207
	static Vector3 _0x5E214112806591EA(Entity entity, int boneIndex) { return invoke<Vector3>(0x0225B6C0, entity, boneIndex); } // 0x5E214112806591EA b1207
	static Vector3 _0x3AB3A77672F6473F(Any p0, Any p1, Any p2, Any p3) { return invoke<Vector3>(0x0225B720, p0, p1, p2, p3); } // 0x3AB3A77672F6473F b1207
	static Player GET_NEAREST_PLAYER_TO_ENTITY(Entity entity, Ped playerPedToIgnore, int flags) { return invoke<Player>(0x0225B790, entity, playerPedToIgnore, flags); } // 0x990E294FC387FB88 0xCE17FDEC b1207
	static Player GET_NEAREST_PLAYER_TO_ENTITY_ON_TEAM(Entity entity, int team, Ped playerPedToIgnore, int flags) { return invoke<Player>(0x0225B7D0, entity, team, playerPedToIgnore, flags); } // 0xB2C30C3B4AFF718C 0xB1808F56 b1207
	static Player _GET_NEAREST_PARTICIPANT_TO_ENTITY(Entity entity) { return invoke<Player>(0x0225B810, entity); } // 0x6888A43C35A5F630 b1207
	static BOOL PLACE_ENTITY_ON_GROUND_PROPERLY(Entity entity, BOOL p1) { return invoke<BOOL>(0x0225B830, entity, p1); } // 0x9587913B9E772D29 b1207
	static int GET_ENTITY_TYPE(Entity entity) { return invoke<int>(0x0225B910, entity); } // 0x97F696ACA466B4E0 0x0B1BD08D b1207
	static int GET_ENTITY_POPULATION_TYPE(Entity entity) { return invoke<int>(0x0225B9E0, entity); } // 0xADE28862B6D7B85B 0xFC30DDFF b1207
	static BOOL IS_AN_ENTITY(ScrHandle handle) { return invoke<BOOL>(0x0225BAA0, handle); } // 0x27CFF3E5A286D3DF 0xD4B9715A b1207
	static BOOL IS_ENTITY_A_PED(Entity entity) { return invoke<BOOL>(0x0225BB40, entity); } // 0xCF8176912DDA4EA5 0x55D33EAB b1207
	static BOOL IS_ENTITY_A_MISSION_ENTITY(Entity entity) { return invoke<BOOL>(0x0225BBF0, entity); } // 0x138190F64DB4BBD1 0x2632E124 b1207
	static BOOL IS_ENTITY_A_VEHICLE(Entity entity) { return invoke<BOOL>(0x0225BCB0, entity); } // 0xC3D96AF45FCCEC4C 0xBE800B01 b1207
	static BOOL IS_ENTITY_AN_OBJECT(Entity entity) { return invoke<BOOL>(0x0225BD60, entity); } // 0x0A27A546A375FDEF 0x3F52E561 b1207
	static BOOL IS_ENTITY_AT_COORD(Entity entity, float xPos, float yPos, float zPos, float xSize, float ySize, float zSize, BOOL p7, BOOL p8, int p9) { return invoke<BOOL>(0x0225BE10, entity, xPos, yPos, zPos, xSize, ySize, zSize, p7, p8, p9); } // 0x5E58342602E94718 0xD749B606 b1207
	static BOOL IS_ENTITY_AT_ENTITY(Entity entity1, Entity entity2, float xSize, float ySize, float zSize, BOOL p5, BOOL p6, int p7) { return invoke<BOOL>(0x0225BE60, entity1, entity2, xSize, ySize, zSize, p5, p6, p7); } // 0xC057F02B837A27F6 0xDABDCB52 b1207
	static BOOL IS_ENTITY_ATTACHED(Entity entity) { return invoke<BOOL>(0x0225BF40, entity); } // 0xEE6AD63ABF59C0B7 0xEC1479D5 b1207
	static BOOL IS_ENTITY_ATTACHED_TO_ANY_OBJECT(Entity entity) { return invoke<BOOL>(0x0225C020, entity); } // 0x306C1F6178F01AB3 0x0B5DE340 b1207
	static BOOL IS_ENTITY_ATTACHED_TO_ANY_PED(Entity entity) { return invoke<BOOL>(0x0225C110, entity); } // 0xC841153DED2CA89A 0x9D7A609C b1207
	static BOOL IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(Entity entity) { return invoke<BOOL>(0x0225C200, entity); } // 0x12DF6E0D2E736749 0xDE5C995E b1207
	static BOOL IS_ENTITY_ATTACHED_TO_ENTITY(Entity from, Entity to) { return invoke<BOOL>(0x0225C2F0, from, to); } // 0x154A3C529497053E 0xB0ABFEA8 b1207
	static BOOL _IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(Entity entity) { return invoke<BOOL>(0x0225C320, entity); } // 0xA7E51B53309EAC97 b1207
	static BOOL IS_ENTITY_DEAD(Entity entity) { return invoke<BOOL>(0x0225C3F0, entity); } // 0x7D5B1F88E7504BBA 0xB6F7CBAC b1207
	static BOOL IS_ENTITY_IN_AIR(Entity entity, Any p1) { return invoke<BOOL>(0x0225C4A0, entity, p1); } // 0x886E37EC497200B6 0xA4157987 b1207
	static BOOL IS_ENTITY_IN_ANGLED_AREA(Entity entity, float originX, float originY, float originZ, float edgeX, float edgeY, float edgeZ, float angle, BOOL p8, BOOL p9, Any p10) { return invoke<BOOL>(0x0225C4D0, entity, originX, originY, originZ, edgeX, edgeY, edgeZ, angle, p8, p9, p10); } // 0xD3151E53134595E5 0x883622FA b1207
	static BOOL IS_ENTITY_IN_AREA(Entity entity, float x1, float y1, float z1, float x2, float y2, float z2, BOOL p7, BOOL p8, Any p9) { return invoke<BOOL>(0x0225C520, entity, x1, y1, z1, x2, y2, z2, p7, p8, p9); } // 0x0C2634C40A16193E 0x8C2DFA9D b1207
	static BOOL IS_ENTITY_IN_VOLUME(Entity entity, ScrHandle volume, BOOL p2, int p3) { return invoke<BOOL>(0x0225C570, entity, volume, p2, p3); } // 0x5A5526BC09C06623 b1207
	static BOOL IS_ENTITY_IN_WATER(Entity entity) { return invoke<BOOL>(0x0225C5B0, entity); } // 0xDDE5C125AC446723 0x4C3C2508 b1207
	static BOOL _IS_ENTITY_UNDERWATER(Entity entity, BOOL p1) { return invoke<BOOL>(0x0225C5E0, entity, p1); } // 0xD4E5C1E93C466127 b1207
	static float GET_ENTITY_SUBMERGED_LEVEL(Entity entity) { return invoke<float>(0x0225C6E0, entity); } // 0x4A77C3F73FD9E831 0x0170F68C b1207
	static void _0x850C940EE3E7B8B5(Entity entity, BOOL toggle) { invoke<Void>(0x0225C7E0, entity, toggle); } // 0x850C940EE3E7B8B5 0x40C84A74 b1207
	static void _0x7A49D40DE437BC8D(Any p0, Any p1) { invoke<Void>(0x0225C8B0, p0, p1); } // 0x7A49D40DE437BC8D b1207
	static void _0x978AA2323ED32209(Any p0, Any p1) { invoke<Void>(0x0225C970, p0, p1); } // 0x978AA2323ED32209 b1207
	static void _0x002AAC783ED323ED(Any p0, Any p1) { invoke<Void>(0x0225CA50, p0, p1); } // 0x002AAC783ED323ED b1207
	static void _0x007AAC783ED323ED(Any p0, Any p1, Any p2) { invoke<Void>(0x0225CB10, p0, p1, p2); } // 0x007AAC783ED323ED b1207
	static BOOL IS_ENTITY_ON_SCREEN(Entity entity) { return invoke<BOOL>(0x0225CB30, entity); } // 0x613C15D5D8DB781F 0xC1FEC5ED b1207
	static BOOL IS_ENTITY_PLAYING_ANIM(Entity entity, const char* animDict, const char* animName, int taskFlag) { return invoke<BOOL>(0x0225CCD0, entity, animDict, animName, taskFlag); } // 0xDEE49D5CA6C49148 0x0D130D34 b1207
	static Any _0x0B7CB1300CBFE19C(Any p0, Any p1) { return invoke<Any>(0x0225CD00, p0, p1); } // 0x0B7CB1300CBFE19C b1207
	static BOOL IS_ENTITY_STATIC(Entity entity) { return invoke<BOOL>(0x0225CD80, entity); } // 0x86468ADFA0F6B861 0x928E12E9 b1207
	static BOOL IS_ENTITY_TOUCHING_ENTITY(Entity entity, Entity targetEntity) { return invoke<BOOL>(0x0225CE40, entity, targetEntity); } // 0x9A2304A64C3C8423 0x6B931477 b1207
	static BOOL IS_ENTITY_TOUCHING_MODEL(Entity entity, Hash modelHash) { return invoke<BOOL>(0x0225CE70, entity, modelHash); } // 0x2AE3EBC8DEB9768B 0x307E7611 b1207
	static BOOL IS_ENTITY_UPRIGHT(Entity entity, float angle) { return invoke<BOOL>(0x0225CEA0, entity, angle); } // 0xF6F6AFD8D4FB2658 0x3BCDF4E1 b1207
	static BOOL IS_ENTITY_UPSIDEDOWN(Entity entity) { return invoke<BOOL>(0x0225CF90, entity); } // 0x109DE3DA41AAD94A 0x5ACAA48F b1207
	static BOOL IS_ENTITY_VISIBLE(Entity entity) { return invoke<BOOL>(0x0225D050, entity); } // 0xFFC96ECB7FA404CA 0x120B4ED5 b1207
	static void _0xFF9965C47FA404DA(Entity entity, BOOL toggle) { invoke<Void>(0x0225D100, entity, toggle); } // 0xFF9965C47FA404DA b1207
	static BOOL IS_ENTITY_VISIBLE_TO_SCRIPT(Entity entity) { return invoke<BOOL>(0x0225D210, entity); } // 0xF213C724E77F321A 0x5D240E9D b1207
	static void _0x3F08C6163A4AB1D6(Any p0) { invoke<Void>(0x0225D380, p0); } // 0x3F08C6163A4AB1D6 b1207
	static void _0x0DB41D59E0F1502B(Any p0) { invoke<Void>(0x0225D420, p0); } // 0x0DB41D59E0F1502B b1207
	static BOOL _IS_TRACKED_ENTITY_VISIBLE(Entity entity) { return invoke<BOOL>(0x0225D4C0, entity); } // 0xC8CCDB712FBCBA92 b1207
	static BOOL IS_ENTITY_OCCLUDED(Entity entity) { return invoke<BOOL>(0x0225D5D0, entity); } // 0x140188E884645624 0x46BC5B40 b1207
	static BOOL WOULD_ENTITY_BE_OCCLUDED(Hash entityModelHash, float x, float y, float z, BOOL p4) { return invoke<BOOL>(0x0225D600, entityModelHash, x, y, z, p4); } // 0x3546FAB293FF2981 0xEA127CBC b1207
	static BOOL IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Entity entity) { return invoke<BOOL>(0x0225D630, entity); } // 0x5E1CC2E8DC3111DD 0x00AB7A4A b1207
	static BOOL _IS_ENTITY_ON_TRAIN_TRACK(Entity entity) { return invoke<BOOL>(0x0225D6E0, entity); } // 0x857ACB0AB4BD0D55 b1207
	static void _0xCDB682BB47C02F0A(Any p0, Any p1) { invoke<Void>(0x0225D870, p0, p1); } // 0xCDB682BB47C02F0A b1207
	static void _0xE19035EB65AB2932(Any p0, Any p1) { invoke<Void>(0x0225DAC0, p0, p1); } // 0xE19035EB65AB2932 b1207
	static BOOL _0x8C03CD6B5E0E85E8(Entity entity, Hash p1) { return invoke<BOOL>(0x0225DCD0, entity, p1); } // 0x8C03CD6B5E0E85E8 b1207
	static BOOL _0x1E804EA9B12030A4(Entity entity, Hash* p1) { return invoke<BOOL>(0x0225DDE0, entity, p1); } // 0x1E804EA9B12030A4 b1207
	static Any _0xA88E215CEB0435C0(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x0225DF20, p0, p1, p2, p3, p4, p5); } // 0xA88E215CEB0435C0 b1207
	static Any _0xE31FC20319874CB3(Any p0, Any p1, Any p2) { return invoke<Any>(0x0225DF60, p0, p1, p2); } // 0xE31FC20319874CB3 b1207
	static Any _0x582F73ACFE969571(Any p0, Any p1, Any p2) { return invoke<Any>(0x0225E080, p0, p1, p2); } // 0x582F73ACFE969571 b1207
	static Any _0xBA2A089E60ED1163(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x0225E0B0, p0, p1, p2, p3, p4); } // 0xBA2A089E60ED1163 b1207
	static int GET_CARRIABLE_ENTITY_STATE(Entity entity) { return invoke<int>(0x0225E270, entity); } // 0x61914209C36EFDDB b1207
	static Any _0xD46BF94C4C66FAB0(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x0225E320, p0, p1, p2, p3); } // 0xD46BF94C4C66FAB0 b1207
	static Hash _GET_OPTIMAL_CARRY_CONFIG(Entity entity, int index) { return invoke<Hash>(0x0225E350, entity, index); } // 0x34F008A7E48C496B b1207
	static Any _0xD21C7418C590BB40(Any p0) { return invoke<Any>(0x0225E430, p0); } // 0xD21C7418C590BB40 b1207
	static Hash _GET_ENTITY_CARRY_CONFIG(Entity entity) { return invoke<Hash>(0x0225E4F0, entity); } // 0x0FD25587BB306C86 b1207
	static Any _0x5AFFA9DDC87846F8(Any p0) { return invoke<Any>(0x0225E5B0, p0); } // 0x5AFFA9DDC87846F8 b1207
	static Hash _GET_CARRIABLE_FROM_ENTITY(Entity entity) { return invoke<Hash>(0x0225E660, entity); } // 0x31FEF6A20F00B963 b1207
	static void _SET_ENTITY_CARCASS_TYPE(Entity entity, Hash type) { invoke<Void>(0x0225E780, entity, type); } // 0x399657ED871B3A6C b1207
	static Any _0x2A77EF9BEC8518F4(Any p0) { return invoke<Any>(0x0225E890, p0); } // 0x2A77EF9BEC8518F4 b1207
	static void _DELETE_CARRIABLE(Entity* entity) { invoke<Void>(0x0225E9B0, entity); } // 0x0D0DB2B6AF19A987 b1207
	static BOOL _IS_ENTITY_FULLY_LOOTED(Entity entity) { return invoke<BOOL>(0x0225E9C0, entity); } // 0x8DE41E9902E85756 b1207
	static void _0x6BCF5F3D8FFE988D(Any p0, Any p1) { invoke<Void>(0x0225EA80, p0, p1); } // 0x6BCF5F3D8FFE988D b1207
	static Any _0xEF2D9ED7CE684F08(Any p0) { return invoke<Any>(0x0225EAA0, p0); } // 0xEF2D9ED7CE684F08 b1207
	static Any _0x0CCEFC6C2C95DA2A(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x0225EC40, p0, p1, p2, p3); } // 0x0CCEFC6C2C95DA2A b1207
	static Any _0x383F64263F946E45(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x0225ED10, p0, p1, p2, p3, p4, p5); } // 0x383F64263F946E45 b1207
	static Any _0x8E10DF0FFA63FB65(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x0225EF40, p0, p1, p2, p3, p4); } // 0x8E10DF0FFA63FB65 b1207
	static BOOL _GET_ENTITY_CARRYING_FLAG(Entity entity, int flagId) { return invoke<BOOL>(0x0225EF90, entity, flagId); } // 0x808077647856DE62 b1207
	static void _SET_ENTITY_CARRYING_FLAG(Entity entity, int flagId, BOOL value) { invoke<Void>(0x0225F0B0, entity, flagId, value); } // 0x18FF3110CF47115D b1207
	static void _0xC3ABCFBC7D74AFA5(Any p0, Any p1, Any p2) { invoke<Void>(0x0225F190, p0, p1, p2); } // 0xC3ABCFBC7D74AFA5 b1207
	static void _0x371D179701D9C082(Entity entity) { invoke<Void>(0x0225F2E0, entity); } // 0x371D179701D9C082 b1436
	static void _0xA48E4801DEBDF7E4(Any p0, Any p1) { invoke<Void>(0x0225F390, p0, p1); } // 0xA48E4801DEBDF7E4 b1207
	static BOOL _GET_IS_CARRIABLE_PELT(Entity entity) { return invoke<BOOL>(0x0225F4B0, entity); } // 0x255B6DB4E3AD3C3E b1207
	static Any _0xF59FDE7B4D31A630(Any p0) { return invoke<Any>(0x0225F570, p0); } // 0xF59FDE7B4D31A630 b1207
	static Any _0x120376C23F019C6C(Any p0, Any p1) { return invoke<Any>(0x0225F650, p0, p1); } // 0x120376C23F019C6C b1207
	static Any _0x5744562E973E33CD(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x0225F780, p0, p1, p2, p3, p4); } // 0x5744562E973E33CD b1207
	static void _0xDD03FC2089AD093C(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x0225F7C0, p0, p1, p2, p3); } // 0xDD03FC2089AD093C b1207
	static Any _0xB16C780C51E51E2B(Any p0) { return invoke<Any>(0x0225F7E0, p0); } // 0xB16C780C51E51E2B b1207
	static void _0xEF259AA1E097E0AD(Entity entity, Any p1) { invoke<Void>(0x0225F910, entity, p1); } // 0xEF259AA1E097E0AD b1207
	static void _0xBD94CECFB2D65119(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x0225FA30, p0, p1, p2, p3, p4, p5); } // 0xBD94CECFB2D65119 b1207
	static void _SET_ENTITY_CUSTOM_PICKUP_RADIUS(Entity entity, float radius) { invoke<Void>(0x0225FD80, entity, radius); } // 0x482D17E45665DA44 b1207
	static void _0xE75EEA8DB59A9F39(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x02260010, p0, p1, p2, p3, p4, p5); } // 0xE75EEA8DB59A9F39 b1207
	static Any _0x188736456D1DEDE6(Any p0, Any p1) { return invoke<Any>(0x02260040, p0, p1); } // 0x188736456D1DEDE6 b1207
	static void _0xC6A1A3D63F122DE7(Any p0, Any p1) { invoke<Void>(0x02260070, p0, p1); } // 0xC6A1A3D63F122DE7 b1311
	static void APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Entity entity, int forceType, float x, float y, float z, BOOL p5, BOOL isDirectionRel, BOOL isForceRel, BOOL p8) { invoke<Void>(0x02260080, entity, forceType, x, y, z, p5, isDirectionRel, isForceRel, p8); } // 0x31DA7CEC5334DB37 0x28924E98 b1207
	static void APPLY_FORCE_TO_ENTITY(Entity entity, int forceFlags, float x, float y, float z, float offX, float offY, float offZ, int boneIndex, BOOL isDirectionRel, BOOL ignoreUpVec, BOOL isForceRel, BOOL p12, BOOL p13) { invoke<Void>(0x022601A0, entity, forceFlags, x, y, z, offX, offY, offZ, boneIndex, isDirectionRel, ignoreUpVec, isForceRel, p12, p13); } // 0xF15E8F5D333F09C4 0xC1C0855A b1207
	static void ATTACH_ENTITY_TO_ENTITY(Entity entity1, Entity entity2, int boneIndex, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, BOOL p9, BOOL useSoftPinning, BOOL collision, BOOL isPed, int vertexIndex, BOOL fixedRot, BOOL p15, BOOL p16) { invoke<Void>(0x02260220, entity1, entity2, boneIndex, xPos, yPos, zPos, xRot, yRot, zRot, p9, useSoftPinning, collision, isPed, vertexIndex, fixedRot, p15, p16); } // 0x6B9BBD38AB0796DF 0xEC024237 b1207
	static void ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16, Any p17, Any p18, Any p19, Any p20, Any p21) { invoke<Void>(0x022602D0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21); } // 0xB629A43CA1643481 0x0547417F b1207
	static void _0x445D7D8EA66E373E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15) { invoke<Void>(0x02260390, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15); } // 0x445D7D8EA66E373E b1207
	static void _0x16908E859C3AB698(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x022604F0, p0, p1, p2, p3, p4); } // 0x16908E859C3AB698 b1207
	static int GET_ENTITY_BONE_INDEX_BY_NAME(Entity entity, const char* boneName) { return invoke<int>(0x022605E0, entity, boneName); } // 0xBACA8FE9C76C124E 0xE4ECAC22 b1207
	static void CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Entity entity) { invoke<Void>(0x02260610, entity); } // 0xBB19AC7D4DCEFD0F 0x2B83F43B b1207
	static void DELETE_ENTITY(Entity* entity) { invoke<Void>(0x02260710, entity); } // 0x4CD38C78BD19A497 0xFAA3D236 b1207
	static void _DELETE_ENTITY_2(Entity* entity) { invoke<Void>(0x02260720, entity); } // 0x5E94EA09E7207C16 b1207
	static void DETACH_ENTITY(Entity entity, BOOL p1, BOOL collision) { invoke<Void>(0x02260730, entity, p1, collision); } // 0x64CDE9D6BF8ECAD3 0xC8EFCB41 b1207
	static BOOL _IS_ENTITY_FROZEN(Entity entity) { return invoke<BOOL>(0x02260750, entity); } // 0x083D497D57B7400F b1207
	static void FREEZE_ENTITY_POSITION(Entity entity, BOOL toggle) { invoke<Void>(0x02260800, entity, toggle); } // 0x7D9EFB7AD6B19754 0x65C16D57 b1207
	static void _SET_ENTITY_CLEANUP_BY_ENGINE(Entity entity, BOOL toggle) { invoke<Void>(0x02260820, entity, toggle); } // 0x740CB4F3F602C9F4 0xD3850671 b1207
	static void SET_ENTITY_AS_MISSION_ENTITY(Entity entity, BOOL p1, BOOL p2) { invoke<Void>(0x02260910, entity, p1, p2); } // 0xDC19C288082E586E 0x5D1F9E0F b1207
	static void SET_ENTITY_AS_NO_LONGER_NEEDED(Entity* entity) { invoke<Void>(0x02260930, entity); } // 0x4971D2F8162B9674 0xADF2267C b1207
	static void SET_PED_AS_NO_LONGER_NEEDED(Ped* ped) { invoke<Void>(0x022609E0, ped); } // 0x2595DD4236549CE3 0x9A388380 b1207
	static void SET_VEHICLE_AS_NO_LONGER_NEEDED(Vehicle* vehicle) { invoke<Void>(0x02260A90, vehicle); } // 0x629BFA74418D6239 0x9B0E10BE b1207
	static void SET_OBJECT_AS_NO_LONGER_NEEDED(Object* object) { invoke<Void>(0x02260B40, object); } // 0x3AE22DEB5BA5A3E6 0x3F6B949F b1207
	static void _0x20FAEE47427A4497() { invoke<Void>(0x02260BF0); } // 0x20FAEE47427A4497 b1207
	static BOOL _IS_ENTITY_OWNED_BY_THIS_SCRIPT(Entity entity) { return invoke<BOOL>(0x02260CB0, entity); } // 0x88AD6CC10D8D35B2 b1207
	static void _0x56E0735D6273B227(Any p0, Any p1) { invoke<Void>(0x02260E40, p0, p1); } // 0x56E0735D6273B227 b1207
	static void _0xC0EDEF16D90661EE(Entity entity, float p1) { invoke<Void>(0x02260F20, entity, p1); } // 0xC0EDEF16D90661EE b1207
	static void _0x0FD7D7C232876E72(Any p0) { invoke<Void>(0x02261020, p0); } // 0x0FD7D7C232876E72 b1207
	static void _0x0939E773925C4719() { invoke<Void>(0x02261200); } // 0x0939E773925C4719 b1207
	static void SET_ENTITY_CAN_BE_DAMAGED(Entity entity, BOOL toggle) { invoke<Void>(0x02261230, entity, toggle); } // 0x0D06D522B90E861F 0x60B6E744 b1207
	static BOOL _GET_ENTITY_CAN_BE_DAMAGED(Entity entity) { return invoke<BOOL>(0x02261250, entity); } // 0x75DF9E73F2F005FD b1207
	static void SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Entity entity, BOOL bCanBeDamaged, int relGroup) { invoke<Void>(0x02261340, entity, bCanBeDamaged, relGroup); } // 0x0EF1AFB18649E015 0x34165B5D b1207
	static void _0xFF83AF534156B399(Any p0, Any p1) { invoke<Void>(0x02261360, p0, p1); } // 0xFF83AF534156B399 b1207
	static void SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(Entity entity, BOOL toggle) { invoke<Void>(0x02261440, entity, toggle); } // 0x6D09F32E284D0FB7 0x3B13797C b1207
	static BOOL GET_ENTITY_COLLISION_DISABLED(Entity entity) { return invoke<BOOL>(0x02261460, entity); } // 0xAA2FADD30F45A9DA 0xE8C0C629 b1207
	static void SET_ENTITY_COLLISION(Entity entity, BOOL toggle, BOOL keepPhysics) { invoke<Void>(0x02261510, entity, toggle, keepPhysics); } // 0xF66F820909453B8C 0x139FD37D b1207
	static void SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Entity entity, BOOL toggle, BOOL keepPhysics) { invoke<Void>(0x02261530, entity, toggle, keepPhysics); } // 0xE0580EC84813875A 0xBD0D4831 b1207
	static void SET_ENTITY_COORDS(Entity entity, float xPos, float yPos, float zPos, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL clearArea) { invoke<Void>(0x02261560, entity, xPos, yPos, zPos, xAxis, yAxis, zAxis, clearArea); } // 0x06843DA7060A026B 0xDF70B41B b1207
	static void SET_ENTITY_COORDS_NO_OFFSET(Entity entity, float xPos, float yPos, float zPos, BOOL xAxis, BOOL yAxis, BOOL zAxis) { invoke<Void>(0x022615B0, entity, xPos, yPos, zPos, xAxis, yAxis, zAxis); } // 0x239A3351AC1DA385 0x4C83DE8D b1207
	static void SET_ENTITY_DYNAMIC(Entity entity, BOOL toggle) { invoke<Void>(0x022615E0, entity, toggle); } // 0xFBFC4473F66CE344 0x236F525B b1207
	static void SET_ENTITY_HEADING(Entity entity, float heading) { invoke<Void>(0x02261600, entity, heading); } // 0xCF2B9C0645C4651B 0xE0FF064D b1207
	static void _SET_ENTITY_COORDS_AND_HEADING(Entity entity, float xPos, float yPos, float zPos, float heading, BOOL xAxis, BOOL yAxis, BOOL zAxis) { invoke<Void>(0x02261610, entity, xPos, yPos, zPos, heading, xAxis, yAxis, zAxis); } // 0x203BEFFDBE12E96A b1207
	static void _SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Entity entity, float xPos, float yPos, float zPos, float heading, BOOL p5, BOOL p6) { invoke<Void>(0x02261670, entity, xPos, yPos, zPos, heading, p5, p6); } // 0x0918E3565C20F03C b1207
	static void SET_ENTITY_HEALTH(Entity entity, int healthAmount, Entity entityKilledBy) { invoke<Void>(0x022616C0, entity, healthAmount, entityKilledBy); } // 0xAC2767ED8BDFAB15 b1207
	static void SET_ENTITY_INVINCIBLE(Entity entity, BOOL toggle) { invoke<Void>(0x022616E0, entity, toggle); } // 0xA5C38736C426FCB8 0xC1213A21 b1207
	static void _0xAF7F3099B9FEB535(Entity entity, float p1, float p2, float p3) { invoke<Void>(0x02261700, entity, p1, p2, p3); } // 0xAF7F3099B9FEB535 b1207
	static void SET_ENTITY_IS_TARGET_PRIORITY(Entity entity, BOOL p1, float p2) { invoke<Void>(0x022617F0, entity, p1, p2); } // 0x0A5D170C44CB2189 0x9729EE32 b1207
	static void _0xB38A29CCD5447783(Any p0, Any p1, Any p2) { invoke<Void>(0x02261810, p0, p1, p2); } // 0xB38A29CCD5447783 b1207
	static void _0x4B436BAC8CBE9B07(Entity entity, int p1, BOOL p2) { invoke<Void>(0x02261830, entity, p1, p2); } // 0x4B436BAC8CBE9B07 b1207
	static int _0xE12F56CB25D9CE23(Entity entity) { return invoke<int>(0x02261930, entity); } // 0xE12F56CB25D9CE23 b1207
	static void _0x2D40BCBFE9305DEA(Any p0, Any p1) { invoke<Void>(0x02261A10, p0, p1); } // 0x2D40BCBFE9305DEA b1207
	static void _SET_ENTITY_LIGHTS_ENABLED(Entity entity, BOOL enabled) { invoke<Void>(0x02261B10, entity, enabled); } // 0xEBDC12861D079ABA b1207
	static void SET_ENTITY_LOAD_COLLISION_FLAG(Entity entity, BOOL toggle) { invoke<Void>(0x02261BE0, entity, toggle); } // 0x9B9EE31AED48072E 0xC52F295B b1207
	static BOOL HAS_COLLISION_LOADED_AROUND_ENTITY(Entity entity) { return invoke<BOOL>(0x02261D50, entity); } // 0xBEB1600952B9CF5C 0x851687F9 b1207
	static BOOL HAS_COLLISION_LOADED_AROUND_POSITION(float xPos, float yPos, float zPos) { return invoke<BOOL>(0x02261E30, xPos, yPos, zPos); } // 0x6BFBDC46139C45AB b1207
	static void SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Entity entity, BOOL toggle) { invoke<Void>(0x02261E80, entity, toggle); } // 0x473598683095D430 0x4B707F50 b1207
	static void SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(Entity entity, BOOL p1, Hash relationshipGroup) { invoke<Void>(0x02261F60, entity, p1, relationshipGroup); } // 0x6C1F6AA2F0ADD104 0x202237E2 b1207
	static void SET_ENTITY_PROOFS(Entity entity, int proofsBitset, BOOL specialFlag) { invoke<Void>(0x02261F80, entity, proofsBitset, specialFlag); } // 0xFAEE099C6F890BB8 0x7E9EAB66 b1207
	static int _GET_ENTITY_PROOFS(Entity entity) { return invoke<int>(0x02261FA0, entity); } // 0x6CF0DAD7FA1088EA b1207
	static void SET_ENTITY_QUATERNION(Entity entity, float x, float y, float z, float w) { invoke<Void>(0x02261FC0, entity, x, y, z, w); } // 0x100E7007D13E3687 0x83B6046F b1207
	static void SET_ENTITY_ROTATION(Entity entity, float pitch, float roll, float yaw, int rotationOrder, BOOL p5) { invoke<Void>(0x022621A0, entity, pitch, roll, yaw, rotationOrder, p5); } // 0x9CC8314DFEDE441E 0x0A345EFE b1207
	static void _0xD45BB89B53FC0CFD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x022621C0, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xD45BB89B53FC0CFD b1207
	static void SET_ENTITY_VISIBLE(Entity entity, BOOL toggle) { invoke<Void>(0x022621E0, entity, toggle); } // 0x1794B4FCC84D812F 0xD043E8E1 b1207
	static void _0x80FDEB3A9E9AA578(Any p0, Any p1) { invoke<Void>(0x02262200, p0, p1); } // 0x80FDEB3A9E9AA578 b1207
	static void _0x9C6906EF8CB20C5F(Entity entity) { invoke<Void>(0x02262220, entity); } // 0x9C6906EF8CB20C5F b1436
	static void SET_ENTITY_VELOCITY(Entity entity, float x, float y, float z) { invoke<Void>(0x02262410, entity, x, y, z); } // 0x1C99BB7B6E96D16F 0xFF5A1988 b1207
	static void SET_ENTITY_HAS_GRAVITY(Entity entity, BOOL toggle) { invoke<Void>(0x02262520, entity, toggle); } // 0x0CEDB728A1083FA7 0xE2F262BF b1207
	static void SET_ENTITY_LOD_DIST(Entity entity, int value) { invoke<Void>(0x022625F0, entity, value); } // 0x5FB407F0A7C877BF 0xD7ACC7AD b1207
	static int GET_ENTITY_LOD_DIST(Entity entity) { return invoke<int>(0x02262600, entity); } // 0xDF240D0C2A948683 0x4DA3D51F b1207
	static void SET_ENTITY_ALPHA(Entity entity, int alphaLevel, BOOL skin) { invoke<Void>(0x022626B0, entity, alphaLevel, skin); } // 0x0DF7692B1D9E7BA7 0xAE667CB0 b1207
	static int GET_ENTITY_ALPHA(Entity entity) { return invoke<int>(0x02262770, entity); } // 0x1BB501624FAF2BEA 0x1560B017 b1207
	static void RESET_ENTITY_ALPHA(Entity entity) { invoke<Void>(0x02262860, entity); } // 0x744B9EF44779D9AB 0x8A30761C b1207
	static void _SET_ENTITY_FADE_IN(Entity entity) { invoke<Void>(0x02262900, entity); } // 0xA91E6CF94404E8C9 b1207
	static void SET_ENTITY_ALWAYS_PRERENDER(Entity entity, BOOL toggle) { invoke<Void>(0x022629E0, entity, toggle); } // 0xACAD101E1FB66689 0xD8FF798A b1207
	static void SET_ENTITY_RENDER_SCORCHED(Entity entity, BOOL toggle) { invoke<Void>(0x02262BF0, entity, toggle); } // 0x85B8A7534E44BC23 0xAAC9317B b1207
	static Any _0x37B01666BAE8F7EF(Entity entity) { return invoke<Any>(0x02262CB0, entity); } // 0x37B01666BAE8F7EF b1207
	static void _0xA9E6D8F2DDFC4DB9(Any p0, Any p1) { invoke<Void>(0x02262D70, p0, p1); } // 0xA9E6D8F2DDFC4DB9 b1207
	static void CREATE_MODEL_SWAP(float x, float y, float z, float radius, Hash originalModel, Hash newModel, BOOL p6) { invoke<Void>(0x02262E30, x, y, z, radius, originalModel, newModel, p6); } // 0x10B2218320B6F5AC 0x0BC12F9E b1207
	static void REMOVE_MODEL_SWAP(float x, float y, float z, float radius, Hash originalModel, Hash newModel, BOOL p6) { invoke<Void>(0x02262ED0, x, y, z, radius, originalModel, newModel, p6); } // 0x824E1C26A14CB817 0xCE0AA8BC b1207
	static void CREATE_MODEL_HIDE(float x, float y, float z, float radius, Hash model, BOOL p5) { invoke<Void>(0x02262F40, x, y, z, radius, model, p5); } // 0x069848B3FB3C4426 0x7BD5CF2F b1207
	static void CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(float x, float y, float z, float radius, Hash model, BOOL p5) { invoke<Void>(0x02262FE0, x, y, z, radius, model, p5); } // 0xD136090A9AAAB17D 0x07AAF22C b1207
	static void REMOVE_MODEL_HIDE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x02263080, p0, p1, p2, p3, p4, p5); } // 0x3F38A98576F6213A 0x993DBC10 b1207
	static Any _0xD4636C2EDB0DEA8A(Any p0) { return invoke<Any>(0x02263100, p0); } // 0xD4636C2EDB0DEA8A b1207
	static void CREATE_FORCED_OBJECT(float x, float y, float z, Any p3, Hash modelHash, BOOL p5) { invoke<Void>(0x022631D0, x, y, z, p3, modelHash, p5); } // 0x0961A905AFBC34C7 0x335190A2 b1207
	static void REMOVE_FORCED_OBJECT(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x02263270, p0, p1, p2, p3, p4); } // 0x553FA683F2BCD814 0xAED73ADD b1207
	static void SET_ENTITY_NO_COLLISION_ENTITY(Entity entity1, Entity entity2, BOOL thisFrameOnly) { invoke<Void>(0x022632E0, entity1, entity2, thisFrameOnly); } // 0xE037BF068223C38D 0x1E11BFE9 b1207
	static void SET_ENTITY_MOTION_BLUR(Entity entity, BOOL toggle) { invoke<Void>(0x02263300, entity, toggle); } // 0x516C6ABD18322B63 0xE90005B8 b1207
	static void SET_CAN_AUTO_VAULT_ON_ENTITY(Entity entity, BOOL toggle) { invoke<Void>(0x022633D0, entity, toggle); } // 0x80646744FA88F9D7 0x44767B31 b1207
	static void SET_CAN_CLIMB_ON_ENTITY(Entity entity, BOOL toggle) { invoke<Void>(0x02263490, entity, toggle); } // 0x24AED2A608F93C4C 0xE224A6A5 b1207
	static void _SET_ENTITY_DECALS_DISABLED(Entity entity, BOOL toggle) { invoke<Void>(0x02263550, entity, toggle); } // 0xC64E597783BE9A1D b1207
	static Any _0x59B57C4B06531E1E(float x, float y, float z, float radius, ItemSet itemSet, Any p5) { return invoke<Any>(0x02263610, x, y, z, radius, itemSet, p5); } // 0x59B57C4B06531E1E b1207
	static int GET_MATCHING_ENTITIES(Volume volume, ItemSet itemSet, int entityType, Any p3, Hash p4, const char* p5) { return invoke<int>(0x02263640, volume, itemSet, entityType, p3, p4, p5); } // 0x84CCF9A12942C83D b1207
	static int _GET_ENTITIES_IN_VOLUME(Volume volume, ItemSet itemSet, int entityType) { return invoke<int>(0x02263680, volume, itemSet, entityType); } // 0x886171A12F400B89 b1207
	static Entity _SEARCH_BUILDING_POOL_FOR_ENTITY_WITH_THIS_MODEL(Hash modelHash) { return invoke<Entity>(0x022636C0, modelHash); } // 0x66B2B83B94B22458 b1207
	static Any _0xC2E71D7E0A7B4C89(Any p0) { return invoke<Any>(0x02263750, p0); } // 0xC2E71D7E0A7B4C89 b1207
	static void _0x6C31B06E91518269(Any p0, Any p1) { invoke<Void>(0x02263810, p0, p1); } // 0x6C31B06E91518269 b1207
	static void _0x119A5714578F4E05(Any p0, Any p1) { invoke<Void>(0x022638F0, p0, p1); } // 0x119A5714578F4E05 b1207
	static Entity _GET_ENTITY_BY_DOORHASH(Hash doorHash, int p1) { return invoke<Entity>(0x02263A00, doorHash, p1); } // 0xF7424890E4A094C0 b1207
	static BOOL FIND_ANIM_EVENT_PHASE(const char* animDictionary, const char* animName, const char* p2, Any* p3, Any* p4) { return invoke<BOOL>(0x02263B20, animDictionary, animName, p2, p3, p4); } // 0x42718CC559BD7776 0xC41DDA62 b1207
	static void FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Entity entity, BOOL p1) { invoke<Void>(0x02263B60, entity, p1); } // 0x4C9E96473D4F1A88 0x58D9775F b1207
	static float _GET_ENTITY_ANIM_CURRENT_TIME(Entity entity, const char* animDict, const char* animName) { return invoke<float>(0x02263B80, entity, animDict, animName); } // 0x627520389E288A73 b1207
	static Any _0x8E46E18AA828334F(Any p0, Any p1, Any p2) { return invoke<Any>(0x02263BB0, p0, p1, p2); } // 0x8E46E18AA828334F b1207
	static Any _0xDF8E49EA89A01DB1(Any p0, Any p1, Any p2) { return invoke<Any>(0x02263BE0, p0, p1, p2); } // 0xDF8E49EA89A01DB1 b1207
	static BOOL HAS_ANIM_EVENT_FIRED(Entity entity, Hash actionHash) { return invoke<BOOL>(0x02263BF0, entity, actionHash); } // 0x5851CC48405F4A07 0x66571CA0 b1207
	static BOOL HAS_ENTITY_ANIM_FINISHED(Entity entity, const char* animDict, const char* animName, int p3) { return invoke<BOOL>(0x02263CB0, entity, animDict, animName, p3); } // 0xAEB40615337EF1E3 0x1D9CAB92 b1207
	static BOOL PLAY_ENTITY_ANIM(Entity entity, const char* animName, const char* animDict, float p3, BOOL loop, BOOL stayInAnim, BOOL p6, float delta, Any bitset) { return invoke<BOOL>(0x02263CE0, entity, animName, animDict, p3, loop, stayInAnim, p6, delta, bitset); } // 0xDC6D22FAB76D4874 0x878753D5 b1207
	static void _SET_ENTITY_ANIM_CURRENT_TIME(Entity entity, const char* animDict, const char* animName, float time) { invoke<Void>(0x02263D40, entity, animDict, animName, time); } // 0x11CDABDC7783B2BC b1207
	static void _SET_ENTITY_ANIM_SPEED(Entity entity, const char* animDict, const char* animName, float speedMultiplier) { invoke<Void>(0x02263D60, entity, animDict, animName, speedMultiplier); } // 0xEAA885BA3CEA4E4A b1207
	static Any STOP_ENTITY_ANIM(Entity entity, const char* animation, const char* animGroup, float p3) { return invoke<Any>(0x02263D80, entity, animation, animGroup, p3); } // 0x786591D986DE9159 0xC4769830 b1207
	static void _0x669655FFB29EF1A9(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02263DA0, p0, p1, p2, p3); } // 0x669655FFB29EF1A9 b1207
	static void _0x1AD922AB5038DEF3(Entity entity) { invoke<Void>(0x02263DC0, entity); } // 0x1AD922AB5038DEF3 b1207
	static void _0x5826EFD6D73C4DE5(Entity entity) { invoke<Void>(0x02263E90, entity); } // 0x5826EFD6D73C4DE5 b1207
	static void _0x36EB4D34D4A092C5(Entity entity, Any p1) { invoke<Void>(0x02263F50, entity, p1); } // 0x36EB4D34D4A092C5 b1207
	static Any _0x29BA9F78321E5A6C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { return invoke<Any>(0x02264060, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x29BA9F78321E5A6C b1207
	static void _0xC76E94A78127412B(Any p0, Any p1, Any p2) { invoke<Void>(0x022640D0, p0, p1, p2); } // 0xC76E94A78127412B b1207
	static void _0x7F20092547B4DDEA(Any p0) { invoke<Void>(0x02264250, p0); } // 0x7F20092547B4DDEA b1207
	static void _0xF41E2979D5BC5370(Any p0) { invoke<Void>(0x02264310, p0); } // 0xF41E2979D5BC5370 b1207
	static Any _0xAAACB74442C1BED3(Any p0) { return invoke<Any>(0x02264520, p0); } // 0xAAACB74442C1BED3 b1207
	static Any PIN_CLOSEST_MAP_ENTITY(Hash modelHash, float x, float y, float z, Any p4) { return invoke<Any>(0x02264540, modelHash, x, y, z, p4); } // 0x6F3068258A499E52 b1207
	static void _UNPIN_MAP_ENTITY(Entity entity) { invoke<Void>(0x022646B0, entity); } // 0xD2B9C78537ED5759 b1207
	static BOOL IS_MAP_ENTITY_PINNED(Any p0) { return invoke<BOOL>(0x02264750, p0); } // 0x1FF441D7954F8709 b1207
	static Any _0x4735E2A4BB83D9DA(Any p0) { return invoke<Any>(0x02264810, p0); } // 0x4735E2A4BB83D9DA b1207
	static void _0xEAB3D91D30A344F1(Any p0) { invoke<Void>(0x02264830, p0); } // 0xEAB3D91D30A344F1 b1207
	static void _0x37CEB637BA3B1A47(Any p0) { invoke<Void>(0x022648D0, p0); } // 0x37CEB637BA3B1A47 b1207
	static Any _0x350E9211074955AF(Any p0, Any p1) { return invoke<Any>(0x02264970, p0, p1); } // 0x350E9211074955AF b1207
	static void _0x898586729DB5221D(Any p0) { invoke<Void>(0x02264A40, p0); } // 0x898586729DB5221D b1207
	static void _0xE9E7A0BAC7F57746(Any p0, Any p1) { invoke<Void>(0x02264B50, p0, p1); } // 0xE9E7A0BAC7F57746 b1207
}

namespace EVENT
{
	static void SET_DECISION_MAKER(Ped ped, Hash name) { invoke<Void>(0x0226C980, ped, name); } // 0x8AE2F981CDDB8FA4 0x19CEAC9E b1207
	static void _SET_DECISION_MAKER_DEFAULT(Ped ped) { invoke<Void>(0x0226CAA0, ped); } // 0x6B9C5C38838FB6E6 b1207
	static ScrHandle _CREATE_SHOCKING_EVENT(Any* args) { return invoke<ScrHandle>(0x0226CBC0, args); } // 0xCA1315C33B9A2847 b1207
	static ScrHandle ADD_SHOCKING_EVENT_AT_POSITION(Hash eventType, float x, float y, float z, float p4, float p5, float p6, float p7, float p8, int p9, int p10) { return invoke<ScrHandle>(0x0226CBF0, eventType, x, y, z, p4, p5, p6, p7, p8, p9, p10); } // 0xD9F8455409B525E9 0x0B30F779 b1207
	static ScrHandle ADD_SHOCKING_EVENT_FOR_ENTITY(Hash eventType, Entity entity, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8, BOOL p9, int p10, int p11) { return invoke<ScrHandle>(0x0226CDD0, eventType, entity, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x7FD8F3BE76F89422 0xA81B5B71 b1207
	static BOOL IS_SHOCKING_EVENT_IN_SPHERE(Hash eventType, float x, float y, float z, float radius) { return invoke<BOOL>(0x0226D0C0, eventType, x, y, z, radius); } // 0x9DB47E16060D6354 0x2F98823E b1207
	static BOOL REMOVE_SHOCKING_EVENT(ScrHandle event) { return invoke<BOOL>(0x0226D280, event); } // 0xE8BB3CC253A34559 0xF82D5A87 b1207
	static void REMOVE_ALL_SHOCKING_EVENTS(BOOL p0) { invoke<Void>(0x0226D2B0, p0); } // 0xD47A168C2AB90DC4 0x64DF6282 b1207
	static void _REMOVE_ALL_SHOCKING_EVENTS_IN_AREA(float x, float y, float z, float radius, BOOL p4) { invoke<Void>(0x0226D2D0, x, y, z, radius, p4); } // 0xB4C71BA9CAB097BD b1207
	static void _REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE_IN_AREA(Hash eventType, float x, float y, float z, float radius, BOOL p5) { invoke<Void>(0x0226D2F0, eventType, x, y, z, radius, p5); } // 0x6A648D42BF271DC7 b1207
	static void _REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE(Hash eventType, BOOL p1) { invoke<Void>(0x0226D310, eventType, p1); } // 0x118873DD538490B4 b1207
	static void REMOVE_SHOCKING_EVENT_SPAWN_BLOCKING_AREAS() { invoke<Void>(0x0226D330); } // 0xDB249021652420C5 0xA0CE89C8 b1207
	static Any _0x36D0F2BA2C0D9BDE(Entity entity, int p1) { return invoke<Any>(0x0226D340, entity, p1); } // 0x36D0F2BA2C0D9BDE b1207
	static void _0x7C511E91738A0828(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x0226D370, p0, p1, p2, p3); } // 0x7C511E91738A0828 b1207
	static void SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME() { invoke<Void>(0x0226D6D0); } // 0x84994FAD4E4E4E69 0x4CC674B5 b1207
	static void _0xB6F4825153920582() { invoke<Void>(0x0226D6E0); } // 0xB6F4825153920582 b1207
	static void _0x4B2B1A891D437CA7(Any p0) { invoke<Void>(0x0226D6F0, p0); } // 0x4B2B1A891D437CA7 b1207
	static void _0x9520175B35E2268D(Ped ped, int p1) { invoke<Void>(0x0226D700, ped, p1); } // 0x9520175B35E2268D b1207
	static Any _0x18E93EBFC1FCFA48(Any p0, Any p1, Any p2) { return invoke<Any>(0x0226D810, p0, p1, p2); } // 0x18E93EBFC1FCFA48 b1207
	static void _0x56B3410626A473E7(Any p0) { invoke<Void>(0x0226D960, p0); } // 0x56B3410626A473E7 b1207
	static void _0x608AD36A644A97FE(Hash p0, BOOL p1, BOOL p2) { invoke<Void>(0x0226D9A0, p0, p1, p2); } // 0x608AD36A644A97FE b1207
	static void _0x4465C3D1475BD3FD(Any p0) { invoke<Void>(0x0226DA20, p0); } // 0x4465C3D1475BD3FD b1207
	static Any _0x2DD42FAD06E6F19E(Any p0, Any p1, Any p2) { return invoke<Any>(0x0226DA80, p0, p1, p2); } // 0x2DD42FAD06E6F19E b1207
	static void _0xA86B0EE9B39D15D6(Any p0) { invoke<Void>(0x0226DB90, p0); } // 0xA86B0EE9B39D15D6 b1207
	static Any _0x26054EB81AC0893B(Any p0) { return invoke<Any>(0x0226DBD0, p0); } // 0x26054EB81AC0893B b1207
	static void _0xBB1E41DD3D3C6250(Ped ped, const char* p1, int p2) { invoke<Void>(0x0226DC70, ped, p1, p2); } // 0xBB1E41DD3D3C6250 b1207
	static Any _0xAD17A18215DD23D6(Any p0, Any p1, Any p2) { return invoke<Any>(0x0226DE10, p0, p1, p2); } // 0xAD17A18215DD23D6 b1207
	static Any _0xC6A7DC546E94FED5(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x0226DF40, p0, p1, p2, p3); } // 0xC6A7DC546E94FED5 b1207
	static Hash _0x796EECFF0C6D39BE(Ped ped, Any p1, Any p2) { return invoke<Hash>(0x0226E0F0, ped, p1, p2); } // 0x796EECFF0C6D39BE b1207
	static Any _0x797B3D4D92E56094(Any p0, Any p1) { return invoke<Any>(0x0226E210, p0, p1); } // 0x797B3D4D92E56094 b1207
	static Entity _0x822A001BCEA5BD81(Ped ped, Hash eventType, Any p2, Any p3) { return invoke<Entity>(0x0226E330, ped, eventType, p2, p3); } // 0x822A001BCEA5BD81 b1207
	static Any _0x38497F139981C5C9(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x0226E4F0, p0, p1, p2, p3); } // 0x38497F139981C5C9 b1207
	static Any _0x1D1B448D719415AB(Ped ped) { return invoke<Any>(0x0226E6B0, ped); } // 0x1D1B448D719415AB b1207
	static Any _0x83D43F0FD5276E4D(Any p0, Any p1) { return invoke<Any>(0x0226E7C0, p0, p1); } // 0x83D43F0FD5276E4D b1207
	static void _0xE28D7FC9FD32ABEB(Any p0, Any p1, Any p2) { invoke<Void>(0x0226E8C0, p0, p1, p2); } // 0xE28D7FC9FD32ABEB b1311
	static void _0x1A5C5D350068A673(Any p0, Any p1) { invoke<Void>(0x0226E9E0, p0, p1); } // 0x1A5C5D350068A673 b1207
	static void _0xAD8F2424C6E1E3A8(Ped ped) { invoke<Void>(0x0226EAF0, ped); } // 0xAD8F2424C6E1E3A8 b1207
	static void _0xE2C2FBB7825FFC66() { invoke<Void>(0x0226EC40); } // 0xE2C2FBB7825FFC66 b1207
}

namespace FIRE
{
	static FireId START_SCRIPT_FIRE(float x, float y, float z, int p3, float p4, BOOL p5, const char* soundsetName, float p7, int p8) { return invoke<FireId>(0x022747A0, x, y, z, p3, p4, p5, soundsetName, p7, p8); } // 0x6B83617E04503888 0xE7529357 b1207
	static void REMOVE_SCRIPT_FIRE(FireId fireHandle) { invoke<Void>(0x022749D0, fireHandle); } // 0x790125C36E194069 0x6B21FE26 b1207
	static void START_ENTITY_FIRE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02274A00, p0, p1, p2, p3); } // 0xC4DC7418A44D6822 0x8928428E b1207
	static void STOP_ENTITY_FIRE(Any p0, Any p1) { invoke<Void>(0x02274B50, p0, p1); } // 0x8390751DC40C1E98 0xCE8C9066 b1207
	static BOOL IS_ENTITY_ON_FIRE(Entity entity) { return invoke<BOOL>(0x02274CE0, entity); } // 0x1BD7C371CE257C3E 0x8C73E64F b1207
	static void _0x754937C28271BC65(Any p0) { invoke<Void>(0x02274DF0, p0); } // 0x754937C28271BC65 b1207
	static int GET_NUMBER_OF_FIRES_IN_RANGE(float x, float y, float z, float radius) { return invoke<int>(0x02274F70, x, y, z, radius); } // 0xF9617BC6FAE61E08 0x654D93B7 b1207
	static void STOP_FIRE_IN_RANGE(float x, float y, float z, float radius) { invoke<Void>(0x022750B0, x, y, z, radius); } // 0xDB38F247BD421708 0x725C7205 b1207
	static void _STOP_FIRE_IN_BOX(float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ) { invoke<Void>(0x022750F0, posX, posY, posZ, rotX, rotY, rotZ, scaleX, scaleY, scaleZ); } // 0xB7C7BDC375AEA9A4 b1207
	static BOOL GET_CLOSEST_FIRE_POS(Vector3* outPosition, float x, float y, float z) { return invoke<BOOL>(0x02275320, outPosition, x, y, z); } // 0xB646FB657F448261 0xC4977B47 b1207
	static Any _0x559FC1D310813031(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoke<Any>(0x02275510, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x559FC1D310813031 b1232
	static Any _0x41B87A6495EE13DD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoke<Any>(0x022757C0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x41B87A6495EE13DD b1232
	static Any _0xA4454592DCF7C992(Any p0) { return invoke<Any>(0x02275A70, p0); } // 0xA4454592DCF7C992 b1207
	static BOOL _IS_ENTITY_CONSUMED_BY_FIRE(Entity entity) { return invoke<BOOL>(0x02275B90, entity); } // 0xCDC25355C0D65963 b1207
	static void ADD_EXPLOSION(float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) { invoke<Void>(0x02275BC0, x, y, z, explosionType, damageScale, isAudible, isInvisible, cameraShake); } // 0x7D6F58F69DA92530 0x10AF5258 b1207
	static void ADD_OWNED_EXPLOSION(Ped ped, float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) { invoke<Void>(0x02275BF0, ped, x, y, z, explosionType, damageScale, isAudible, isInvisible, cameraShake); } // 0xD84A917A64D4D016 0x27EE0D67 b1207
	static void _0xB7DF150605EEDC9B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0x02275C20, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xB7DF150605EEDC9B b1207
	static void ADD_EXPLOSION_WITH_USER_VFX(float x, float y, float z, int explosionType, Hash explosionFx, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) { invoke<Void>(0x02275C60, x, y, z, explosionType, explosionFx, damageScale, isAudible, isInvisible, cameraShake); } // 0x53BA259F3A67A99E 0xCF358946 b1207
	static void _0x34AE85C7CA4857AA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoke<Void>(0x02275C90, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x34AE85C7CA4857AA b1207
	static BOOL IS_EXPLOSION_IN_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0x02275CE0, explosionType, x1, y1, z1, x2, y2, z2); } // 0x8391BA4313A25AD3 0xFB40075B b1207
	static BOOL IS_EXPLOSION_ACTIVE_IN_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0x02275EA0, explosionType, x1, y1, z1, x2, y2, z2); } // 0xD96E82AEBFFAAFF0 0x37C388DB b1207
	static BOOL IS_EXPLOSION_IN_SPHERE(int explosionType, float x, float y, float z, float radius) { return invoke<BOOL>(0x02275F80, explosionType, x, y, z, radius); } // 0xD62DD846D82CBB90 0xD455A7F3 b1207
	static BOOL IS_EXPLOSION_IN_ANGLED_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2, float angle) { return invoke<BOOL>(0x02275FE0, explosionType, x1, y1, z1, x2, y2, z2, angle); } // 0x5AE661ECD18524C9 0x0128FED9 b1207
	static BOOL _IS_EXPLOSION_IN_VOLUME(int explosionType, Volume volume) { return invoke<BOOL>(0x02276080, explosionType, volume); } // 0xE24822A4CFC9107A b1207
	static Entity GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2, float radius) { return invoke<Entity>(0x02276140, explosionType, x1, y1, z1, x2, y2, z2, radius); } // 0x8002DDAB58594D78 0xAEC0D176 b1207
	static void _0x68F6A75FDF5A70D6(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x022761F0, p0, p1, p2, p3); } // 0x68F6A75FDF5A70D6 b1207
	static void _0x24DB6B9F2B719043(Any p0) { invoke<Void>(0x02276240, p0); } // 0x24DB6B9F2B719043 b1207
	static BOOL _0xAB7993BA61A4674F(Ped ped, int p1) { return invoke<BOOL>(0x02276250, ped, p1); } // 0xAB7993BA61A4674F b1232
}

namespace FLOCK
{
	static float GET_SPECIES_TUNING_FLOAT_PARAM(Hash p0, int p1, int p2) { return invoke<float>(0x0227F050, p0, p1, p2); } // 0xE108489621422F91 b1207
	static void SET_SPECIES_TUNING_FLOAT_PARAM(Hash p0, int p1, int p2, float p3) { invoke<Void>(0x0227F130, p0, p1, p2, p3); } // 0x963240B6C252BA49 b1207
	static void SET_SPECIES_TUNING_BOOL_PARAM(Hash p0, int p1, int p2, BOOL p3) { invoke<Void>(0x0227F150, p0, p1, p2, p3); } // 0x6D1D94C2459B42EE b1207
	static float GET_ANIMAL_TUNING_FLOAT_PARAM(Ped animal, int p1) { return invoke<float>(0x0227F170, animal, p1); } // 0x4BC3ECFDA0297E27 b1207
	static void SET_ANIMAL_TUNING_FLOAT_PARAM(Ped animal, int p1, float p2) { invoke<Void>(0x0227F300, animal, p1, p2); } // 0xCBDA22C87977244F b1207
	static void RESET_ANIMAL_TUNING_FLOAT_PARAM(Any p0, Any p1) { invoke<Void>(0x0227F450, p0, p1); } // 0xE776A195488FC520 b1355
	static BOOL GET_ANIMAL_TUNING_BOOL_PARAM(Ped animal, int p1) { return invoke<BOOL>(0x0227F520, animal, p1); } // 0x1C1993824A396603 b1207
	static void SET_ANIMAL_TUNING_BOOL_PARAM(Ped animal, int p1, BOOL p2) { invoke<Void>(0x0227F690, animal, p1, p2); } // 0x9FF1E042FA597187 b1207
	static void RESET_ANIMAL_TUNING_BOOL_PARAM(Any p0, Any p1) { invoke<Void>(0x0227F7D0, p0, p1); } // 0x96AA1304D30E6BC3 b1355
	static Any _0x8049B17BEC937662(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0x0227F8A0, p0, p1, p2, p3, p4, p5, p6); } // 0x8049B17BEC937662 b1207
	static Any _0xE93415B3307208E5(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<Any>(0x0227F8F0, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xE93415B3307208E5 b1207
	static Any _0x19870C40C7EE15BE(Any p0, Any p1) { return invoke<Any>(0x0227F940, p0, p1); } // 0x19870C40C7EE15BE b1207
	static void _0x0816C31480764AB0(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x0227F9F0, p0, p1, p2, p3); } // 0x0816C31480764AB0 b1207
	static void _0xC3D581A34BC0A1F0(Any p0, Any p1) { invoke<Void>(0x0227FA20, p0, p1); } // 0xC3D581A34BC0A1F0 b1207
	static void _0xF2CCA7B68CFAB2B9(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13) { invoke<Void>(0x0227FAE0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 0xF2CCA7B68CFAB2B9 b1207
	static void _0xFB16F08F47B83B4C(Any p0) { invoke<Void>(0x0227FB50, p0); } // 0xFB16F08F47B83B4C b1207
	static BOOL _GET_ANIMAL_IS_WILD(Ped ped) { return invoke<BOOL>(0x0227FBF0, ped); } // 0x3B005FF0538ED2A9 b1207
	static void _SET_ANIMAL_IS_WILD(Ped ped, BOOL toggle) { invoke<Void>(0x0227FCE0, ped, toggle); } // 0xAEB97D84CDF3C00B b1207
	static int _GET_ANIMAL_RARITY(Ped ped) { return invoke<int>(0x0227FF40, ped); } // 0xF8B48A361DC388AE b1207
	static void _SET_ANIMAL_RARITY(Ped ped, int rarityLevel) { invoke<Void>(0x02280020, ped, rarityLevel); } // 0x8B6F0F59B1B99801 b1207
	static void _0xFF1E339CE40EAAAF(Any p0, Any p1) { invoke<Void>(0x02280120, p0, p1); } // 0xFF1E339CE40EAAAF b1207
	static Any _0x8D913E493BAFE0A3(Any p0) { return invoke<Any>(0x02280220, p0); } // 0x8D913E493BAFE0A3 b1207
	static int _CREATE_HERD() { return invoke<int>(0x022802C0); } // 0xCB4EF7EDAE2E16F1 b1207
	static void _0xE0961AED72642B80(Any p0) { invoke<Void>(0x02280390, p0); } // 0xE0961AED72642B80 b1207
	static void _ADD_PED_TO_FLOCK(Any p0, Ped ped) { invoke<Void>(0x02280430, p0, ped); } // 0x933E5D31A7D13069 b1207
	static void _0x408D1149C5E39C1E(Any p0, Any p1) { invoke<Void>(0x02280550, p0, p1); } // 0x408D1149C5E39C1E b1207
	static Any _0x9E13ACC38BA8F9C3(Any p0, Any p1) { return invoke<Any>(0x02280670, p0, p1); } // 0x9E13ACC38BA8F9C3 b1207
	static Any _0x34B9C4D86DF2C2F3(Any p0) { return invoke<Any>(0x022807C0, p0); } // 0x34B9C4D86DF2C2F3 b1207
	static Vector3 _0x1DA6CB02071055D5(Any p0) { return invoke<Vector3>(0x02280870, p0); } // 0x1DA6CB02071055D5 b1207
	static void _0xC95611869E14F8AF(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02280930, p0, p1, p2, p3); } // 0xC95611869E14F8AF b1207
	static Any _0x09EE00B8F858E0BE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0x02280A30, p0, p1, p2, p3, p4, p5, p6); } // 0x09EE00B8F858E0BE b1207
	static void _0xE36D2CB540597EF7(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x02280A80, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xE36D2CB540597EF7 b1207
	static Any _0xD95F04A4E73BE85E(Any p0, Any p1) { return invoke<Any>(0x02280AC0, p0, p1); } // 0xD95F04A4E73BE85E b1207
	static void _0x17E3E5C46ECCD308(Any p0, Any p1, Any p2) { invoke<Void>(0x02280B90, p0, p1, p2); } // 0x17E3E5C46ECCD308 b1207
	static void _0xC72CE37081DAE625(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02280C60, p0, p1, p2, p3); } // 0xC72CE37081DAE625 b1207
	static void _0x67A43EA3F6FE0076(Any p0) { invoke<Void>(0x02280C80, p0); } // 0x67A43EA3F6FE0076 b1207
	static Any _0x36486AF7DA93A464(Any p0) { return invoke<Any>(0x02280D10, p0); } // 0x36486AF7DA93A464 b1207
	static void _0x6C57BEA886A20C6B(Any p0, Any p1) { invoke<Void>(0x02280DB0, p0, p1); } // 0x6C57BEA886A20C6B b1207
	static void _0x1520626FFAFFFA8F(Any p0, Any p1) { invoke<Void>(0x02280E50, p0, p1); } // 0x1520626FFAFFFA8F b1207
	static void _0xFA821997794F48E7(Any p0, Any p1, Any p2) { invoke<Void>(0x02280EF0, p0, p1, p2); } // 0xFA821997794F48E7 b1207
	static void _0xCC6B5AAFC87BFC7B(Any p0, Any p1, Any p2) { invoke<Void>(0x02280F90, p0, p1, p2); } // 0xCC6B5AAFC87BFC7B b1207
	static void _0xFDB008B3BCF5992F(Any p0, Any p1, Any p2) { invoke<Void>(0x02281030, p0, p1, p2); } // 0xFDB008B3BCF5992F b1207
	static void _0x2DF3D457D86F8E57(Any p0, Any p1) { invoke<Void>(0x02281140, p0, p1); } // 0x2DF3D457D86F8E57 b1207
	static void _0x706B434FEFAD6A24(Any p0) { invoke<Void>(0x02281240, p0); } // 0x706B434FEFAD6A24 b1207
	static void _0xA881F5C77A560906(Any p0) { invoke<Void>(0x02281260, p0); } // 0xA881F5C77A560906 b1207
	static Any _0x53187E563F938E76(Any p0) { return invoke<Any>(0x022812A0, p0); } // 0x53187E563F938E76 b1207
}

namespace GRAPHICS
{
	static void FREE_MEMORY_FOR_MISSION_CREATOR_PHOTO() { invoke<Void>(0x022B73C0); } // 0x7DFF8F94937D2659 0x9E553002 b1207
	static BOOL LOAD_MISSION_CREATOR_PHOTO(Any* p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0x022B7480, p0, p1, p2, p3); } // 0x84F0BA7462FF8D58 0x56C1E488 b1207
	static int GET_STATUS_OF_LOAD_MISSION_CREATOR_PHOTO(Any* p0) { return invoke<int>(0x022B74E0, p0); } // 0xC71B50AE58D07369 0x226B08EA b1207
	static BOOL BEGIN_TAKE_HIGH_QUALITY_PHOTO() { return invoke<BOOL>(0x022B7600); } // 0xA15BFFC0A01B34E1 0x47B0C137 b1207
	static int GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO() { return invoke<int>(0x022B76D0); } // 0x4A3DA74C3CCB1725 0x65376C9B b1207
	static void FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO() { invoke<Void>(0x022B77B0); } // 0xD45547D8396F002A 0x9CBA682A b1207
	static void _0x2705D18C11B61046(Any p0) { invoke<Void>(0x022B7870, p0); } // 0x2705D18C11B61046 b1207
	static void _0x8E6AFF353C09652E(Any p0) { invoke<Void>(0x022B7900, p0); } // 0x8E6AFF353C09652E b1207
	static void _SET_POSSE_ID_FOR_PHOTO(Any posseId) { invoke<Void>(0x022B7910, posseId); } // 0x564837D4A9EDE296 b1207
	static void _0x9F6D859C80708B26(Any p0, Any p1) { invoke<Void>(0x022B7920, p0, p1); } // 0x9F6D859C80708B26 b1311
	static BOOL IS_PHOTO_FRAME() { return invoke<BOOL>(0x022B7950); } // 0x86076AE35CBBE55F b1355
	static void _0xFA91736933AB3D93(Any p0) { invoke<Void>(0x022B7970, p0); } // 0xFA91736933AB3D93 b1207
	static void _0x8B3296278328B5EB(Any p0) { invoke<Void>(0x022B7980, p0); } // 0x8B3296278328B5EB b1207
	static void _0x0D5B19C34068FEE7(Any p0) { invoke<Void>(0x022B7990, p0); } // 0x0D5B19C34068FEE7 b1311
	static void _SET_PLAYER_APPEAR_IN_PHOTO(Player player) { invoke<Void>(0x022B79A0, player); } // 0x75D568607909333E b1232
	static void _0xD1031B83AC093BC7(Any p0) { invoke<Void>(0x022B7A50, p0); } // 0xD1031B83AC093BC7 b1207
	static void _SET_DISTRICT_PHOTO_TAKEN_STAT(Any p0) { invoke<Void>(0x022B7B00, p0); } // 0x9937FACBBF267244 b1207
	static void _SET_STATE_PHOTO_TAKEN_STAT(Any p0) { invoke<Void>(0x022B7BB0, p0); } // 0x8952E857696B8A79 b1207
	static BOOL SAVE_HIGH_QUALITY_PHOTO(int unused) { return invoke<BOOL>(0x022B7C60, unused); } // 0x57639FD876B68A91 0x3B15D33C b1207
	static int GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO() { return invoke<int>(0x022B7D30); } // 0xD6663EC374092383 0xEC5D0317 b1207
	static BOOL _0x494A9874F17A7D50(Any p0) { return invoke<BOOL>(0x022B7E10, p0); } // 0x494A9874F17A7D50 0x25D569EB b1207
	static Any _GET_STATUS_OF_DRAW_LOW_QUALITY_PHOTO(Any p0) { return invoke<Any>(0x022B7E40, p0); } // 0x13430D3D5A45F14B 0xCFCDC518 b1207
	static void FREE_MEMORY_FOR_LOW_QUALITY_PHOTO() { invoke<Void>(0x022B7E60); } // 0x614682E715ADBAAC 0x108F36CC b1207
	static void DRAW_LOW_QUALITY_PHOTO_TO_PHONE(BOOL p0, BOOL p1) { invoke<Void>(0x022B7FA0, p0, p1); } // 0xF1142E5D64B47802 0xE9F2B68F b1207
	static int _GET_MAX_NUMBER_OF_LOCAL_PHOTOS() { return invoke<int>(0x022B7FB0); } // 0x8E587FCD30E05592 b1207
	static int _GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS() { return invoke<int>(0x022B7FC0); } // 0x78C56B8A7B1D000C b1207
	static Any _0xA42EDF1E88734A7E() { return invoke<Any>(0x022B7FD0); } // 0xA42EDF1E88734A7E 0x199FABF0 b1207
	static Any GET_STATUS_OF_SORTED_LIST_OPERATION() { return invoke<Any>(0x022B80C0); } // 0xB28894CD7408BD0C 0x596B900D b1207
	static void DRAW_LIGHT_WITH_RANGE(float posX, float posY, float posZ, int colorR, int colorG, int colorB, float range, float intensity) { invoke<Void>(0x022B81A0, posX, posY, posZ, colorR, colorG, colorB, range, intensity); } // 0xD2D9E04C0DF927F4 0x6A396E9A b1207
	static void UPDATE_LIGHTS_ON_ENTITY(Entity entity) { invoke<Void>(0x022B81D0, entity); } // 0xBDBACB52A03CC760 0xC12AC47A b1207
	static void _SET_LIGHTS_COLOR_FOR_ENTITY(Entity entity, int red, int green, int blue) { invoke<Void>(0x022B8270, entity, red, green, blue); } // 0x6EC2A67962296F49 b1207
	static void _SET_LIGHTS_INTENSITY_FOR_ENTITY(Entity entity, float intensity) { invoke<Void>(0x022B8400, entity, intensity); } // 0x07C0F87AAC57F2E4 b1207
	static void _SET_LIGHTS_TYPE_FOR_ENTITY(Entity entity, int type) { invoke<Void>(0x022B8550, entity, type); } // 0xAB72C67163DC4DB4 b1207
	static void _DRAW_MARKER(Hash type, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, int red, int green, int blue, int alpha, BOOL bobUpAndDown, BOOL faceCamera, int p19, BOOL rotate, const char* textureDict, const char* textureName, BOOL drawOnEnts) { invoke<Void>(0x022B86B0, type, posX, posY, posZ, dirX, dirY, dirZ, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, red, green, blue, alpha, bobUpAndDown, faceCamera, p19, rotate, textureDict, textureName, drawOnEnts); } // 0x2A32FAA57B937173 b1207
	static int CREATE_CHECKPOINT_WITH_NAMEHASH(Hash typeHash, float posX1, float posY1, float posZ1, float posX2, float posY2, float posZ2, float radius, int red, int green, int blue, int alpha, int reserved) { return invoke<int>(0x022B8780, typeHash, posX1, posY1, posZ1, posX2, posY2, posZ2, radius, red, green, blue, alpha, reserved); } // 0x175668836B44CBB0 b1207
	static BOOL _DOES_CHECKPOINT_HAVE_FX(int checkpoint) { return invoke<BOOL>(0x022B8860, checkpoint); } // 0x4C11CCACB7C02B6E b1207
	static void SET_CHECKPOINT_RGBA(int checkpoint, int red, int green, int blue, int alpha) { invoke<Void>(0x022B88A0, checkpoint, red, green, blue, alpha); } // 0xCAAFC225E33B1D15 0xEF9C8CB3 b1207
	static void SET_CHECKPOINT_RGBA2(int checkpoint, int red, int green, int blue, int alpha) { invoke<Void>(0x022B8910, checkpoint, red, green, blue, alpha); } // 0x99AFF17222D4DEB4 0xA5456DBB b1207
	static void _0xCC3B787E73E64160(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x022B8980, p0, p1, p2, p3, p4); } // 0xCC3B787E73E64160 b1207
	static void _0x171C18E994C1A395(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x022B8A00, p0, p1, p2, p3, p4); } // 0x171C18E994C1A395 b1207
	static void DELETE_CHECKPOINT(int checkpoint) { invoke<Void>(0x022B8A80, checkpoint); } // 0x0DED5B0C8EBAAE12 0xB66CF3CA b1207
	static void DRAW_RECT(float x, float y, float width, float height, int red, int green, int blue, int alpha, BOOL p8, BOOL p9) { invoke<Void>(0x022B8AB0, x, y, width, height, red, green, blue, alpha, p8, p9); } // 0x405224591DF02025 0xDD2BFC77 b1207
	static void SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(BOOL toggle) { invoke<Void>(0x022B8D40, toggle); } // 0x906B86E6D7896B9E 0xF8FBCC25 b1207
	static void SET_SCRIPT_GFX_DRAW_ORDER(int drawOrder) { invoke<Void>(0x022B8D60, drawOrder); } // 0xCFCC78391C8B3814 0xADF81D24 b1207
	static void DRAW_SPRITE(const char* textureDict, const char* textureName, float screenX, float screenY, float width, float height, float heading, int red, int green, int blue, int alpha, BOOL p11) { invoke<Void>(0x022B8DB0, textureDict, textureName, screenX, screenY, width, height, heading, red, green, blue, alpha, p11); } // 0xC9884ECADE94CB34 0x1FEC16B0 b1207
	static void ATTACH_TV_AUDIO_TO_ENTITY(Entity entity) { invoke<Void>(0x022B9070, entity); } // 0x40866A418EB8EFDE 0x784944DB b1207
	static void SET_TV_AUDIO_FRONTEND(BOOL toggle) { invoke<Void>(0x022B9130, toggle); } // 0x64437C98FCC5F291 0x2E0DFA35 b1207
	static void GET_SCREEN_RESOLUTION(int* x, int* y) { invoke<Void>(0x022B9140, x, y); } // 0x66773C92835D0909 0x29F3572F b1207
	static void _0xA04EF43030593ABC(Any p0, Any p1) { invoke<Void>(0x022B9160, p0, p1); } // 0xA04EF43030593ABC b1207
	static void _0xA21AF60C9F99CCC5() { invoke<Void>(0x022B9220); } // 0xA21AF60C9F99CCC5 b1207
	static Any _0xC28F62AC9774FC1B() { return invoke<Any>(0x022B92F0); } // 0xC28F62AC9774FC1B b1207
	static void _0xEB48CE48EEC41FD4(Any p0) { invoke<Void>(0x022B9300, p0); } // 0xEB48CE48EEC41FD4 b1207
	static BOOL GET_SCREEN_COORD_FROM_WORLD_COORD(float worldX, float worldY, float worldZ, float* screenX, float* screenY) { return invoke<BOOL>(0x022B9310, worldX, worldY, worldZ, screenX, screenY); } // 0xCB50D7AFCC8B0EC6 0x1F950E4B b1207
	static BOOL _IS_TEXTURE_IN_DICT(Hash txdHash, Hash dict) { return invoke<BOOL>(0x022B9570, txdHash, dict); } // 0xA2A51869BDED733B b1207
	static void SET_ARTIFICIAL_LIGHTS_STATE(BOOL state) { invoke<Void>(0x022B95A0, state); } // 0xB2797619A7C7747B 0xAA2A0EAF b1207
	static void _0x98A7CD5EA379A854() { invoke<Void>(0x022B95B0); } // 0x98A7CD5EA379A854 b1207
	static void _0x1A9F09AB458D49C6(BOOL p0) { invoke<Void>(0x022B95C0, p0); } // 0x1A9F09AB458D49C6 b1207
	static int CREATE_TRACKED_POINT() { return invoke<int>(0x022B95D0); } // 0xFB405CB357C69CB9 0x3129C31A b1207
	static void SET_TRACKED_POINT_INFO(int point, float x, float y, float z, float radius) { invoke<Void>(0x022B9650, point, x, y, z, radius); } // 0xF6FDA3D4404D4F2C 0x28689AA4 b1207
	static BOOL IS_TRACKED_POINT_VISIBLE(int point) { return invoke<BOOL>(0x022B9740, point); } // 0xCBB056BA159FB48D 0x0BFC4F64 b1207
	static Any _0xDFE332A5DA6FE7C9(Any p0) { return invoke<Any>(0x022B9780, p0); } // 0xDFE332A5DA6FE7C9 b1207
	static void DESTROY_TRACKED_POINT(int point) { invoke<Void>(0x022B97B0, point); } // 0x37A59922109F8F1C 0x14AC675F b1207
	static BOOL _IS_TRACKED_POINT_VALID(int point) { return invoke<BOOL>(0x022B9820, point); } // 0xF2FDDCC8C6BAE1B3 b1207
	static Any _0x27219300C36A8D40(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x022B9860, p0, p1, p2, p3, p4); } // 0x27219300C36A8D40 b1207
	static void _0xAE7BF7CA9E4BA48D(Any p0) { invoke<Void>(0x022B9890, p0); } // 0xAE7BF7CA9E4BA48D b1207
	static int _ADD_VEG_MODIFIER_ZONE(Volume volume, int p1, int flags, int p3) { return invoke<int>(0x022B98E0, volume, p1, flags, p3); } // 0xBD3324281E8B9933 b1207
	static int ADD_VEG_MODIFIER_SPHERE(float x, float y, float z, float radius, int modType, int flags, int p6) { return invoke<int>(0x022B9910, x, y, z, radius, modType, flags, p6); } // 0xFA50F79257745E74 b1207
	static void REMOVE_VEG_MODIFIER_SPHERE(int vegModifierHandle, int p1) { invoke<Void>(0x022B9940, vegModifierHandle, p1); } // 0x9CF1836C03FB67A2 b1207
	static void _ENABLE_STATIC_VEG_MODIFIER(Hash p0) { invoke<Void>(0x022B9960, p0); } // 0xDFEA23EC90113657 b1207
	static void _DISABLE_STATIC_VEG_MODIFIER(Hash p0) { invoke<Void>(0x022B99B0, p0); } // 0xDD0BC0EDCB2162F6 b1207
	static BOOL _IS_STATIC_VEG_MODIFIER_ENABLED(Hash p0) { return invoke<BOOL>(0x022B9A00, p0); } // 0xDE9BAD3292AA6D5E b1207
	static void _0xEC3F7F24EEEB3BA3() { invoke<Void>(0x022B9A90); } // 0xEC3F7F24EEEB3BA3 b1207
	static void _0x9F158A49B0D84C3C(Any p0) { invoke<Void>(0x022B9B70, p0); } // 0x9F158A49B0D84C3C b1207
	static void _0x910E260AEAD855DE() { invoke<Void>(0x022B9C10); } // 0x910E260AEAD855DE b1207
	static BOOL _CREATE_SWATCH_TEXTURE_DICT(int slots) { return invoke<BOOL>(0x022B9C20, slots); } // 0x3D084D5568FB4028 b1207
	static void _DESTROY_SWATCH_TEXTURE_DICT() { invoke<Void>(0x022B9C50); } // 0xDAD7FB8402651654 b1207
	static void _GENERATE_SWATCH_TEXTURE_DIRECTLY(int slot, Any p1) { invoke<Void>(0x022B9C60, slot, p1); } // 0x646ED1A1D28487DF b1207
	static void _GENERATE_SWATCH_TEXTURE(int slotId, Hash componentHash, int metapedType, BOOL p3) { invoke<Void>(0x022B9CE0, slotId, componentHash, metapedType, p3); } // 0x160921255327C591 b1207
	static void CASCADE_SHADOWS_SET_CASCADE_BOUNDS(Any p0, BOOL p1, float p2, float p3, float p4, float p5, BOOL p6, float p7) { invoke<Void>(0x022B9D70, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xD9EDB2E4512D563E 0x84F05943 b1207
	static void CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(BOOL toggle) { invoke<Void>(0x022B9DE0, toggle); } // 0x8FBFD2AEB196B369 0xFE903D0F b1207
	static void CASCADE_SHADOWS_SET_SHADOW_SAMPLE_TYPE(const char* type) { invoke<Void>(0x022B9DF0, type); } // 0xCE4774E0F9AD48D1 0xDE10BA1F b1207
	static void CASCADE_SHADOWS_CLEAR_SHADOW_SAMPLE_TYPE() { invoke<Void>(0x022B9E00); } // 0xF7C29D7C12C36F03 b1207
	static void _0x503941F65DBA24EC(Any p0) { invoke<Void>(0x022B9E20, p0); } // 0x503941F65DBA24EC b1207
	static void _0x815653A42C5ABE76() { invoke<Void>(0x022B9E30); } // 0x815653A42C5ABE76 b1207
	static void _0xFF8018C778349234(Any p0) { invoke<Void>(0x022B9E40, p0); } // 0xFF8018C778349234 b1207
	static void _0x297B72E2AF094742(int unk) { invoke<Void>(0x022B9E50, unk); } // 0x297B72E2AF094742 0xD8CC7221 b1207
	static void TOGGLE_PAUSED_RENDERPHASES(BOOL toggle) { invoke<Void>(0x022B9E60, toggle); } // 0xEF9E1C45732F55FA 0x30ADE541 b1207
	static BOOL GET_TOGGLE_PAUSED_RENDERPHASES_STATUS() { return invoke<BOOL>(0x022B9ED0); } // 0x86ED21BDB2791CE8 0xD4F5D07D b1207
	static void RESET_PAUSED_RENDERPHASES() { invoke<Void>(0x022B9F10); } // 0xCCD9AAD85E1B559E 0x0113EAE4 b1207
	static void _SET_HIDOF_ENV_BLUR_PARAMS(BOOL p0, BOOL p1, float p2, float p3, float p4, float p5) { invoke<Void>(0x022B9F60, p0, p1, p2, p3, p4, p5); } // 0xCC23AA1A7CBFE840 0x513D444B b1207
	static void _0x21F00E08CBB5F37B(Any p0) { invoke<Void>(0x022B9FB0, p0); } // 0x21F00E08CBB5F37B b1207
	static void _0x5AC6E0FA028369DE() { invoke<Void>(0x022B9FD0); } // 0x5AC6E0FA028369DE b1207
	static Any _0xEC3D8C228FE553D7(Any p0) { return invoke<Any>(0x022B9FE0, p0); } // 0xEC3D8C228FE553D7 b1207
	static void _0xF5793BB386E1FF9C(Any p0) { invoke<Void>(0x022BA000, p0); } // 0xF5793BB386E1FF9C b1207
	static void _0x5CD6A2CCE5087161(Any p0) { invoke<Void>(0x022BA010, p0); } // 0x5CD6A2CCE5087161 b1311
	static void _0xC8D0611D9A0CF5D3(Any p0) { invoke<Void>(0x022BA020, p0); } // 0xC8D0611D9A0CF5D3 b1207
	static float _GET_PHOTO_MODE_EXPOSURE() { return invoke<float>(0x022BA040); } // 0x06C0D8BB6B04A709 b1207
	static void _0x62B9F9A1272AED80(Any p0) { invoke<Void>(0x022BA050, p0); } // 0x62B9F9A1272AED80 b1207
	static float _GET_PHOTO_MODE_CONTRAST() { return invoke<float>(0x022BA070); } // 0x98F4154989B81EC6 b1207
	static void _0x9229ED770975BD9E() { invoke<Void>(0x022BA080); } // 0x9229ED770975BD9E b1311
	static int START_PARTICLE_FX_NON_LOOPED_AT_COORD(const char* effectName, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0x022BA0A0, effectName, xPos, yPos, zPos, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); } // 0x2E80BF72EF7C87AC 0xDD79D679 b1207
	static BOOL START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD(const char* effectName, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<BOOL>(0x022BA120, effectName, xPos, yPos, zPos, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); } // 0xFB97618457994A62 0x633F8C48 b1207
	static BOOL START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(const char* effectName, Ped ped, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0x022BA1A0, effectName, ped, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, boneIndex, scale, axisX, axisY, axisZ); } // 0x3FAA72BD940C3AC0 0x53DAEF4E b1207
	static BOOL START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0x022BA220, effectName, entity, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, scale, axisX, axisY, axisZ); } // 0xFF4C64C513388C12 0x9604DAD4 b1207
	static BOOL START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0x022BA2A0, effectName, entity, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, scale, axisX, axisY, axisZ); } // 0xE6CFE43937061143 0x469A2B4A b1207
	static BOOL _START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE_2(const char* effectName, Ped ped, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0x022BA320, effectName, ped, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, boneIndex, scale, axisX, axisY, axisZ); } // 0xC695870B8A149B96 b1207
	static void SET_PARTICLE_FX_NON_LOOPED_COLOUR(float r, float g, float b) { invoke<Void>(0x022BA3A0, r, g, b); } // 0x60B85BED6577A35B 0x7B689E20 b1207
	static void SET_PARTICLE_FX_NON_LOOPED_ALPHA(float alpha) { invoke<Void>(0x022BA3C0, alpha); } // 0xE8A35938A7026CEA 0x497EAFF2 b1311
	static void _SET_PARTICLE_FX_NON_LOOPED_EMITTER_SCALE(float p0, float p1, float p2) { invoke<Void>(0x022BA3D0, p0, p1, p2); } // 0x56C392C2BD78B024 b1311
	static int START_PARTICLE_FX_LOOPED_AT_COORD(const char* effectName, float x, float y, float z, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL p11) { return invoke<int>(0x022BA3F0, effectName, x, y, z, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis, p11); } // 0xBA32867E86125D3A 0xD348E3E6 b1207
	static int START_PARTICLE_FX_LOOPED_ON_PED_BONE(const char* effectName, Ped ped, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0x022BA450, effectName, ped, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, xAxis, yAxis, zAxis); } // 0xE689C1B1432BB8AF 0xF8FC196F b1207
	static int START_PARTICLE_FX_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0x022BA4C0, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); } // 0xBD41E1440CE39800 0x0D06FF62 b1207
	static int START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0x022BA540, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, xAxis, yAxis, zAxis); } // 0xD3BA6EC7F2FBD5E9 0x23BF0F9B b1207
	static int START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0x022BA5B0, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); } // 0x8F90AB32E1944BDE 0x110752B2 b1207
	static int START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0x022BA630, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, xAxis, yAxis, zAxis); } // 0x9C56621462FFE7A6 0xF478EFCF b1207
	static void STOP_PARTICLE_FX_LOOPED(int ptfxHandle, BOOL p1) { invoke<Void>(0x022BA6A0, ptfxHandle, p1); } // 0x22970F3A088B133B 0xD245455B b1207
	static BOOL DOES_PARTICLE_FX_LOOPED_EXIST(int ptfxHandle) { return invoke<BOOL>(0x022BA7A0, ptfxHandle); } // 0x9DD5AFF561E88F2A 0xCBF91D2A b1207
	static void SET_PARTICLE_FX_LOOPED_OFFSETS(int ptfxHandle, float x, float y, float z, float rotX, float rotY, float rotZ) { invoke<Void>(0x022BA840, ptfxHandle, x, y, z, rotX, rotY, rotZ); } // 0xD3A4A95FC94FE83B 0x641F7790 b1207
	static void SET_PARTICLE_FX_LOOPED_EVOLUTION(int ptfxHandle, const char* propertyName, float amount, BOOL noNetwork) { invoke<Void>(0x022BA8F0, ptfxHandle, propertyName, amount, noNetwork); } // 0x3674F389B0FACD80 0x1CBC1373 b1207
	static void SET_PARTICLE_FX_LOOPED_COLOUR(int ptfxHandle, float r, float g, float b, BOOL p4) { invoke<Void>(0x022BAA20, ptfxHandle, r, g, b, p4); } // 0x239879FC61C610CC 0x5219D530 b1207
	static void SET_PARTICLE_FX_LOOPED_ALPHA(int ptfxHandle, float alpha) { invoke<Void>(0x022BAAF0, ptfxHandle, alpha); } // 0x88786E76234F7054 0x5ED49BE1 b1207
	static void SET_PARTICLE_FX_LOOPED_SCALE(int ptfxHandle, float scale) { invoke<Void>(0x022BAB20, ptfxHandle, scale); } // 0x1A9E1C0D98D093B7 0x099B8B49 b1207
	static void SET_PARTICLE_FX_LOOPED_FAR_CLIP_DIST(int ptfxHandle, float range) { invoke<Void>(0x022BAB50, ptfxHandle, range); } // 0x9B04D471DA0AD7AA 0x233DE879 b1207
	static void _SET_PARTICLE_FX_LOOPED_UPDATE_DISTANT_SMOKE(int ptfxHandle, float scalar) { invoke<Void>(0x022BAB80, ptfxHandle, scalar); } // 0x9DDC222D85D5AF2A b1207
	static void REMOVE_PARTICLE_FX(int ptfxHandle, BOOL p1) { invoke<Void>(0x022BABB0, ptfxHandle, p1); } // 0x459598F579C98929 0x6BA48C7E b1207
	static void REMOVE_PARTICLE_FX_FROM_ENTITY(Entity entity) { invoke<Void>(0x022BACD0, entity); } // 0x92884B4A49D81325 0xCEDE52E9 b1207
	static void REMOVE_PARTICLE_FX_IN_RANGE(float X, float Y, float Z, float radius) { invoke<Void>(0x022BAD70, X, Y, Z, radius); } // 0x87B5905ECA623B68 0x7EB8F275 b1207
	static void USE_PARTICLE_FX_ASSET(const char* fxName) { invoke<Void>(0x022BAE70, fxName); } // 0xA10DB07FC234DD12 0x9C720B61 b1207
	static void SET_PARTICLE_FX_OVERRIDE(const char* oldAsset, const char* newAsset) { invoke<Void>(0x022BAE90, oldAsset, newAsset); } // 0xBE711A169E9C7E95 0xC92719A7 b1207
	static void RESET_PARTICLE_FX_OVERRIDE(const char* name) { invoke<Void>(0x022BAEB0, name); } // 0x274B3DABF7E72DEF 0x9E8D8B72 b1207
	static void _0x4FB67D172C4476F3(Entity entity, const char* p1, const char* p2, float p3) { invoke<Void>(0x022BAED0, entity, p1, p2, p3); } // 0x4FB67D172C4476F3 b1207
	static void _0x3C61B52B00848C26(Entity entity, const char* p1, float r, float g, float b) { invoke<Void>(0x022BAEF0, entity, p1, r, g, b); } // 0x3C61B52B00848C26 b1207
	static void _0xD1472AFF30C103D6(float p0) { invoke<Void>(0x022BAF10, p0); } // 0xD1472AFF30C103D6 b1311
	static void SET_PARTICLE_FX_BULLET_IMPACT_SCALE(float scale) { invoke<Void>(0x022BAF40, scale); } // 0xA53C8D7D0F8C74D0 0xC1AD5DDF b1207
	static void _0x8DCCC98DC0DBF9E4(float p0) { invoke<Void>(0x022BAF70, p0); } // 0x8DCCC98DC0DBF9E4 0x3968E915 b1207
	static void _SET_SNIPER_GLINTS_ENABLED(BOOL enabled) { invoke<Void>(0x022BAFA0, enabled); } // 0x6E8EB45A4F4460EB b1207
	static void _0x2A1625858887D4E6(float p0) { invoke<Void>(0x022BAFD0, p0); } // 0x2A1625858887D4E6 0xE3880F5A b1207
	static void _0x4046493D2EEACA0E() { invoke<Void>(0x022BB000); } // 0x4046493D2EEACA0E b1207
	static void SET_PICKUP_LIGHT(Object object, BOOL toggle) { invoke<Void>(0x022BB010, object, toggle); } // 0x7DFB49BCDB73089A b1207
	static void _BLOCK_PICKUP_OBJECT_LIGHT(Object pickupObject, BOOL toggle) { invoke<Void>(0x022BB0F0, pickupObject, toggle); } // 0x50C14328119E1DD1 b1207
	static void BLOCK_PICKUP_PLACEMENT_LIGHT(Pickup pickup, BOOL toggle) { invoke<Void>(0x022BB1D0, pickup, toggle); } // 0x0552AA3FFC5B87AA b1207
	static void ALLOW_PICKUP_LIGHT_SYNC(Object pickupObject, BOOL allow) { invoke<Void>(0x022BB3A0, pickupObject, allow); } // 0x7C348310A6E2FB91 b1207
	static void _SET_PEARLESCENT_FX_ENABLED(Object object, BOOL toggle) { invoke<Void>(0x022BB460, object, toggle); } // 0x72E30372E7CC4415 b1207
	static void REMOVE_DECALS_IN_RANGE(float x, float y, float z, float range) { invoke<Void>(0x022BB530, x, y, z, range); } // 0x86DE59FA02902B40 0x06A619A0 b1207
	static void REMOVE_DECALS_FROM_OBJECT(Object obj) { invoke<Void>(0x022BB610, obj); } // 0xFB8972BAE0013140 0x8B67DCA7 b1207
	static int ADD_DECAL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16, Any p17, Any p18, Any p19, Any p20, Any p21) { return invoke<int>(0x022BB620, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21); } // 0x57CB267624EF85C0 0xEAD0C412 b1207
	static void _ADD_BLOOD_POOL(float x, float y, float z, BOOL unused) { invoke<Void>(0x022BB840, x, y, z, unused); } // 0xFA2ECC78A6014D4F b1207
	static void _ADD_BLOOD_POOL_2(float x, float y, float z, float p3, float size, float p5, BOOL permanent, float p7, BOOL p8) { invoke<Void>(0x022BB870, x, y, z, p3, size, p5, permanent, p7, p8); } // 0xF708298675ABDC6A b1207
	static void _ADD_BLOOD_POOLS_FOR_PED(Ped ped) { invoke<Void>(0x022BB8A0, ped); } // 0xDFCE8CE9F3EBE93F b1207
	static void _ADD_BLOOD_POOLS_FOR_PED_WITH_PARAMS(Ped ped, float p1, float size, float p3) { invoke<Void>(0x022BB940, ped, p1, size, p3); } // 0xC349EE1E6EFA494B b1207
	static void START_PETROL_TRAIL_DECALS(Any p0, Any p1) { invoke<Void>(0x022BB960, p0, p1); } // 0x46F246D6504F0031 0xE3938B0B b1207
	static void ADD_PETROL_TRAIL_DECAL_INFO(float x, float y, float z, float p3) { invoke<Void>(0x022BBBC0, x, y, z, p3); } // 0x73354FB6D03D2E8A 0xBAEC6ADD b1207
	static void END_PETROL_TRAIL_DECALS() { invoke<Void>(0x022BBBF0); } // 0x0E126AAE933F3B56 0xCCCA6855 b1207
	static Any _0xE63D68F455CA0B47(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0x022BBC30, p0, p1, p2, p3, p4, p5, p6); } // 0xE63D68F455CA0B47 b1207
	static void REMOVE_DECAL(int decal) { invoke<Void>(0x022BBCE0, decal); } // 0x49A720552EB0BB88 0xA4363188 b1207
	static BOOL IS_DECAL_ALIVE(int decal) { return invoke<BOOL>(0x022BBD00, decal); } // 0x3E4B4E5CF5D3EEB5 0xCDD4A61A b1207
	static void _0x53ED07BF368EDA59() { invoke<Void>(0x022BBD40); } // 0x53ED07BF368EDA59 0xEAB6417C b1232
	static void _0xB032C085D9A03907() { invoke<Void>(0x022BBD50); } // 0xB032C085D9A03907 b1207
	static void _0xFB680A9B33D0EDBE(BOOL p0) { invoke<Void>(0x022BBD60, p0); } // 0xFB680A9B33D0EDBE b1207
	static void _0x41F88A85A579A61D(float p0) { invoke<Void>(0x022BBD90, p0); } // 0x41F88A85A579A61D b1207
	static void _BLOOD_TRAIL_FOR_WAYPOINT(const char* waypointRecording, float p1) { invoke<Void>(0x022BBDA0, waypointRecording, p1); } // 0xB9C92616929CC25D b1207
	static void _ADD_BLOOD_TRAIL_POINT(float x, float y, float z) { invoke<Void>(0x022BBEE0, x, y, z); } // 0xDD9DC1AB63D513CE b1207
	static void _0x812C1563185C6FB2() { invoke<Void>(0x022BBF10); } // 0x812C1563185C6FB2 b1207
	static void _0x4BD66B4E3427689B(const char* p0) { invoke<Void>(0x022BBF20, p0); } // 0x4BD66B4E3427689B b1207
	static void _ADD_BLOOD_TRAIL_SPLAT(float x, float y, float z) { invoke<Void>(0x022BC000, x, y, z); } // 0xF5E45CB1CF965D2D b1207
	static void _0xF2F543D48F319A3A() { invoke<Void>(0x022BC030); } // 0xF2F543D48F319A3A b1207
	static void _0x1460B644397453EB() { invoke<Void>(0x022BC040); } // 0x1460B644397453EB b1207
	static void _0xCD284E2F6AC27EE9(BOOL p0) { invoke<Void>(0x022BC050, p0); } // 0xCD284E2F6AC27EE9 b1207
	static void _0x453D16D41FC51D3E(BOOL p0) { invoke<Void>(0x022BC060, p0); } // 0x453D16D41FC51D3E b1207
	static void _0xC06F2F45A73EABCD(Entity entity) { invoke<Void>(0x022BC090, entity); } // 0xC06F2F45A73EABCD b1311
	static void SET_TIMECYCLE_MODIFIER(const char* modifierName) { invoke<Void>(0x022BC160, modifierName); } // 0xFA08722A5EA82DA7 0xA81F3638 b1207
	static void SET_TIMECYCLE_MODIFIER_STRENGTH(float strength) { invoke<Void>(0x022BC2B0, strength); } // 0xFDB74C9CC54C3F37 0x458F4F45 b1207
	static void SET_TRANSITION_TIMECYCLE_MODIFIER(const char* modifierName, float transition) { invoke<Void>(0x022BC2C0, modifierName, transition); } // 0xFF927A09F481D80C 0xBB2BA72A b1207
	static void _SET_TRANSITION_TIMECYCLE_MODIFIER_STOP_WITH_BLEND(float strength) { invoke<Void>(0x022BC300, strength); } // 0xBB6C707F20D955D4 0x56345F6B b1207
	static void CLEAR_TIMECYCLE_MODIFIER() { invoke<Void>(0x022BC330); } // 0x0E3F4AF2D63491FB 0x8D8DF8EE b1207
	static int GET_TIMECYCLE_MODIFIER_INDEX() { return invoke<int>(0x022BC360); } // 0xA705394293E2B3D3 0x594FEEC4 b1207
	static int GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() { return invoke<int>(0x022BC370); } // 0x2DA67BA3C8A6755D 0x03C44E4B b1207
	static void _0x67B0778C62E74423(Any p0) { invoke<Void>(0x022BC380, p0); } // 0x67B0778C62E74423 b1207
	static void _0x6C03118E9E5C1A14(Any p0) { invoke<Void>(0x022BC390, p0); } // 0x6C03118E9E5C1A14 b1207
	static float _GET_MODIFIED_VISIBILITY_DISTANCE() { return invoke<float>(0x022BC3A0); } // 0x25CA89B2A39DCC69 b1207
	static void _ENABLE_EXTRA_TIMECYCLE_MODIFIER_STRENGTH(float strength) { invoke<Void>(0x022BC3B0, strength); } // 0x6FE93BCC7BF12B63 b1207
	static void SET_TV_CHANNEL(int channel) { invoke<Void>(0x022BC3E0, channel); } // 0x593FAF7FC9401A56 0x41A8A627 b1207
	static int GET_TV_CHANNEL() { return invoke<int>(0x022BC410); } // 0xF90FBFD68F3C59AE 0x6B96145A b1207
	static void SET_TV_VOLUME(float volume) { invoke<Void>(0x022BC420, volume); } // 0x73A97068787D7231 0xF3504F4D b1207
	static void DRAW_TV_CHANNEL(float xPos, float yPos, float xScale, float yScale, float rotation, int red, int green, int blue, int alpha) { invoke<Void>(0x022BC460, xPos, yPos, xScale, yScale, rotation, red, green, blue, alpha); } // 0xC0A145540254A840 0x8129EF89 b1207
	static void SET_TV_CHANNEL_PLAYLIST(int tvChannel, const char* playlistName, BOOL restart) { invoke<Void>(0x022BC500, tvChannel, playlistName, restart); } // 0xDEC6B25F5DC8925B 0xB262DE67 b1207
	static BOOL _IS_TV_PLAYLIST_ITEM_PLAYING(Hash videoCliphash) { return invoke<BOOL>(0x022BC5C0, videoCliphash); } // 0x4D562223E0EB65F3 0x4D1EB0FB b1207
	static Any _0x5C674EB487891F6B() { return invoke<Any>(0x022BC5F0); } // 0x5C674EB487891F6B b1207
	static void ENABLE_MOVIE_SUBTITLES(BOOL toggle) { invoke<Void>(0x022BC610, toggle); } // 0x6FC9B065229C0787 0xC2DEBA3D b1207
	static void _0x32DE2BFFDA43E62A() { invoke<Void>(0x022BC620); } // 0x32DE2BFFDA43E62A b1207
	static void _0xD543487A1F12828F(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x022BC630, p0, p1, p2, p3); } // 0xD543487A1F12828F b1207
	static void _0xD9BC98B55BCFAA9B(Any p0) { invoke<Void>(0x022BC770, p0); } // 0xD9BC98B55BCFAA9B b1207
	static void _0x48FE0DB54045B975(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x022BC7A0, p0, p1, p2, p3, p4, p5, p6); } // 0x48FE0DB54045B975 b1311
	static void _0x735762E8D7573E42(Any p0, Any p1, Any p2) { invoke<Void>(0x022BC8C0, p0, p1, p2); } // 0x735762E8D7573E42 b1207
	static void _0x981C7D863980FA51() { invoke<Void>(0x022BC9F0); } // 0x981C7D863980FA51 b1207
	static void _0x5199405EABFBD7F0(const char* effectName) { invoke<Void>(0x022BCA40, effectName); } // 0x5199405EABFBD7F0 b1207
	static BOOL _ANIMPOSTFX_HAS_LOADED(const char* effectName) { return invoke<BOOL>(0x022BCA90, effectName); } // 0xBF2DD155B2ADCD0A b1207
	static void _ANIMPOSTFX_SET_TO_UNLOAD(const char* effectName) { invoke<Void>(0x022BCAF0, effectName); } // 0x37D7BDBA89F13959 b1207
	static void ANIMPOSTFX_PLAY(const char* effectName) { invoke<Void>(0x022BCB40, effectName); } // 0x4102732DF6B4005F 0x1D980479 b1207
	static void _ANIMPOSTFX_PLAY_TIMED(const char* effectName, int duration) { invoke<Void>(0x022BCBA0, effectName, duration); } // 0x3A9A281FF71249E9 b1207
	static void ANIMPOSTFX_STOP(const char* effectName) { invoke<Void>(0x022BCC00, effectName); } // 0xB4FD7446BAB2F394 0x06BB5CDA b1207
	static void _0x26DD2FB0A88CC412(const char* effectName, const char* effectName2, Any p2, Any p3) { invoke<Void>(0x022BCC50, effectName, effectName2, p2, p3); } // 0x26DD2FB0A88CC412 b1207
	static void _ANIMPOSTFX_CLEAR_EFFECT(const char* effectName) { invoke<Void>(0x022BCCA0, effectName); } // 0xC5CB91D65852ED7E b1207
	static BOOL ANIMPOSTFX_IS_RUNNING(const char* effectName) { return invoke<BOOL>(0x022BCCF0, effectName); } // 0x4A123E85D7C4CA0B 0x089D5921 b1207
	static BOOL _0x2D4F9C852CE8A253(const char* effectName) { return invoke<BOOL>(0x022BCDC0, effectName); } // 0x2D4F9C852CE8A253 b1207
	static void ANIMPOSTFX_STOP_ALL() { invoke<Void>(0x022BCEC0); } // 0x66560A0D4C64FD21 0x4E6D875B b1207
	static void _0xAD74C22A541AB987(const char* effectName) { invoke<Void>(0x022BCED0, effectName); } // 0xAD74C22A541AB987 b1207
	static void _ANIMPOSTFX_SET_STRENGTH(const char* effectName, float strength) { invoke<Void>(0x022BCF20, effectName, strength); } // 0xCAB4DD2D5B2B7246 b1207
	static void _0xF972F0AB16DC5260(const char* effectName, int p1, float p2) { invoke<Void>(0x022BCF80, effectName, p1, p2); } // 0xF972F0AB16DC5260 b1207
	static void _0x63011D0C7C6519E0(const char* effectName, int p1, int red, int green, int blue, int alpha) { invoke<Void>(0x022BCFF0, effectName, p1, red, green, blue, alpha); } // 0x63011D0C7C6519E0 b1311
	static BOOL _0xB958D97A0DFAA0C2(const char* effectName) { return invoke<BOOL>(0x022BD0E0, effectName); } // 0xB958D97A0DFAA0C2 b1207
	static void _0xA201A3D0AC087C37(const char* effectName) { invoke<Void>(0x022BD110, effectName); } // 0xA201A3D0AC087C37 b1207
	static BOOL _0xFBF161FCFEC8589E(const char* effectName, int p1, BOOL p2, BOOL* p3) { return invoke<BOOL>(0x022BD130, effectName, p1, p2, p3); } // 0xFBF161FCFEC8589E b1207
	static Hash _0x842CCC9491FFCD9B(const char* effectName) { return invoke<Hash>(0x022BD1B0, effectName); } // 0x842CCC9491FFCD9B b1207
	static void _0xF3E039322BFBD4D8(Hash effectNameHash) { invoke<Void>(0x022BD1E0, effectNameHash); } // 0xF3E039322BFBD4D8 b1207
	static BOOL ANIMPOSTFX_IS_PRELOADING_BY_STACKHASH(Hash effectNameHash) { return invoke<BOOL>(0x022BD230, effectNameHash); } // 0x59EA80079B86D8C7 b1207
	static void _0x38D9D50F2085E9B3(Hash effectNameHash) { invoke<Void>(0x022BD280, effectNameHash); } // 0x38D9D50F2085E9B3 b1207
	static void _ANIMPOSTFX_PLAY_TAG(Hash effectNameHash) { invoke<Void>(0x022BD2D0, effectNameHash); } // 0x9B8D5D4CB8AF58B3 b1207
	static void _0xC76FC4C2FC5F4405(Hash effectNameHash) { invoke<Void>(0x022BD320, effectNameHash); } // 0xC76FC4C2FC5F4405 b1207
	static void _0xEDA5CBECF56E1386(Hash effectNameHash) { invoke<Void>(0x022BD370, effectNameHash); } // 0xEDA5CBECF56E1386 b1207
	static BOOL _ANIMPOSTFX_IS_TAG_PLAYING(Hash effectNameHash) { return invoke<BOOL>(0x022BD3C0, effectNameHash); } // 0xEEF83A759AE06A27 b1207
	static BOOL _0xE75CDDEBF618C8FF(Hash effectNameHash) { return invoke<BOOL>(0x022BD490, effectNameHash); } // 0xE75CDDEBF618C8FF b1207
	static void _0x71845905BCCDE781(Hash effectNameHash) { invoke<Void>(0x022BD4C0, effectNameHash); } // 0x71845905BCCDE781 b1207
	static BOOL ANIMPOSTFX_HAS_EVENT_TRIGGERED_BY_STACKHASH(Hash effectNameHash, int p1, BOOL p2, BOOL* p3) { return invoke<BOOL>(0x022BD4E0, effectNameHash, p1, p2, p3); } // 0x9AB192A9EF980EED b1207
	static BOOL _0xFF584F097C17FA8F() { return invoke<BOOL>(0x022BD550); } // 0xFF584F097C17FA8F b1207
	static BOOL _0x3DA7A10583A4BEC0() { return invoke<BOOL>(0x022BD640); } // 0x3DA7A10583A4BEC0 b1207
	static Any _0xC37792A3F9C90771() { return invoke<Any>(0x022BD650); } // 0xC37792A3F9C90771 b1207
	static void _0xA0F4D12D6042F6D5(Any p0, Any p1) { invoke<Void>(0x022BD660, p0, p1); } // 0xA0F4D12D6042F6D5 b1207
	static void _0x8996FA6AD9FE4E90(Any p0) { invoke<Void>(0x022BD720, p0); } // 0x8996FA6AD9FE4E90 b1207
	static void _0xC38B4952B728397A(Any p0, Any p1) { invoke<Void>(0x022BD7C0, p0, p1); } // 0xC38B4952B728397A b1207
	static BOOL PEDSHOT_IS_AVAILABLE() { return invoke<BOOL>(0x022BD880); } // 0xAF6E67D073D2DCE2 b1207
	static Any _0xFD05B1DDE83749FA(Any p0) { return invoke<Any>(0x022BD8A0, p0); } // 0xFD05B1DDE83749FA b1207
	static void _0xC2B8164C3BE871A4() { invoke<Void>(0x022BD8E0); } // 0xC2B8164C3BE871A4 b1207
	static void _0x3E2FDDBE435A8787() { invoke<Void>(0x022BD8F0); } // 0x3E2FDDBE435A8787 b1207
	static void _0x55285F885F662169() { invoke<Void>(0x022BD900); } // 0x55285F885F662169 b1207
	static Any _0xD9C24F53631F2372(Any* p0, Ped ped, int p2) { return invoke<Any>(0x022BD910, p0, ped, p2); } // 0xD9C24F53631F2372 b1207
	static void _0x196D3ACBEBA4A44B(Any p0) { invoke<Void>(0x022BD940, p0); } // 0x196D3ACBEBA4A44B b1207
	static void _0xA1A86055792FB249(Any p0) { invoke<Void>(0x022BD960, p0); } // 0xA1A86055792FB249 b1207
	static Any _0x402E1A61D2587FCD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0x022BD980, p0, p1, p2, p3, p4, p5, p6); } // 0x402E1A61D2587FCD b1207
	static Any _0x5C9C3A466B3296A8(Any p0) { return invoke<Any>(0x022BD9B0, p0); } // 0x5C9C3A466B3296A8 b1207
	static Any _0xA15CCAB8AD038291(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x022BD9E0, p0, p1, p2, p3); } // 0xA15CCAB8AD038291 b1207
	static Any _0x285438C26C732F9D() { return invoke<Any>(0x022BDA70); } // 0x285438C26C732F9D b1207
	static void _SET_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_STATE(int proxyInteriorIndex, BOOL state) { invoke<Void>(0x022BDA90, proxyInteriorIndex, state); } // 0xBFCB17895BB99E4E b1207
	static BOOL _IS_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_ENABLED(int proxyInteriorIndex) { return invoke<BOOL>(0x022BDB00, proxyInteriorIndex); } // 0x113857D66A9CABE6 b1207
	static int _GET_PROXY_INTERIOR_INDEX(int interiorId) { return invoke<int>(0x022BDB90, interiorId); } // 0x5D1C5D8E62E8EE1C b1207
	static void _0x9D1B0B5066205692() { invoke<Void>(0x022BDBD0); } // 0x9D1B0B5066205692 b1207
	static void _0xC489FE31AC726512(Any p0, Any p1) { invoke<Void>(0x022BDBF0, p0, p1); } // 0xC489FE31AC726512 b1207
	static void _SET_CLOUD_LAYER(float x, float y, int p2) { invoke<Void>(0x022BDC20, x, y, p2); } // 0xB8C984C0D47F4F07 b1207
	static void _SET_CLOUD_NOISE(float x, float y, float z) { invoke<Void>(0x022BDC50, x, y, z); } // 0xFE7966DF01452F32 b1207
	static void _0x10C1767B93257480(float x, float y, float z) { invoke<Void>(0x022BDC80, x, y, z); } // 0x10C1767B93257480 b1207
	static void _SET_CLOUD_HEIGHT(float height) { invoke<Void>(0x022BDCB0, height); } // 0xC332C91388F5580B b1207
	static void _0x085C5B61A0114F32(Any p0, Any p1) { invoke<Void>(0x022BDD40, p0, p1); } // 0x085C5B61A0114F32 b1207
	static void _0x1FF8731BE1DFC0C0(Any p0, Any p1) { invoke<Void>(0x022BDD90, p0, p1); } // 0x1FF8731BE1DFC0C0 b1207
	static Any _0xFC9B53C072F418E0() { return invoke<Any>(0x022BDE00); } // 0xFC9B53C072F418E0 b1207
	static void _0x94B261F1F35293E1(Any p0) { invoke<Void>(0x022BDE50, p0); } // 0x94B261F1F35293E1 b1207
	static void ENABLE_ENTITYMASK() { invoke<Void>(0x022BDE60); } // 0xFAAD23DE7A54FC14 b1207
	static void DISABLE_ENTITYMASK() { invoke<Void>(0x022BDE70); } // 0x5C9978A2A3DC3D0D b1207
	static void _ADD_ENTITY_TO_ENTITY_MASK(Entity entity, int mask) { invoke<Void>(0x022BDEA0, entity, mask); } // 0xC6F81FCD15350323 b1207
	static void _ADD_ENTITY_TO_ENTITY_MASK_WITH_INTENSITY(Entity entity, int mask, float intensity) { invoke<Void>(0x022BDEB0, entity, mask, intensity); } // 0x958DEBD9353C0935 b1207
	static void _REMOVE_ENTITY_FROM_ENTITY_MASK(Entity entity) { invoke<Void>(0x022BDED0, entity); } // 0x56A786E87FF53478 b1207
	static Any _0xE8A8378BF651079C(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x022BE010, p0, p1, p2, p3, p4); } // 0xE8A8378BF651079C b1207
	static void _0xE92012611461A42A(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x022BE1D0, p0, p1, p2, p3, p4); } // 0xE92012611461A42A b1207
	static void _0x249CD6B7285536F2(Any p0, Any p1, Any p2) { invoke<Void>(0x022BE320, p0, p1, p2); } // 0x249CD6B7285536F2 b1207
	static void _0xAF4D239B8903FCBE() { invoke<Void>(0x022BE350); } // 0xAF4D239B8903FCBE b1207
	static void _SET_SNOW_COVERAGE_TYPE(int type) { invoke<Void>(0x022BE380, type); } // 0xF02A9C330BBFC5C7 b1207
	static void _0x519928DF02EB5101(Any p0) { invoke<Void>(0x022BE3B0, p0); } // 0x519928DF02EB5101 b1355
	static void _0x1C6306E5BC25C29C() { invoke<Void>(0x022BE460); } // 0x1C6306E5BC25C29C b1207
}

namespace GANG
{
	static BOOL NETWORK_IS_GANG_ID_VALID(Any gangId) { return invoke<BOOL>(0x0228B010, gangId); } // 0xD6F6ACF4392187FB b1207
	static BOOL NETWORK_IS_GANG_IN_SESSION(Any gangId) { return invoke<BOOL>(0x0228B030, gangId); } // 0x93A91A351A07360E b1207
	static BOOL NETWORK_IS_GANG_ACTIVE(Any gangId) { return invoke<BOOL>(0x0228B0A0, gangId); } // 0x0F99F6436528A089 b1207
	static BOOL _NETWORK_IS_GANG_OPEN(Any gangId) { return invoke<BOOL>(0x0228B120, gangId); } // 0xFCF96CCBD81B24C8 b1207
	static Any _0x9970AE8C3D706139() { return invoke<Any>(0x0228B160); } // 0x9970AE8C3D706139 b1207
	static void _0xD1A226F2E05E58FC(Any p0, Any p1) { invoke<Void>(0x0228B1D0, p0, p1); } // 0xD1A226F2E05E58FC b1207
	static Any _0xC5BF29F4035277C2(Any p0) { return invoke<Any>(0x0228B1F0, p0); } // 0xC5BF29F4035277C2 b1207
	static void _NETWORK_LEAVE_GANG(BOOL disband) { invoke<Void>(0x0228B220, disband); } // 0x0A04A07BC3074EDB b1207
	static void _NETWORK_KICK_GANG_MEMBER(Player player, int banTimeSeconds) { invoke<Void>(0x0228B290, player, banTimeSeconds); } // 0xCD9E2D9BC52FD80F b1207
	static Any _0xC0474C8BCF6787AD(Any p0) { return invoke<Any>(0x0228B2E0, p0); } // 0xC0474C8BCF6787AD b1207
	static BOOL NETWORK_IS_GANG_LEADER(Player player) { return invoke<BOOL>(0x0228B340, player); } // 0x424B17A7DC5C90BC b1207
	static BOOL _NETWORK_IS_GANG_MEMBER(Any gangId, Player player) { return invoke<BOOL>(0x0228B390, gangId, player); } // 0x9BE7DCB22D32CCBE b1207
	static BOOL NETWORK_IS_IN_SAME_GANG(Player player1, Player player2) { return invoke<BOOL>(0x0228B3F0, player1, player2); } // 0x3F59FE6F37869576 b1207
	static BOOL _NETWORK_IS_IN_MY_GANG(Player player) { return invoke<BOOL>(0x0228B470, player); } // 0x81FB74C83C2ED69F b1207
	static int NETWORK_GET_NUM_GANG_MEMBERS(Any gangId) { return invoke<int>(0x0228B4F0, gangId); } // 0x149A2751AB66AC02 b1207
	static int _NETWORK_GET_GANG_SIZE(Any gangId) { return invoke<int>(0x0228B5F0, gangId); } // 0x853B0FA4D8732C57 b1207
	static Any _0x833D8268D51B4522(Any p0) { return invoke<Any>(0x0228B620, p0); } // 0x833D8268D51B4522 b1207
	static Any NETWORK_GET_GANG_ID(Player player) { return invoke<Any>(0x0228B650, player); } // 0x901E0DC25080C8B9 b1207
	static int _NETWORK_GET_GANG_MEMBERS(Any gangId, Any* memberHandles) { return invoke<int>(0x0228B6A0, gangId, memberHandles); } // 0xD1BF325C8252A982 b1207
	static Any _0xDA801F7F6A5278D3(Any p0) { return invoke<Any>(0x0228B6D0, p0); } // 0xDA801F7F6A5278D3 b1207
	static Any _0x2F7EB8B6F6AFE79C(Any p0) { return invoke<Any>(0x0228B9E0, p0); } // 0x2F7EB8B6F6AFE79C b1207
	static Any _0x53A94294FDDCF98C(Any p0, Any p1) { return invoke<Any>(0x0228BB80, p0, p1); } // 0x53A94294FDDCF98C b1207
	static Player NETWORK_GET_GANG_LEADER(Any gangId) { return invoke<Player>(0x0228BD30, gangId); } // 0x4BE6C13A45CCA8EC b1207
	static BOOL _NETWORK_GET_GANG_LEADER_HANDLE(Any gangId, Any* gamerHandle) { return invoke<BOOL>(0x0228BD70, gangId, gamerHandle); } // 0xCE88A261DCBBA0D9 b1207
	static BOOL _0x6102830F764B3DE1(Player player) { return invoke<BOOL>(0x0228BED0, player); } // 0x6102830F764B3DE1 b1207
	static void _0xB38C256498748413() { invoke<Void>(0x0228BF20); } // 0xB38C256498748413 b1207
	static Any _0xE4C64CD37CB176AA(Any p0) { return invoke<Any>(0x0228BF30, p0); } // 0xE4C64CD37CB176AA b1207
	static Any _0x7BAA30C9BBE8AEE7(Any p0, Any p1) { return invoke<Any>(0x0228BF70, p0, p1); } // 0x7BAA30C9BBE8AEE7 b1207
	static Any _0x0E5C9FB9ED5DFF1C(Any p0) { return invoke<Any>(0x0228C010, p0); } // 0x0E5C9FB9ED5DFF1C b1207
	static void _0xB22B1D9F74095382(Any p0) { invoke<Void>(0x0228C090, p0); } // 0xB22B1D9F74095382 b1207
	static void _0xEE4F20004D0288B7() { invoke<Void>(0x0228C0A0); } // 0xEE4F20004D0288B7 b1207
	static void _0xAD22AB64FA428DF3(Any p0) { invoke<Void>(0x0228C0D0, p0); } // 0xAD22AB64FA428DF3 b1207
	static Any _0x48D82C83987E18E4(Any p0) { return invoke<Any>(0x0228C0E0, p0); } // 0x48D82C83987E18E4 b1207
	static void _0xA9CEAE8D6637FBAD(Any p0) { invoke<Void>(0x0228C890, p0); } // 0xA9CEAE8D6637FBAD b1207
	static Any _0x51C5EF47086AA0D7() { return invoke<Any>(0x0228C970); } // 0x51C5EF47086AA0D7 b1207
	static Any _0x644E02F24F9D4E98(Any p0, Any p1) { return invoke<Any>(0x0228C990, p0, p1); } // 0x644E02F24F9D4E98 b1207
	static Any _0x3ADC71A66356D706() { return invoke<Any>(0x0228C9C0); } // 0x3ADC71A66356D706 b1207
	static Any _0xFA7C5B7E087A4CEB() { return invoke<Any>(0x0228C9E0); } // 0xFA7C5B7E087A4CEB b1207
	static Any _0x1F11702DDBD915C6(Any p0, Any p1) { return invoke<Any>(0x0228CA00, p0, p1); } // 0x1F11702DDBD915C6 b1207
	static Any _0x7933754F260B428A(Player player) { return invoke<Any>(0x0228CB70, player); } // 0x7933754F260B428A b1207
	static Any _0xAFD3599A3CC5637D() { return invoke<Any>(0x0228CC90); } // 0xAFD3599A3CC5637D b1207
	static void _0xC81A9E2C8EFD28D5(Any p0) { invoke<Void>(0x0228CCF0, p0); } // 0xC81A9E2C8EFD28D5 b1207
}

namespace GOOGLE_ANALYTICS
{
	static void _GOOGLE_ANALYTICS_PUSH_PAGE(const char* pageName) { invoke<Void>(0x0228D660, pageName); } // 0xD43A616AE3AC4EF6 b1207
	static void _GOOGLE_ANALYTICS_POP_PAGE(const char* pageName) { invoke<Void>(0x0228D680, pageName); } // 0xC6DE040378364798 b1207
	static BOOL _GOOGLE_ANALYTICS_START_EVENT(const char* eventCategory, const char* eventAction, const char* eventLabel, int eventValue) { return invoke<BOOL>(0x0228D6A0, eventCategory, eventAction, eventLabel, eventValue); } // 0x1C54F031D7C0F7AC b1355
	static BOOL _GOOGLE_ANALYTICS_END_EVENT() { return invoke<BOOL>(0x0228D6E0); } // 0x87BBCC4360A9BDE3 b1355
}

namespace HUD
{
	static void _ENABLE_REDUCED_TIME_SCALE_WHILE_MENU_IS_OPEN() { invoke<Void>(0x022CCDE0); } // 0x26F6BBEA2CE3E3DC b1207
	static void _DISABLE_REDUCED_TIME_SCALE_WHILE_MENU_IS_OPEN() { invoke<Void>(0x022CCDF0); } // 0xC5C7A2F6567FCCBC b1207
	static void _ENABLE_HUD_COMPONENT_THIS_FRAME(Hash component) { invoke<Void>(0x022CCE20, component); } // 0xC9CAEAEEC1256E54 b1207
	static void _HIDE_HUD_COMPONENT(Hash component) { invoke<Void>(0x022CCE70, component); } // 0x4CC5F2FC1332577F b1207
	static void _DISPLAY_HUD_COMPONENT(Hash component) { invoke<Void>(0x022CCF30, component); } // 0x8BC7C1F929D07BF3 b1207
	static Any _0x7EC0D68233E391AC(Any p0) { return invoke<Any>(0x022CCF80, p0); } // 0x7EC0D68233E391AC b1207
	static void _BUSYSPINNER_SET_TEXT(const char* text) { invoke<Void>(0x022CCFF0, text); } // 0x7F78CD75CC4539E4 b1207
	static void BUSYSPINNER_OFF() { invoke<Void>(0x022CD130); } // 0x58F441B90EA84D06 0x94119534 b1207
	static BOOL BUSYSPINNER_IS_ON() { return invoke<BOOL>(0x022CD180); } // 0x823BF7B1DF613A21 0xB8B3A5D0 b1207
	static const char* _GET_TEXT_SUBSTRING(const char* text, int position, int length) { return invoke<const char*>(0x022CD1A0, text, position, length); } // 0x9D7E12EC6A1EE4E5 0x34A396EE b1207
	static const char* _GET_LABEL_TEXT(const char* labelName) { return invoke<const char*>(0x022CD1D0, labelName); } // 0xCFEDCCAD3C5BA90D 0x95C4B5AD b1207
	static void CLEAR_ALL_HELP_MESSAGES() { invoke<Void>(0x022CD240); } // 0x916ED8321F087059 0x9E5D9198 b1207
	static BOOL TEXT_BLOCK_IS_LOADED(const char* textBlock) { return invoke<BOOL>(0x022CD2A0, textBlock); } // 0xD0976CC34002DB57 b1207
	static Any _0x3CF96E16265B7DC8(Any p0) { return invoke<Any>(0x022CD300, p0); } // 0x3CF96E16265B7DC8 b1207
	static void TEXT_BLOCK_REQUEST(const char* textBlock) { invoke<Void>(0x022CD370, textBlock); } // 0xF66090013DE648D5 b1207
	static void _TEXT_BLOCK_DELETE(const char* textBlock) { invoke<Void>(0x022CD520, textBlock); } // 0xAA03F130A637D923 b1207
	static BOOL _DOES_TEXT_BLOCK_EXIST(const char* textDatabase) { return invoke<BOOL>(0x022CD5E0, textDatabase); } // 0x2C729F2B94CEA911 b1207
	static BOOL DOES_TEXT_LABEL_EXIST(const char* label) { return invoke<BOOL>(0x022CD690, label); } // 0x73C258C68D6F55B6 0x6ECAE560 b1207
	static const char* _GET_LABEL_TEXT_2(const char* label) { return invoke<const char*>(0x022CD6C0, label); } // 0x3429670F9B9EF2D3 b1207
	static const char* _GET_TEXT_SUBSTRING_2(const char* text, int length) { return invoke<const char*>(0x022CD730, text, length); } // 0xD8402B858F4DDD88 b1207
	static Any _0x806862E5D266CF38(Any p0, Any p1, Any p2) { return invoke<Any>(0x022CD8E0, p0, p1, p2); } // 0x806862E5D266CF38 b1207
	static int GET_LENGTH_OF_LITERAL_STRING(const char* string) { return invoke<int>(0x022CD910, string); } // 0x481FBF588B0B76DB 0x99379D55 b1207
	static int GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(const char* string) { return invoke<int>(0x022CDA00, string); } // 0xDC5AD6B7AB8184F5 0x7DBC0764 b1207
	static const char* GET_STRING_FROM_HASH_KEY(Hash labelHash) { return invoke<const char*>(0x022CDA30, labelHash); } // 0xBD5DD5EAE2B6CE14 b1207
	static BOOL IS_RADAR_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0x022CDAC0); } // 0x81E47F0EE1F2B21E 0x14AEAA28 b1207
	static BOOL IS_SUBTITLE_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0x022CDAE0); } // 0x7C4AC9573587F2DF 0x63BA19F5 b1355
	static void DISPLAY_HUD(BOOL toggle) { invoke<Void>(0x022CDB00, toggle); } // 0xD63FE3AF9FB3D53F 0xD10E4E31 b1207
	static BOOL IS_HUD_HIDDEN() { return invoke<BOOL>(0x022CDB10); } // 0x71B72B478F8189DC 0x40BADA1D b1207
	static BOOL IS_RADAR_HIDDEN() { return invoke<BOOL>(0x022CDBA0); } // 0x1B82FD5FFA4D666E 0x1AB3B954 b1207
	static BOOL IS_RADAR_HIDDEN_BY_SCRIPT() { return invoke<BOOL>(0x022CDC40); } // 0x66F35DD9D2B58579 b1207
	static void _GET_COLOR_FROM_NAME(Hash colorNameHash, int* red, int* green, int* blue, int* alpha) { invoke<Void>(0x022CDC60, colorNameHash, red, green, blue, alpha); } // 0xB981DD2DFAF9B1C9 b1207
	static void _DISPLAY_TEXT(const char* text, float xPos, float yPos) { invoke<Void>(0x022CDD00, text, xPos, yPos); } // 0xD79334A4BB99BAD1 b1207
	static void _SET_TEXT_COLOR(int r, int g, int b, int a) { invoke<Void>(0x022CDD10, r, g, b, a); } // 0x50A41AD966910F03 b1207
	static void SET_TEXT_RENDER_ID(int renderId) { invoke<Void>(0x022CDD20, renderId); } // 0xE550CDE128D56757 0xC5C3B7F3 b1207
	static BOOL REGISTER_NAMED_RENDERTARGET(const char* name, BOOL p1) { return invoke<BOOL>(0x022CDD60, name, p1); } // 0x98AF2BB6F62BD588 0xFAE5D6F0 b1207
	static BOOL IS_NAMED_RENDERTARGET_REGISTERED(const char* name) { return invoke<BOOL>(0x022CDE10, name); } // 0x3EE32F7964C40FE6 0x284057F5 b1207
	static BOOL RELEASE_NAMED_RENDERTARGET(const char* name) { return invoke<BOOL>(0x022CDEA0, name); } // 0x0E692EE61761361F 0xD3F6C892 b1207
	static void LINK_NAMED_RENDERTARGET(Hash modelHash) { invoke<Void>(0x022CDF30, modelHash); } // 0x2F506B8556242DDB 0x6844C4B9 b1207
	static int GET_NAMED_RENDERTARGET_RENDER_ID(const char* name) { return invoke<int>(0x022CE030, name); } // 0xB6762A85EE29AA60 0xF9D7A401 b1207
	static BOOL IS_NAMED_RENDERTARGET_LINKED(Hash modelHash) { return invoke<BOOL>(0x022CE0B0, modelHash); } // 0x707032835FF09AE7 0x8B52601F b1207
	static void _0x9D37EB5003E0F2CF(Any p0, Any p1) { invoke<Void>(0x022CE210, p0, p1); } // 0x9D37EB5003E0F2CF b1207
	static void HIDE_LOADING_ON_FADE_THIS_FRAME() { invoke<Void>(0x022CE250); } // 0xEA600AABAF4B9084 0x35087963 b1207
	static void _0x052D4AC0922AF91A(Any p0, Any p1) { invoke<Void>(0x022CE260, p0, p1); } // 0x052D4AC0922AF91A b1207
	static void HIDE_HUD_AND_RADAR_THIS_FRAME() { invoke<Void>(0x022CE2D0); } // 0x36CDD81627A6FCD2 0xB75D4AD2 b1207
	static void _0x8A59D44189AF2BC5(Any p0, Any p1) { invoke<Void>(0x022CE2E0, p0, p1); } // 0x8A59D44189AF2BC5 b1207
	static void _0x160825DADF1B04B3() { invoke<Void>(0x022CE310); } // 0x160825DADF1B04B3 b1207
	static Any _0x9C409BBC492CB5B1() { return invoke<Any>(0x022CE480); } // 0x9C409BBC492CB5B1 b1207
	static Any _0x0501D52D24EA8934(Any p0) { return invoke<Any>(0x022CE5B0, p0); } // 0x0501D52D24EA8934 b1207
	static Any _0x100157D6D7FE32CA(Any p0, Any p1) { return invoke<Any>(0x022CE630, p0, p1); } // 0x100157D6D7FE32CA b1207
	static Any _0x28AE29D909C8FDCE(Any p0) { return invoke<Any>(0x022CE6A0, p0); } // 0x28AE29D909C8FDCE b1207
	static void _0x2F7BB105144ACF30() { invoke<Void>(0x022CE6E0); } // 0x2F7BB105144ACF30 b1207
	static void _0xBFFF81E12A745A5F() { invoke<Void>(0x022CE6F0); } // 0xBFFF81E12A745A5F b1207
	static void SET_MISSION_NAME(BOOL p0, const char* name) { invoke<Void>(0x022CE700, p0, name); } // 0x402669A4BDAA72DA 0x68DCAE10 b1207
	static void SET_MISSION_NAME_FOR_UGC_MISSION(BOOL p0, const char* name) { invoke<Void>(0x022CE7E0, p0, name); } // 0xD98630CE73C61E98 0x8D9A1734 b1207
	static void _0xCE0D2F5586627CCE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x022CE8B0, p0, p1, p2, p3, p4); } // 0xCE0D2F5586627CCE b1207
	static BOOL GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(float worldX, float worldY, float worldZ, float* screenX, float* screenY) { return invoke<BOOL>(0x022CE8E0, worldX, worldY, worldZ, screenX, screenY); } // 0xB39C81628EF10B42 0xFE9A39F8 b1207
	static void _HIDE_HUD_THIS_FRAME() { invoke<Void>(0x022CE970); } // 0xBF4F34A85CA2970D b1207
	static void DISABLE_FRONTEND_THIS_FRAME() { invoke<Void>(0x022CE980); } // 0x56CE42A528156A67 0xD86A029E b1207
	static void _0x5651516D947ABC53() { invoke<Void>(0x022CE990); } // 0x5651516D947ABC53 b1207
	static void _ALLOW_PAUSE_MENU_WHEN_DEAD_THIS_FRAME() { invoke<Void>(0x022CE9A0); } // 0x30996422DF1EE561 0x630CD8EE b1207
	static void SET_FRONTEND_ACTIVE(BOOL active) { invoke<Void>(0x022CE9B0, active); } // 0xCE47C21C0687EBC2 0x81E1AD32 b1207
	static BOOL IS_PAUSE_MENU_ACTIVE() { return invoke<BOOL>(0x022CE9D0); } // 0x535384D6067BA42E 0xD3600591 b1207
	static void _SHOW_PLAYER_CORES(BOOL state) { invoke<Void>(0x022CE9F0, state); } // 0x50C803A4CD5932C5 b1207
	static void _SHOW_HORSE_CORES(BOOL state) { invoke<Void>(0x022CEA00, state); } // 0xD4EE21B7CC7FD350 b1207
	static void _0x3FE4FB41EF7D2196(Any p0) { invoke<Void>(0x022CEA10, p0); } // 0x3FE4FB41EF7D2196 b1207
	static void _JOURNAL_WRITE_ENTRY(Any p0) { invoke<Void>(0x022CEAF0, p0); } // 0x6DFDD665E416B093 b1207
	static Any _JOURNAL_CAN_WRITE_ENTRY(Any p0) { return invoke<Any>(0x022CEC20, p0); } // 0xCF782691D91F270E b1207
	static Any _JOURNAL_GET_ENTRY_COUNT() { return invoke<Any>(0x022CED50); } // 0xE65B5DE53351BE22 b1207
	static Any _JOURNAL_GET_ENTRY_AT_INDEX(Any p0) { return invoke<Any>(0x022CEDA0, p0); } // 0x3D16ABD7A1FD8C96 b1207
	static Any _JOURNAL_GET_GRIME_AT_INDEX(Any p0) { return invoke<Any>(0x022CEDF0, p0); } // 0xCB5945E1B855852F b1207
	static Any _JOURNAL_GET_ENTRY_INFO(Any p0, Any p1) { return invoke<Any>(0x022CEF50, p0, p1); } // 0x5514C3E60673530F b1207
	static Any _JOURNAL_GET_TEXTURE_WITH_LAYOUT(Any p0, Any p1, Any p2) { return invoke<Any>(0x022CF0E0, p0, p1, p2); } // 0x62CC549B3B8EA2AA b1207
	static void _JOURNAL_MARK_READ(Any p0) { invoke<Void>(0x022CF180, p0); } // 0xE4509BABE59BD24E b1207
	static void _JOURNAL_CLEAR_ALL_PROGRESS() { invoke<Void>(0x022CF220); } // 0xF402978DE6F88D6E b1207
	static Any UI_REQUEST_SCENE(Any p0, Any p1) { return invoke<Any>(0x0271EF70, p0, p1); } // 0xB6857100F8FD433C b1207
	static void _0xF1E6979C0B779985(Any p0) { invoke<Void>(0x0271F090, p0); } // 0xF1E6979C0B779985 b1207
	static Any UI_GET_SCENE_UIOBJECT(Any p0) { return invoke<Any>(0x0271F260, p0); } // 0xBE1067CD1C9570F6 b1207
	static void UI_MOVIEVIEW_SET_RENDER_TARGET(Any p0, Any p1) { invoke<Void>(0x0271F5C0, p0, p1); } // 0x51DE09A2196BD951 b1207
	static Prompt _UIPROMPT_CREATE(Hash inputHash, const char* labelName, Any p2, Any p3, Any p4, int p5) { return invoke<Prompt>(0x0272AE90, inputHash, labelName, p2, p3, p4, p5); } // 0x29FA7910726C3889 b1207
	static Prompt _UIPROMPT_REGISTER_BEGIN() { return invoke<Prompt>(0x0272B100); } // 0x04F97DE45A519419 b1207
	static void _UIPROMPT_REGISTER_END(Prompt prompt) { invoke<Void>(0x0272B1C0, prompt); } // 0xF7AA2696A22AD8B9 b1207
	static void _UIPROMPT_SET_PRIORITY(Prompt prompt, int priority) { invoke<Void>(0x0272B320, prompt, priority); } // 0xCA24F528D0D16289 b1207
	static Any _UIPROMPT_SET_CONTROL_ACTION(Prompt prompt, Hash control) { return invoke<Any>(0x0272B520, prompt, control); } // 0xB5352B7494A08258 b1207
	static void _UIPROMPT_SET_ALLOWED_ACTION(Prompt prompt, Any p1) { invoke<Void>(0x0272B790, prompt, p1); } // 0x565C1CE183CB0EAF b1207
	static void _UIPROMPT_SET_STANDARD_MODE(Prompt prompt, Any p1) { invoke<Void>(0x0272B970, prompt, p1); } // 0xCC6656799977741B b1207
	static BOOL _UIPROMPT_HAS_STANDARD_MODE_COMPLETED(Prompt prompt, Any p1) { return invoke<BOOL>(0x0272BB00, prompt, p1); } // 0xC92AC953F0A982AE b1207
	static void _UIPROMPT_SET_PRESSED_TIMED_MODE(Prompt prompt, Any p1) { invoke<Void>(0x0272BDC0, prompt, p1); } // 0x1473D3AF51D54276 b1207
	static Any _UIPROMPT_HAS_PRESSED_TIMED_MODE_COMPLETED(Prompt prompt) { return invoke<Any>(0x0272C080, prompt); } // 0x3CE854D250A88DAF b1207
	static Any _UIPROMPT_HAS_PRESSED_TIMED_MODE_FAILED(Prompt prompt) { return invoke<Any>(0x0272C280, prompt); } // 0x1A17B9ECFF617562 b1207
	static void _UIPROMPT_SET_HOLD_MODE(Prompt prompt, Any p1) { invoke<Void>(0x0272C5C0, prompt, p1); } // 0x94073D5CA3F16B7B b1207
	static void _UIPROMPT_SET_STANDARDIZED_HOLD_MODE(Prompt prompt, int p1) { invoke<Void>(0x0272C8B0, prompt, p1); } // 0x74C7D7B72ED0D3CF b1207
	static void _UIPROMPT_SET_HOLD_INDEFINITELY_MODE(Prompt prompt) { invoke<Void>(0x0272CB00, prompt); } // 0xEA5CCF4EEB2F82D1 b1207
	static void _UIPROMPT_SET_HOLD_AUTO_FILL_MODE(Prompt prompt, Any p1, Any p2) { invoke<Void>(0x0272CE50, prompt, p1, p2); } // 0x3CE932E737C145D6 b1207
	static void _0xA3F2149AA24F3D8E(Any p0, Any p1, Any p2) { invoke<Void>(0x0272D1D0, p0, p1, p2); } // 0xA3F2149AA24F3D8E b1207
	static BOOL _UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(Prompt prompt) { return invoke<BOOL>(0x0272D460, prompt); } // 0x8010BEBD0D5ED5BC b1207
	static BOOL _UIPROMPT_HAS_HOLD_MODE(Prompt prompt) { return invoke<BOOL>(0x0272D610, prompt); } // 0xB60C9F9ED47ABB76 b1207
	static BOOL _UIPROMPT_IS_HOLD_MODE_RUNNING(Prompt prompt) { return invoke<BOOL>(0x0272D800, prompt); } // 0xC7D70EAEF92EFF48 b1207
	static BOOL _UIPROMPT_HAS_HOLD_MODE_COMPLETED(Prompt prompt) { return invoke<BOOL>(0x0272DA50, prompt); } // 0xE0F65F0640EF0617 b1207
	static Any _0x81801291806DBC50(Any p0) { return invoke<Any>(0x0272DC80, p0); } // 0x81801291806DBC50 b1207
	static void _UIPROMPT_SET_MASH_MODE(Prompt prompt, Any p1) { invoke<Void>(0x0272DF80, prompt, p1); } // 0xDF6423BF071C7F71 b1207
	static void _UIPROMPT_SET_MASH_INDEFINITELY_MODE(Prompt prompt) { invoke<Void>(0x0272E300, prompt); } // 0x7B66E89312727274 b1207
	static void _UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(Prompt prompt, Any p1, Any p2, Any p3) { invoke<Void>(0x0272E6E0, prompt, p1, p2, p3); } // 0xCD1BDFF15EFA79F5 b1207
	static void _UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(Prompt prompt, Any p1, Any p2, Any p3) { invoke<Void>(0x0272EB90, prompt, p1, p2, p3); } // 0xDC0CB602DEADBA53 b1207
	static void _UIPROMPT_SET_MASH_AUTO_FILL_MODE(Prompt prompt, Any p1, Any p2) { invoke<Void>(0x0272EFE0, prompt, p1, p2); } // 0x6C39587D7CC66801 b1207
	static void _UIPROMPT_SET_MASH_MANUAL_MODE(Prompt prompt, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x0272F3A0, prompt, p1, p2, p3, p4); } // 0x32DF729D8BD3C1C6 b1207
	static void _UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(Prompt prompt, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x0272F750, prompt, p1, p2, p3, p4); } // 0x179DCF71F705DA20 b1207
	static BOOL _UIPROMPT_HAS_MANUAL_MASH_MODE(Prompt prompt) { return invoke<BOOL>(0x0272FA00, prompt); } // 0xA6C6A4ADB3BAC409 b1207
	static BOOL _UIPROMPT_HAS_MASH_MODE(Prompt prompt) { return invoke<BOOL>(0x0272FBB0, prompt); } // 0xCD072523791DDC1B b1207
	static Any _0xB0E8599243B3F568(Any p0) { return invoke<Any>(0x0272FD70, p0); } // 0xB0E8599243B3F568 b1207
	static BOOL _UIPROMPT_HAS_MASH_MODE_COMPLETED(Prompt prompt) { return invoke<BOOL>(0x0272FF40, prompt); } // 0x845CE958416DC473 b1207
	static BOOL _UIPROMPT_HAS_MASH_MODE_FAILED(Prompt prompt) { return invoke<BOOL>(0x02730140, prompt); } // 0x25B18E530CF39D6F b1207
	static float _UIPROMPT_GET_MASH_MODE_PROGRESS(Prompt prompt) { return invoke<float>(0x02730400, prompt); } // 0x8A9585293863B8A5 b1207
	static void _UIPROMPT_SET_MASH_MANUAL_MODE_INCREASE_PER_PRESS(Prompt prompt, float rate) { invoke<Void>(0x02730500, prompt, rate); } // 0xA0D1D79C6036A855 b1207
	static void _UIPROMPT_SET_MASH_MANUAL_MODE_DECAY_SPEED(Prompt prompt, float speed) { invoke<Void>(0x027306C0, prompt, speed); } // 0x7D393C247FB9B431 b1207
	static void _UIPROMPT_SET_MASH_MANUAL_MODE_PRESSED_GROWTH_SPEED(Prompt prompt, float speed) { invoke<Void>(0x02730880, prompt, speed); } // 0x56DBB26F98582C29 b1207
	static void _UIPROMPT_SET_ROTATE_MODE(Prompt prompt, Any p1, Any p2) { invoke<Void>(0x02730B00, prompt, p1, p2); } // 0x7ABE7095FB3D2581 b1207
	static void _UIPROMPT_SET_TARGET_MODE(Prompt prompt, Any p1, Any p2, Any p3) { invoke<Void>(0x02730E40, prompt, p1, p2, p3); } // 0x5F6503D9CD2754EB b1207
	static void _UIPROMPT_SET_TARGET_MODE_TARGET(Prompt prompt, Any p1, Any p2) { invoke<Void>(0x027310D0, prompt, p1, p2); } // 0x5E019C45DD3B6A14 b1207
	static void _UIPROMPT_SET_TARGET_MODE_PROGRESS(Prompt prompt, Any p1) { invoke<Void>(0x027312F0, prompt, p1); } // 0x00123054BEC8A30F b1207
	static void _UIPROMPT_SET_BEAT_MODE(Prompt prompt, Any p1) { invoke<Void>(0x027315D0, prompt, p1); } // 0xF957A1654C6322FE b1207
	static BOOL _UIPROMPT_WAS_BEAT_MODE_PRESSED_IN_TIME_WINDOW(Prompt prompt) { return invoke<BOOL>(0x02731870, prompt); } // 0x1FE4788AB1430C55 b1207
	static void _UIPROMPT_SET_BEAT_MODE_GRAYED_OUT(Prompt prompt, Any p1) { invoke<Void>(0x02731A70, prompt, p1); } // 0xB487A4936FBF40AC b1207
	static void _UIPROMPT_RESTART_MODES(Prompt prompt) { invoke<Void>(0x02731C20, prompt); } // 0xDC6C55DFA2C24EE5 b1207
	static void _UIPROMPT_SET_SPINNER_SPEED(Prompt prompt, Any p1) { invoke<Void>(0x02731E00, prompt, p1); } // 0xAC6586A7FDCD4B68 b1207
	static void _UIPROMPT_SET_SPINNER_POSITION(Prompt prompt, Any p1) { invoke<Void>(0x027320F0, prompt, p1); } // 0x832CB510DE546282 b1207
	static void _UIPROMPT_SET_URGENT_PULSING_ENABLED(Prompt prompt, BOOL toggle) { invoke<Void>(0x02732350, prompt, toggle); } // 0xC5F428EE08FA7F2C b1207
	static BOOL _UIPROMPT_GET_URGENT_PULSING_ENABLED(Prompt prompt) { return invoke<BOOL>(0x027324B0, prompt); } // 0x1FBA0DABECDDB52B b1207
	static void _UIPROMPT_SET_TAG(Prompt prompt, Any p1) { invoke<Void>(0x027326D0, prompt, p1); } // 0xDEC85C174751292B b1207
	static int _UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Entity entity) { return invoke<int>(0x027328D0, entity); } // 0xB796970BD125FCE8 b1207
	static int _UIPROMPT_GET_GROUP_ID_FOR_SCENARIO_POINT(Any p0, int p1) { return invoke<int>(0x02732A50, p0, p1); } // 0xCB73D7521E7103F0 b1207
	static void _UIPROMPT_SET_GROUP(Prompt prompt, int groupId, Any p2) { invoke<Void>(0x02732C70, prompt, groupId, p2); } // 0x2F11D3A254169EA4 b1207
	static void _UIPROMPT_REMOVE_GROUP(Prompt prompt, Any p1) { invoke<Void>(0x02732E80, prompt, p1); } // 0x4E52C800A28F7BE8 b1207
	static Any _UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(Hash hash, Any p1, Any p2, Any p3, Any p4, Prompt prompt) { return invoke<Any>(0x02733180, hash, p1, p2, p3, p4, prompt); } // 0xC65A45D4453C2627 b1207
	static int _UIPROMPT_GET_GROUP_ACTIVE_PAGE(Hash hash) { return invoke<int>(0x02733240, hash); } // 0xC1FCC36C3F7286C8 b1207
	static Any _UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Entity entity, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0x02733A80, entity, p1, p2, p3, p4, p5, p6); } // 0x315C81D760609108 b1207
	static Any _0x8B55B324A9123F6B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x02734070, p0, p1, p2, p3, p4, p5); } // 0x8B55B324A9123F6B b1232
	static BOOL _UIPROMPT_DOES_AMBIENT_GROUP_EXIST(Hash hash) { return invoke<BOOL>(0x02734130, hash); } // 0xEB550B927B34A1BB b1207
	static void _UIPROMPT_ADD_GROUP_LINK(Any p0, Prompt prompt, Any p2) { invoke<Void>(0x02734280, p0, prompt, p2); } // 0x684C96CC7C66E8EF b1207
	static void _UIPROMPT_ADD_GROUP_RETURN_LINK(Any p0, Prompt prompt) { invoke<Void>(0x02734480, p0, prompt); } // 0x837972ED28159536 b1207
	static void _UIPROMPT_SET_TRANSPORT_MODE(Prompt prompt, Any p1) { invoke<Void>(0x02734680, prompt, p1); } // 0x876E4A35C73A6655 b1207
	static void _UIPROMPT_DISABLE_PROMPTS_THIS_FRAME() { invoke<Void>(0x027347A0); } // 0xF1622CE88A1946FB b1207
	static void _UIPROMPT_DELETE(Prompt prompt) { invoke<Void>(0x027348D0, prompt); } // 0x00EDE88D4D13CF59 b1207
	static BOOL _UIPROMPT_IS_VALID(Prompt prompt) { return invoke<BOOL>(0x02734A30, prompt); } // 0x347469FBDD1589A9 b1207
	static BOOL _UIPROMPT_IS_ACTIVE(Prompt prompt) { return invoke<BOOL>(0x02734B80, prompt); } // 0x546E342E01DE71CF b1207
	static void _UIPROMPT_SET_VISIBLE(Prompt prompt, BOOL toggle) { invoke<Void>(0x02734D10, prompt, toggle); } // 0x71215ACCFDE075EE b1207
	static void _UIPROMPT_SET_ENABLED(Prompt prompt, BOOL toggle) { invoke<Void>(0x02734ED0, prompt, toggle); } // 0x8A0FB4D03A630D21 b1207
	static void _UIPROMPT_SET_TEXT(Prompt prompt, const char* text) { invoke<Void>(0x027350A0, prompt, text); } // 0x5DD02A8318420DD7 b1207
	static void _UIPROMPT_SET_ATTRIBUTE(Prompt prompt, Any p1, Any p2) { invoke<Void>(0x027352A0, prompt, p1, p2); } // 0x560E76D5E2E1803F b1207
	static void _0xF4A5C4509BF923B1(Prompt prompt, Any p1) { invoke<Void>(0x02735490, prompt, p1); } // 0xF4A5C4509BF923B1 b1207
	static void _0x53CE46C01A089DA1(Prompt prompt, Any p1) { invoke<Void>(0x02735610, prompt, p1); } // 0x53CE46C01A089DA1 b1207
	static void _0xA520C7B05FA4EB2A(Any p0, Any p1) { invoke<Void>(0x027357B0, p0, p1); } // 0xA520C7B05FA4EB2A b1207
	static void _UIPROMPT_CONTEXT_SET_VOLUME(Prompt prompt, Volume volume) { invoke<Void>(0x02735D80, prompt, volume); } // 0x4D107406667423BE b1207
	static void _UIPROMPT_CONTEXT_SET_POINT(Prompt prompt, float x, float y, float z) { invoke<Void>(0x02735E50, prompt, x, y, z); } // 0xAE84C5EE2C384FB3 b1207
	static void _UIPROMPT_CONTEXT_SET_SIZE(Prompt prompt, float size) { invoke<Void>(0x02735FB0, prompt, size); } // 0x0C718001B77CA468 b1207
	static BOOL _UIPROMPT_IS_PRESSED(Prompt prompt) { return invoke<BOOL>(0x02736350, prompt); } // 0x21E60E230086697F b1207
	static BOOL _UIPROMPT_IS_JUST_PRESSED(Prompt prompt) { return invoke<BOOL>(0x027365B0, prompt); } // 0x2787CC611D3FACC5 b1207
	static BOOL _UIPROMPT_IS_JUST_RELEASED(Prompt prompt) { return invoke<BOOL>(0x02736810, prompt); } // 0x635CC82FA297A827 b1207
	static BOOL _UIPROMPT_IS_RELEASED(Prompt prompt) { return invoke<BOOL>(0x02736920, prompt); } // 0xAFC887BA7A7756D6 b1207
	static void _UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(int p0) { invoke<Void>(0x02736A50, p0); } // 0x06565032897BA861 b1207
	static void _UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(int p0) { invoke<Void>(0x02736AB0, p0); } // 0xFC094EF26DD153FA b1207
	static void _UIPROMPT_FILTER_CLEAR() { invoke<Void>(0x02736B00); } // 0x6A2F820452017EA2 b1207
	static void _UIPROMPT_SET_FAVOURED_PED_FOR_CONFLICT_RESOLUTION(Ped ped) { invoke<Void>(0x02736BC0, ped); } // 0x530A428705BE5DEF b1207
	static void _UIPROMPT_CLEAR_FAVOURED_PED_FOR_CONFLICT_RESOLUTION() { invoke<Void>(0x02736C90); } // 0x51259AE5C72D4A1B b1207
	static BOOL _UIPROMPT_IS_ENABLED(Prompt prompt) { return invoke<BOOL>(0x02736D50, prompt); } // 0x0D00EDDFB58B7F28 b1207
	static BOOL _UIPROMPT_IS_CONTROL_ACTION_ACTIVE(Hash control) { return invoke<BOOL>(0x02736F70, control); } // 0x1BE19185B8AFE299 b1207
	static Any _0xD6BD313CFA41E57A(Any p0) { return invoke<Any>(0x02737170, p0); } // 0xD6BD313CFA41E57A b1207
	static int _UIPROMPT_SET_REGISTER_HORIZONTAL_ORIENTATION() { return invoke<int>(0x02737230); } // 0xD9459157EB22C895 b1207
	static void _UIPROMPT_CLEAR_HORIZONTAL_ORIENTATION(int id) { invoke<Void>(0x02737300, id); } // 0x6095358C4142932A b1207
	static void _UIPROMPT_SET_ORDERING_AS_INPUT_TYPE(Prompt prompt, Any p1) { invoke<Void>(0x027374A0, prompt, p1); } // 0x2F385ECC5200938D b1207
	static Any _0x066725A9D52B3641() { return invoke<Any>(0x027375C0); } // 0x066725A9D52B3641 b1232
	static void _0x958278B97C4AFFD8(Any p0, Any p1) { invoke<Void>(0x02737680, p0, p1); } // 0x958278B97C4AFFD8 b1232
	static int _CREATE_MP_GAMER_TAG(Player player, const char* username, BOOL pointedClanTag, BOOL isRockstarClan, const char* clanTag, int clanFlag) { return invoke<int>(0x02282300, player, username, pointedClanTag, isRockstarClan, clanTag, clanFlag); } // 0xD877AF112AD2B41B b1207
	static int CREATE_FAKE_MP_GAMER_TAG(Ped ped, const char* username, BOOL pointedClanTag, BOOL isRockstarClan, const char* clanTag, int clanFlag) { return invoke<int>(0x02282450, ped, username, pointedClanTag, isRockstarClan, clanTag, clanFlag); } // 0x53CB4B502E1C57EA 0xF5CD2AA4 b1207
	static int _CREATE_MP_GAMER_TAG_ON_ENTITY(Entity entity, const char* text) { return invoke<int>(0x02282530, entity, text); } // 0xE961BF23EAB76B12 b1207
	static void REMOVE_MP_GAMER_TAG(int gamerTagId) { invoke<Void>(0x02282610, gamerTagId); } // 0x839BFD7D7E49FE09 0x3D081FE4 b1207
	static BOOL IS_MP_GAMER_TAG_ACTIVE(int gamerTagId) { return invoke<BOOL>(0x02282640, gamerTagId); } // 0x6E1C31E14C7A5F97 0x60118951 b1207
	static BOOL _IS_MP_GAMER_TAG_ACTIVE_ON_ENTITY(int gamerTagId, Entity entity) { return invoke<BOOL>(0x022826A0, gamerTagId, entity); } // 0x502E1591A504F843 b1207
	static void _SET_MP_GAMER_TAG_VISIBILITY(int gamerTagId, int visibility) { invoke<Void>(0x022827A0, gamerTagId, visibility); } // 0x93171DDDAB274EB8 b1207
	static void _SET_MP_GAMER_TAG_TYPE(int gamerTagId, Hash type) { invoke<Void>(0x02282800, gamerTagId, type); } // 0x25B9C78A25105C35 b1207
	static void _SET_MP_GAMER_TAG_COLOUR(int gamerTagId, Hash colour) { invoke<Void>(0x02282930, gamerTagId, colour); } // 0x84BD27DDF9575816 b1207
	static void _0xEF7AB1A0E8C86170(int gamerTagId, BOOL allow) { invoke<Void>(0x02282A50, gamerTagId, allow); } // 0xEF7AB1A0E8C86170 b1207
	static void SET_MP_GAMER_TAG_NAME(int gamerTagId, const char* string) { invoke<Void>(0x02282A60, gamerTagId, string); } // 0xEA6F4B8D4B4B5B3E 0x627A559B b1207
	static void _SET_MP_GAMER_TAG_NAME_POSSE(int gamerTagId, const char* text) { invoke<Void>(0x02282B00, gamerTagId, text); } // 0x1EA716E0628A6F44 b1207
	static void SET_MP_GAMER_TAG_BIG_TEXT(int gamerTagId, const char* string) { invoke<Void>(0x02282B60, gamerTagId, string); } // 0xA0D7CE5F83259663 0x939218AB b1207
	static void _SET_MP_GAMER_TAG_TOP_ICON(int gamerTagId, Hash icon) { invoke<Void>(0x02282BC0, gamerTagId, icon); } // 0x5F57522BC1EB9D9D b1207
	static void _SET_MP_GAMER_TAG_SECONDARY_ICON(int gamerTagId, Hash icon) { invoke<Void>(0x02282CE0, gamerTagId, icon); } // 0x95384C6CE1526EFF b1207
	static void _MP_GAMER_TAG_ENABLE_REVIVE_TOP_ICON(int gamerTagId) { invoke<Void>(0x02282ED0, gamerTagId); } // 0xFFF6579CF0139FCE b1207
	static void _MP_GAMER_TAG_DISABLE_REVIVE_TOP_ICON(int gamerTagId) { invoke<Void>(0x02283030, gamerTagId); } // 0x1F9A64C2804B3471 b1207
}

namespace IK
{
	static void _0x66F9EB44342BB4C5(Ped ped, Any p1) { invoke<Void>(0x022D0B00, ped, p1); } // 0x66F9EB44342BB4C5 b1207
	static void _0x0B9F7A01EC50448D(Ped ped, Any p1) { invoke<Void>(0x022D0B10, ped, p1); } // 0x0B9F7A01EC50448D b1207
	static void _INVERSE_KINEMATICS_SET_DISABLED_FOR_PED(Ped ped, int p1, BOOL p2) { invoke<Void>(0x022D0B20, ped, p1, p2); } // 0x0EABF182FBB63D72 b1207
	static BOOL _0x6098139150DCC745(Ped ped, int p1) { return invoke<BOOL>(0x022D0B40, ped, p1); } // 0x6098139150DCC745 b1207
	static void _0x873C792E07A32C8B(Ped ped1, Ped ped2) { invoke<Void>(0x022D0B70, ped1, ped2); } // 0x873C792E07A32C8B b1207
}

namespace _NAMESPACE30
{
	static void _SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME() { invoke<Void>(0x022D1790); } // 0xF12E4CCAF249DC10 b1207
	static void _SET_MOUSE_CURSOR_SPRITE(int spriteId) { invoke<Void>(0x022D17A0, spriteId); } // 0x7F5858AAB5A58CCE b1207
	static void _0x0546B117BB17548B() { invoke<Void>(0x022D17B0); } // 0x0546B117BB17548B b1232
	static BOOL _0x2B8B605F2A9E64BF() { return invoke<BOOL>(0x022D17C0); } // 0x2B8B605F2A9E64BF b1311
	static BOOL _0x61CAE9D1FD055E44() { return invoke<BOOL>(0x022D17D0); } // 0x61CAE9D1FD055E44 b1207
	static BOOL _0xF7F51A57349739F2() { return invoke<BOOL>(0x022D17E0); } // 0xF7F51A57349739F2 b1207
}

namespace INTERIOR
{
	static BOOL IS_VALID_INTERIOR(Interior interior) { return invoke<BOOL>(0x022D6960, interior); } // 0x017C1B3159F79F6C 0x39C0B635 b1207
	static void _GET_INTERIOR_INFO(Interior interior, Vector3* position, Hash* nameHash) { invoke<Void>(0x022D6980, interior, position, nameHash); } // 0x8451E87D3C2B0286 b1207
	static Hash _GET_INTERIOR_MINIMAP_HASH(Interior interior) { return invoke<Hash>(0x022D6A20, interior); } // 0x3039BE60B3749716 b1207
	static Vector3 _GET_INTERIOR_POSITION(Interior interior) { return invoke<Vector3>(0x022D6A60, interior); } // 0x2C9746D0CA15BE1C b1207
	static BOOL IS_INTERIOR_SCENE() { return invoke<BOOL>(0x022D6AB0); } // 0x4200F14D6F840A9A 0x55226C13 b1207
	static void CLEAR_ROOM_FOR_ENTITY(Entity entity) { invoke<Void>(0x022D6AC0, entity); } // 0xA1762D5BBFCA13A8 0x7DDADB92 b1207
	static void FORCE_ROOM_FOR_ENTITY(Entity entity, Interior interior, Hash roomHashKey) { invoke<Void>(0x022D6C00, entity, interior, roomHashKey); } // 0xBC29A9894C976945 0x10BD4435 b1207
	static Hash GET_ROOM_KEY_FROM_ENTITY(Entity entity) { return invoke<Hash>(0x022D6C20, entity); } // 0x076E46E0EB52AFC6 0xE4ACF8C3 b1207
	static Hash GET_KEY_FOR_ENTITY_IN_ROOM(Entity entity) { return invoke<Hash>(0x022D6C40, entity); } // 0x27D7B6F79E1F4603 0x91EA80EF b1207
	static Interior GET_INTERIOR_FROM_ENTITY(Entity entity) { return invoke<Interior>(0x022D6D40, entity); } // 0xB417689857646F61 0x5C644614 b1207
	static void _0x5BD616735F16BF5C(Entity entity, Interior interior) { invoke<Void>(0x022D6D60, entity, interior); } // 0x5BD616735F16BF5C 0xE645E162 b1207
	static void FORCE_ROOM_FOR_GAME_VIEWPORT(int interiorID, Hash roomHashKey) { invoke<Void>(0x022D6E40, interiorID, roomHashKey); } // 0x115B4AA8FB28AB43 0xD79803B5 b1207
	static void CLEAR_ROOM_FOR_GAME_VIEWPORT() { invoke<Void>(0x022D6E50); } // 0x951A049765E0D450 0x617DC75D b1207
	static Interior _GET_INTERIOR_FROM_GAME_VIEWPORT() { return invoke<Interior>(0x022D6EA0); } // 0xBC8A281FF125C655 b1207
	static Interior GET_INTERIOR_AT_COORDS(float x, float y, float z) { return invoke<Interior>(0x022D6EE0, x, y, z); } // 0xCDD36C9E5C469070 0xA17FBF37 b1207
	static void PIN_INTERIOR_IN_MEMORY(Interior interior) { invoke<Void>(0x022D7110, interior); } // 0xBD3D33EABF680168 0x3ADA414E b1207
	static void UNPIN_INTERIOR(Interior interior) { invoke<Void>(0x022D71D0, interior); } // 0x07FD1A0B814F6055 0xFCFF792A b1207
	static BOOL IS_INTERIOR_READY(Interior interior) { return invoke<BOOL>(0x022D7210, interior); } // 0x941560D2D45DBFC8 0xE1EF6450 b1207
	static Any _0xB5EF6FEF2DC9EBED(Interior interior) { return invoke<Any>(0x022D7260, interior); } // 0xB5EF6FEF2DC9EBED b1207
	static Interior GET_INTERIOR_AT_COORDS_WITH_TYPE(float x, float y, float z, const char* interiorType) { return invoke<Interior>(0x022D72A0, x, y, z, interiorType); } // 0xAAD6170AA33B13C0 0x96525B06 b1207
	static Interior GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(float x, float y, float z, Hash typeHash) { return invoke<Interior>(0x022D72D0, x, y, z, typeHash); } // 0x3543AEA1816D1D2B 0x11718507 b1207
	static BOOL IS_COLLISION_MARKED_OUTSIDE(float x, float y, float z) { return invoke<BOOL>(0x022D7550, x, y, z); } // 0xF291396B517E25B2 0x7762249C b1207
	static int GET_INTERIOR_FROM_COLLISION(float x, float y, float z) { return invoke<int>(0x022D75F0, x, y, z); } // 0x5054D1A5218FA696 0x7ED33DC1 b1207
	static void ACTIVATE_INTERIOR_ENTITY_SET(Interior interior, const char* entitySetName, int p2) { invoke<Void>(0x022D76B0, interior, entitySetName, p2); } // 0x174D0AAB11CED739 0xC80A5DDF b1207
	static void DEACTIVATE_INTERIOR_ENTITY_SET(Interior interior, const char* entitySetName, BOOL p2) { invoke<Void>(0x022D7730, interior, entitySetName, p2); } // 0x33B81A2C07A51FFF 0xDBA768A1 b1207
	static BOOL IS_INTERIOR_ENTITY_SET_ACTIVE(Interior interior, const char* entitySetName) { return invoke<BOOL>(0x022D77F0, interior, entitySetName); } // 0x32810CA2125F5842 0x39A3CC6F b1207
	static BOOL _IS_INTERIOR_ENTITY_SET_VALID(Interior interior, const char* entitySetName) { return invoke<BOOL>(0x022D7880, interior, entitySetName); } // 0xD56FF170710FC826 b1207
	static void DISABLE_INTERIOR(Interior interior, BOOL toggle) { invoke<Void>(0x022D7920, interior, toggle); } // 0x3C2B92A1A07D4FCE 0x093ADEA5 b1207
	static void _0x2533F2AB0EB9C6F9(Any p0, Any p1) { invoke<Void>(0x022D79C0, p0, p1); } // 0x2533F2AB0EB9C6F9 b1207
	static void _0xFE2B3D5500B1B2E4(Any p0, Any p1) { invoke<Void>(0x022D7A10, p0, p1); } // 0xFE2B3D5500B1B2E4 b1207
}

namespace INVENTORY
{
	static int _INVENTORY_GET_INVENTORY_ID_FROM_PED(Ped ped) { return invoke<int>(0x022EF980, ped); } // 0x13D234A2A3F66E63 b1207
	static Any _0xADDD1E7C0ECF7D95(Any p0, Any p1) { return invoke<Any>(0x022EFA70, p0, p1); } // 0xADDD1E7C0ECF7D95 b1207
	static Any _0xE80E50BEE276A54A(Any p0, Any p1) { return invoke<Any>(0x022EFAE0, p0, p1); } // 0xE80E50BEE276A54A b1207
	static Any _0x112BCA290D2EB53C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke<Any>(0x022EFC90, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x112BCA290D2EB53C b1207
	static void _0x46743BBFEDBC859E(Any p0, Any p1, Any p2) { invoke<Void>(0x022EFCE0, p0, p1, p2); } // 0x46743BBFEDBC859E b1207
	static void _0x65A5F70F4A292EBE(Any p0, Any p1, Any p2) { invoke<Void>(0x022EFD40, p0, p1, p2); } // 0x65A5F70F4A292EBE b1207
	static Any _0x70E3A884ED000A01(Any p0, Any p1) { return invoke<Any>(0x022EFD60, p0, p1); } // 0x70E3A884ED000A01 b1311
	static void _0x9A113C660AEA3832(Any p0, Any p1, Any p2) { invoke<Void>(0x022EFD90, p0, p1, p2); } // 0x9A113C660AEA3832 b1207
	static void _0xD740F11FBC8AEF43(Any p0, Any p1, Any p2) { invoke<Void>(0x022EFDB0, p0, p1, p2); } // 0xD740F11FBC8AEF43 b1207
	static Any _0xF9933164965533B7(Any p0, Any p1) { return invoke<Any>(0x022EFDD0, p0, p1); } // 0xF9933164965533B7 b1207
	static Any _0x4AEF1FB5B9011D75(Any p0) { return invoke<Any>(0x022EFF40, p0); } // 0x4AEF1FB5B9011D75 b1207
	static Any _0xA4550FE9C512E3DD(Any p0) { return invoke<Any>(0x022F0030, p0); } // 0xA4550FE9C512E3DD b1207
	static Any _0x245D07651B1D183B(Any p0, Any p1) { return invoke<Any>(0x022F02B0, p0, p1); } // 0x245D07651B1D183B b1207
	static Any _0x2BAE4880DCDD560B(Any p0, Any p1) { return invoke<Any>(0x022F0550, p0, p1); } // 0x2BAE4880DCDD560B b1207
	static Any _0x2E1CDC1FF3B8473E(Any p0, Any p1) { return invoke<Any>(0x022F0580, p0, p1); } // 0x2E1CDC1FF3B8473E b1207
	static Any _0x0C093C1787F18519(Any p0, Any p1) { return invoke<Any>(0x022F05B0, p0, p1); } // 0x0C093C1787F18519 b1207
	static Any _0xAB5F12746A099A0E(Any p0, Any p1) { return invoke<Any>(0x022F0700, p0, p1); } // 0xAB5F12746A099A0E b1207
	static BOOL _INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(int inventoryId) { return invoke<BOOL>(0x022F0730, inventoryId); } // 0x0FBBFFC891A97C81 b1207
	static BOOL _INVENTORY_IS_GUID_VALID(Any* guid) { return invoke<BOOL>(0x022F07A0, guid); } // 0xB881CA836CC4B6D4 b1207
	static Any _0x4C543D5DFCD2DAFD(Any* guid1, Any* guid2) { return invoke<Any>(0x022F07E0, guid1, guid2); } // 0x4C543D5DFCD2DAFD b1207
	static BOOL INVENTORY_GET_GUID_FROM_ITEMID(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<BOOL>(0x022F0850, p0, p1, p2, p3, p4); } // 0x886DFD3E185C8A89 b1207
	static Any _0x5D6182F3BCE1333B(Any p0, Any p1) { return invoke<Any>(0x022F0970, p0, p1); } // 0x5D6182F3BCE1333B b1207
	static BOOL INVENTORY_GET_INVENTORY_ITEM(int inventoryId, Any* p1, Any* p2, BOOL p3) { return invoke<BOOL>(0x022F09F0, inventoryId, p1, p2, p3); } // 0x9700E8EFC4AB9089 b1207
	static Any _0x025A1B1FB03FBF61(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x022F0A30, p0, p1, p2, p3, p4); } // 0x025A1B1FB03FBF61 b1207
	static Any _0xCD9A485F2B383B44(int inventoryId, Any p1, Any p2, Any* p3) { return invoke<Any>(0x022F0A70, inventoryId, p1, p2, p3); } // 0xCD9A485F2B383B44 b1207
	static Any _0xCB5D11F9508A928D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0x022F0AA0, p0, p1, p2, p3, p4, p5, p6); } // 0xCB5D11F9508A928D b1207
	static Any _0xD80A8854DB5CFBA5(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x022F0AE0, p0, p1, p2, p3); } // 0xD80A8854DB5CFBA5 b1207
	static Any _0x3E4E811480B3AE79(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x022F0B10, p0, p1, p2, p3); } // 0x3E4E811480B3AE79 b1207
	static Any _0xB4158C8C9A3B5DCE(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x022F0B40, p0, p1, p2, p3); } // 0xB4158C8C9A3B5DCE b1207
	static Any _0xDCCAA7C3BFD88862(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x022F0BE0, p0, p1, p2, p3, p4, p5); } // 0xDCCAA7C3BFD88862 b1207
	static Any _0xF2753D691BCDA314(Any p0, Any p1, Any p2) { return invoke<Any>(0x022F0C20, p0, p1, p2); } // 0xF2753D691BCDA314 b1207
	static int _INVENTORY_CREATE_ITEM_COLLECTION(int inventoryId, const char* filterName, Hash slotId, int* p3) { return invoke<int>(0x022F0C50, inventoryId, filterName, slotId, p3); } // 0x80D78BDC9D88EF07 b1207
	static int _INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(int inventoryId, Any* filter, int* p2) { return invoke<int>(0x022F0C80, inventoryId, filter, p2); } // 0x640F890C3E5A3FFD b1207
	static BOOL _INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(int collectionIndex, int itemIndex, Any* itemData) { return invoke<BOOL>(0x022F0CB0, collectionIndex, itemIndex, itemData); } // 0x82FA24C3D3FCD9B7 b1207
	static BOOL _INVENTORY_RELEASE_ITEM_COLLECTION(int p0) { return invoke<BOOL>(0x022F0CE0, p0); } // 0x42A2F33A1942E865 b1207
	static Any _0x734311E2852760D0(Any p0, Any p1, Any p2) { return invoke<Any>(0x022F0D20, p0, p1, p2); } // 0x734311E2852760D0 b1207
	static Any _0x22E590F108289A9D(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x022F0D50, p0, p1, p2, p3); } // 0x22E590F108289A9D b1207
	static Any _0x88B58B83A43A8CAB(Any p0, Any p1, Any p2) { return invoke<Any>(0x022F0D80, p0, p1, p2); } // 0x88B58B83A43A8CAB b1207
	static Any _0xD08685BA892DBFAB(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x022F0EC0, p0, p1, p2, p3); } // 0xD08685BA892DBFAB b1207
	static void _0x0349404A22736740(Any p0, Any p1, Any p2) { invoke<Void>(0x022F0EF0, p0, p1, p2); } // 0x0349404A22736740 b1207
	static void _0x6D2F987736A42D4C(Any p0, Any p1, Any p2) { invoke<Void>(0x022F1070, p0, p1, p2); } // 0x6D2F987736A42D4C b1207
	static void _0x766315A564594401(Any p0, Any p1, Any p2) { invoke<Void>(0x022F11D0, p0, p1, p2); } // 0x766315A564594401 b1207
	static void _0x6A564540FAC12211(Any p0, Any p1) { invoke<Void>(0x022F11F0, p0, p1); } // 0x6A564540FAC12211 b1207
	static Any _0x3D10D7179D7034AF(Any p0, Any p1, Any p2) { return invoke<Any>(0x022F1210, p0, p1, p2); } // 0x3D10D7179D7034AF b1207
	static Any _0x227522FD59DDB7E8(Any p0, Any p1, Any p2) { return invoke<Any>(0x022F1240, p0, p1, p2); } // 0x227522FD59DDB7E8 b1207
	static BOOL _INVENTORY_IS_ITEM_EXPIRED(Any* itemGUID) { return invoke<BOOL>(0x022F1360, itemGUID); } // 0x0137C77A2EC64536 b1232
	static int _INVENTORY_GET_ITEM_EXPIRY_TIME(Any* itemGUID) { return invoke<int>(0x022F1460, itemGUID); } // 0x4A606C17276E1BCC b1232
	static Any _0xC97E0D2302382211(Any p0, Any p1, Any p2) { return invoke<Any>(0x022F1630, p0, p1, p2); } // 0xC97E0D2302382211 b1207
	static Any _0xE787F05DFC977BDE(Any p0, Any p1, Any p2) { return invoke<Any>(0x022F1660, p0, p1, p2); } // 0xE787F05DFC977BDE b1207
	static Any _0xB1DD74A1F5536622(Any p0, Any p1) { return invoke<Any>(0x022F1690, p0, p1); } // 0xB1DD74A1F5536622 b1311
	static Any _0xE843D21A8E2498AA(Any p0, Any p1) { return invoke<Any>(0x022F17A0, p0, p1); } // 0xE843D21A8E2498AA b1207
	static int INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(Any p0, Any p1, Any p2) { return invoke<int>(0x022F18B0, p0, p1, p2); } // 0x033EE4B89F3AC545 b1207
	static Any _0xBE012571B25F5ACA(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x022F18E0, p0, p1, p2, p3, p4); } // 0xBE012571B25F5ACA b1207
	static BOOL _INVENTORY_FITS_SLOT_ID(Hash item, Hash slotId) { return invoke<BOOL>(0x022F1920, item, slotId); } // 0x780C5B9AE2819807 b1207
	static Any _0x6452B1D357D81742(Any p0, Any p1) { return invoke<Any>(0x022F1AD0, p0, p1); } // 0x6452B1D357D81742 b1207
	static Any _0xB991FE166FAF84FD(Any p0, Any p1, Any p2) { return invoke<Any>(0x022F1C80, p0, p1, p2); } // 0xB991FE166FAF84FD b1207
	static Any _0x9AC53CB6907B4428(Any p0, Any p1, Any p2) { return invoke<Any>(0x022F1CB0, p0, p1, p2); } // 0x9AC53CB6907B4428 b1207
	static Any _0x9D21B185ABC2DBC4(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x022F1CE0, p0, p1, p2, p3); } // 0x9D21B185ABC2DBC4 b1207
	static void _0x75CFAC49301E134F(Any p0, Any p1, Any p2) { invoke<Void>(0xDEADBEEF, p0, p1, p2); } // 0x75CFAC49301E134F b1207
	static Any _0x9D21B185ABC2DBC5(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xDEADBEEF, p0, p1, p2, p3); } // 0x9D21B185ABC2DBC5 b1207
	static void _0x75CFAC49301E134E(Any p0, Any p1, Any p2) { invoke<Void>(0x022F1E20, p0, p1, p2); } // 0x75CFAC49301E134E b1207
	static Any _0x46DB71883EE9D5AF(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x022F1EF0, p0, p1, p2, p3); } // 0x46DB71883EE9D5AF b1207
	static void _0x951847CEF3D829FF(Any p0, Any p1, Any p2) { invoke<Void>(0x022F1F20, p0, p1, p2); } // 0x951847CEF3D829FF b1207
	static Any _0x6862E4D93F64CF01(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x022F1FF0, p0, p1, p2, p3); } // 0x6862E4D93F64CF01 b1207
	static void _0x597F571DDEE3FFAC(Any p0) { invoke<Void>(0x022F2020, p0); } // 0x597F571DDEE3FFAC b1207
	static void INVENTORY_DISABLE_MISSION_INVENTORY_PICKUPS() { invoke<Void>(0x022F2030); } // 0xE1F389F03DC83673 b1311
	static void _INVENTORY_USE_MISSION_INVENTORY(BOOL enable, BOOL mirrorTransactions) { invoke<Void>(0x022F2040, enable, mirrorTransactions); } // 0xA6AA9F56BC6CFF58 b1207
	static void INVENTORY_COPY_MP_INVENTORY_TO_MISSION_INVENTORY(BOOL p0, BOOL p1, BOOL bCopySatchelItems, BOOL bCopyEmotes, BOOL bCopyHorse, BOOL p5) { invoke<Void>(0x022F2060, p0, p1, bCopySatchelItems, bCopyEmotes, bCopyHorse, p5); } // 0x644CCB76A76CFBD6 b1207
	static void _0x3112ADB9D5F3426B(Any p0, Any p1) { invoke<Void>(0x022F20B0, p0, p1); } // 0x3112ADB9D5F3426B b1207
	static void _0xE36D4A38D28D9CFB(Any p0) { invoke<Void>(0x022F20D0, p0); } // 0xE36D4A38D28D9CFB b1207
	static Any _0x7C7E4AB748EA3B07() { return invoke<Any>(0x022F20F0); } // 0x7C7E4AB748EA3B07 b1207
	static BOOL _INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS() { return invoke<BOOL>(0x022F2110); } // 0xFC7563F482781A3D b1207
	static void _0xC04F47D488EF9EBA(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x022F2180, p0, p1, p2, p3); } // 0xC04F47D488EF9EBA b1207
	static void _0x9E58207B194488AC(Any p0, Any p1) { invoke<Void>(0x022F21A0, p0, p1); } // 0x9E58207B194488AC b1207
	static void _0xFD41D1D4350F6413(Any p0) { invoke<Void>(0x022F2290, p0); } // 0xFD41D1D4350F6413 b1207
	static void _0x9B4E793B1CB6550A() { invoke<Void>(0x022F22D0); } // 0x9B4E793B1CB6550A b1207
	static void _0xF666EF30F4F0AC4E(Any p0) { invoke<Void>(0x022F22E0, p0); } // 0xF666EF30F4F0AC4E b1207
	static void _0xD5D72F1624F3BA7C(Any p0) { invoke<Void>(0x022F2320, p0); } // 0xD5D72F1624F3BA7C b1207
	static void _0xE3A46370F70F3607(Any p0, Any p1) { invoke<Void>(0x022F2380, p0, p1); } // 0xE3A46370F70F3607 b1207
	static void _0xE1F45A67A9F0DCBC(Any p0) { invoke<Void>(0x022F23E0, p0); } // 0xE1F45A67A9F0DCBC b1207
	static void _0x6968CE7AC32F6788(Any p0) { invoke<Void>(0x022F23F0, p0); } // 0x6968CE7AC32F6788 b1207
	static Any _0x97A3646645727F42(Any p0) { return invoke<Any>(0x022F2400, p0); } // 0x97A3646645727F42 b1232
	static Any _0xBB7F968675B34B0C(Any p0, Any p1, Any p2) { return invoke<Any>(0x022F2430, p0, p1, p2); } // 0xBB7F968675B34B0C b1311
}

namespace ITEMDATABASE
{
	static Any _ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(Any p0, Any p1, Any p2) { return invoke<Any>(0x0230B990, p0, p1, p2); } // 0x856FF92C57742AE5 b1207
	static Any _ITEMDATABASE_GET_FITS_SLOT_COUNT(Any p0) { return invoke<Any>(0x0230B9C0, p0); } // 0x2970D1D6BFCF9B46 b1207
	static Any _ITEMDATABASE_GET_FITS_SLOT_INFO(Any p0, Any p1, Any p2) { return invoke<Any>(0x0230BC30, p0, p1, p2); } // 0x77210C146CED5261 b1207
	static Any _ITEMDATABASE_GET_HAS_SLOT_COUNT(Any p0) { return invoke<Any>(0x0230BEE0, p0); } // 0x44915068579D7710 b1207
	static Any _ITEMDATABASE_GET_HAS_SLOT_INFO(Any p0, Any p1, Any p2) { return invoke<Any>(0x0230C150, p0, p1, p2); } // 0x8A9BD0DB7E8376CF b1207
	static Any ITEMDATABASE_FILLOUT_ITEM_BY_NAME(Any p0, Any p1) { return invoke<Any>(0x0230C180, p0, p1); } // 0x2A610BEE7D341CC4 b1207
	static BOOL ITEMDATABASE_FILLOUT_ITEM_INFO(Hash p0, Any* p1) { return invoke<BOOL>(0x0230C420, p0, p1); } // 0xFE90ABBCBFDC13B2 b1207
	static Any _ITEMDATABASE_FILLOUT_ACQUIRE_COST(Any p0, Any p1, Any p2) { return invoke<Any>(0x0230C450, p0, p1, p2); } // 0x74F7928816E4E181 b1207
	static Any _ITEMDATABASE_FILLOUT_SELL_PRICE(Any p0, Any p1, Any p2) { return invoke<Any>(0x0230C480, p0, p1, p2); } // 0x7A62A2EEDE1C3766 b1207
	static Any _ITEMDATABASE_FILLOUT_SATCHEL_DATA(Any p0, Any p1) { return invoke<Any>(0x0230C4B0, p0, p1); } // 0x4776EFD78F75C23F b1207
	static Any _ITEMDATABASE_FILLOUT_UI_DATA(Any p0, Any p1) { return invoke<Any>(0x0230C740, p0, p1); } // 0xB86F7CC2DC67AC60 b1207
	static Any _0x74C3B1093728D263(Any p0, Any p1) { return invoke<Any>(0x0230C770, p0, p1); } // 0x74C3B1093728D263 b1207
	static Any _ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(Any p0, Any p1) { return invoke<Any>(0x0230C7A0, p0, p1); } // 0x9379BE60DC55BBE6 b1207
	static Any ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(Any p0, Any p1) { return invoke<Any>(0x0230C7D0, p0, p1); } // 0xCF2D360D27FD1ABF b1207
	static Any _ITEMDATABASE_FILLOUT_TAG_DATA(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x0230C800, p0, p1, p2, p3); } // 0x5A11D6EEA17165B0 b1207
	static Any _ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(Any p0) { return invoke<Any>(0x0230C830, p0); } // 0x01FDDAD392D04144 b1207
	static Any _ITEMDATABASE_GET_ACQUIRE_COST(Any p0, Any p1, Any p2) { return invoke<Any>(0x0230CAB0, p0, p1, p2); } // 0x6772A83C67A25775 b1207
	static Any _0xDEE7B3C76ED664BE(Any p0, Any p1) { return invoke<Any>(0x0230CAE0, p0, p1); } // 0xDEE7B3C76ED664BE b1232
	static Any _0xAD73B614DF26CF8A(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x0230CDB0, p0, p1, p2, p3); } // 0xAD73B614DF26CF8A b1232
	static Any _0x12DF9C58201DD19A(Any p0) { return invoke<Any>(0x0230CDE0, p0); } // 0x12DF9C58201DD19A b1311
	static Any _0x1FC25AEB5F76B38D(Any p0, Any p1, Any p2) { return invoke<Any>(0x0230D060, p0, p1, p2); } // 0x1FC25AEB5F76B38D b1311
	static Any _0xF540239F9937033B(Any p0, Any p1) { return invoke<Any>(0x0230D090, p0, p1); } // 0xF540239F9937033B b1232
	static Any _0xF27F01BBF5ACD3F3(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x0230D350, p0, p1, p2, p3); } // 0xF27F01BBF5ACD3F3 b1232
	static int _ITEMDATABASE_CREATE_ITEM_COLLECTION(Any* p0, Any* p1, Any p2) { return invoke<int>(0x0230D380, p0, p1, p2); } // 0x71EFA7999AE79408 b1207
	static Any _0xD389A2549C4EFB30(Any p0) { return invoke<Any>(0x0230D3B0, p0); } // 0xD389A2549C4EFB30 b1207
	static Any _0x8750F69A720C2E41(int collectionId, Any p1, Hash* p2) { return invoke<Any>(0x0230D3E0, collectionId, p1, p2); } // 0x8750F69A720C2E41 b1207
	static BOOL _ITEMDATABASE_RELEASE_ITEM_COLLECTION(int collectionId) { return invoke<BOOL>(0x0230D430, collectionId); } // 0xCBB7B6EDFA933ADE b1207
	static Any _ITEMDATABASE_IS_INTRINSIC_ITEM(Any p0) { return invoke<Any>(0x0230D470, p0); } // 0x337F88E3A063995E b1207
	static Any _ITEMDATABASE_IS_OVERPOWERED_ITEM(Any p0) { return invoke<Any>(0xDEADBEEF, p0); } // 0x337F88E3A063995F b1207
	static Any _ITEMDATABASE_IS_KEY_VALID(Any p0, Any p1) { return invoke<Any>(0x0230D990, p0, p1); } // 0x6D5D51B188333FD1 b1207
	static Any _0x537A0555F62CA01A(Any p0, Any p1) { return invoke<Any>(0x0230DC40, p0, p1); } // 0x537A0555F62CA01A b1436
	static Any _ITEMDATABASE_GET_BUNDLE_ID(Any p0) { return invoke<Any>(0x0230DEF0, p0); } // 0x891A45960B6B768A b1207
	static Any _ITEMDATABASE_GET_BUNDLE_ITEM_COUNT(Any p0, Any p1) { return invoke<Any>(0x0230E1E0, p0, p1); } // 0x3332695B01015DF9 b1207
	static Any _ITEMDATABASE_GET_BUNDLE_ITEM_INFO(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x0230E210, p0, p1, p2, p3); } // 0x5D48A77E4B668B57 b1207
	static Any _0x4308812A6E9CA62E(Any p0, Any p1) { return invoke<Any>(0x0230E240, p0, p1); } // 0x4308812A6E9CA62E b1207
	static Any _0x799FCD53358ED5FA(Any p0, Any p1) { return invoke<Any>(0x0230E4E0, p0, p1); } // 0x799FCD53358ED5FA b1355
	static Any _0xC4146375D8A0B374(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x0230E510, p0, p1, p2, p3); } // 0xC4146375D8A0B374 b1355
	static Any _0xA97EE5E4589FCF5A(Any p0, Any p1) { return invoke<Any>(0x0230E540, p0, p1); } // 0xA97EE5E4589FCF5A b1207
	static Any _0x7A35A72A692BE9DB(Any p0) { return invoke<Any>(0x0230E570, p0); } // 0x7A35A72A692BE9DB b1207
	static Any _0x3A0B667ABFF87F6E(Any p0, Any p1, Any p2) { return invoke<Any>(0x0230E7E0, p0, p1, p2); } // 0x3A0B667ABFF87F6E b1207
	static Any _0x388088BFF3681189(Any p0, Any p1) { return invoke<Any>(0x0230E810, p0, p1); } // 0x388088BFF3681189 b1232
	static Any _0xB542632693D53408(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x0230EAD0, p0, p1, p2, p3); } // 0xB542632693D53408 b1232
	static Any _ITEMDATABASE_IS_SHOP_KEY_VALID(Any p0) { return invoke<Any>(0x0230EB00, p0); } // 0x00B9507D8E1D8716 b1207
	static Any _ITEMDATABASE_GET_SHOP_INVENTORIES_ITEMS_COUNT(Any p0) { return invoke<Any>(0x0230ED60, p0); } // 0xC568B1A0F17C7025 b1207
	static Any _ITEMDATABASE_GET_SHOP_INVENTORIES_ITEM_INFO(Any p0, Any p1, Any p2) { return invoke<Any>(0x0230EFD0, p0, p1, p2); } // 0x4A79B41B4EB91F4E b1207
	static Any _ITEMDATABASE_GET_SHOP_INVENTORIES_ITEM_INFO_BY_KEY(Any p0, Any p1, Any p2) { return invoke<Any>(0x0230F000, p0, p1, p2); } // 0xCFB06801F5099B25 b1207
	static Any _ITEMDATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_GROUP_INFO(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x0230F030, p0, p1, p2, p3); } // 0x76C752D788A76813 b1207
	static Any _ITEMDATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_INFO(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x0230F060, p0, p1, p2, p3, p4); } // 0xE0EA5C031AE5539F b1207
	static Any _0x17721003A66C72BF(Any p0, Any p1, Any p2) { return invoke<Any>(0x0230F090, p0, p1, p2); } // 0x17721003A66C72BF b1207
	static Any _ITEMDATABASE_IS_SHOP_LAYOUT_KEY_VALID(Any p0) { return invoke<Any>(0x0230F0C0, p0); } // 0x3AFE5182C45A84F6 b1207
	static Any _ITEMDATABASE_GET_SHOP_LAYOUT_INFO(Any p0, Any p1) { return invoke<Any>(0x0230F320, p0, p1); } // 0x66A6D76B6BB999B4 b1207
	static Any _ITEMDATABASE_GET_SHOP_LAYOUT_ROOT_MENU_INFO(Any p0, Any p1, Any p2) { return invoke<Any>(0x0230F5B0, p0, p1, p2); } // 0x86FCB565CCA0CFA7 b1207
	static Any _ITEMDATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(Any p0, Any p1, Any p2) { return invoke<Any>(0x0230F5E0, p0, p1, p2); } // 0xD66114469978B55B b1207
	static Any _ITEMDATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_INDEX(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x0230F610, p0, p1, p2, p3); } // 0xF04247092F193B75 b1207
	static Any _ITEMDATABASE_GET_SHOP_LAYOUT_MENU_PAGE_KEY(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x0230F640, p0, p1, p2, p3); } // 0x9A60570657A7B635 b1207
	static Any _0xDBEADA0DF5F9AB9F(Any p0, Any p1, Any p2) { return invoke<Any>(0x0230F670, p0, p1, p2); } // 0xDBEADA0DF5F9AB9F b1355
	static Any _ITEMDATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY(Any p0, Any p1, Any p2) { return invoke<Any>(0x0230F6A0, p0, p1, p2); } // 0xB347C100DF0C9B7F b1207
	static Any _ITEMDATABASE_GET_SHOP_LAYOUT_PAGE_ITEM_KEY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x0230F6D0, p0, p1, p2, p3, p4, p5); } // 0xF32BEF578B3DBAE8 b1207
	static Any ITEMDATABASE_IS_BUYABLE_AWARD_VALID(Any p0) { return invoke<Any>(0x0230F710, p0); } // 0x4CE753203FA42214 b1207
	static Any _ITEMDATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x0230F9A0, p0, p1, p2, p3); } // 0xB52E20F6767A09A2 b1207
	static Any _0xF8D09EF8CE61D7BF(Any p0, Any p1) { return invoke<Any>(0x0230F9D0, p0, p1); } // 0xF8D09EF8CE61D7BF b1207
	static Any _ITEMDATABASE_GET_ITEM_PRICE_MODIFIERS(Any p0, Any p1) { return invoke<Any>(0x0230FA00, p0, p1); } // 0x4EB37AAB79AB0C48 b1207
	static Any _ITEMDATABASE_FILLOUT_PRICE_MODIFIER_BY_KEY(Any p0, Any p1) { return invoke<Any>(0x0230FA30, p0, p1); } // 0x40C5D95818823C94 b1207
	static Any _ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(Any p0) { return invoke<Any>(0x0230FA60, p0); } // 0x5AAAF40E9B224F5E b1207
	static Any _ITEMDATABASE_GET_MODIFIED_PRICE(Any p0, Any p1) { return invoke<Any>(0x0230FA80, p0, p1); } // 0xCB92EC9C004732B4 b1207
	static Any _ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(Any p0) { return invoke<Any>(0x0230FAB0, p0); } // 0x1289D8315235856D b1207
	static Any _ITEMDATABASE_FILLOUT_MODIFIER(Any p0, Any p1, Any p2) { return invoke<Any>(0x0230FAD0, p0, p1, p2); } // 0x60614A0AB580A2B5 b1207
	static Any _0xEF254F1A4C08B7E6(Any p0) { return invoke<Any>(0x0230FB00, p0); } // 0xEF254F1A4C08B7E6 b1207
	static Any _0x3FAA928A79591761(Any p0) { return invoke<Any>(0x0230FD80, p0); } // 0x3FAA928A79591761 b1207
	static Any _0x48229CE0C7938237(Any p0) { return invoke<Any>(0x0230FFF0, p0); } // 0x48229CE0C7938237 b1207
	static Any _0x121D2005DD64496B(Any p0, Any p1, Any p2) { return invoke<Any>(0x02310260, p0, p1, p2); } // 0x121D2005DD64496B b1207
	static Any _0x8D029948CA29409B(Any p0, Any p1, Any p2) { return invoke<Any>(0x02310290, p0, p1, p2); } // 0x8D029948CA29409B b1207
	static Any _0xE81D0378A384E755(Any p0, Any p1) { return invoke<Any>(0x023102C0, p0, p1); } // 0xE81D0378A384E755 b1232
	static Any _0xD076DB9B96FAADF1(Any p0, Any p1) { return invoke<Any>(0x023102F0, p0, p1); } // 0xD076DB9B96FAADF1 b1311
	static BOOL _ITEMDATABASE_DOES_ITEM_HAVE_TAG(Hash item, Hash tag, Hash p2) { return invoke<BOOL>(0x02310320, item, tag, p2); } // 0xFF5FB5605AD56856 b1207
	static Any _0x99C6EA66DFE73757(Any p0, Any p1, Any p2) { return invoke<Any>(0x02310350, p0, p1, p2); } // 0x99C6EA66DFE73757 b1207
	static Any _ITEMDATABASE_GET_ITEM_TAG_TYPE(Any p0, Any p1) { return invoke<Any>(0x02310380, p0, p1); } // 0x6111B8F9413F413A b1207
	static Any _0x8870895BA5ED9385(Any p0, Any p1, Any p2) { return invoke<Any>(0x023103B0, p0, p1, p2); } // 0x8870895BA5ED9385 b1232
	static Any _ITEMDATABASE_LOCALIZATION_GET_NUM_LABEL_TYPES(Any p0) { return invoke<Any>(0x023103E0, p0); } // 0xCEC6A41E8910486A b1207
	static Any _ITEMDATABASE_LOCALIZATION_GET_NUM_VALUES(Any p0, Any p1) { return invoke<Any>(0x02310670, p0, p1); } // 0x49885D82A13EEAEA b1207
	static Any _ITEMDATABASE_LOCALIZATION_GET_TYPE(Any p0, Any p1) { return invoke<Any>(0x023106A0, p0, p1); } // 0xCABF5D41D0073D4A b1207
	static Any _ITEMDATABASE_LOCALIZATION_GET_VALUE(Any p0, Any p1, Any p2) { return invoke<Any>(0x02310930, p0, p1, p2); } // 0x9AE5610FDCED6EA7 b1207
	static int _ITEMDATABASE_GET_ITEM_PATHSET(int item, int p1) { return invoke<int>(0x02310960, item, p1); } // 0xF4452CE83118C738 b1207
	static Any _0xAA29A5F13B2C20B2(Any p0, Any p1) { return invoke<Any>(0x02310990, p0, p1); } // 0xAA29A5F13B2C20B2 b1232
}

namespace ITEMSET
{
	static ItemSet CREATE_ITEMSET(BOOL p0) { return invoke<ItemSet>(0x02312CB0, p0); } // 0xA1AF16083320065A 0x0A113B2C b1207
	static void DESTROY_ITEMSET(ItemSet itemset) { invoke<Void>(0x02312E40, itemset); } // 0x712BC69F10549B92 0x83CE1A4C b1207
	static BOOL IS_ITEMSET_VALID(ItemSet itemset) { return invoke<BOOL>(0x02312E70, itemset); } // 0xD30765D153EF5C76 0xD201FC29 b1207
	static BOOL ADD_TO_ITEMSET(Entity entity, ItemSet itemset) { return invoke<BOOL>(0x02312F10, entity, itemset); } // 0xABE74510883C7950 0x6B0FE61B b1207
	static void REMOVE_FROM_ITEMSET(Entity entity, ItemSet itemset) { invoke<Void>(0x023130A0, entity, itemset); } // 0xC5BAA432B429DC24 0xA9565228 b1207
	static Any GET_ITEMSET_SIZE(ItemSet itemset) { return invoke<Any>(0x02313230, itemset); } // 0x55F2E375AC6018A9 0x2B31F41A b1207
	static Any GET_INDEXED_ITEM_IN_ITEMSET(int index, ItemSet itemset) { return invoke<Any>(0x023133B0, index, itemset); } // 0x275A2E2C0FAB7612 0x3F712874 b1207
	static Any GET_INDEXED_SCENARIO_POINT_INDEX_IN_ITEMSET(int index, ItemSet itemset) { return invoke<Any>(0x02313510, index, itemset); } // 0x9FC3CDB5CE815901 b1207
	static BOOL IS_IN_ITEMSET(Entity entity, ItemSet itemset) { return invoke<BOOL>(0x023135E0, entity, itemset); } // 0xD1503C2EE2FE688C 0x0D4B9730 b1207
	static void CLEAN_ITEMSET(ItemSet itemset) { invoke<Void>(0x02313730, itemset); } // 0x85F3A86CA9021FB0 0x919A4858 b1207
	static void _CLEAR_ITEMSET(ItemSet itemset) { invoke<Void>(0x023138A0, itemset); } // 0x20A4BF0E09BEE146 b1207
}

namespace LAW
{
	static void _REPORT_CRIME(Player player, Hash crimeType, int bounty, Entity entity, BOOL isKnownSuspect) { invoke<Void>(0x0232A220, player, crimeType, bounty, entity, isKnownSuspect); } // 0xF60386770878A98F b1207
	static void _SUPPRESS_CRIME(Player player, Hash crimeType, int p2, int p3, int p4) { invoke<Void>(0x0232A240, player, crimeType, p2, p3, p4); } // 0x785177E4D57D7389 b1207
	static Any _0xC08E804C91F47C80(Player player, Hash crimeType) { return invoke<Any>(0x0232A360, player, crimeType); } // 0xC08E804C91F47C80 b1207
	static Any _0xFFEBE5AA96BC2E4E(Ped ped, Hash crimeType, BOOL p2) { return invoke<Any>(0x0232A4C0, ped, crimeType, p2); } // 0xFFEBE5AA96BC2E4E b1207
	static void _0x15ABD5004CAD2D99(int p0) { invoke<Void>(0x0232A4F0, p0); } // 0x15ABD5004CAD2D99 b1207
	static void _0xF611DE44AEB36A1D(Hash crimeType, BOOL p1) { invoke<Void>(0x0232A500, crimeType, p1); } // 0xF611DE44AEB36A1D b1207
	static BOOL _0x3D2674828A4E6B3C() { return invoke<BOOL>(0x0232A590); } // 0x3D2674828A4E6B3C b1207
	static void _0xC5EB2755FA25F1E9(BOOL p0) { invoke<Void>(0x0232A5A0, p0); } // 0xC5EB2755FA25F1E9 b1207
	static int _GET_BOUNTY_FOR_PLAYER(Player player) { return invoke<int>(0x0232A5B0, player); } // 0x54310AAB97B92816 b1207
	static void _ADD_BOUNTY_INCREASE_BY_ITEM_VALUE_FOR_PLAYER(Player player, int itemValueAmount) { invoke<Void>(0x0232A690, player, itemValueAmount); } // 0x0E3BDEED21BEB945 b1207
	static void _SET_BOUNTY_FOR_PLAYER(Player player, int amount) { invoke<Void>(0x0232A7A0, player, amount); } // 0x093A9D1F72DF0D19 b1207
	static void _CLEAR_BOUNTY_FOR_PLAYER(Player player) { invoke<Void>(0x0232A8B0, player); } // 0xC76F252371150D9A b1207
	static int _GET_WANTED_INTENSITY_FOR_PLAYER(Player player) { return invoke<int>(0x0232A9C0, player); } // 0xDD5FD601481F648B b1207
	static void _SET_WANTED_INTENSITY_FOR_PLAYER(Player player, int intensity) { invoke<Void>(0x0232AAC0, player, intensity); } // 0xA80FF73F772ACF6A b1207
	static void _CLEAR_WANTED_INTENSITY_FOR_PLAYER(Player player) { invoke<Void>(0x0232AC00, player); } // 0x062B4A4A3396351D b1207
	static void _0x331D349E0380B097(Any p0) { invoke<Void>(0x0232AD00, p0); } // 0x331D349E0380B097 b1207
	static void _0x292AD61A33A7A485() { invoke<Void>(0x0232AD10); } // 0x292AD61A33A7A485 b1207
	static void _0x07E8B8B20570271C(Player player) { invoke<Void>(0x0232AD20, player); } // 0x07E8B8B20570271C b1207
	static void _0x22741652985C84D0(Player player, Hash lawRegionHash) { invoke<Void>(0x0232ADF0, player, lawRegionHash); } // 0x22741652985C84D0 b1207
	static void _REPORT_PLAYER_LAW_DISPATCH_RESPONSE_OVERRIDE(Player player, Hash dispatchResponseHash) { invoke<Void>(0x0232AE30, player, dispatchResponseHash); } // 0x9C4352134B2835FB b1207
	static BOOL _0x9EF07CFBB19A9733() { return invoke<BOOL>(0x0232AE70); } // 0x9EF07CFBB19A9733 b1207
	static void _SET_LAW_DISABLED(BOOL toggle) { invoke<Void>(0x0232AF60, toggle); } // 0x8DE82BC774F3B862 b1207
	static void _FORCE_LAW_ON_LOCAL_PLAYER_IMMEDIATELY() { invoke<Void>(0x0232B070); } // 0x956510F8C36B5C64 b1207
	static void _SET_LAW_REGION(Player player, Hash lawRegionHash, Hash stateHash) { invoke<Void>(0x0232B080, player, lawRegionHash, stateHash); } // 0x4752F68EB7F2D280 b1207
	static void _0x5E6F375CA101C108(Player player, BOOL p1) { invoke<Void>(0x0232B130, player, p1); } // 0x5E6F375CA101C108 b1207
	static void _SET_LAW_RBS_VOLUME(Player player, Hash p1) { invoke<Void>(0x0232B1B0, player, p1); } // 0x9BBDCB8DF789EBC1 b1207
	static BOOL IS_LAW_INCIDENT_ACTIVE(Player player) { return invoke<BOOL>(0x0232B260, player); } // 0xAD401C63158ACBAA b1207
	static Hash _0x148E7AC8141C9E64(Player player) { return invoke<Hash>(0x0232B320, player); } // 0x148E7AC8141C9E64 b1207
	static void _0xEDFC6C1FD1C964F5(Player player, Hash crimeType, int bounty, float p3, float p4, Any p5, float p6, float p7, Any p8) { invoke<Void>(0x0232B340, player, crimeType, bounty, p3, p4, p5, p6, p7, p8); } // 0xEDFC6C1FD1C964F5 b1207
	static BOOL _LAW_WITNESS_RESPONSE_TASK(Ped pedGroup1, Ped ped, Ped pedGroup2, float x, float y, float z, Hash crimeType) { return invoke<BOOL>(0x0232B490, pedGroup1, ped, pedGroup2, x, y, z, crimeType); } // 0xF0B67BAD53C35BD9 b1207
	static Any _0x018F30D762E62DF8(Ped ped, Any* p1) { return invoke<Any>(0x0232B5F0, ped, p1); } // 0x018F30D762E62DF8 b1207
	static Any _0x318F0F9A4426CFA2(Ped ped, Any* p1) { return invoke<Any>(0x0232B6C0, ped, p1); } // 0x318F0F9A4426CFA2 b1207
	static Any _0x95878B13E272EF1F(Entity entity, Ped ped, BOOL p2, float x, float y, float z, Hash crimeType) { return invoke<Any>(0x0232B790, entity, ped, p2, x, y, z, crimeType); } // 0x95878B13E272EF1F b1207
	static void _ADD_WITNESS_RESPONSE(Player player, Hash crimeType, Ped pedGroup) { invoke<Void>(0x0232B8F0, player, crimeType, pedGroup); } // 0x10827B5A0AAC56A7 b1207
	static void _0xD7494DED50C6EF52(Player player, Hash crimeType, int p2) { invoke<Void>(0x0232B910, player, crimeType, p2); } // 0xD7494DED50C6EF52 b1207
	static BOOL ARE_WITNESSES_ACTIVE(Player player) { return invoke<BOOL>(0x0232B930, player); } // 0x69E181772886F48B b1207
	static BOOL _ARE_WITNESSES_PENDING(Player player) { return invoke<BOOL>(0x0232B9A0, player); } // 0x0BB6DE7D23C60626 b1207
	static BOOL _ARE_INVESTIGATORS_ACTIVE(Player player, BOOL areInvestigatorsActive, Any p2) { return invoke<BOOL>(0x0232BA70, player, areInvestigatorsActive, p2); } // 0xF0FBFB9AB15F7734 b1207
	static void _0x522F74636DF10201(Player player, ItemSet itemSet) { invoke<Void>(0x0232BB10, player, itemSet); } // 0x522F74636DF10201 b1207
	static void _0xDA1A9ADC4E3D4B16(ItemSet itemSet, Any p1, Any p2) { invoke<Void>(0x0232BB20, itemSet, p1, p2); } // 0xDA1A9ADC4E3D4B16 b1207
	static void _ENABLE_DISPATCH_LAW(BOOL toggle) { invoke<Void>(0x0232BB40, toggle); } // 0xC805EB785824F712 b1207
	static void _ENABLE_DISPATCH_LAW_2(BOOL toggle) { invoke<Void>(0x0232BB50, toggle); } // 0x710448D44A64C213 b1207
	static BOOL _0xECE3C34B270428D5() { return invoke<BOOL>(0x0232BB60); } // 0xECE3C34B270428D5 b1207
	static BOOL _ARE_LAW_PEDS_ENABLED_FOR_TRAIN() { return invoke<BOOL>(0x0232BB80); } // 0xA22C46F16359471C b1207
	static void _0x82F11E1296996574(int p0) { invoke<Void>(0x0232BBA0, p0); } // 0x82F11E1296996574 b1207
	static void _0x3852237A3D9DF145(int p0) { invoke<Void>(0x0232BBB0, p0); } // 0x3852237A3D9DF145 b1207
	static BOOL _0x0EAF918F751F27BA(Ped ped) { return invoke<BOOL>(0x0232BBC0, ped); } // 0x0EAF918F751F27BA b1207
	static BOOL _0xC0DF161950FB101E(Ped ped) { return invoke<BOOL>(0x0232BCB0, ped); } // 0xC0DF161950FB101E b1207
	static Any _0xE4D6E45F491A66CB(Player player, int p1) { return invoke<Any>(0x0232BDA0, player, p1); } // 0xE4D6E45F491A66CB b1207
	static int _0xE9EB79CBF9C0F58A(Player player) { return invoke<int>(0x0232BEA0, player); } // 0xE9EB79CBF9C0F58A b1207
	static void _0x21213B833EF4DAE7(Player player, Ped ped, Vector3* outCoords) { invoke<Void>(0x0232BF60, player, ped, outCoords); } // 0x21213B833EF4DAE7 b1207
	static void _0x61B98367D93F012F(Player player) { invoke<Void>(0x0232BF80, player); } // 0x61B98367D93F012F b1207
	static void _0x6ABC50979655BEE7(Player player, Hash* crimeType, Any p2) { invoke<Void>(0x0232C020, player, crimeType, p2); } // 0x6ABC50979655BEE7 b1207
	static void _0x390710D2DAFA6BFF(Player player, BOOL p1) { invoke<Void>(0x0232C120, player, p1); } // 0x390710D2DAFA6BFF b1207
	static int _GET_CRIME_BOUNTY_AMOUNT_BY_TYPE(Hash crimeType) { return invoke<int>(0x0232C220, crimeType); } // 0x35E5E21F9159849C b1207
	static int _0xDAEFDFDB2AEECE37(Hash crimeType, Any p1) { return invoke<int>(0x0232C2F0, crimeType, p1); } // 0xDAEFDFDB2AEECE37 b1207
	static Hash _GET_HUD_PLAYER_CRIME_TYPE(Player player) { return invoke<Hash>(0x0232C490, player); } // 0x259CE340A8738814 b1207
	static int _0xE083BEDA81709891(Player player) { return invoke<int>(0x0232C510, player); } // 0xE083BEDA81709891 b1207
	static BOOL _0x89E005B1662F6E48(Player player, int p1, int p2) { return invoke<BOOL>(0x0232C590, player, p1, p2); } // 0x89E005B1662F6E48 b1207
	static BOOL _0x3738B784DDD35CC6(Player player, int p1, int p2) { return invoke<BOOL>(0x0232C670, player, p1, p2); } // 0x3738B784DDD35CC6 b1207
	static int _0x0BDFEBCF40A5F7E3(Hash crimeType) { return invoke<int>(0x0232C730, crimeType); } // 0x0BDFEBCF40A5F7E3 b1207
	static void _SET_CUSTOM_LAW_DISPATCH_RESPONSE(Hash dispatchResponseHash) { invoke<Void>(0x0232C7C0, dispatchResponseHash); } // 0x009CF9A29972C298 b1207
	static Any _CREATE_LAW_DISPATCH_RESPONSE_FOR_COORDS(float x, float y, float z, Hash dispatchResponseHash) { return invoke<Any>(0x0232C810, x, y, z, dispatchResponseHash); } // 0x75CBF20BA47E4F89 b1207
	static void _SET_BOUNTY_HUNTER_PURSUIT_CLEARED() { invoke<Void>(0x0232C880); } // 0x55F37F5F3F2475E1 b1207
	static void _0xBD944A3D36E992DE() { invoke<Void>(0x0232C8A0); } // 0xBD944A3D36E992DE b1207
	static void _0x987BE590FB9D41E5(BOOL p0) { invoke<Void>(0x0232C8C0, p0); } // 0x987BE590FB9D41E5 b1207
	static void _0xDCF12B89624AAC96(BOOL p0) { invoke<Void>(0x0232C8F0, p0); } // 0xDCF12B89624AAC96 b1207
	static void _0xDDCE8E960D1DE240(BOOL p0) { invoke<Void>(0x0232C930, p0); } // 0xDDCE8E960D1DE240 b1207
	static void _0xDEA083C16BB91345() { invoke<Void>(0x0232C970); } // 0xDEA083C16BB91345 b1207
	static void _0x9C8A2BF37E966464(Player player, ItemSet itemSet) { invoke<Void>(0x0232C980, player, itemSet); } // 0x9C8A2BF37E966464 b1207
	static BOOL _0x9D5C9A5A3321B128(Player player) { return invoke<BOOL>(0x0232C990, player); } // 0x9D5C9A5A3321B128 b1207
	static BOOL _0x0F230DE0DDBE3649(Player player) { return invoke<BOOL>(0x0232CA40, player); } // 0x0F230DE0DDBE3649 b1207
	static BOOL _0x9945A3E2528A02E8(Player player) { return invoke<BOOL>(0x0232CB90, player); } // 0x9945A3E2528A02E8 b1207
	static float _0x717DA2281DF90855(Player player) { return invoke<float>(0x0232CC70, player); } // 0x717DA2281DF90855 b1207
	static void _0x9B4C564BFA7CFF37(float p0) { invoke<Void>(0x0232CD20, p0); } // 0x9B4C564BFA7CFF37 b1207
	static void _SET_ALLOW_DISABLED_LAW_RESPONSES(BOOL toggle) { invoke<Void>(0x0232CD40, toggle); } // 0x4B52BF96E225D230 b1207
	static void _0x2728C77FBC4B9796(Player player) { invoke<Void>(0x0232CD70, player); } // 0x2728C77FBC4B9796 b1207
	static BOOL _0x856CE8FDE2416602(Ped ped) { return invoke<BOOL>(0x0232CE70, ped); } // 0x856CE8FDE2416602 b1207
	static BOOL _0x7351DA734F989F4E(Entity entity) { return invoke<BOOL>(0x0232CF60, entity); } // 0x7351DA734F989F4E b1207
	static int _GET_BOUNTY_HUNTER_GLOBAL_COOLDOWN(Hash p0) { return invoke<int>(0x0232D050, p0); } // 0x76CF93D4B416B288 b1207
	static void _SET_BOUNTY_HUNTER_GLOBAL_COOLDOWN(Hash p0, int p1) { invoke<Void>(0x0232D100, p0, p1); } // 0xF19706B1F8FFA88F b1207
	static void _0x2001687F9562FD9D(Any p0) { invoke<Void>(0x0232D170, p0); } // 0x2001687F9562FD9D b1207
	static void _PAUSE_BOUNTY_HUNTER_COOLDOWN(Hash p0, BOOL p1, Any p2) { invoke<Void>(0x0232D180, p0, p1, p2); } // 0xC61EDEBF16CD9668 b1207
	static void _0xE9AC8466ABE484BB(BOOL p0, Any p1) { invoke<Void>(0x0232D1A0, p0, p1); } // 0xE9AC8466ABE484BB b1207
	static BOOL _0x40851BCC33ACD9AB(Ped ped) { return invoke<BOOL>(0x0232D1C0, ped); } // 0x40851BCC33ACD9AB b1207
	static BOOL _0xF46108C50A22B029() { return invoke<BOOL>(0x0232D2E0); } // 0xF46108C50A22B029 b1207
	static void _0x7803436E68C32B26() { invoke<Void>(0x0232D370); } // 0x7803436E68C32B26 b1207
	static void _0xC310239ACCCF5579() { invoke<Void>(0x0232D380); } // 0xC310239ACCCF5579 b1207
	static void _0x29CD4896ECB66C12() { invoke<Void>(0x0232D390); } // 0x29CD4896ECB66C12 b1207
	static void _0xE94B5E938619712E() { invoke<Void>(0x0232D3A0); } // 0xE94B5E938619712E b1207
	static int _0x7FC667F6DDFBCDCC(Player player) { return invoke<int>(0x0232D3B0, player); } // 0x7FC667F6DDFBCDCC b1207
	static void _0x9C5BD8C562565CE6(Hash* crimeType) { invoke<Void>(0x0232D3C0, crimeType); } // 0x9C5BD8C562565CE6 b1207
	static void _0xCBFB4951F2E3934C(Player player, Any p1) { invoke<Void>(0x0232D4B0, player, p1); } // 0xCBFB4951F2E3934C b1207
	static void _SET_PED_LAW_BEHAVIOUR(Ped ped, int behaviour) { invoke<Void>(0x0232D650, ped, behaviour); } // 0x819ADD5EF1742F47 b1207
	static void _0x00DB0BC05E3FAA4E(Ped ped, int bitset) { invoke<Void>(0x0232D660, ped, bitset); } // 0x00DB0BC05E3FAA4E b1207
	static void _0x0C392DB374655176(float x, float y, float z, float p3, ItemSet itemSet) { invoke<Void>(0x0232D670, x, y, z, p3, itemSet); } // 0x0C392DB374655176 b1207
	static Any _0xC687A23E166DCF68(Any* p0) { return invoke<Any>(0x0232D690, p0); } // 0xC687A23E166DCF68 b1207
	static void _SET_DISPATCH_MULTIPLIER_OVERRIDE(float multiplier) { invoke<Void>(0x0232D730, multiplier); } // 0x002BABE0B7D53136 b1207
	static BOOL _0x26934083D3F2579C(Player player) { return invoke<BOOL>(0x0232D740, player); } // 0x26934083D3F2579C b1207
	static BOOL GET_PLAYER_REGISTERED_CRIME(Player player, int p1, Hash* crimeType) { return invoke<BOOL>(0x0232D800, player, p1, crimeType); } // 0x532C5FDDB986EE5C b1207
	static BOOL _0xB527099D1E1EED49(Player player, int p1, Hash* crimeType) { return invoke<BOOL>(0x0232D910, player, p1, crimeType); } // 0xB527099D1E1EED49 b1207
	static void _0xBCC6DC59E32A2BDC(Player player) { invoke<Void>(0x0232DA40, player); } // 0xBCC6DC59E32A2BDC b1207
	static void _0xE0FA74AA3CCE650B(Player player, Hash lawRegionHash) { invoke<Void>(0x0232DB00, player, lawRegionHash); } // 0xE0FA74AA3CCE650B b1207
	static void _0x73BAD7B2F2DB50DE(Player player, Hash lawRegionHash) { invoke<Void>(0x0232DCA0, player, lawRegionHash); } // 0x73BAD7B2F2DB50DE b1207
	static void _0xD6C0A8C7C0B2F82C(Player player, BOOL p1) { invoke<Void>(0x0232DE40, player, p1); } // 0xD6C0A8C7C0B2F82C b1207
	static void _0xFEC85339AACA2A35(Player player, float p1) { invoke<Void>(0x0232DF10, player, p1); } // 0xFEC85339AACA2A35 b1207
	static void _0x7EF2A2FE38D74456(int p0, BOOL p1) { invoke<Void>(0x0232E030, p0, p1); } // 0x7EF2A2FE38D74456 b1207
	static BOOL _0xC7DC5A0A7DF608CB(int p0) { return invoke<BOOL>(0x0232E070, p0); } // 0xC7DC5A0A7DF608CB b1207
	static void _0xDE5FAA741A781F73(Player player, BOOL p1) { invoke<Void>(0x0232E0A0, player, p1); } // 0xDE5FAA741A781F73 b1207
	static void _0x362086B911657B1A(Player player, BOOL p1) { invoke<Void>(0x0232E0C0, player, p1); } // 0x362086B911657B1A b1207
	static void _CREATE_GUARD_ZONE(const char* name) { invoke<Void>(0x0232E1C0, name); } // 0x8F9DE75680275C9F b1207
	static void _REMOVE_GUARD_ZONE(const char* name) { invoke<Void>(0x0232E250, name); } // 0x67EBDD958835956C b1207
	static void _0x9772395CC73E8D1F(Ped ped, const char* name) { invoke<Void>(0x0232E2A0, ped, name); } // 0x9772395CC73E8D1F b1207
	static void _DISABLE_GUARD_ZONE(const char* name) { invoke<Void>(0x0232E3B0, name); } // 0x26D558692B25DD95 b1207
	static BOOL _0x0DBACA9C38C9A686(const char* name) { return invoke<BOOL>(0x0232E410, name); } // 0x0DBACA9C38C9A686 b1207
	static BOOL _IS_GUARD_PED_INVESTIGATING(Ped ped) { return invoke<BOOL>(0x0232E480, ped); } // 0xD743C4293F47AFAD b1207
	static BOOL _CREATE_GUARD_ZONE_FOR_ENTITY(const char* guardZoneName, Entity entity, float x, float y, float z) { return invoke<BOOL>(0x0232E6A0, guardZoneName, entity, x, y, z); } // 0x0D4B77E862475ED3 b1311
	static void _SET_GUARD_ZONE_VOLUME_REGISTRATION_START(const char* name, Volume volume) { invoke<Void>(0x0232E780, name, volume); } // 0x8C598A930F471938 b1207
	static void _SET_GUARD_ZONE_VOLUME_RESTRICTED(const char* name, Volume volume) { invoke<Void>(0x0232E880, name, volume); } // 0x35815F372D43E1E5 b1207
	static void _SET_GUARD_ZONE_VOLUME_THREAT(const char* name, Volume volume) { invoke<Void>(0x0232EA20, name, volume); } // 0xA1B0E6301E2E02A6 b1207
	static void _SET_GUARD_ZONE_VOLUME_WARNING(const char* name, Volume volume) { invoke<Void>(0x0232EBC0, name, volume); } // 0xAD3E07C37A7C1ADC b1207
	static void _SET_GUARD_ZONE_VOLUME_REGISTRATION_END(const char* name, Volume volume) { invoke<Void>(0x0232ED60, name, volume); } // 0xA8A74AA79FB67159 b1207
	static void _SET_GUARD_ZONE_POSITION(const char* name, float x, float y, float z) { invoke<Void>(0x0232EF00, name, x, y, z); } // 0x7E7BF59F89FC6C6D b1207
	static void _SET_GUARD_ZONE_POSITION_2(const char* name, float x, float y, float z) { invoke<Void>(0x0232F030, name, x, y, z); } // 0x2F9005E2EA4E5EE4 b1207
}

namespace LOCALIZATION
{
	static int _LOCALIZATION_GET_SYSTEM_LANGUAGE() { return invoke<int>(0x0232FB30); } // 0x3C1A05F86AE6ACB5 b1207
	static int GET_CURRENT_LANGUAGE() { return invoke<int>(0x0232FBA0); } // 0xDB917DA5C6835FCC 0x761BE00B b1207
	static BOOL _0x45D50415E4D885FF() { return invoke<BOOL>(0x0232FC30); } // 0x45D50415E4D885FF b1207
	static int _LOCALIZATION_GET_SYSTEM_DATE_FORMAT() { return invoke<int>(0x0232FCC0); } // 0x76E30B799EBEEA0F b1207
}

namespace MAP
{
	static Blip GET_BLIP_FROM_ENTITY(Entity entity) { return invoke<Blip>(0x0233E070, entity); } // 0x6D2C41A8BD6D6FD0 0x005A2A47 b1207
	static Blip GET_MAIN_PLAYER_BLIP_ID() { return invoke<Blip>(0x0233E1C0); } // 0x5CD2889B2B381D45 0xAB93F020 b1207
	static Blip _BLIP_ADD_FOR_STYLE(Hash styleHash) { return invoke<Blip>(0x0233E210, styleHash); } // 0x3E593DF9C2962EC6 b1207
	static Blip BLIP_ADD_FOR_COORDS(Hash blipHash, float x, float y, float z) { return invoke<Blip>(0x0233E230, blipHash, x, y, z); } // 0x554D9D53F696D002 b1207
	static Blip BLIP_ADD_FOR_ENTITY(Hash blipHash, Entity entity) { return invoke<Blip>(0x0233E3F0, blipHash, entity); } // 0x23F74C2FDA6E7C61 b1207
	static Blip BLIP_ADD_FOR_PICKUP_PLACEMENT(Hash blipHash, Any p1) { return invoke<Blip>(0x0233E420, blipHash, p1); } // 0xA486008892065FB9 b1207
	static Blip BLIP_ADD_FOR_RADIUS(Hash blipHash, float x, float y, float z, float radius) { return invoke<Blip>(0x0233E450, blipHash, x, y, z, radius); } // 0x45F13B7E0A15C880 b1207
	static Blip _BLIP_ADD_FOR_AREA(Hash blipHash, float x, float y, float z, float scaleX, float scaleY, float scaleZ, int p7) { return invoke<Blip>(0x0233E480, blipHash, x, y, z, scaleX, scaleY, scaleZ, p7); } // 0xEC174ADBCB611ECC b1207
	static Blip _BLIP_ADD_FOR_VOLUME(Hash blipHash, Volume volume) { return invoke<Blip>(0x0233E4B0, blipHash, volume); } // 0xA6EF0C54A3443E70 b1207
	static BOOL _BLIP_SET_STYLE(Blip blip, Hash styleHash) { return invoke<BOOL>(0x0233E4E0, blip, styleHash); } // 0xEDD964B7984AC291 b1207
	static Any _0xBD62D98799A3DAF0(Blip blip, Hash modifierHash) { return invoke<Any>(0x0233E580, blip, modifierHash); } // 0xBD62D98799A3DAF0 b1207
	static BOOL BLIP_ADD_MODIFIER(Blip blip, Hash modifierHash) { return invoke<BOOL>(0x0233E640, blip, modifierHash); } // 0x662D364ABF16DE2F b1207
	static BOOL BLIP_REMOVE_MODIFIER(Blip blip, Hash modifierHash) { return invoke<BOOL>(0x0233E6E0, blip, modifierHash); } // 0xB059D7BD3D78C16F b1207
	static void _0x250C75EB1728CC0D(Blip blip) { invoke<Void>(0x0233E760, blip); } // 0x250C75EB1728CC0D b1207
	static void SET_BLIP_FLASH_TIMER(Blip blip, int p1, int p2) { invoke<Void>(0x0233E770, blip, p1, p2); } // 0x02FF4CF43B7209D1 0x8D5DF611 b1207
	static BOOL SET_BLIP_FLASHES(Blip blip, int* p1, Hash* p2) { return invoke<BOOL>(0x0233E7D0, blip, p1, p2); } // 0x0DF2B55F717DDB10 0xC0047F15 b1207
	static void TRIGGER_SONAR_BLIP(Hash typeHash, float x, float y, float z) { invoke<Void>(0x0233E850, typeHash, x, y, z); } // 0x72DD432F3CDFC0EE 0xBF25E7B2 b1207
	static void _TRIGGER_SONAR_BLIP_ON_ENTITY(Hash typeHash, Entity entity) { invoke<Void>(0x0233E940, typeHash, entity); } // 0x0C7A2289A5C4D7C9 b1207
	static void ALLOW_SONAR_BLIPS(BOOL toggle) { invoke<Void>(0x0233EAA0, toggle); } // 0x6E6E64788C07D2E0 0xE7E1E32B b1207
	static void SET_BLIP_COORDS(Blip blip, float posX, float posY, float posZ) { invoke<Void>(0x0233EAC0, blip, posX, posY, posZ); } // 0x4FF674F5E23D49CE 0x680A34D4 b1207
	static Vector3 GET_BLIP_COORDS(Blip blip) { return invoke<Vector3>(0x0233EB30, blip); } // 0x201C319797BDA603 0xEF6FF47B b1207
	static void SET_BLIP_SPRITE(Blip blip, Hash hash, BOOL p2) { invoke<Void>(0x0233EBE0, blip, hash, p2); } // 0x74F74D3207ED525C 0x8DBBB0B9 b1207
	static Any _0x01B928CA2E198B01(Any p0) { return invoke<Any>(0x0233EC00, p0); } // 0x01B928CA2E198B01 b1207
	static void SET_BLIP_NAME_FROM_TEXT_FILE(Blip blip, const char* textLabel) { invoke<Void>(0x0233EC70, blip, textLabel); } // 0x0A062D6D7C0B2C2C 0xAC8A5461 b1207
	static void _SET_BLIP_NAME_FROM_PLAYER_STRING(Blip blip, const char* playerString) { invoke<Void>(0x0233ED20, blip, playerString); } // 0x9CB1A1623062F402 b1207
	static void SET_BLIP_NAME_TO_PLAYER_NAME(Blip blip, Player player) { invoke<Void>(0x0233EEF0, blip, player); } // 0x093DD5A31BC2B459 0x03A0B8F9 b1207
	static void SET_BLIP_ROTATION(Blip blip, int rotation) { invoke<Void>(0x0233EF00, blip, rotation); } // 0x6049966A94FBE706 0x6B8F44FE b1207
	static void SET_BLIP_SCALE(Blip blip, float scale) { invoke<Void>(0x0233EF60, blip, scale); } // 0xD38744167B2FA257 0x1E6EC434 b1207
	static void REMOVE_BLIP(Blip* blip) { invoke<Void>(0x0233EFD0, blip); } // 0xF2C3C9DA47AAA54A 0xD8C3C1CD b1207
	static BOOL DOES_BLIP_EXIST(Blip blip) { return invoke<BOOL>(0x0233F0F0, blip); } // 0xCD82FA174080B3B1 0xAE92DD96 b1207
	static BOOL _DOES_ENTITY_HAVE_BLIP(Entity entity) { return invoke<BOOL>(0x0233F150, entity); } // 0x9FA00E2FC134A9D0 b1207
	static void SET_RADAR_ZOOM(int zoomLevel) { invoke<Void>(0x0233F280, zoomLevel); } // 0xCAF6489DA2C8DD9E 0x2A50D1A6 b1207
	static void _0xDEEDE7C41742E011(Any p0) { invoke<Void>(0x0233F290, p0); } // 0xDEEDE7C41742E011 b1207
	static BOOL _IS_BLIP_ATTACHED_TO_ANY_ENTITY(Blip blip) { return invoke<BOOL>(0x0233F2A0, blip); } // 0xE9F676788F8D5E1E b1207
	static BOOL IS_BLIP_ON_MINIMAP(Blip blip) { return invoke<BOOL>(0x0233F320, blip); } // 0x46534526B9CD2D17 0x258CBA3A b1207
	static Any FORCE_SONAR_BLIPS_THIS_FRAME() { return invoke<Any>(0x0233F350); } // 0xEE1C7BA69BB74B08 0x3F4AFB13 b1207
	static void SET_GPS_FLAGS(int p0, float p1) { invoke<Void>(0x0233F360, p0, p1); } // 0x5DE61C90DDECFA2D 0x60539BAB b1207
	static void CLEAR_GPS_FLAGS() { invoke<Void>(0x0233F3B0); } // 0x4D3771237C79FF41 0x056AFCE6 b1207
	static void SET_GPS_CUSTOM_ROUTE_RENDER(BOOL p0, int p1, int p2) { invoke<Void>(0x0233F3F0, p0, p1, p2); } // 0xF6CEF599FC470B33 0xDA0AF00E b1207
	static void CLEAR_GPS_CUSTOM_ROUTE() { invoke<Void>(0x0233F410); } // 0x1EAA5674B4D181C5 0xCF2E3E24 b1207
	static void START_GPS_MULTI_ROUTE(Hash colorNameHash, BOOL p1, BOOL p2) { invoke<Void>(0x0233F440, colorNameHash, p1, p2); } // 0x3D3D15AF7BCAAF83 0xC3DCBEDB b1207
	static void ADD_POINT_TO_GPS_MULTI_ROUTE(float x, float y, float z, BOOL p3) { invoke<Void>(0x0233F530, x, y, z, p3); } // 0x64C59DD6834FA942 0xFE485135 b1207
	static void SET_GPS_MULTI_ROUTE_RENDER(BOOL toggle) { invoke<Void>(0x0233F590, toggle); } // 0x4426D65E029A4DC0 0xE87CBE4C b1207
	static void CLEAR_GPS_MULTI_ROUTE() { invoke<Void>(0x0233F620); } // 0x9E0AB9AAEE87CE28 0x0D9969E4 b1207
	static void _START_GPS_CUSTOM_ROUTE_FROM_WAYPOINT_RECORDING_ROUTE(const char* waypointRecording, int point, int numPoints, Hash colorNameHash, BOOL p4, BOOL p5) { invoke<Void>(0x0233F660, waypointRecording, point, numPoints, colorNameHash, p4, p5); } // 0x6B44F13D888F770D b1207
	static void CLEAR_GPS_PLAYER_WAYPOINT() { invoke<Void>(0x0233F7E0); } // 0x08FDC6F796E350D1 0x0B9C7FC2 b1207
	static void _0xD3F58E9316B7FC2A(Any p0) { invoke<Void>(0x0233F7F0, p0); } // 0xD3F58E9316B7FC2A b1207
	static void SET_WAYPOINT_OFF() { invoke<Void>(0x0233F810); } // 0xFA8C41E8020D3439 0xB3496E1B b1207
	static BOOL IS_WAYPOINT_ACTIVE() { return invoke<BOOL>(0x0233F820); } // 0x202B1BBFC6AB5EE4 0x5E4DF47B b1207
	static Vector3 _GET_WAYPOINT_COORDS() { return invoke<Vector3>(0x0233F850); } // 0x29B30D07C3F7873B b1207
	static Any _0xF08E42BFA46BDFF8(Any p0, Any p1) { return invoke<Any>(0x0233F890, p0, p1); } // 0xF08E42BFA46BDFF8 b1207
	static void _HIDE_ACTIVE_POINTS_OF_INTEREST() { invoke<Void>(0x0233F8F0); } // 0xA1B4052C2A3DCC1E b1207
	static void _SHOW_ACTIVE_POINTS_OF_INTEREST() { invoke<Void>(0x0233F9F0); } // 0x3FBB838AEA30C1D8 b1207
	static Any _0xF47A1EB2A538A3A3() { return invoke<Any>(0x0233FA50); } // 0xF47A1EB2A538A3A3 b1207
	static BOOL _FIND_CLOSEST_GPS_POSITION(float x, float y, float z, Vector3* outPosition) { return invoke<BOOL>(0x0233FAA0, x, y, z, outPosition); } // 0x3FDA2B79AEEE351C b1207
	static void DISPLAY_RADAR(BOOL toggle) { invoke<Void>(0x0233FCF0, toggle); } // 0x1B3DA717B9AFF828 0x52816BD4 b1207
	static void _SET_RADAR_CONFIG_TYPE(Hash configHash, Hash p1) { invoke<Void>(0x0233FD20, configHash, p1); } // 0x9C113883487FD53C b1207
	static void _ADD_PROP_TO_MINIMAP(Hash minimapProp, float x, float y, float rotation, int p4) { invoke<Void>(0x0233FD40, minimapProp, x, y, rotation, p4); } // 0x1392105DA88BBFFB b1207
	static void _REMOVE_PROP_FROM_MINIMAP(Hash minimapProp) { invoke<Void>(0x0233FE30, minimapProp); } // 0xE057FEA9A22EB3EE b1207
	static void SET_RADAR_AS_EXTERIOR_THIS_FRAME() { invoke<Void>(0x0233FEF0); } // 0xA8EBBAE986FB5457 0x39ABB10E b1207
	static void SET_MINIMAP_HIDE_FOW(BOOL toggle) { invoke<Void>(0x0233FF00, toggle); } // 0x4B8F743A4A6D2FF8 0xD8D77733 b1207
	static void _SET_FOW_UPDATE_PLAYER_OVERRIDE(BOOL toggle, Hash p1) { invoke<Void>(0x0233FF20, toggle, p1); } // 0x63E7279D04160477 b1207
	static void _SET_MINIMAP_FOW_OVERRIDE_REVEAL_SCALE(float scale, Hash p1) { invoke<Void>(0x02340010, scale, p1); } // 0xE5A7F70B7C0F3271 b1207
	static void _SET_MINIMAP_FOW_SHOULD_UPDATE(BOOL toggle, Hash p1) { invoke<Void>(0x02340100, toggle, p1); } // 0x632AA10BF7EA53D3 b1207
	static void SET_MINIMAP_FOW_REVEAL_COORDINATE(float x, float y, float z, Hash p3) { invoke<Void>(0x02340120, x, y, z, p3); } // 0x73348402566ECB6E 0xE010F081 b1207
	static void SET_MINIMAP_FOW_REVEAL_VOLUME(Volume volume, Hash p1) { invoke<Void>(0x02340150, volume, p1); } // 0x63CBBD6CA6F321F9 b1207
	static void RESET_MINIMAP_FOW(Hash hash) { invoke<Void>(0x02340200, hash); } // 0xEB3CB3386C775D72 b1207
	static void _REVEAL_MINIMAP_FOW(Hash hash) { invoke<Void>(0x02340220, hash); } // 0xF8096DF9B87246E3 b1207
	static void _SET_MINIMAP_ZONE(Hash zone) { invoke<Void>(0x02340240, zone); } // 0xA657EC9DBC6CC900 b1207
	static void LOCK_MINIMAP_ANGLE(int angle) { invoke<Void>(0x02340320, angle); } // 0x0BFD145EF819FB3A 0xDEC733E4 b1207
	static void UNLOCK_MINIMAP_ANGLE() { invoke<Void>(0x02340350); } // 0x5373DE8E179BC2A0 0x742043F9 b1207
	static void _MAP_ENABLE_REGION_BLIP(Hash regionHash, Hash styleHash) { invoke<Void>(0x02340370, regionHash, styleHash); } // 0x563FCB6620523917 b1207
	static void _MAP_DISABLE_REGION_BLIP(Hash regionHash) { invoke<Void>(0x023403E0, regionHash); } // 0x6786D7AFAC3162B3 b1207
	static BOOL _MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(Hash regionHash, Hash styleHash) { return invoke<BOOL>(0x023404D0, regionHash, styleHash); } // 0xE38450DBCBC70E3D b1207
	static void _0xD8C7162AB2E2AF45(Hash discoveryHash) { invoke<Void>(0x02340510, discoveryHash); } // 0xD8C7162AB2E2AF45 b1207
	static void _MAP_DISCOVERY_SET_ENABLED(Hash discoveryHash) { invoke<Void>(0x023405A0, discoveryHash); } // 0xDA98246C7A3C2189 b1207
	static BOOL _MAP_IS_DISCOVERY_ACTIVE(Hash discoveryHash) { return invoke<BOOL>(0x02340630, discoveryHash); } // 0x3F81EA4275D39D6F b1207
	static void _SET_PAUSEMAP_COORDS_WITH_RADIUS(float x, float y, float z, float radius) { invoke<Void>(0x023406C0, x, y, z, radius); } // 0xE0884C184728C75B b1207
	static void _0x7C9F4CDF402CA82A() { invoke<Void>(0x02340700); } // 0x7C9F4CDF402CA82A b1311
	static void _0x44813684F72B563C(Entity entity, Any p1) { invoke<Void>(0x02340730, entity, p1); } // 0x44813684F72B563C b1207
	static void _0x97F6F158CC5B5CA2(Entity entity, Any p1) { invoke<Void>(0x02340800, entity, p1); } // 0x97F6F158CC5B5CA2 b1207
	static void _0xBB68D4D3CA3DE402(Any p0, Any p1) { invoke<Void>(0x023408E0, p0, p1); } // 0xBB68D4D3CA3DE402 b1207
	static Any _0x3CB8859F04763C78(Any p0, Any p1) { return invoke<Any>(0x023408F0, p0, p1); } // 0x3CB8859F04763C78 b1207
	static void _0x7563CBCA99253D1A(Entity entity, Hash blip) { invoke<Void>(0x02340920, entity, blip); } // 0x7563CBCA99253D1A b1207
	static void _0x1726963E6049DB53(Any p0) { invoke<Void>(0x02340930, p0); } // 0x1726963E6049DB53 b1207
}

namespace MINIGAME
{
	static void _0x6480723D3BE535B6(Any p0) { invoke<Void>(0x0234A550, p0); } // 0x6480723D3BE535B6 b1207
	static void _0x3DF7EE3A76185108() { invoke<Void>(0x0234A690); } // 0x3DF7EE3A76185108 b1207
	static Any _0xE1F365C4C8F259D8(Any p0, Any p1, Any p2) { return invoke<Any>(0x0234A720, p0, p1, p2); } // 0xE1F365C4C8F259D8 b1207
	static Any _0xE53A308AC35877A8() { return invoke<Any>(0x0234A760); } // 0xE53A308AC35877A8 b1207
	static Any _0x580F34C726387226(Any p0, Any p1) { return invoke<Any>(0x0234A7A0, p0, p1); } // 0x580F34C726387226 b1207
	static void _0x0876326238914A3F() { invoke<Void>(0x0234A810); } // 0x0876326238914A3F b1207
	static Any _0x3FFE60DD8A936551(Any p0, Any p1) { return invoke<Any>(0x0234A860, p0, p1); } // 0x3FFE60DD8A936551 b1207
	static void _0x18A0D48DF9211C07() { invoke<Void>(0x0234A8C0); } // 0x18A0D48DF9211C07 b1207
	static Any _MINIGAME_IS_CONNECTED_TO_SERVER(Any p0) { return invoke<Any>(0x0234A900, p0); } // 0x2A0C4736AC5AF0CE b1207
	static Any _0x39654E1F68B78287() { return invoke<Any>(0x0234A960); } // 0x39654E1F68B78287 b1207
	static Any _0x3EECAADAB0D9FE29() { return invoke<Any>(0x0234A990); } // 0x3EECAADAB0D9FE29 b1207
	static Any _0xD39D32EB3B52DD83(Any p0) { return invoke<Any>(0x0234A9C0, p0); } // 0xD39D32EB3B52DD83 b1207
	static Any _0x8593A8CB0ED2C3B4(Any p0) { return invoke<Any>(0x0234AA20, p0); } // 0x8593A8CB0ED2C3B4 b1207
	static BOOL _MINIGAME_REQUEST_SEAT_AT_TABLE(Any* data) { return invoke<BOOL>(0x0234AA90, data); } // 0xF6AC6085D8D6C004 b1207
	static Any _MINIGAME_LEAVE_TABLE(Any p0) { return invoke<Any>(0x0234AB20, p0); } // 0xF5446E47941E654C b1207
	static Any _MINIGAME_GET_NEXT_EVENT_TYPE() { return invoke<Any>(0x0234ABB0); } // 0x578907F59BA01B6C b1207
	static Any _MINIGAME_GET_NEXT_EVENT(Any p0, Any p1) { return invoke<Any>(0x0234ABF0, p0, p1); } // 0xDF728C5AE137FC13 b1207
	static void _MINIGAME_POP_NEXT_EVENT() { invoke<Void>(0x0234AC60); } // 0x833E03BAEBADC4B0 b1207
	static Any _0x3B31732FADE5BAF3() { return invoke<Any>(0x0234AC80); } // 0x3B31732FADE5BAF3 b1207
	static Any _0x578907F59BA01B6D(Any p0) { return invoke<Any>(0xDEADBEEF, p0); } // 0x578907F59BA01B6D b1207
	static Any _0xDF728C5AE137FC14(Any p0, Any p1, Any p2) { return invoke<Any>(0xDEADBEEF, p0, p1, p2); } // 0xDF728C5AE137FC14 b1207
	static Any _MINIGAME_IS_REQUEST_PENDING(Any p0) { return invoke<Any>(0x0234ADA0, p0); } // 0x9105A4A2556FA937 b1207
	static Any _0x644439B5387EE57E(Any p0, Any p1) { return invoke<Any>(0x0234AE50, p0, p1); } // 0x644439B5387EE57E b1207
	static Any _0x15E90B6A993017AA() { return invoke<Any>(0x0234AE80); } // 0x15E90B6A993017AA b1207
	static Any _0x10342CC82E8356E9(Any p0, Any p1) { return invoke<Any>(0x0234AEA0, p0, p1); } // 0x10342CC82E8356E9 b1207
	static Any _0x32A7C216344D623B(Any p0, Any p1, Any p2) { return invoke<Any>(0x0234AF40, p0, p1, p2); } // 0x32A7C216344D623B b1207
	static Any _0xEC819D612038EF4B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke<Any>(0x0234B190, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xEC819D612038EF4B b1207
	static Any _POKER_GET_GAME_SETTINGS_FOR_ID(Any p0) { return invoke<Any>(0x0234B1E0, p0); } // 0x2D20E12E1990D584 b1207
	static Any _POKER_BUY_IN(Any p0, Any p1) { return invoke<Any>(0x0234B2C0, p0, p1); } // 0xB4D610EA5A1FDE74 b1207
	static Any _POKER_CALL(Any p0, Any p1) { return invoke<Any>(0x0234B340, p0, p1); } // 0x8DED681B161EBD78 b1207
	static Any _POKER_CHECK(Any p0, Any p1) { return invoke<Any>(0x0234B3C0, p0, p1); } // 0x49A045628D9B1B86 b1207
	static Any _POKER_FOLD(Any p0) { return invoke<Any>(0x0234B440, p0); } // 0x3DFAB7D9BB45B5BE b1207
	static Any _POKER_RAISE(Any p0, Any p1) { return invoke<Any>(0x0234B4C0, p0, p1); } // 0xECCF45A79A17BB96 b1207
	static Any _POKER_REVEAL(Any p0) { return invoke<Any>(0x0234B540, p0); } // 0x2F2131DB0A8B02DC b1207
	static void _0x58521E6DCDE97D74(Any p0, Any p1, Any p2) { invoke<Void>(0x0234B5C0, p0, p1, p2); } // 0x58521E6DCDE97D74 b1207
	static void _0xF6DE98516FD3AC9B() { invoke<Void>(0x0234B760); } // 0xF6DE98516FD3AC9B b1207
	static Any _0x3F4FD4BED07AB8C4(Any p0) { return invoke<Any>(0x0234B780, p0); } // 0x3F4FD4BED07AB8C4 b1207
	static Any _0x3AE451860F03CA8A(Any p0, Any p1) { return invoke<Any>(0x0234B820, p0, p1); } // 0x3AE451860F03CA8A b1207
	static Any _0x012027C28F421F46(Any p0, Any p1) { return invoke<Any>(0x0234B850, p0, p1); } // 0x012027C28F421F46 b1207
	static void _0x455ECCA0715C507F() { invoke<Void>(0x0234B990); } // 0x455ECCA0715C507F b1207
	static Any _DOMINOES_BUY_IN(Any p0) { return invoke<Any>(0x0234BA20, p0); } // 0x399E6CD12FC8CA89 b1207
	static Any _DOMINOES_PLACE_DOMINO(Any p0, Any p1) { return invoke<Any>(0x0234BA30, p0, p1); } // 0xB79A29B33BF29BA5 b1207
	static Any _DOMINOES_REQUEST_VALID_PLACEMENTS(Any p0) { return invoke<Any>(0x0234BA40, p0); } // 0xE26AEE7E67D9E21D b1207
	static Any _0xA2DB3C6270C122E3(Any p0, Any p1) { return invoke<Any>(0x0234BA50, p0, p1); } // 0xA2DB3C6270C122E3 b1207
	static Any _0x398066F893149856(Any p0, Any p1, Any p2) { return invoke<Any>(0x0234BA80, p0, p1, p2); } // 0x398066F893149856 b1207
	static Any _0xBEA7D3CB47E1479C() { return invoke<Any>(0x0234BAB0); } // 0xBEA7D3CB47E1479C b1207
	static Any _0x910B088E51A511AC() { return invoke<Any>(0x0234BAD0); } // 0x910B088E51A511AC b1207
	static Any _0x9DD95B405AB4983E(Any p0, Any p1) { return invoke<Any>(0x0234BAF0, p0, p1); } // 0x9DD95B405AB4983E b1207
}

namespace MISC
{
	static int GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(int stackSize) { return invoke<int>(0x0237B6D0, stackSize); } // 0x40DC2907A9697EF7 0x11A178B8 b1207
	static int _GET_NUMBER_OF_INSTRUCTIONS() { return invoke<int>(0x0237B720); } // 0x72904D3D62AF5839 b1207
	static int _GET_MAX_NUM_INSTRUCTIONS() { return invoke<int>(0x0237B740); } // 0xC43CD2668B204419 b1207
	static BOOL IS_MAG_DEMO_1_ACTIVE() { return invoke<BOOL>(0x0237B770); } // 0x5FC9357C26DAEFCE b1207
	static void SET_RANDOM_SEED(int seed) { invoke<Void>(0x0237B780, seed); } // 0x5CD7A49104AFCB6B 0xDB3FEB5C b1207
	static void SET_TIME_SCALE(float timeScale) { invoke<Void>(0x0237B7B0, timeScale); } // 0x9682AF6050854856 0xA7F84694 b1207
	static void SET_MISSION_FLAG(BOOL toggle) { invoke<Void>(0x0237B800, toggle); } // 0x36694B456BE80D0A 0x57592D52 b1207
	static BOOL GET_MISSION_FLAG() { return invoke<BOOL>(0x0237B860); } // 0xB15CD1CF58771DE1 0x95115F97 b1207
	static void _0x5801BE2DF2AF07EC(Any p0) { invoke<Void>(0x0237B870, p0); } // 0x5801BE2DF2AF07EC b1207
	static void SET_RANDOM_EVENT_FLAG(BOOL toggle) { invoke<Void>(0x0237B880, toggle); } // 0xB1ADCCC4150C6473 0xA77F31E8 b1207
	static BOOL GET_RANDOM_EVENT_FLAG() { return invoke<BOOL>(0x0237B8C0); } // 0x924D54E5698AE3E0 0x794CC92C b1207
	static void _0x9BF2C0C568C61641(Any p0) { invoke<Void>(0x0237B8D0, p0); } // 0x9BF2C0C568C61641 b1207
	static void _0xCC7FC854B956A128(const char* p0, const char* p1) { invoke<Void>(0x0237B910, p0, p1); } // 0xCC7FC854B956A128 b1207
	static void _0x9935F76407C32539(const char* p0) { invoke<Void>(0x0237B920, p0); } // 0x9935F76407C32539 b1207
	static void _0xFF252E2BAFB7330F(Any p0) { invoke<Void>(0x0237B930, p0); } // 0xFF252E2BAFB7330F b1207
	static void _0x91D657230BC208D2(const char* p0, const char* p1) { invoke<Void>(0x0237B940, p0, p1); } // 0x91D657230BC208D2 b1207
	static void _0x1694A053DFB61A34(const char* p0) { invoke<Void>(0x0237B950, p0); } // 0x1694A053DFB61A34 b1207
	static Any _0xAF530E56505D1BD6(Any p0) { return invoke<Any>(0x0237B9E0, p0); } // 0xAF530E56505D1BD6 b1207
	static void _0xB16FC7B364D86585() { invoke<Void>(0x0237BB50); } // 0xB16FC7B364D86585 b1207
	static Any _0xF81C53561D15F330() { return invoke<Any>(0x0237BB60); } // 0xF81C53561D15F330 b1207
	static void _0x1096603B519C905F(Any p0) { invoke<Void>(0x0237BB70, p0); } // 0x1096603B519C905F b1207
	static void _0xCC3EDC5614B03F61(Any p0) { invoke<Void>(0x0237BBB0, p0); } // 0xCC3EDC5614B03F61 b1207
	static void _0x708DF841B8F27AA2(const char* p0) { invoke<Void>(0x0237BC00, p0); } // 0x708DF841B8F27AA2 0xE77199F7 b1207
	static void _0xDA4D8EB04E8E2928(Any p0) { invoke<Void>(0x0237BC10, p0); } // 0xDA4D8EB04E8E2928 b1207
	static void _0xB08C4FA25BC29DB9(Any p0) { invoke<Void>(0x0237BD20, p0); } // 0xB08C4FA25BC29DB9 b1207
	static Hash _GET_PREV_WEATHER_TYPE_HASH_NAME() { return invoke<Hash>(0x0237BE30); } // 0x4BEB42AEBCA732E9 b1207
	static Hash _GET_NEXT_WEATHER_TYPE_HASH_NAME() { return invoke<Hash>(0x0237BE50); } // 0x51021D36F62AAA83 b1207
	static void _0x0730E518486DEEC3(Any p0) { invoke<Void>(0x0237BE70, p0); } // 0x0730E518486DEEC3 b1207
	static void SET_WEATHER_TYPE(Hash weatherType, BOOL p1, BOOL p2, BOOL transition, float transitionTime, BOOL p5) { invoke<Void>(0x0237BEF0, weatherType, p1, p2, transition, transitionTime, p5); } // 0x59174F1AFE095B5A b1207
	static void _SET_WEATHER_TYPE_2(Hash weatherType, int p1, int p2, int p3, BOOL p4) { invoke<Void>(0x0237BF30, weatherType, p1, p2, p3, p4); } // 0x2C6A07AF9AEDABD8 b1207
	static Any _0x7F4CE164D9A11DFE() { return invoke<Any>(0x0237C000); } // 0x7F4CE164D9A11DFE b1207
	static Hash _GET_RANDOM_WEATHER_TYPE() { return invoke<Hash>(0x0237C070); } // 0x1359C181BC625503 b1207
	static void SET_RANDOM_WEATHER_TYPE(BOOL p0, BOOL p1) { invoke<Void>(0x0237C100, p0, p1); } // 0x6E5A7FBEECAB3C72 0xE7AA1BC9 b1207
	static void CLEAR_WEATHER_TYPE_PERSIST() { invoke<Void>(0x0237C130); } // 0xD85DFE5C131E4AE9 0x6AB757D8 b1207
	static void _CLEAR_WEATHER_TYPE_PERSIST_OVERTIME(int milliseconds) { invoke<Void>(0x0237C140, milliseconds); } // 0xCE7690C0A0D1C36D b1207
	static void _GET_WEATHER_TYPE_TRANSITION(Hash* weatherType1, Hash* weatherType2, float* percentWeather2) { invoke<Void>(0x0237C160, weatherType1, weatherType2, percentWeather2); } // 0x0AC679B2342F14F2 0x9A5C1D56 b1207
	static void _SET_WEATHER_TYPE_TRANSITION(Hash weatherType1, Hash weatherType2, float percentWeather2, BOOL enabled) { invoke<Void>(0x0237C1B0, weatherType1, weatherType2, percentWeather2, enabled); } // 0xFA3E3CA8A1DE6D5D 0x5CA74040 b1207
	static void _SET_WEATHER_TYPE_FROZEN(BOOL toggle) { invoke<Void>(0x0237C240, toggle); } // 0xD74ACDF7DB8114AF b1207
	static void _0xDD560ABEF5D3784C(Any p0, Any p1) { invoke<Void>(0x0237C260, p0, p1); } // 0xDD560ABEF5D3784C b1207
	static void _0x2916B30DC6C41179(Hash weatherType) { invoke<Void>(0x0237C2C0, weatherType); } // 0x2916B30DC6C41179 b1207
	static void _0xD3F943B88F55376A(Hash weatherType) { invoke<Void>(0x0237C340, weatherType); } // 0xD3F943B88F55376A b1207
	static void _0x243CEDE8F916B994() { invoke<Void>(0x0237C3C0); } // 0x243CEDE8F916B994 b1207
	static void _SET_OVERRIDE_WEATHER(Hash weatherType) { invoke<Void>(0x0237C3D0, weatherType); } // 0xBE83CAE8ED77A94F b1207
	static void CLEAR_OVERRIDE_WEATHER() { invoke<Void>(0x0237C420); } // 0x80A398F16FFE3CC3 0x7740EA4E b1207
	static void _SET_WEATHER_VARIATION(const char* weatherType, const char* variation) { invoke<Void>(0x0237C430, weatherType, variation); } // 0x3373779BAF7CAF48 b1207
	static void _CLEAR_WEATHER_VARIATION(const char* weatherType, BOOL p1) { invoke<Void>(0x0237C5C0, weatherType, p1); } // 0x0E71C80FA4EC8147 b1207
	static void WATER_OVERRIDE_SET_SHOREWAVEAMPLITUDE(float amplitude) { invoke<Void>(0x0237C660, amplitude); } // 0x55123D5A7D9D3C42 0x625181DC b1207
	static void WATER_OVERRIDE_SET_OCEANWAVEMAXAMPLITUDE(float maxAmplitude) { invoke<Void>(0x0237C670, maxAmplitude); } // 0xF06C5B66DE20B2B8 0x0DE40C28 b1207
	static float _GET_TEMPERATURE_AT_COORDS(float x, float y, float z) { return invoke<float>(0x0237C680, x, y, z); } // 0xB98B78C3768AF6E0 b1207
	static void SET_WIND_SPEED(float speed) { invoke<Void>(0x0237C7E0, speed); } // 0xD00C2D82DC04A99F 0x45705F94 b1207
	static float GET_WIND_SPEED() { return invoke<float>(0x0237C810); } // 0xFFB7E74E041150A4 0x098F0F3C b1207
	static void SET_WIND_DIRECTION(float direction) { invoke<Void>(0x0237C820, direction); } // 0xB56C4F5F57A45600 0x381AEEE9 b1207
	static Vector3 GET_WIND_DIRECTION() { return invoke<Vector3>(0x0237C8B0); } // 0xF703E82F3FE14A5F 0x89499A0D b1207
	static void _SET_RAIN_LEVEL(float intensity) { invoke<Void>(0x0237C8E0, intensity); } // 0x193DFC0526830FD6 b1207
	static float GET_RAIN_LEVEL() { return invoke<float>(0x0237C8F0); } // 0x931B5F4CC130224B 0xC9F67F28 b1207
	static void _0x745808BB01CEC6B9(float p0) { invoke<Void>(0x0237C900, p0); } // 0x745808BB01CEC6B9 b1207
	static void _SET_SNOW_LEVEL(float level) { invoke<Void>(0x0237C910, level); } // 0xF6BEE7E80EC5CA40 b1207
	static float GET_SNOW_LEVEL() { return invoke<float>(0x0237C920); } // 0x1E5D727041BE1709 0x1B09184F b1207
	static void FORCE_LIGHTNING_FLASH() { invoke<Void>(0x0237C930); } // 0x369DB5B2510FA080 0xDF38165E b1207
	static void _FORCE_LIGHTNING_FLASH_AT_COORDS(float x, float y, float z, float p3) { invoke<Void>(0x0237C940, x, y, z, p3); } // 0x67943537D179597C b1207
	static void _0xA9342743B634A462(Any p0) { invoke<Void>(0x0237C9A0, p0); } // 0xA9342743B634A462 b1207
	static int GET_GAME_TIMER() { return invoke<int>(0x0237C9B0); } // 0x4F67E8ECA7D3F667 0xA4EA0691 b1207
	static int _GET_GAME_TIMER_NON_SCALED_CLIPPED() { return invoke<int>(0x0237C9C0); } // 0x483B8C542103AD72 b1207
	static int GET_SYSTEM_TIME() { return invoke<int>(0x0237C9D0); } // 0xBE7F225417E35A7C b1207
	static int _GET_NUMBER_OF_MICROSECONDS_SINCE_LAST_CALL() { return invoke<int>(0x0237C9E0); } // 0xB0CE5E5ED8BB3581 b1207
	static int _GET_SCRIPT_TIME_WITHIN_FRAME_IN_MICROSECONDS() { return invoke<int>(0x0237CA20); } // 0x63219768C586667C b1207
	static void _RESET_SCRIPT_TIME_WITHIN_FRAME() { invoke<Void>(0x0237CA60); } // 0x1411A7CBC3A6EB7B b1207
	static float GET_FRAME_TIME() { return invoke<float>(0x0237CA80); } // 0x5E72022914CE3C38 0x96374262 b1207
	static float _GET_BENCHMARK_TIME() { return invoke<float>(0x0237CA90); } // 0x3F3172FEAE3AFE1C b1207
	static int GET_FRAME_COUNT() { return invoke<int>(0x0237CAA0); } // 0x77DFA958FCF100C1 0xB477A015 b1207
	static void _0x6BED40493A1AFDB8(Any p0, Any p1) { invoke<Void>(0x0237CAB0, p0, p1); } // 0x6BED40493A1AFDB8 b1207
	static float _READ_INT_AS_FLOAT(int value) { return invoke<float>(0x0237CAC0, value); } // 0xD2C9126410DFA1B2 b1207
	static float GET_RANDOM_FLOAT_IN_RANGE(float startRange, float endRange) { return invoke<float>(0x0237CAD0, startRange, endRange); } // 0xE29F927A961F8AAA 0x0562C4D0 b1207
	static int GET_RANDOM_INT_IN_RANGE(int startRange, int endRange) { return invoke<int>(0x0237CB30, startRange, endRange); } // 0xD53343AA4FB7DD28 0x4051115B b1207
	static BOOL GET_GROUND_Z_FOR_3D_COORD(float x, float y, float z, float* groundZ, BOOL p4) { return invoke<BOOL>(0x0237CB80, x, y, z, groundZ, p4); } // 0x24FA4267BB8D2431 0xA1BFD5E0 b1207
	static BOOL GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(float x, float y, float z, float* groundZ, Vector3* normal) { return invoke<BOOL>(0x0237CC40, x, y, z, groundZ, normal); } // 0x2A29CA9A6319E6AB 0x64D91CED b1207
	static Any _0xBBE5B63EFFB08E68(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0x0237CD40, p0, p1, p2, p3, p4, p5, p6); } // 0xBBE5B63EFFB08E68 b1207
	static float ASIN(float p0) { return invoke<float>(0x0237CD70, p0); } // 0x6E3C15D296C15583 0x998E5CAD b1207
	static float ACOS(float p0) { return invoke<float>(0x0237CDC0, p0); } // 0x586690F0176DC575 0xF4038776 b1207
	static float TAN(float p0) { return invoke<float>(0x0237CE10, p0); } // 0x8C13DB96497B7ABF 0xD320CE5E b1207
	static float ATAN(float p0) { return invoke<float>(0x0237CE40, p0); } // 0x503054DED0B78027 0x7A03CC8E b1207
	static float ATAN2(float p0, float p1) { return invoke<float>(0x0237CE80, p0, p1); } // 0x965B220A066E3F07 0x2508AC81 b1207
	static float GET_DISTANCE_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2, BOOL useZ) { return invoke<float>(0x0237CEC0, x1, y1, z1, x2, y2, z2, useZ); } // 0x0BE7F4E3CDBAFB28 0xF698765E b1207
	static float GET_ANGLE_BETWEEN_2D_VECTORS(float x1, float y1, float x2, float y2) { return invoke<float>(0x0237CF80, x1, y1, x2, y2); } // 0xD0DFE1C486097BBB 0xDBF75E58 b1207
	static float GET_HEADING_FROM_VECTOR_2D(float dx, float dy) { return invoke<float>(0x0237D040, dx, dy); } // 0x38D5202FF9271C62 0xD209D52B b1207
	static Vector3 _0x83ACC65D9ACEC5EF(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9) { return invoke<Vector3>(0x0237D0C0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x83ACC65D9ACEC5EF 0xCAECF37E b1207
	static BOOL _0xAB6A04CEC428258B(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float* p12) { return invoke<BOOL>(0x0237D220, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xAB6A04CEC428258B 0xC6CC812C b1207
	static void SET_BIT(int* address, int offset) { invoke<Void>(0x0237D320, address, offset); } // 0xF73FBE4845C43B5B 0x4EFE7E6B b1207
	static void CLEAR_BIT(int* address, int offset) { invoke<Void>(0x0237D340, address, offset); } // 0x7D1D4A3602B6AD4E 0x8BC9E618 b1207
	static Any _0x8F4F050054005C27(Any p0, Any p1) { return invoke<Any>(0x0237D360, p0, p1); } // 0x8F4F050054005C27 b1207
	static Any _0x80E9C316EF84DD81(Any p0) { return invoke<Any>(0x0237D3A0, p0); } // 0x80E9C316EF84DD81 b1207
	static Any _0xE704838F36F93B7B(Any p0) { return invoke<Any>(0x0237D3E0, p0); } // 0xE704838F36F93B7B b1355
	static void _0xE84AAC1B22A73E99(Any p0, Any p1) { invoke<Void>(0x0237D420, p0, p1); } // 0xE84AAC1B22A73E99 b1207
	static void _0xB909149F2BB5F6DA(Any p0, Any p1) { invoke<Void>(0x0237D450, p0, p1); } // 0xB909149F2BB5F6DA b1207
	static void _0xD2D74F89DF844A50(Any p0) { invoke<Void>(0x0237D480, p0); } // 0xD2D74F89DF844A50 b1207
	static Hash GET_HASH_KEY(const char* string) { return invoke<Hash>(0x0237D4A0, string); } // 0xFD340785ADF8CFB7 0x98EFF6F1 b1207
	static Any _0xEF50E344A8F93784(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x0237D540, p0, p1, p2, p3); } // 0xEF50E344A8F93784 b1207
	static BOOL IS_POSITION_OCCUPIED(float x, float y, float z, float range, BOOL p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8, Any p9, BOOL p10) { return invoke<BOOL>(0x0237D5C0, x, y, z, range, p4, p5, p6, p7, p8, p9, p10); } // 0x825CA3ED43831015 0x452E8D9E b1207
	static void CLEAR_AREA(float x, float y, float z, float radius, int flag) { invoke<Void>(0x0237D800, x, y, z, radius, flag); } // 0x3B882A96EA77D5B1 0x854E9AB8 b1207
	static void _CLEAR_VOLUME_AREA(Volume volume, int flag) { invoke<Void>(0x0237D880, volume, flag); } // 0x2FCD528A397E5C88 b1207
	static void CLEAR_ANGLED_AREA_OF_VEHICLES(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x0237D930, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xA4D83115C1E02F8A 0xF11A3018 b1207
	static void SET_CREDITS_ACTIVE(BOOL toggle) { invoke<Void>(0x0237DA50, toggle); } // 0xD37BECF862DA726F 0xEC2A0ECF b1207
	static void NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME() { invoke<Void>(0x0237DA70); } // 0x3D0EAC6385DD6100 0x878486CE b1207
	static void PAUSE_DEATH_ARREST_RESTART(BOOL toggle) { invoke<Void>(0x0237DA80, toggle); } // 0x66AB6B6C7E72F393 0x296574AE b1207
	static void IGNORE_NEXT_RESTART(BOOL toggle) { invoke<Void>(0x0237DA90, toggle); } // 0x6C9FF40FF1B69F8F 0xDA13A4B6 b1207
	static void SET_FADE_IN_AFTER_DEATH_ARREST(BOOL toggle) { invoke<Void>(0x0237DAA0, toggle); } // 0xDF3B5846DE5904AF 0xACDE6985 b1207
	static void SET_FADE_IN_AFTER_LOAD(BOOL toggle) { invoke<Void>(0x0237DAB0, toggle); } // 0xAC806C4CAB973517 0x6E00EB0B b1207
	static BOOL OVERRIDE_SAVE_HOUSE(BOOL p0, float p1, float p2, float p3, float p4, BOOL p5, float p6, float p7) { return invoke<BOOL>(0x0237DAC0, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xB2C69E11A37B5AF0 0x47436C12 b1207
	static void SHOOT_SINGLE_BULLET_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed, BOOL p13) { invoke<Void>(0x0237DB80, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible, isInvisible, speed, p13); } // 0x867654CBC7606F2C 0xCB7415AC b1207
	static void FIRE_SINGLE_BULLET(Any* args) { invoke<Void>(0x0237DC70, args); } // 0xCBC9A21F6A2A679C b1207
	static void GET_MODEL_DIMENSIONS(Hash modelHash, Vector3* minimum, Vector3* maximum) { invoke<Void>(0x0237DC80, modelHash, minimum, maximum); } // 0xDCB8DDD5D054A7E7 0x91ABB8E0 b1207
	static BOOL IS_BIT_SET(int address, int offset) { return invoke<BOOL>(0x0237DDE0, address, offset); } // 0x4ED6CFDFE8D4131A 0x902E26AC b1207
	static void _0x0A487CC74A517FB5(Any p0) { invoke<Void>(0x0237DE00, p0); } // 0x0A487CC74A517FB5 b1207
	static BOOL IS_MINIGAME_IN_PROGRESS() { return invoke<BOOL>(0x0237DE30); } // 0xF4D8BCD052E7EA1B 0x53A95E13 b1207
	static BOOL SHOULD_USE_METRIC_MEASUREMENTS() { return invoke<BOOL>(0x0237DE50); } // 0x4FB556ACEFA93098 0xBAF17315 b1207
	static BOOL _SHOULD_USE_METRIC_MEASUREMENTS_2() { return invoke<BOOL>(0x0237DE70); } // 0x58BCDC75BA52110A b1207
	static BOOL _SHOULD_USE_METRIC_TEMPERATURE() { return invoke<BOOL>(0x0237DE90); } // 0xFF4AAF3275BAAB4F b1207
	static BOOL _SHOULD_USE_METRIC_WEIGHT() { return invoke<BOOL>(0x0237DEB0); } // 0x8F24157FEDB85EA2 b1207
	static BOOL _SHOULD_USE_24_HOUR_CLOCK() { return invoke<BOOL>(0x0237DED0); } // 0x0177CF20345F44DD b1207
	static int COMPARE_STRINGS(const char* str1, const char* str2, BOOL matchCase, int maxLength) { return invoke<int>(0x0237DEF0, str1, str2, matchCase, maxLength); } // 0xBFBB74A15EFC149B 0xFE25A58F b1207
	static int ABSI(int value) { return invoke<int>(0x0237DF80, value); } // 0x0C214D5B8A38C828 0xB44677C5 b1207
	static float ABSF(float value) { return invoke<float>(0x0237DFA0, value); } // 0x134549B388167CBF 0xAF6F6E0B b1207
	static BOOL IS_PROJECTILE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL ownedByPlayer) { return invoke<BOOL>(0x0237DFD0, x1, y1, z1, x2, y2, z2, ownedByPlayer); } // 0x05B0061EFDFC8941 0x78E1A557 b1207
	static BOOL IS_PROJECTILE_TYPE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, int type, BOOL p7) { return invoke<BOOL>(0x0237E200, x1, y1, z1, x2, y2, z2, type, p7); } // 0x04965FB9E14235C7 0x2B73BCF6 b1207
	static BOOL IS_PROJECTILE_TYPE_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7, BOOL p8) { return invoke<BOOL>(0x0237E280, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x928431F4133CD3D4 0xD1AE2681 b1207
	static BOOL IS_PROJECTILE_TYPE_WITHIN_DISTANCE(float p0, float p1, float p2, Any p3, float p4, BOOL p5) { return invoke<BOOL>(0x0237E2E0, p0, p1, p2, p3, p4, p5); } // 0xF51C9BAAD9ED64C4 0xBE81F1E2 b1207
	static BOOL GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(Ped ped, Hash weaponHash, float distance, Vector3* outCoords, BOOL p4, BOOL mustBeOwnedByThisPed) { return invoke<BOOL>(0x0237E320, ped, weaponHash, distance, outCoords, p4, mustBeOwnedByThisPed); } // 0xD73C960A681052DF 0x6BDE5CE4 b1207
	static BOOL GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(Ped ped, Hash weaponHash, float distance, Vector3* outCoords, Object* outProjectile, BOOL p5, BOOL mustBeOwnedByThisPed) { return invoke<BOOL>(0x0237E450, ped, weaponHash, distance, outCoords, outProjectile, p5, mustBeOwnedByThisPed); } // 0x9578986A6105A6AD 0x507BC6F7 b1207
	static BOOL IS_BULLET_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7) { return invoke<BOOL>(0x0237E580, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x9D09D8493747CF02 0xE2DB58F7 b1207
	static BOOL IS_BULLET_IN_AREA(float p0, float p1, float p2, float p3, BOOL p4) { return invoke<BOOL>(0x0237E630, p0, p1, p2, p3, p4); } // 0xC652FD308772D79E 0xB54F46CA b1207
	static BOOL IS_BULLET_IN_BOX(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6) { return invoke<BOOL>(0x0237E6C0, p0, p1, p2, p3, p4, p5, p6); } // 0xC128137C52152741 0xAB73ED26 b1207
	static BOOL HAS_BULLET_IMPACTED_IN_AREA(float x, float y, float z, float p3, BOOL p4, BOOL p5) { return invoke<BOOL>(0x0237E9C0, x, y, z, p3, p4, p5); } // 0xC153E5BCCF411814 0x902BC7D9 b1207
	static BOOL HAS_BULLET_IMPACTED_IN_BOX(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7) { return invoke<BOOL>(0x0237EAE0, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x3B6A4C05FB2B33AC 0x2C2618CC b1207
	static Any _0x7A76104CC2CC69E8(Entity entity, int p1, int p2) { return invoke<Any>(0x0237ECB0, entity, p1, p2); } // 0x7A76104CC2CC69E8 b1207
	static Any _0xDC416CA762BC4F43(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x0237EE30, p0, p1, p2, p3, p4, p5); } // 0xDC416CA762BC4F43 b1207
	static Any _0x970339EFA4FDE518(Any p0, Any p1, Any p2) { return invoke<Any>(0x0237EF60, p0, p1, p2); } // 0x970339EFA4FDE518 b1207
	static BOOL IS_ORBIS_VERSION() { return invoke<BOOL>(0x0237F080); } // 0x88CFAE250D3E0C71 0x40282018 b1207
	static BOOL IS_DURANGO_VERSION() { return invoke<BOOL>(0x0237F090); } // 0xD1CCC2A2639D325F 0x46FB06A5 b1207
	static BOOL IS_PC_VERSION() { return invoke<BOOL>(0x0237F0A0); } // 0xB0FB6CFAA5A1C833 0x4D5D9EE3 b1207
	static BOOL IS_STADIA_VERSION() { return invoke<BOOL>(0x0237F0B0); } // 0x268AB8420A9E4ED7 b1207
	static BOOL IS_STRING_NULL(const char* string) { return invoke<BOOL>(0x0237F0C0, string); } // 0x602102324604D96B 0x8E71E00F b1207
	static BOOL IS_STRING_NULL_OR_EMPTY(const char* string) { return invoke<BOOL>(0x0237F0E0, string); } // 0x2CF12F9ACF18F048 0x42E9F2CA b1207
	static BOOL IS_STRING_NULL_OR_EMPTY_OR_SPACES(const char* string) { return invoke<BOOL>(0x0237F110, string); } // 0x375F5870A7B8BEC1 b1207
	static BOOL ARE_STRINGS_EQUAL(const char* string1, const char* string2) { return invoke<BOOL>(0x0237F1B0, string1, string2); } // 0xD3852F22AB713A1F 0x877C0BC5 b1207
	static BOOL _DOES_STRING_EXIST_IN_STRING(const char* string1, const char* string2) { return invoke<BOOL>(0x0237F1F0, string1, string2); } // 0x9382D5D43D2AA6FF b1207
	static void _0x3C3C7B1B5EC08764() { invoke<Void>(0x0237F220); } // 0x3C3C7B1B5EC08764 b1207
	static Any _0x94E8CA3DEE952789(Any p0, Any p1) { return invoke<Any>(0x0237F230, p0, p1); } // 0x94E8CA3DEE952789 b1207
	static Any _0x5B4A8121A47D844D(Any p0) { return invoke<Any>(0x0237F2F0, p0); } // 0x5B4A8121A47D844D b1207
	static BOOL STRING_TO_INT(const char* string, int* outInteger) { return invoke<BOOL>(0x0237F320, string, outInteger); } // 0xF2DD2298B3AF23E2 0x590A8160 b1207
	static void _INT_TO_STRING(int value, const char* format, char* buffer) { invoke<Void>(0x0237F3E0, value, format, buffer); } // 0xCF11C0CEB40C401B b1207
	static void _0x74ACA66484CEBAF0(Any p0) { invoke<Void>(0x0237F400, p0); } // 0x74ACA66484CEBAF0 b1207
	static void _0x49C44FE78A135A1D(Any p0) { invoke<Void>(0x0237F660, p0); } // 0x49C44FE78A135A1D b1207
	static void _0xF650DCF5D6F312C1(Any p0) { invoke<Void>(0x0237F8C0, p0); } // 0xF650DCF5D6F312C1 b1232
	static const char* _GET_STRING_FROM_FLOAT(float value, int digits) { return invoke<const char*>(0x0237FB20, value, digits); } // 0x2B6846401D68E563 b1207
	static const char* _GET_STRING_FROM_VECTOR(float x, float y, float z) { return invoke<const char*>(0x0237FB60, x, y, z); } // 0x6C4DBF553885F9EB b1207
	static const char* _GET_STRING_FROM_BOOL(BOOL value) { return invoke<const char*>(0x0237FBB0, value); } // 0xF216F74101968DB0 b1207
	template<typename... Args> static const char* VAR_STRING(int flags, Args... args) { return invoke<const char*>(0x023590B0, flags, args...); } // 0xFA925AC00EB830B9 b1207
	static const char* _CREATE_COLOR_STRING(int rgb) { return invoke<const char*>(0x0237FBD0, rgb); } // 0xBCC2CFADEA1AEA6C b1207
	static void SET_BITS_IN_RANGE(int* var, int rangeStart, int rangeEnd, int p3) { invoke<Void>(0x0237FC10, var, rangeStart, rangeEnd, p3); } // 0x324DC1CEF57F31E6 0x32094719 b1207
	static int GET_BITS_IN_RANGE(int var, int rangeStart, int rangeEnd) { return invoke<int>(0x0237FC60, var, rangeStart, rangeEnd); } // 0x68E1352AF48F905D 0xCA03A1E5 b1207
	static void SET_GAME_PAUSED(BOOL toggle) { invoke<Void>(0x0237FCA0, toggle); } // 0xFAEC088D28B1DE4A 0x8230FF6C b1207
	static void SET_THIS_SCRIPT_CAN_BE_PAUSED(BOOL toggle) { invoke<Void>(0x0237FD50, toggle); } // 0x3215376E79F6EA18 0xA0C3CE29 b1207
	static void SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(BOOL toggle) { invoke<Void>(0x0237FD70, toggle); } // 0x8ABD939C2E5D00ED 0xD06F1720 b1207
	static void SET_CHEAT_ACTIVE(int cheatId) { invoke<Void>(0x0237FD90, cheatId); } // 0xD4958E8CF0DE0DD0 b1207
	static void _0xB711EB4BC8D06013() { invoke<Void>(0x0237FE40); } // 0xB711EB4BC8D06013 b1207
	static void POPULATE_NOW() { invoke<Void>(0x0237FE50); } // 0xEA6DC3A8ADD2005F 0x72C20700 b1207
	static BOOL IS_GAME_SESSION_STATE_MACHINE_IDLE() { return invoke<BOOL>(0x0237FF00); } // 0xF9E7DBB39080640B b1207
	static BOOL _QUEUE_SAVEGAME_OPERATION(int p0) { return invoke<BOOL>(0x0237FF30, p0); } // 0x279B0696DA4657EB b1207
	static int _GET_STATUS_OF_SAVEGAME_OPERATION(int p0) { return invoke<int>(0x02380050, p0); } // 0x1B065A2BF7953815 b1207
	static Any _0x6C7B68D3CE60E8DE(Any p0) { return invoke<Any>(0x023800A0, p0); } // 0x6C7B68D3CE60E8DE b1207
	static Any _0x627B68D9CE6EE8DE(Any p0) { return invoke<Any>(0x023800D0, p0); } // 0x627B68D9CE6EE8DE b1207
	static Any _0x7CF96F1250EF3221(Any p0) { return invoke<Any>(0x02380110, p0); } // 0x7CF96F1250EF3221 b1207
	static void _COPY_MEMORY(Any* dst, Any* src, int size) { invoke<Void>(0x023801B0, dst, src, size); } // 0xF7AC7DC0DEE7C9BE b1207
	static void ENABLE_DISPATCH_SERVICE(int dispatchService, BOOL toggle) { invoke<Void>(0x023801D0, dispatchService, toggle); } // 0x50E52637EF70EF77 0x0B710A51 b1207
	static void BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(int dispatchService, BOOL toggle) { invoke<Void>(0x02380200, dispatchService, toggle); } // 0x66947E61A44DE2C6 0xE0F0684F b1207
	static BOOL CREATE_INCIDENT(int dispatchService, float x, float y, float z, int numUnits, float radius, int* outIncidentID, Any p7, Any p8) { return invoke<BOOL>(0x02380230, dispatchService, x, y, z, numUnits, radius, outIncidentID, p7, p8); } // 0x3F892CAF67444AE7 0xFC5FF7B3 b1207
	static BOOL _CREATE_INCIDENT_WITH_ENTITIES(int dispatchService, float x, float y, float z, ItemSet itemSet, float radius, int* outIncidentID) { return invoke<BOOL>(0x02380280, dispatchService, x, y, z, itemSet, radius, outIncidentID); } // 0xAB3D3F45436DB1D8 b1207
	static void DELETE_INCIDENT(int incidentId) { invoke<Void>(0x023802C0, incidentId); } // 0x5CFD0F0D6AAE0AEE 0x212BD0DC b1207
	static BOOL IS_INCIDENT_VALID(int incidentId) { return invoke<BOOL>(0x023802F0, incidentId); } // 0x39F2B1BAD412246A 0x31FD0BA4 b1207
	static void _SET_INCIDENT_UNK(int incidentId) { invoke<Void>(0x02380330, incidentId); } // 0x9617B6E5F6537B63 b1207
	static int ADD_POP_MULTIPLIER_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float p6, float p7, BOOL p8, BOOL p9) { return invoke<int>(0x02380400, x1, y1, z1, x2, y2, z2, p6, p7, p8, p9); } // 0x5EBDA1A3B8CB5EF7 0x42BF09B3 b1207
	static BOOL DOES_POP_MULTIPLIER_AREA_EXIST(int id) { return invoke<BOOL>(0x023806F0, id); } // 0x03BA619C81A646B3 0xE933B34A b1207
	static void REMOVE_POP_MULTIPLIER_AREA(int id, BOOL p1) { invoke<Void>(0x02380730, id, p1); } // 0x88CB484364EFB37A 0xFBDBE374 b1207
	static Any _0x3233C4EC0514C7EC(Volume volume, float pedDensity, float vehicleDensity, int p3, int p4) { return invoke<Any>(0x02380750, volume, pedDensity, vehicleDensity, p3, p4); } // 0x3233C4EC0514C7EC b1207
	static BOOL _DOES_POP_MULTIPLIER_AREA_EXIST_FOR_VOLUME(Volume volume) { return invoke<BOOL>(0x023808B0, volume); } // 0x39D6DACE323A20B6 b1207
	static void _REMOVE_POP_MULTIPLIER_AREA_FOR_VOLUME(Volume volume, int p1) { invoke<Void>(0x02380960, volume, p1); } // 0xBD090F5B1DB82189 b1207
	static void _0xF569E33FB72ED28E() { invoke<Void>(0x02380980); } // 0xF569E33FB72ED28E b1207
	static void RESET_DISPATCH_IDEAL_SPAWN_DISTANCE() { invoke<Void>(0x02380990); } // 0xC7817264BC4B6377 0xDA65ECAA b1207
	static void SET_DISPATCH_IDEAL_SPAWN_DISTANCE(float fIdealSpawnDistance) { invoke<Void>(0x023809A0, fIdealSpawnDistance); } // 0xEAB6823B82FBD283 0x6283BE32 b1207
	static void _RESET_DISPATCH_MIN_SPAWN_DISTANCE() { invoke<Void>(0x023809B0); } // 0x96498D922D8D0D0A b1207
	static void _SET_DISPATCH_MIN_SPAWN_DISTANCE(float minSpawnDistance) { invoke<Void>(0x023809C0, minSpawnDistance); } // 0x27A1B170AA8AF84C b1207
	static void _RESET_DISPATCH_MAX_SPAWN_DISTANCE() { invoke<Void>(0x023809D0); } // 0x54EC7B6BC72BAD69 b1207
	static void _SET_DISPATCH_MAX_SPAWN_DISTANCE(float maxSpawnDistance) { invoke<Void>(0x023809E0, maxSpawnDistance); } // 0x89314FB3463E28DE b1207
	static void _0x4B0501A468B749F8() { invoke<Void>(0x023809F0); } // 0x4B0501A468B749F8 b1207
	static void _0x6BCF7B5CD338281A(Any p0, Any p1, Any p2) { invoke<Void>(0x02380A00, p0, p1, p2); } // 0x6BCF7B5CD338281A b1207
	static Any _ADD_DISPATCH_SPAWN_BLOCKING_AREA(Volume volume) { return invoke<Any>(0x02380A30, volume); } // 0xA2D5A26208421426 b1207
	static void REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(Any p0) { invoke<Void>(0x02380B60, p0); } // 0x49F751F6868DDC5B 0xA8D2FB92 b1207
	static void _0xEF42F56F69877125() { invoke<Void>(0x02380B90); } // 0xEF42F56F69877125 0xE0C9307E b1207
	static void ADD_TACTICAL_NAV_MESH_POINT(float x, float y, float z, int p3) { invoke<Void>(0x02380BF0, x, y, z, p3); } // 0xE4EE55E63FA9AF45 0x24A4E0B2 b1207
	static void CLEAR_TACTICAL_NAV_MESH_POINTS() { invoke<Void>(0x02380CB0); } // 0xD93B6516C6878267 0x66C3C59C b1207
	static void DISPLAY_ONSCREEN_KEYBOARD(int textType, const char* windowTitle, const char* p2, const char* defaultText, const char* defaultConcat1, const char* defaultConcat2, const char* defaultConcat3, int maxInputLength) { invoke<Void>(0x02380D30, textType, windowTitle, p2, defaultText, defaultConcat1, defaultConcat2, defaultConcat3, maxInputLength); } // 0x044131118D8DB3CD 0xAD99F2CE b1207
	static int UPDATE_ONSCREEN_KEYBOARD() { return invoke<int>(0x02380D70); } // 0x37DF360F235A3893 0x23D0A1CE b1207
	static const char* GET_ONSCREEN_KEYBOARD_RESULT() { return invoke<const char*>(0x02380D90); } // 0xAFB4CF58A4A292B1 0x44828FB3 b1207
	static void _CANCEL_ONSCREEN_KEYBOARD() { invoke<Void>(0x02380DC0); } // 0x58A39BE597CE99CD 0x196444BB b1207
	static void NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(int p0) { invoke<Void>(0x02380DD0, p0); } // 0x5CB71EAA1429A358 0x3301EA47 b1207
	static void ACTION_MANAGER_ENABLE_ACTION(Hash hash, BOOL enable) { invoke<Void>(0x02380DE0, hash, enable); } // 0x7ACF124C12A2B045 0x42B484ED b1207
	static Any _0xFD0759658268FD8E(Any p0) { return invoke<Any>(0x02380E80, p0); } // 0xFD0759658268FD8E b1207
	static int _GET_REAL_GAME_TIMER_IN_SECONDS() { return invoke<int>(0x02380F10); } // 0x2E036F0480B8BF02 b1207
	static void SET_SUPER_JUMP_THIS_FRAME(Player player) { invoke<Void>(0x02380F30, player); } // 0xB3E9BE963F10C445 0x86745EF3 b1207
	static void SCRIPT_RACE_INIT(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02380F40, p0, p1, p2, p3); } // 0x8AE059F47158417E 0x2D33F15A b1207
	static void SCRIPT_RACE_SHUTDOWN() { invoke<Void>(0x02380F60); } // 0x334CE0DA4FAF330C 0xDF99925C b1207
	static void _0xBA62B4D80FA66BD6(Any iPart, Any iCheckpoint, Any iLap, Any iTime) { invoke<Void>(0x02381060, iPart, iCheckpoint, iLap, iTime); } // 0xBA62B4D80FA66BD6 0xA27F4472 b1207
	static BOOL SCRIPT_RACE_GET_PLAYER_SPLIT_TIME(Any p0, Any* p1, Any* p2) { return invoke<BOOL>(0x02381140, p0, p1, p2); } // 0x769E848C66E3C2BB 0x07FF553F b1207
	static void _START_BENCHMARK_RECORDING() { invoke<Void>(0x02381170); } // 0x29D1F6DF864A094E b1207
	static void _STOP_BENCHMARK_RECORDING() { invoke<Void>(0x02381180); } // 0xB89AEC71AFF2B599 b1207
	static void _RESET_BENCHMARK_RECORDING() { invoke<Void>(0x02381190); } // 0xECBABD0307FB216F b1207
	static void _SAVE_BENCHMARK_RECORDING() { invoke<Void>(0x023811A0); } // 0xF4743E2ECC02B3DA b1207
	static BOOL _UI_IS_SINGLEPLAYER_PAUSE_MENU_ACTIVE() { return invoke<BOOL>(0x023811B0); } // 0x4FFA0386A6216113 b1207
	static int _GET_BENCHMARK_ITERATIONS_FROM_COMMAND_LINE() { return invoke<int>(0x023811C0); } // 0x22FC52CF470CC98D b1207
	static int _GET_BENCHMARK_PASS_FROM_COMMAND_LINE() { return invoke<int>(0x023811D0); } // 0x9297DACF3A2CDFF7 b1207
	static Any _0xDC057B86FC157031() { return invoke<Any>(0x023811E0); } // 0xDC057B86FC157031 b1207
	static void _0x9A252AA23D7098F2() { invoke<Void>(0x023811F0); } // 0x9A252AA23D7098F2 b1207
	static BOOL _DOES_ITEM_HAVE_VALID_BASE(ScrHandle item) { return invoke<BOOL>(0x02381220, item); } // 0xBDC6E364C9C78178 b1207
	static int _GET_ITEM_TYPE(ScrHandle handle) { return invoke<int>(0x023812C0, handle); } // 0xDC8D2FF478DF9553 b1207
	static BOOL _IS_BASE_A_PERSISTENT_CHARACTER(ScrHandle handle) { return invoke<BOOL>(0x023812E0, handle); } // 0x716F17F8A0419F95 b1207
	static BOOL _IS_BASE_A_COVER_POINT(ScrHandle handle) { return invoke<BOOL>(0x02381380, handle); } // 0xFEC1D4B5C82C176F b1207
	static void _0x553D67295DDD2309(Entity entity) { invoke<Void>(0x02381420, entity); } // 0x553D67295DDD2309 b1207
	static Any _0xF18AF483DF70BBDE(Any p0) { return invoke<Any>(0x02381470, p0); } // 0xF18AF483DF70BBDE b1207
	static Entity _GET_ENTITY_FROM_ITEM(ScrHandle item) { return invoke<Entity>(0x02381520, item); } // 0xEE04C0AFD4EFAF0E b1207
	static Ped _GET_PED_FROM_INDEXED_ITEM(ScrHandle item) { return invoke<Ped>(0x023815D0, item); } // 0x3FFB15534067DCD4 b1207
	static Vehicle _GET_VEHICLE_FROM_INDEXED_ITEM(ScrHandle item) { return invoke<Vehicle>(0x02381680, item); } // 0xE578C8AE173719B3 b1207
	static Object _GET_OBJECT_FROM_INDEXED_ITEM(ScrHandle item) { return invoke<Object>(0x02381730, item); } // 0x18013392501CE5DC b1207
	static Any _0x33982467B1E349EF(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0x023817E0, p0, p1, p2, p3, p4, p5, p6); } // 0x33982467B1E349EF b1207
	static Any _0x8314FC2013ECE2DA(Any p0, Any p1, Any p2) { return invoke<Any>(0x023818F0, p0, p1, p2); } // 0x8314FC2013ECE2DA b1207
	static void _0x4D5C9CC7E7E23E09() { invoke<Void>(0x023819F0); } // 0x4D5C9CC7E7E23E09 b1207
	static BOOL REGISTER_INTERACTION_LOCKON_PROMPT(Entity entity, const char* p1, float p2, float p3, int p4, float p5, float p6, Prompt prompt, BOOL p8, int p9) { return invoke<BOOL>(0x02381A00, entity, p1, p2, p3, p4, p5, p6, prompt, p8, p9); } // 0x870708A6E147A9AD b1207
	static BOOL _UNREGISTER_INTERACTION_LOCKON_PROMPT(Entity entity) { return invoke<BOOL>(0x02381A50, entity); } // 0xE98D55C5983F2509 b1207
	static void _0xFC6ECB9170145ECE() { invoke<Void>(0x02381A80); } // 0xFC6ECB9170145ECE b1207
	static Any _0x35165C658077CD0B() { return invoke<Any>(0x02381AE0); } // 0x35165C658077CD0B b1207
	static BOOL _0x4B101DBCC9482F2D(Ped ped) { return invoke<BOOL>(0x02381AF0, ped); } // 0x4B101DBCC9482F2D b1207
	static BOOL _IS_MISSION_CREATOR_ACTIVE() { return invoke<BOOL>(0x02381B20); } // 0xF236C84C6ADFCB2F b1207
	static void _0xA3A8926951471C82() { invoke<Void>(0x02381B30); } // 0xA3A8926951471C82 b1207
	static void _0x88BC5F4AEF77FC4E(Any p0, Any p1) { invoke<Void>(0x02381B40, p0, p1); } // 0x88BC5F4AEF77FC4E b1207
	static Any _0xFDF38E2B711BF78E(Any p0, Any p1) { return invoke<Any>(0x02381B50, p0, p1); } // 0xFDF38E2B711BF78E b1207
	static void _0xEB946B9E579729AD(Ped ped, Any p1) { invoke<Void>(0x02381B80, ped, p1); } // 0xEB946B9E579729AD b1207
	static void _0x6AC4AF46A6B8DFB2(Any p0) { invoke<Void>(0x02381C10, p0); } // 0x6AC4AF46A6B8DFB2 b1207
	static Any _0x8DB104CCEBCD58C5(Any p0, Any p1) { return invoke<Any>(0x02381C20, p0, p1); } // 0x8DB104CCEBCD58C5 b1207
	static void _0x68319452C5064ABA(Any p0, Any p1) { invoke<Void>(0x02381C50, p0, p1); } // 0x68319452C5064ABA b1207
	static void _0xDE2C3B74D2B3705C(Any p0, Any p1) { invoke<Void>(0x02381CA0, p0, p1); } // 0xDE2C3B74D2B3705C b1207
	static void _0x49F3241C28EBBFBC(Any p0) { invoke<Void>(0x02381D20, p0); } // 0x49F3241C28EBBFBC b1207
	static void _0x183672FE838A661B(Any p0) { invoke<Void>(0x02381D30, p0); } // 0x183672FE838A661B b1207
	static void _0x38C0C9CAE1544500(Any p0) { invoke<Void>(0x02381E40, p0); } // 0x38C0C9CAE1544500 b1207
	static void _0x154340E87D8CC178(Any p0) { invoke<Void>(0x02381ED0, p0); } // 0x154340E87D8CC178 b1207
	static void _0x94FCADCF9F0C368E(Any p0) { invoke<Void>(0x02381FB0, p0); } // 0x94FCADCF9F0C368E b1207
	static Any _0x0D0AE5081F88CFE1(Any p0) { return invoke<Any>(0x02382000, p0); } // 0x0D0AE5081F88CFE1 b1207
	static void _0xAF3A84C7DE6A1DC5(Any p0, Any p1) { invoke<Void>(0x02382050, p0, p1); } // 0xAF3A84C7DE6A1DC5 b1207
	static void _0x48E4D50F87A96AA5(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x023821A0, p0, p1, p2, p3, p4, p5); } // 0x48E4D50F87A96AA5 b1207
	static Any _0xB1F6665AA54DCD5C(Any p0) { return invoke<Any>(0x023821D0, p0); } // 0xB1F6665AA54DCD5C b1207
	static Any _0x8BB99B85444544D9(Any p0, Any p1) { return invoke<Any>(0x02382240, p0, p1); } // 0x8BB99B85444544D9 b1207
	static Any _0x6F02B5E50511721E(Any p0) { return invoke<Any>(0x023824F0, p0); } // 0x6F02B5E50511721E b1207
	static Any _0xCC1BAF72D571DB8D(Any p0, Any p1, Any p2) { return invoke<Any>(0x02382620, p0, p1, p2); } // 0xCC1BAF72D571DB8D b1207
	static BOOL _IS_PED_DECOMPOSED(Ped ped) { return invoke<BOOL>(0x02382700, ped); } // 0x5170DDA6D63ACAAA b1207
	static void SET_PED_DECOMPOSED(Ped ped, BOOL toggle) { invoke<Void>(0x023827E0, ped, toggle); } // 0x674B90BE1115846D b1207
	static void _0xAB26DEEE120FD3FD(Any p0, Any p1) { invoke<Void>(0x023828D0, p0, p1); } // 0xAB26DEEE120FD3FD b1207
	static void _0x082C043C7AFC3747(int compositeId, BOOL p1) { invoke<Void>(0x023829F0, compositeId, p1); } // 0x082C043C7AFC3747 b1207
	static void DISABLE_LOOTING_COMPOSITE_LOOTABLE_THIS_FRAME(int compositeId, BOOL p1) { invoke<Void>(0x02382AC0, compositeId, p1); } // 0x40D72189F46D2E15 b1207
	static void _0xBB282CF5D2333FB8(Any p0, Any p1) { invoke<Void>(0x02382B90, p0, p1); } // 0xBB282CF5D2333FB8 b1207
	static void _0xAD44856A1CD29635(Any p0, Any p1, Any p2) { invoke<Void>(0x02382BA0, p0, p1, p2); } // 0xAD44856A1CD29635 b1207
	static Any _0x38C2BF94D15F464D(Any p0) { return invoke<Any>(0x02382BC0, p0); } // 0x38C2BF94D15F464D b1207
	static void _0x3A87FDA8F1B6CDFB(Any p0, Any p1, Any p2) { invoke<Void>(0x02382CE0, p0, p1, p2); } // 0x3A87FDA8F1B6CDFB b1207
	static void _0x4647842FE8F31C1E(Any p0, Any p1) { invoke<Void>(0x02382EB0, p0, p1); } // 0x4647842FE8F31C1E b1207
	static BOOL _GET_LOOTING_EVENT_HAS_FIRED(Ped ped, const char* eventName) { return invoke<BOOL>(0x02383060, ped, eventName); } // 0xF9B91C5129EABC08 b1207
	static void _0x9B47971234169990(Ped ped, Any item) { invoke<Void>(0x023831B0, ped, item); } // 0x9B47971234169990 b1207
	static void _0x96282005C5C6801F(Any p0, Any p1) { invoke<Void>(0x02383280, p0, p1); } // 0x96282005C5C6801F b1311
	static void _0xF63FA29D4A9ACA86(Any p0, Any p1) { invoke<Void>(0x023833A0, p0, p1); } // 0xF63FA29D4A9ACA86 b1207
	static void _0x8C0F6A3D7236DEEB(Any p0, Any p1) { invoke<Void>(0x023833B0, p0, p1); } // 0x8C0F6A3D7236DEEB b1207
	static void _0x7FA58CED69405F9A(Any p0, Any p1) { invoke<Void>(0x023833C0, p0, p1); } // 0x7FA58CED69405F9A b1207
	static void _0xA08111B053D84B4D(Any p0) { invoke<Void>(0x02383670, p0); } // 0xA08111B053D84B4D b1207
	static BOOL _IS_GLOBAL_BLOCK_VALID(int index) { return invoke<BOOL>(0x02383780, index); } // 0xACB7E1418A8B6E32 b1207
	static void _SET_GLOBAL_BLOCK_IS_LOADED(int index, BOOL toggle) { invoke<Void>(0x023837C0, index, toggle); } // 0xE97240065406CB80 b1207
	static BOOL GAME_FRAMEWORK_MANAGER_INIT(Hash transitionMode) { return invoke<BOOL>(0x023837E0, transitionMode); } // 0x4CABE596D632E4B0 b1207
	static void _GAME_FRAMEWORK_MANAGER_SHUTDOWN() { invoke<Void>(0x02383810); } // 0xAFF2FD8ADD927585 b1207
	static Hash _GAME_FRAMEWORK_MANAGER_GET_MODE() { return invoke<Hash>(0x02383890); } // 0xFAED234C7F53ABEB b1207
	static Any _0x36040772DF5E59A0() { return invoke<Any>(0x023838B0); } // 0x36040772DF5E59A0 b1355
	static Any _0x0358B8A41916C613(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x02383A30, p0, p1, p2, p3); } // 0x0358B8A41916C613 b1207
	static void _SET_GAME_LOGIC_PAUSED() { invoke<Void>(0x02383A70); } // 0x550F05CFFBD63C8C b1232
	static void STOP_CURRENT_LOADING_PROGRESS_TIMER() { invoke<Void>(0x02383A80); } // 0xA565FAC215CBC77D b1207
	static void _0xDBDA48EC456ED908() { invoke<Void>(0x02383AD0); } // 0xDBDA48EC456ED908 b1436
}

namespace MISSIONDATA
{
	static BOOL MISSIONDATA_IS_VALID(Any p0) { return invoke<BOOL>(0xDEADBEEF, p0); } // 0xE54DC27571D5EDC5 b1207
	static Any MISSIONDATA_GET_CATAGORY(Any p0) { return invoke<Any>(0x02386950, p0); } // 0x57E798B65C45EE17 b1232
	static Any MISSIONDATA_GET_TEXTURE_NAME(Any p0) { return invoke<Any>(0xDEADBEEF, p0); } // 0x57E798B56C45EE15 b1207
	static Any MISSIONDATA_GET_TEXTURE_TXD(Any p0) { return invoke<Any>(0xDEADBEEF, p0); } // 0x57E798B57C45EE16 b1207
	static Any MISSIONDATA_WAS_COMPLETED(Any p0) { return invoke<Any>(0x02386B30, p0); } // 0xE54DC27571D5EDC4 b1207
	static Any MISSIONDATA_GET_RATING(Any p0) { return invoke<Any>(0x023869F0, p0); } // 0x57E798B54C45EE1A b1207
	static void _0xE824CE7D13FCB300(Any p0, Any p1) { invoke<Void>(0x02386C90, p0, p1); } // 0xE824CE7D13FCB300 b1207
	static Any MISSIONDATA_IS_REQUIRED_STORY_MISSION(Any p0) { return invoke<Any>(0xDEADBEEF, p0); } // 0xE824CE7D13FCB35E b1207
	static void _0xE4E2C581F127A11C(Any p0, Any p1) { invoke<Void>(0x02386D90, p0, p1); } // 0xE4E2C581F127A11C b1207
	static int MISSIONDATA_GET_REPLAY_STATE(Any p0) { return invoke<int>(0x02386DF0, p0); } // 0x8C32D86E9556ED86 b1207
	static void MISSIONDATA_SET_RATING_SCORES(Any p0, int p1, int p2, int p3) { invoke<Void>(0x02386EE0, p0, p1, p2, p3); } // 0x12F65317708749A5 b1207
	static void MISSIONDATA_SET_HIGH_SCORE(Any p0, int p1) { invoke<Void>(0x02386FD0, p0, p1); } // 0x3A04F0169DA87A9D b1207
	static int MISSIONDATA_GET_HIGH_SCORE(Any p0) { return invoke<int>(0x023870C0, p0); } // 0x9AABABF8313C3516 b1207
	static Any _0xE145864DECC34219(Any p0) { return invoke<Any>(0x023871B0, p0); } // 0xE145864DECC34219 b1232
	static void MISSIONDATA_SET_REPLAY_LOCKED_FOR_CATEGORY(Hash p0, BOOL locked) { invoke<Void>(0x023872A0, p0, locked); } // 0x957A830C9B4B99EA b1232
	static void _MISSIONDATA_TIMECYCLE_BOX_SET_MODIFIER(const char* timecycleName) { invoke<Void>(0x02387380, timecycleName); } // 0x25855B1574BF8CD5 b1207
	static void _MISSIONDATA_TIMECYCLE_BOX_DELETE() { invoke<Void>(0x023873B0); } // 0x7F89E15A8FB8DE97 b1207
	static BOOL _MISSIONDATA_TIMECYCLE_BOX_EXISTS() { return invoke<BOOL>(0x02387430); } // 0x7E8F86A4FA33033C b1207
}

namespace MONEY
{
	static int _MONEY_GET_CASH_BALANCE() { return invoke<int>(0x02389180); } // 0x0C02DABFA3B98176 b1207
	static BOOL _MONEY_DECREMENT_CASH_BALANCE(int amount) { return invoke<BOOL>(0x023891B0, amount); } // 0x466BC8769CF26A7A b1207
	static BOOL _MONEY_INCREMENT_CASH_BALANCE(int amount, Hash p1) { return invoke<BOOL>(0x02389220, amount, p1); } // 0xBC3422DC91667621 b1207
	static const char* _NETWORK_GET_STRING_CASH_BALANCE() { return invoke<const char*>(0x02389280); } // 0x282D36FF103D78DF b1207
	static BOOL _NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(int cashBalance, int goldBarBalance) { return invoke<BOOL>(0x023892C0, cashBalance, goldBarBalance); } // 0xAEC5F0119867E457 b1207
	static const char* _0xA46FD001D1BE896C() { return invoke<const char*>(0x02389370); } // 0xA46FD001D1BE896C b1207
	static BOOL _0x07AD9E43FD478527(Any p0, Any p1) { return invoke<BOOL>(0x02389470, p0, p1); } // 0x07AD9E43FD478527 b1207
	static int _NETWORK_GET_CASH_BALANCE() { return invoke<int>(0x023894A0); } // 0x8A67120DBC299525 b1207
}

namespace NETSHOPPING
{
	static BOOL CASHINVENTORY_INIT_SESSION_STATUS(int* p0, int* p1) { return invoke<BOOL>(0x023923A0, p0, p1); } // 0xC019112F8995DC1C b1207
	static BOOL _CASHINVENTORY_IS_SESSION_READY() { return invoke<BOOL>(0x023924A0); } // 0xFCC24220FDDAC929 b1207
	static BOOL CASHINVENTORY_IS_CONNECTION_FAULTED() { return invoke<BOOL>(0x02392530); } // 0x6CE9FB6332B5E46E b1207
	static BOOL _CASHINVENTORY_INIT_SESSION_IS_FAULTED() { return invoke<BOOL>(0x02392550); } // 0xD1CE92D1D9BE170A b1207
	static BOOL _CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(Hash actionHash, int* id, Any* item, int p3) { return invoke<BOOL>(0x02392610, actionHash, id, item, p3); } // 0xFFEA09CCEC4AF32F b1207
	static BOOL _CASHINVENTORY_TRANSACTION_START(int* id, Hash type, Hash actionHash) { return invoke<BOOL>(0x02392640, id, type, actionHash); } // 0xF039EC27F4490E96 b1207
	static BOOL _CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(int id) { return invoke<BOOL>(0x02392670, id); } // 0x52A226ADF4A270D2 b1207
	static BOOL _CASHINVENTORY_TRANSACTION_DELETE(int id) { return invoke<BOOL>(0x023926B0, id); } // 0x59EF5D516E2D96B9 b1207
	static Any _CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(Any p0, Any p1) { return invoke<Any>(0x02392710, p0, p1); } // 0x6C9F12700BCE69F4 b1207
	static Any _0x38640A8C2DEF011B(Any p0) { return invoke<Any>(0x02392740, p0); } // 0x38640A8C2DEF011B b1311
	static Any _0xA3B8D31C13CB4239(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x02392780, p0, p1, p2, p3, p4, p5); } // 0xA3B8D31C13CB4239 b1311
	static BOOL _CASHINVENTORY_TRANSACTION_ADD_AWARD(int id, Hash hash, Any* p2, Any* p3) { return invoke<BOOL>(0x023927C0, id, hash, p2, p3); } // 0x52BDE32F21BA3B6D b1207
	static BOOL _CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(int id, int index, Any* itemInfo) { return invoke<BOOL>(0x023927F0, id, index, itemInfo); } // 0x7616B5F0895C2D99 b1207
	static int _CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(int id) { return invoke<int>(0x02392820, id); } // 0xCF2D04D076847478 b1207
	static Hash _CASHINVENTORY_TRANSACTION_GET_ACTION(int id) { return invoke<Hash>(0x02392870, id); } // 0xBD2D520C51CCFF52 b1207
	static BOOL _CASHINVENTORY_TRANSACTION_CHECKOUT(int id) { return invoke<BOOL>(0x023928B0, id); } // 0x592BC00BF6629BE7 b1207
	static BOOL _CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(int id, int* status) { return invoke<BOOL>(0x02392960, id, status); } // 0x26C008791D066F37 b1207
	static int _0xB6F4557060EF0FB4(int p0, int p1) { return invoke<int>(0x023929D0, p0, p1); } // 0xB6F4557060EF0FB4 b1207
	static BOOL _CASHINVENTORY_TRANSACTION_RESPONSE_GET_ITEM_INFO(int id, int index, Any* itemInfo) { return invoke<BOOL>(0x02392A80, id, index, itemInfo); } // 0x98412398BBE73F61 b1207
	static Any _0xCE54C9ABE6FBC6DB(Any p0) { return invoke<Any>(0x02392B40, p0); } // 0xCE54C9ABE6FBC6DB b1207
	static Any _0xA0B7094629724974(Any p0, Any p1) { return invoke<Any>(0x02392C40, p0, p1); } // 0xA0B7094629724974 b1207
	static BOOL _0x92A32BA29622763F(int id, int index, Any* p2) { return invoke<BOOL>(0x02392C70, id, index, p2); } // 0x92A32BA29622763F b1207
	static Any _0x3FA09DD57B93C0DE(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x02392D60, p0, p1, p2, p3, p4); } // 0x3FA09DD57B93C0DE b1207
	static Any _0xD1555FBC96C88444(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x02392DA0, p0, p1, p2, p3, p4); } // 0xD1555FBC96C88444 b1207
}

namespace NETWORK
{
	static BOOL NETWORK_IS_SIGNED_ONLINE() { return invoke<BOOL>(0x023FF4C0); } // 0x1077788E268557C2 0x6E5BDCE2 b1207
	static int _0x74FB3E29E6D10FA9() { return invoke<int>(0x023FF500); } // 0x74FB3E29E6D10FA9 b1207
	static BOOL NETWORK_HAS_VALID_ROS_CREDENTIALS() { return invoke<BOOL>(0x023FF530); } // 0x85443FF4C328F53B 0x3FB40673 b1207
	static BOOL NETWORK_IS_CLOUD_AVAILABLE() { return invoke<BOOL>(0x023FF550); } // 0x9A4CF4F48AD77302 0xC7FF5AFC b1207
	static BOOL NETWORK_HAS_SOCIAL_CLUB_ACCOUNT() { return invoke<BOOL>(0x023FF580); } // 0x67A5589628E0CFF6 0x66EC713F b1207
	static BOOL NETWORK_IS_HOST() { return invoke<BOOL>(0x023FF5A0); } // 0x8DB296B814EDDA07 0xE46AC10F b1207
	static BOOL NETWORK_HAVE_ONLINE_PRIVILEGES() { return invoke<BOOL>(0x023FF670); } // 0x25CB5A9F37BFD063 0xEF63BFDF b1207
	static BOOL NETWORK_CHECK_USER_CONTENT_PRIVILEGES(int p0) { return invoke<BOOL>(0x023FF6A0, p0); } // 0x595F028698072DD9 0xBB54AA3D b1207
	static BOOL NETWORK_CHECK_COMMUNICATION_PRIVILEGES(int p0) { return invoke<BOOL>(0x023FF6D0, p0); } // 0x83F28CE49FBBFFBA 0xA79E5B05 b1207
	static BOOL NETWORK_CAN_VIEW_GAMER_USER_CONTENT(Any* gamerHandle) { return invoke<BOOL>(0x023FF700, gamerHandle); } // 0x246545C37C27A717 b1207
	static Any _0xF23A6D6C11D8EC15(Any p0) { return invoke<Any>(0x023FF800, p0); } // 0xF23A6D6C11D8EC15 b1207
	static Any _0x3E8CCE6769DB5F34(Any p0) { return invoke<Any>(0x023FF8B0, p0); } // 0x3E8CCE6769DB5F34 b1207
	static void _0x83FE8D7229593017() { invoke<Void>(0x023FF8C0); } // 0x83FE8D7229593017 b1207
	static BOOL NETWORK_IS_PROMOTION_ENABLED() { return invoke<BOOL>(0x023FF8D0); } // 0x8FF6059DA26E688A b1207
	static BOOL NETWORK_IS_CUSTOM_UPSELL_ENABLED() { return invoke<BOOL>(0x023FF900); } // 0x78A9535AF83715C6 b1207
	static BOOL NETWORK_SHOULD_SHOW_PROMOTION_DLG() { return invoke<BOOL>(0x023FF930); } // 0xDA4B1A479C414FB2 b1207
	static void _0xFC6FCF4C03F1BBF6() { invoke<Void>(0x023FF950); } // 0xFC6FCF4C03F1BBF6 b1207
	static Any _0x160F0CE6D76A39C9() { return invoke<Any>(0x023FF960); } // 0x160F0CE6D76A39C9 b1207
	static int NETWORK_GET_PROMOTION_DLG_SEEN_COUNT() { return invoke<int>(0x023FF970); } // 0x2FB53C631A49BE92 b1207
	static void _0xE5FF65CFF5160752() { invoke<Void>(0x023FF9A0); } // 0xE5FF65CFF5160752 b1207
	static BOOL NETWORK_CAN_ACCESS_MULTIPLAYER(int* loadingState) { return invoke<BOOL>(0x023FF9C0, loadingState); } // 0xAF50DA1A3F8B1BA4 0xA520B982 b1207
	static BOOL NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL() { return invoke<BOOL>(0x023FFA20); } // 0x2A8112A974DE1EF6 b1207
	static int _NETWORK_GET_GLOBAL_ENTITY_FLAGS(Entity entity) { return invoke<int>(0x023FFA80, entity); } // 0xDD7806FD0543BC3D b1207
	static void _0xA95470DA137587F5(Any p0) { invoke<Void>(0x023FFB50, p0); } // 0xA95470DA137587F5 b1207
	static Any _0xBB697756309D77EE(Any p0) { return invoke<Any>(0x023FFB80, p0); } // 0xBB697756309D77EE b1207
	static BOOL _NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT() { return invoke<BOOL>(0x023FFBD0); } // 0xDD73C9838CE7181D b1207
	static BOOL NETWORK_SET_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT(BOOL completed) { return invoke<BOOL>(0x023FFC90, completed); } // 0x2C5BD9A43987AA27 b1207
	static Any _0xD7D0DF27CB1765B5(Any p0) { return invoke<Any>(0x023FFCC0, p0); } // 0xD7D0DF27CB1765B5 b1355
	static BOOL NETWORK_SET_MP_MISSION_FLAG_ON_CURRENT_SLOT(BOOL enabled, int flagIndex) { return invoke<BOOL>(0x023FFCF0, enabled, flagIndex); } // 0x86FD10251A7118A4 b1207
	static void _0x3E74A687A73979C6(Any p0) { invoke<Void>(0x023FFD20, p0); } // 0x3E74A687A73979C6 b1207
	static BOOL NETWORK_SESSION_IS_PRIVATE() { return invoke<BOOL>(0x023FFD50); } // 0xCEF70AA5B3F89BA1 0xDB67785D b1207
	static void _NETWORK_SESSION_GET_SESSION_ID(Any* sessionId) { invoke<Void>(0x023FFDF0, sessionId); } // 0xE9B356C330C0A806 b1311
	static BOOL _NETWORK_SESSION_ARE_SESSION_IDS_EQUAL(Any* sessionId1, Any* sessionId2) { return invoke<BOOL>(0x023FFE30, sessionId1, sessionId2); } // 0x4DEC5000F7B508F0 b1311
	static BOOL NETWORK_REQUEST_SESSION_SEAMLESS(int flags, int seamlessType, Any* sessionRequestId) { return invoke<BOOL>(0x023FFE60, flags, seamlessType, sessionRequestId); } // 0x04019AE4956D4393 b1207
	static BOOL NETWORK_SESSION_REQUEST_SESSION_SEAMLESS(int flags, int p1, int userHash, Any* sessionRequestId) { return invoke<BOOL>(0x023FFE90, flags, p1, userHash, sessionRequestId); } // 0x2989E131FDE37E97 b1207
	static BOOL NETWORK_SESSION_REQUEST_SESSION_COMPETITIVE(int flags, int matchType, int userHash, int p3, Any* sessionRequestId) { return invoke<BOOL>(0x023FFED0, flags, matchType, userHash, p3, sessionRequestId); } // 0x309BBEBEA8A3986C b1207
	static BOOL NETWORK_SESSION_REQUEST_SESSION_PRIVATE(int flags, int numPlayers, int userHash, Any* sessionRequestId) { return invoke<BOOL>(0x023FFF00, flags, numPlayers, userHash, sessionRequestId); } // 0x39A8EF7AF29A192C b1207
	static BOOL _NETWORK_SESSION_REQUEST_SESSION_ON_CALL(int flags, int category, Any* p2, int userHash, Any* sessionRequestId) { return invoke<BOOL>(0x023FFF30, flags, category, p2, userHash, sessionRequestId); } // 0x23D9C1F2E4098EDC b1207
	static BOOL _NETWORK_SESSION_REQUEST_SESSION_NOMINATED(int flags, int userHash, int p2, Any* sessionRequestId) { return invoke<BOOL>(0x023FFF70, flags, userHash, p2, sessionRequestId); } // 0x4F4672457FF597D1 b1436
	static BOOL NETWORK_SESSION_IS_SESSION_REQUEST_ID_VALID(Any* sessionRequestId) { return invoke<BOOL>(0x023FFFA0, sessionRequestId); } // 0x2F54B146D3EDCE4D b1207
	static int NETWORK_SESSION_GET_SESSION_TYPE() { return invoke<int>(0x023FFFD0); } // 0xF0C0C94B404206FA b1207
	static Any _0x1413B6BF27AB7A95() { return invoke<Any>(0x02400000); } // 0x1413B6BF27AB7A95 b1207
	static BOOL NETWORK_SESSION_IS_ANY_REQUEST_IN_PROGRESS() { return invoke<BOOL>(0x02400080); } // 0xBAFFDE5F953720D9 b1207
	static BOOL _0xAFA14F98327791CE(Any* sessionRequestId) { return invoke<BOOL>(0x02400140, sessionRequestId); } // 0xAFA14F98327791CE b1207
	static BOOL NETWORK_SESSION_IS_REQUEST_IN_PROGRESS(Any* sessionRequestId) { return invoke<BOOL>(0x024001C0, sessionRequestId); } // 0x8FB7C254CFCBF78E b1207
	static BOOL _NETWORK_SESSION_IS_REQUEST_IN_PROGRESS_BY_QUEUE_GROUP(int queueGroup) { return invoke<BOOL>(0x024001F0, queueGroup); } // 0x9E762A595CF88E4A b1207
	static BOOL _NETWORK_SESSION_CANCEL_REQUEST(Any* sessionRequestId) { return invoke<BOOL>(0x02400240, sessionRequestId); } // 0xE72E5C1289BD1F40 b1207
	static void _0xA6F1BAABFF6AD7B9(Any p0) { invoke<Void>(0x024002C0, p0); } // 0xA6F1BAABFF6AD7B9 b1207
	static int _NETWORK_SESSION_GET_SESSION_REQUEST_RESULT(Any* sessionRequestId, int* p1) { return invoke<int>(0x024002F0, sessionRequestId, p1); } // 0x0DD051B1BF4B8BD6 b1207
	static BOOL NETWORK_SESSION_IS_REQUEST_PENDING_TRANSITION(Any* sessionRequestId) { return invoke<BOOL>(0x024003B0, sessionRequestId); } // 0xCCF878D50F8AB10D b1207
	static BOOL _NETWORK_SESSION_TRANSITION_TO_SESSION(Any* sessionRequestId) { return invoke<BOOL>(0x02400440, sessionRequestId); } // 0xF20B18A330E6DB5C b1207
	static BOOL _0x0F44A5C78D114922(Any* sessionRequestId) { return invoke<BOOL>(0x02400470, sessionRequestId); } // 0x0F44A5C78D114922 b1207
	static BOOL NETWORK_SESSION_LEFT_QUEUE_OR_REQUESTED_SESSION(Any* sessionRequestId) { return invoke<BOOL>(0x02400500, sessionRequestId); } // 0xECE6A0C1B59CD8BE b1207
	static BOOL NETWORK_SESSION_LEAVE_SESSION() { return invoke<BOOL>(0x02400590); } // 0x17C21B7319A05047 b1207
	static BOOL NETWORK_SESSION_IS_TRANSITIONING() { return invoke<BOOL>(0x024006C0); } // 0xF2CBC969C4F090C7 b1207
	static void _0xFD4272A137703449() { invoke<Void>(0x024007B0); } // 0xFD4272A137703449 b1207
	static void _NETWORK_SESSION_PLAYLIST_GO_TO_NEXT_CONTENT() { invoke<Void>(0x024009D0); } // 0xBDE605F925B07127 b1436
	static void _NETWORK_SESSION_PLAYLIST_GET_UPCOMING_CONTENT() { invoke<Void>(0x024009F0); } // 0x8F9DB6CD03B42B58 b1436
	static void NETWORK_DISABLE_REALTIME_MULTIPLAYER() { invoke<Void>(0x02400A10); } // 0x236905C700FDB54D b1207
	static void _0x71FA2D1880C48032(Any p0) { invoke<Void>(0x02400A20, p0); } // 0x71FA2D1880C48032 b1207
	static void NETWORK_GET_GLOBAL_MULTIPLAYER_CLOCK(int* hours, int* minutes, int* seconds) { invoke<Void>(0x02400A50, hours, minutes, seconds); } // 0x6D03BFBD643B2A02 0x74E8C53E b1207
	static void NETWORK_CLEAR_CLOCK_TIME_OVERRIDE() { invoke<Void>(0x02400AE0); } // 0xD972DF67326F966E 0xC4AEAF49 b1207
	static BOOL NETWORK_IS_CLOCK_TIME_OVERRIDDEN() { return invoke<BOOL>(0x02400B00); } // 0xD7C95D322FF57522 0x2465296D b1207
	static BOOL NETWORK_GET_GLOBAL_CLOCK(int* hour, int* minute, int* second) { return invoke<BOOL>(0x02400B10, hour, minute, second); } // 0x11A7ADCD629E170F b1207
	static void _NETWORK_CLOCK_TIME_OVERRIDE(int hour, int minute, int second, int transitionTime, BOOL pauseClock) { invoke<Void>(0x02400B80, hour, minute, second, transitionTime, pauseClock); } // 0x669E223E64B1903C b1207
	static void _NETWORK_CLOCK_TIME_OVERRIDE_2(int hour, int minute, int second, int transitionTime, BOOL pauseClock, BOOL clockwise) { invoke<Void>(0x02400BB0, hour, minute, second, transitionTime, pauseClock, clockwise); } // 0xE28C13ECC36FF14E b1207
	static void _NETWORK_CLEAR_CLOCK_OVERRIDE_OVERTIME(int milliseconds) { invoke<Void>(0x02400BF0, milliseconds); } // 0x65F040D91001ED4B b1207
	static Any _0x0E54D4DA6018FF8E() { return invoke<Any>(0x02400C10); } // 0x0E54D4DA6018FF8E b1207
	static BOOL NETWORK_IS_FINDING_GAMERS() { return invoke<BOOL>(0x02400C30); } // 0xDDDF64C91BFCF0AA 0xA6DAA79F b1207
	static BOOL NETWORK_DID_FIND_GAMERS_SUCCEED() { return invoke<BOOL>(0x02400C50); } // 0xF9B83B77929D8863 0xBEDC4503 b1207
	static Any _0x7BCA0A3972708436(Any p0, Any p1) { return invoke<Any>(0x02400C80, p0, p1); } // 0x7BCA0A3972708436 b1207
	static void NETWORK_CLEAR_FOUND_GAMERS() { invoke<Void>(0x02400CB0); } // 0x6D14CCEE1B40381A 0x6AA9A154 b1207
	static BOOL _NETWORK_GET_GAMER_SESSION_FROM_HANDLE(Any* data, int count) { return invoke<BOOL>(0x02400D10, data, count); } // 0xFBDFE1C1356E12E8 b1207
	static BOOL _0x25189F9908E9CD65() { return invoke<BOOL>(0x02400D40); } // 0x25189F9908E9CD65 b1207
	static BOOL NETWORK_DID_GET_GAMER_STATUS_SUCCEED() { return invoke<BOOL>(0x02400D60); } // 0x5AE17C6B0134B7F1 0xC871E745 b1207
	static Any _0xDDAEB478E58F8DEA(Any p0, Any p1) { return invoke<Any>(0x02400D80, p0, p1); } // 0xDDAEB478E58F8DEA b1207
	static void NETWORK_CLEAR_GET_GAMER_STATUS() { invoke<Void>(0x02400DB0); } // 0x86E0660E4F5C956D 0x3F7EDBBD b1207
	static void NETWORK_SET_SCRIPT_READY_FOR_EVENTS(BOOL toggle) { invoke<Void>(0x02400E10, toggle); } // 0x7AC752103856FB20 0xA639DCA2 b1207
	static BOOL _0x316FD416C432C761() { return invoke<BOOL>(0x02400E90); } // 0x316FD416C432C761 b1311
	static BOOL _0x062842D61D0D53FD() { return invoke<BOOL>(0x02400EA0); } // 0x062842D61D0D53FD b1311
	static BOOL NETWORK_IS_GAME_IN_PROGRESS() { return invoke<BOOL>(0x02400EB0); } // 0x10FAB35428CCC9D7 0x09B88E3E b1207
	static BOOL NETWORK_IS_SESSION_ACTIVE() { return invoke<BOOL>(0x02400EC0); } // 0xD83C2B94E7508980 0x715CB8C4 b1207
	static BOOL NETWORK_IS_IN_SESSION() { return invoke<BOOL>(0x02400FD0); } // 0xCA97246103B63917 0x4BC4105E b1207
	static BOOL _NETWORK_IS_IN_SESSION_LOBBY() { return invoke<BOOL>(0x02401040); } // 0xC5196C42DE19F646 b1207
	static BOOL NETWORK_IS_SESSION_STARTED() { return invoke<BOOL>(0x02401050); } // 0x9DE624D2FC4B603F 0x9D854A37 b1207
	static BOOL NETWORK_CAN_SESSION_END() { return invoke<BOOL>(0x024010C0); } // 0x4EEBC3694E49C572 0xE1FCCDBA b1207
	static Any _0x225640E09EFFDC3F() { return invoke<Any>(0x024011D0); } // 0x225640E09EFFDC3F b1207
	static BOOL _NETWORK_SESSION_ADD_SESSION_FLAGS(int flags) { return invoke<BOOL>(0x024012E0, flags); } // 0xE546BDA1B3E288EE b1207
	static BOOL NETWORK_SESSION_REMOVE_SESSION_FLAGS(int flags) { return invoke<BOOL>(0x02401500, flags); } // 0x78335E12DB0BF961 b1207
	static int NETWORK_SESSION_GET_SESSION_FLAGS() { return invoke<int>(0x02401720); } // 0x51F33DBC1A41CBFD b1207
	static BOOL _NETWORK_SESSION_SET_PLAYER_FLAGS(int flags) { return invoke<BOOL>(0x02401910, flags); } // 0x0AE241A4A9ADEEEC b1207
	static BOOL _NETWORK_SESSION_REMOVE_PLAYER_FLAGS(int flags) { return invoke<BOOL>(0x02401A70, flags); } // 0x3215BBE34D3418C5 b1207
	static Player _NETWORK_GET_SESSION_HOST() { return invoke<Player>(0x02401BF0); } // 0x8DC9AA3B508B1A85 b1207
	static Any _0xD3A3C8B9F3BDEF81() { return invoke<Any>(0x02401D70); } // 0xD3A3C8B9F3BDEF81 b1207
	static Any _0x18B94666CF610AEB() { return invoke<Any>(0x02401D90); } // 0x18B94666CF610AEB b1207
	static Any _0x981146E5C9CE9250(Any p0) { return invoke<Any>(0x02401DB0, p0); } // 0x981146E5C9CE9250 b1207
	static Any _0xBF8276E51761F9DA() { return invoke<Any>(0x02401DE0); } // 0xBF8276E51761F9DA b1207
	static Any _0xDCA4A74135E1DEA5(Any p0) { return invoke<Any>(0x02401E10, p0); } // 0xDCA4A74135E1DEA5 b1207
	static BOOL NETWORK_HAS_PENDING_INVITE_FAILURE() { return invoke<BOOL>(0x02401F30); } // 0xD0498AD30E16B6BD b1207
	static Any _0xF23D6475640D29EB(Any p0) { return invoke<Any>(0x02401F40, p0); } // 0xF23D6475640D29EB b1207
	static void _0x704F92B3AF20D857(Any p0) { invoke<Void>(0x02401FD0, p0); } // 0x704F92B3AF20D857 b1207
	static void _0xF342F6BD0A8287D5(Any p0) { invoke<Void>(0x02402000, p0); } // 0xF342F6BD0A8287D5 b1207
	static void _0xD39A72AE5EBD57E5() { invoke<Void>(0x024020C0); } // 0xD39A72AE5EBD57E5 b1207
	static BOOL _NETWORK_SEND_SESSION_INVITE(Any* gamerHandle, const char* contentId, Any* data, int dataSize, int p4, int flags) { return invoke<BOOL>(0x02402120, gamerHandle, contentId, data, dataSize, p4, flags); } // 0xE47001B7CB8B98AE b1207
	static Any _0xD1FFB246F4E088AC(Any p0) { return invoke<Any>(0x02402160, p0); } // 0xD1FFB246F4E088AC b1207
	static Any _0x27B1AE4D8C652F08(Any p0) { return invoke<Any>(0x024021B0, p0); } // 0x27B1AE4D8C652F08 b1207
	static Any _0x6C27442A225A241A(Any p0) { return invoke<Any>(0x024021D0, p0); } // 0x6C27442A225A241A b1207
	static Any _0xE59F4924BD3A718D(Any p0) { return invoke<Any>(0x024021F0, p0); } // 0xE59F4924BD3A718D b1207
	static Any _0x16EFB123C4451032(Any p0, Any p1) { return invoke<Any>(0x02402220, p0, p1); } // 0x16EFB123C4451032 b1207
	static Any _0xE79BA3BC265895DA(Any p0) { return invoke<Any>(0x024022D0, p0); } // 0xE79BA3BC265895DA b1207
	static Any _0xC0CFFDA87C2C163D(Any p0, Any p1, Any p2) { return invoke<Any>(0x02402300, p0, p1, p2); } // 0xC0CFFDA87C2C163D b1207
	static Any _0x5ED39DA62BEB1330(Any p0) { return invoke<Any>(0x02402370, p0); } // 0x5ED39DA62BEB1330 b1207
	static Any NETWORK_ACCEPT_RS_INVITE(Any p0) { return invoke<Any>(0x024023A0, p0); } // 0xB2CEA5105AAC8DDE b1207
	static Any _0x3AA0CDC63696166D(Any p0) { return invoke<Any>(0x024023D0, p0); } // 0x3AA0CDC63696166D b1207
	static Any NETWORK_REQUEST_JOIN(Any p0) { return invoke<Any>(0x02402410, p0); } // 0xE483BB6BE686F632 b1207
	static Any _0xE8E633215471BB5D(Any p0) { return invoke<Any>(0x02402500, p0); } // 0xE8E633215471BB5D b1207
	static Any _0xA2837A5E21FB5A58(Any p0) { return invoke<Any>(0x024025F0, p0); } // 0xA2837A5E21FB5A58 b1207
	static Any _0xE39600E50D608693(Any p0, Any p1) { return invoke<Any>(0x024026A0, p0, p1); } // 0xE39600E50D608693 b1207
	static Any _0xD7BAD4062074B9C1(Any p0) { return invoke<Any>(0x02402780, p0); } // 0xD7BAD4062074B9C1 b1207
	static Any _0xCA58D4FD20D70F24(Any p0) { return invoke<Any>(0x02402850, p0); } // 0xCA58D4FD20D70F24 b1207
	static Any _0xC028B3F52C707C49(Any p0) { return invoke<Any>(0x02402950, p0); } // 0xC028B3F52C707C49 b1207
	static BOOL NETWORK_IS_PLATFORM_INVITE_PENDING() { return invoke<BOOL>(0x02402A50); } // 0xFC4165C9165C166F b1207
	static void _0x5B9C6AC118FD4774() { invoke<Void>(0x02402A70); } // 0x5B9C6AC118FD4774 b1207
	static int _NETWORK_GET_PLATFORM_INVITE_ID() { return invoke<int>(0x02402A90); } // 0x9BCF28FB5D65A9BE b1207
	static BOOL NETWORK_ACTION_PLATFORM_INVITE() { return invoke<BOOL>(0x02402AB0); } // 0x3B82ACC3F4B6240C b1207
	static void NETWORK_CLEAR_PLATFORM_INVITE() { invoke<Void>(0x02402AD0); } // 0xA4484173759749B1 b1207
	static void _0x603469298A4308AF(Any p0) { invoke<Void>(0x02402CE0, p0); } // 0x603469298A4308AF b1207
	static BOOL _NETWORK_ARE_ONLINE_NOTIFICATIONS_SHOWN_IN_STORY_MODE() { return invoke<BOOL>(0x02402D10); } // 0xF5C5929E07512F80 b1207
	static BOOL NETWORK_IS_IN_PLATFORM_PARTY() { return invoke<BOOL>(0x02402D20); } // 0x2FC5650B0271CB57 0xA812B6CB b1207
	static Any _0x11820D1AE80DEA39(Any p0, Any p1) { return invoke<Any>(0x02402D40, p0, p1); } // 0x11820D1AE80DEA39 b1207
	static BOOL NETWORK_IS_IN_PLATFORM_PARTY_CHAT() { return invoke<BOOL>(0x02402E40); } // 0xFD8B834A8BA05048 0xC6609191 b1207
	static void NETWORK_SEED_RANDOM_NUMBER_GENERATOR(int seed) { invoke<Void>(0x02402E70, seed); } // 0xF1B84178F8674195 0x41702C8A b1207
	static int NETWORK_GET_RANDOM_INT_RANGED(int rangeStart, int rangeEnd) { return invoke<int>(0x02402EA0, rangeStart, rangeEnd); } // 0xE30CF56F1EFA5F43 0xF9B6426D b1207
	static void NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(int maxNumMissionParticipants, BOOL p1, int instanceId) { invoke<Void>(0x02402EF0, maxNumMissionParticipants, p1, instanceId); } // 0x1CA59E306ECB80A5 0x470810ED b1207
	static BOOL NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() { return invoke<BOOL>(0x02402F10); } // 0x2910669969E9535E 0xD9BF6549 b1207
	static int NETWORK_GET_MAX_NUM_PARTICIPANTS() { return invoke<int>(0x02402F50); } // 0xA6C90FBC38E395EE 0xCCD8C02D b1207
	static int NETWORK_GET_NUM_PARTICIPANTS() { return invoke<int>(0x02402F80); } // 0x18D0456E86604654 0x3E25A3C5 b1207
	static int NETWORK_GET_SCRIPT_STATUS() { return invoke<int>(0x02402FB0); } // 0x57D158647A6BFABF 0x2BE9235A b1207
	static void NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Any p0, Any p1, Any p2) { invoke<Void>(0x02403150, p0, p1, p2); } // 0x3E9B2F01C50DF595 0xDAF3B0AE b1207
	static int _NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(int* p0) { return invoke<int>(0x02403170, p0); } // 0xBA24095EA96DFE17 b1207
	static void NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Any p0, Any p1, Any p2) { invoke<Void>(0x024031D0, p0, p1, p2); } // 0x3364AA97340CA215 0xBE3D32B4 b1207
	static int _NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(int* p0) { return invoke<int>(0x024031F0, p0); } // 0x690806BC83BC8CA2 b1207
	static BOOL NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA() { return invoke<BOOL>(0x02403250); } // 0x5D10B3795F3FC886 0x0B739F53 b1207
	static int NETWORK_GET_PLAYER_INDEX(Player player) { return invoke<int>(0x02403310, player); } // 0x24FB80D107371267 0xBE1C1506 b1207
	static int NETWORK_GET_PARTICIPANT_INDEX(int index) { return invoke<int>(0x024033E0, index); } // 0x1B84DF6AF2A46938 0xC4D91094 b1207
	static Player NETWORK_GET_PLAYER_INDEX_FROM_PED(Ped ped) { return invoke<Player>(0x024034B0, ped); } // 0x6C0E2E0125610278 0x40DBF464 b1207
	static int NETWORK_GET_NUM_CONNECTED_PLAYERS() { return invoke<int>(0x024035A0); } // 0xA4A79DD2D9600654 0xF7952E62 b1207
	static BOOL NETWORK_IS_PLAYER_CONNECTED(Player player) { return invoke<BOOL>(0x024035B0, player); } // 0x93DC1BE4E1ABE9D1 0x168EE2C2 b1207
	static int NETWORK_GET_TOTAL_NUM_PLAYERS() { return invoke<int>(0x02403610); } // 0xCF61D4B4702EE9EB 0xF4F13B06 b1207
	static BOOL NETWORK_IS_PARTICIPANT_ACTIVE(int p0) { return invoke<BOOL>(0x02403630, p0); } // 0x6FF8FF40B6357D45 0x4E2C348B b1207
	static BOOL NETWORK_IS_PLAYER_ACTIVE(Player player) { return invoke<BOOL>(0x024036E0, player); } // 0xB8DFD30D6973E135 0x43657B17 b1207
	static BOOL NETWORK_IS_PLAYER_A_PARTICIPANT(Player player) { return invoke<BOOL>(0x02403710, player); } // 0x3CA58F6CB7CBD784 0xB08B6992 b1207
	static BOOL NETWORK_IS_HOST_OF_THIS_SCRIPT() { return invoke<BOOL>(0x02403780); } // 0x83CD99A1E6061AB5 0x6970BA94 b1207
	static Player NETWORK_GET_HOST_OF_THIS_SCRIPT() { return invoke<Player>(0x024037D0); } // 0xC7B4D79B01FA7A5C 0x89EA7B54 b1232
	static Player NETWORK_GET_HOST_OF_SCRIPT(const char* scriptName, int p1, int p2) { return invoke<Player>(0x02403800, scriptName, p1, p2); } // 0x1D6A14F1F9A736FC 0x9C95D0BB b1436
	static Player _NETWORK_GET_HOST_OF_THREAD(int threadId) { return invoke<Player>(0x024039D0, threadId); } // 0xB4A25351D79B444C b1207
	static void NETWORK_SET_MISSION_FINISHED() { invoke<Void>(0x02403A60); } // 0x3B3D11CD9FFCDFC9 0x3083FAD7 b1207
	static BOOL NETWORK_IS_SCRIPT_ACTIVE(const char* scriptName, int p1, BOOL p2, int p3) { return invoke<BOOL>(0x02403AE0, scriptName, p1, p2, p3); } // 0x9D40DF90FAD26098 0x4A65250C b1207
	static BOOL NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(Hash scriptHash, int p1, BOOL p2, int p3) { return invoke<BOOL>(0x02403B20, scriptHash, p1, p2, p3); } // 0x1B89BC43B6E69107 b1207
	static BOOL _NETWORK_IS_THREAD_ACTIVE(int threadId) { return invoke<BOOL>(0x02403C70, threadId); } // 0x31DAD2CD6D49546E b1207
	static Any _0xFB9ECED5B68F3B78(Any p0) { return invoke<Any>(0x02403CE0, p0); } // 0xFB9ECED5B68F3B78 b1207
	static int NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(Any* p0, Any p1, Any p2) { return invoke<int>(0x02403D80, p0, p1, p2); } // 0x3658E8CD94FC121A 0x8F7D9F46 b1207
	static int NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT() { return invoke<int>(0x02403EE0); } // 0x638A3A81733086DB 0xDB8B5D71 b1207
	static BOOL NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(Player p0, Any* p1, Any p2) { return invoke<BOOL>(0x02403F60, p0, p1, p2); } // 0x1AD5B71586B94820 0xCEA55F4C b1207
	static void _0x2302C0264EA58D31() { invoke<Void>(0x02404150); } // 0x2302C0264EA58D31 0x8DCFE77D b1207
	static BOOL NETWORK_IS_FEATURE_SUPPORTED(int featureId) { return invoke<BOOL>(0x024041E0, featureId); } // 0x9C725D149622BFDE b1207
	static Player PARTICIPANT_ID() { return invoke<Player>(0x02404200); } // 0x90986E8876CE0A83 0x9C35A221 b1207
	static int PARTICIPANT_ID_TO_INT() { return invoke<int>(0x02404230); } // 0x57A3BDDAD8E5AA0A 0x907498B0 b1207
	static int NETWORK_GET_DESTROYER_OF_NETWORK_ID(int netId, Hash* weaponHash) { return invoke<int>(0x02404260, netId, weaponHash); } // 0x7A1ADEEF01740A24 0x4FCA6436 b1207
	static Any _0x6CF82A7F65A5AD5F(Any p0, Any p1) { return invoke<Any>(0x02404310, p0, p1); } // 0x6CF82A7F65A5AD5F b1207
	static Any _0x236321F1178A5446(Any p0, Any p1, Any p2) { return invoke<Any>(0x02404400, p0, p1, p2); } // 0x236321F1178A5446 b1207
	static BOOL NETWORK_GET_ASSISTED_DAMAGE_OF_ENTITY(Player player, Entity entity, int* p2) { return invoke<BOOL>(0x02404430, player, entity, p2); } // 0x4CACA84440FA26F6 0x28A45454 b1207
	static Entity NETWORK_GET_ENTITY_KILLER_OF_PLAYER(Player player, Hash* weaponHash) { return invoke<Entity>(0x02404460, player, weaponHash); } // 0x42B2DAA6B596F5F8 0xA7E7E04F b1207
	static void NETWORK_RESURRECT_LOCAL_PLAYER(float x, float y, float z, float heading, int p4, BOOL p5, Any p6, BOOL p7) { invoke<Void>(0x02404490, x, y, z, heading, p4, p5, p6, p7); } // 0xEA23C49EAA83ACFB 0xF1F9D4B4 b1207
	static void _NETWORK_RESURRECT_LOCAL_PLAYER_2(Any* args) { invoke<Void>(0x02404510, args); } // 0x4154B7D8C75E5DCF b1207
	static void NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(int time) { invoke<Void>(0x02404520, time); } // 0x2D95C7E2D7E07307 0xFEA9B85C b1207
	static void NETWORK_SET_LOCAL_PLAYER_SYNC_LOOK_AT(BOOL toggle) { invoke<Void>(0x02404560, toggle); } // 0x524FF0AEFF9C3973 0xB72F086D b1207
	static BOOL NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(Entity entity) { return invoke<BOOL>(0x024045E0, entity); } // 0xB07D3185E11657A5 0xEDA68956 b1207
	static int NETWORK_GET_NETWORK_ID_FROM_ENTITY(Entity entity) { return invoke<int>(0x02404770, entity); } // 0xA11700682F3AD45C 0x9E35DAB6 b1207
	static Entity NETWORK_GET_ENTITY_FROM_NETWORK_ID(int netId) { return invoke<Entity>(0x02404930, netId); } // 0xCE4E5D9B0A4FF560 0x5B912C3F b1207
	static BOOL NETWORK_GET_ENTITY_IS_NETWORKED(Entity entity) { return invoke<BOOL>(0x024049D0, entity); } // 0xC7827959479DCC78 0xD7F934F4 b1207
	static void NETWORK_REGISTER_ENTITY_AS_NETWORKED(Entity entity) { invoke<Void>(0x02404A90, entity); } // 0x06FAACD625D80CAA 0x31A630A4 b1207
	static BOOL NETWORK_DOES_NETWORK_ID_EXIST(int netID) { return invoke<BOOL>(0x02404AA0, netID); } // 0x38CE16C96BD11344 0xB8D2C99E b1207
	static Any _0x950ACD8F05B7B9DF(Any p0) { return invoke<Any>(0x02404B20, p0); } // 0x950ACD8F05B7B9DF b1355
	static BOOL NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(int netId) { return invoke<BOOL>(0x02404BE0, netId); } // 0xA670B3662FAFFBD0 0x9262A60A b1207
	static BOOL NETWORK_HAS_CONTROL_OF_NETWORK_ID(int netId) { return invoke<BOOL>(0x02404CA0, netId); } // 0x4D36070FE0215186 0x92E77D21 b1207
	static BOOL NETWORK_REQUEST_CONTROL_OF_ENTITY(Entity entity) { return invoke<BOOL>(0x02404D40, entity); } // 0xB69317BF5E782347 0xA05FEBD7 b1207
	static BOOL _NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(AnimScene animScene) { return invoke<BOOL>(0x02404D70, animScene); } // 0xAAA92B631B13F614 b1207
	static BOOL NETWORK_REQUEST_CONTROL_OF_PICKUP_PLACEMENT(Any p0) { return invoke<BOOL>(0x02404E00, p0); } // 0x56ED2C48558DAB78 b1311
	static BOOL NETWORK_HAS_CONTROL_OF_ENTITY(Entity entity) { return invoke<BOOL>(0x02404E30, entity); } // 0x01BF60A500E28887 0x005FD797 b1207
	static BOOL NETWORK_HAS_CONTROL_OF_PICKUP(Pickup pickup) { return invoke<BOOL>(0x02404EF0, pickup); } // 0x5BC9495F0B3B6FA6 0xF7784FC8 b1207
	static BOOL _NETWORK_HAS_CONTROL_OF_ANIM_SCENE(AnimScene animScene) { return invoke<BOOL>(0x02404F20, animScene); } // 0x26A5C12FACFF8724 b1207
	static BOOL NETWORK_HAS_CONTROL_OF_PICKUP_PLACEMENT(Any p0) { return invoke<BOOL>(0x02404F90, p0); } // 0x51EABCF2786515AB b1311
	static int _0xF260AF6F43953316(ScrHandle handle) { return invoke<int>(0x02404FC0, handle); } // 0xF260AF6F43953316 b1207
	static int VEH_TO_NET(Vehicle vehicle) { return invoke<int>(0x02405180, vehicle); } // 0xB4C94523F023419C 0xF17634EB b1207
	static int PED_TO_NET(Ped ped) { return invoke<int>(0x02405340, ped); } // 0x0EDEC3C276198689 0x86A0B759 b1207
	static int OBJ_TO_NET(Object object) { return invoke<int>(0x02405500, object); } // 0x99BFDC94A603E541 0x1E05F29F b1207
	static int _ANIM_SCENE_TO_NET(AnimScene animScene) { return invoke<int>(0x024056C0, animScene); } // 0xE0D73CDDEA79DDCD b1207
	static Vehicle NET_TO_VEH(int netHandle) { return invoke<Vehicle>(0x02405740, netHandle); } // 0x367B936610BA360C 0x7E02FAEA b1207
	static Ped NET_TO_PED(int netHandle) { return invoke<Ped>(0x024057E0, netHandle); } // 0xBDCD95FC216A8B3E 0x87717DD4 b1207
	static Object NET_TO_OBJ(int netHandle) { return invoke<Object>(0x02405880, netHandle); } // 0xD8515F5FEA14CB3F 0x27AA14D8 b1207
	static Entity NET_TO_ENT(int netHandle) { return invoke<Entity>(0x02405920, netHandle); } // 0xBFFEAB45A9A9094A 0x5E149683 b1207
	static AnimScene _NET_TO_ANIM_SCENE(int netId) { return invoke<AnimScene>(0x024059C0, netId); } // 0xD7F6781A0ABAF6FB b1207
	static int _PROPSET_TO_NET(PropSet propSet) { return invoke<int>(0x02405A70, propSet); } // 0x74F99EF7EF503398 b1207
	static PropSet _NET_TO_PROPSET(int netId) { return invoke<PropSet>(0x02405B30, netId); } // 0xD08066E00D26C448 b1207
	static void _0x0CC28C08613BA9E5(Any p0) { invoke<Void>(0x02405C60, p0); } // 0x0CC28C08613BA9E5 b1207
	static void NETWORK_GET_LOCAL_HANDLE(Any* gamerHandle) { invoke<Void>(0x02405C70, gamerHandle); } // 0xE86051786B66CD8E 0x08023B16 b1207
	static void NETWORK_HANDLE_FROM_PLAYER(Player player, Any* gamerHandle) { invoke<Void>(0x02405CD0, player, gamerHandle); } // 0x388EB2B86C73B6B3 0xD3498917 b1207
	static Hash NETWORK_HASH_FROM_PLAYER_HANDLE(Player player) { return invoke<Hash>(0x02405D60, player); } // 0xBC1D768F2F5D6C05 0xF8D7AF3B b1207
	static void NETWORK_HANDLE_FROM_FRIEND(int friendIndex, Any* gamerHandle) { invoke<Void>(0x02405D80, friendIndex, gamerHandle); } // 0xD45CB817D7E177D2 0x3B0BB3A3 b1207
	static const char* NETWORK_GET_GAMERTAG_FROM_HANDLE(Any* gamerHandle) { return invoke<const char*>(0x02405E40, gamerHandle); } // 0x426141162EBE5CDB 0xA18A1B26 b1207
	static int NETWORK_DISPLAYNAMES_FROM_HANDLES_START(Any* p0, Any p1) { return invoke<int>(0x02405E70, p0, p1); } // 0xD66C9E72B3CC4982 b1207
	static int NETWORK_GET_DISPLAYNAMES_FROM_HANDLES(Any p0, Any p1, Any p2) { return invoke<int>(0x02405EA0, p0, p1, p2); } // 0x58CC181719256197 b1207
	static BOOL _NETWORK_GET_DISPLAY_NAME_FROM_HANDLE(Any* gamerHandle, char* displayName) { return invoke<BOOL>(0x02405FD0, gamerHandle, displayName); } // 0x7FEE4F07C54B6B3C b1207
	static BOOL NETWORK_ARE_HANDLES_THE_SAME(Any* gamerHandle1, Any* gamerHandle2) { return invoke<BOOL>(0x024060A0, gamerHandle1, gamerHandle2); } // 0x57DBA049E110F217 0x45975AE3 b1207
	static BOOL NETWORK_IS_HANDLE_VALID(Any* gamerHandle) { return invoke<BOOL>(0x024061A0, gamerHandle); } // 0x6F79B93B0A8E4133 0xF0996C6E b1207
	static Player NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Any* gamerHandle) { return invoke<Player>(0x024061D0, gamerHandle); } // 0xCE5F689CF5A0A49D 0x2E96EF1E b1207
	static BOOL NETWORK_IS_GAMER_IN_MY_SESSION(Any* gamerHandle) { return invoke<BOOL>(0x02406280, gamerHandle); } // 0x0F10B05DDF8D16E9 0x59127716 b1207
	static void NETWORK_SHOW_PROFILE_UI(Any* gamerHandle) { invoke<Void>(0x02406380, gamerHandle); } // 0x859ED1CEA343FCA8 0xF00A20B0 b1207
	static void _0x5759160AC17C13CE(Any* gamerHandle, const char* message) { invoke<Void>(0x02406410, gamerHandle, message); } // 0x5759160AC17C13CE b1207
	static int _0xF302AB9D978352EE(Entity entity) { return invoke<int>(0x024064A0, entity); } // 0xF302AB9D978352EE b1207
	static Entity _0x4538EE7C321590BC(int networkId) { return invoke<Entity>(0x02406560, networkId); } // 0x4538EE7C321590BC b1207
	static BOOL _0xA47D48D06AA5A188() { return invoke<BOOL>(0x024065C0); } // 0xA47D48D06AA5A188 b1207
	static int NETWORK_GET_TOTAL_NUM_FRIENDS() { return invoke<int>(0x024065E0); } // 0xDB7ABDD203FA3704 b1207
	static int _0xA94ECE191D90637A() { return invoke<int>(0x02406600); } // 0xA94ECE191D90637A b1207
	static void _0x5CB8B0C846D0F30B(Any p0) { invoke<Void>(0x02406650, p0); } // 0x5CB8B0C846D0F30B b1207
	static void _0xFF36F36B07E69059(Any p0) { invoke<Void>(0x02406670, p0); } // 0xFF36F36B07E69059 b1207
	static BOOL _0xA3EEC0A5AFF3FC5B(Any* p0) { return invoke<BOOL>(0x02406690, p0); } // 0xA3EEC0A5AFF3FC5B b1207
	static int _0xB389289F031F059A() { return invoke<int>(0x024066C0); } // 0xB389289F031F059A b1207
	static BOOL NETWORK_CAN_REFRESH_FRIEND_PAGE() { return invoke<BOOL>(0x024066D0); } // 0x1AF5E28E64A76A9F b1207
	static BOOL NETWORK_REFRESH_CURRENT_FRIEND_PAGE() { return invoke<BOOL>(0x024067A0); } // 0x1F51F367B710A832 b1207
	static BOOL _0xDA1BFED8582F61F0() { return invoke<BOOL>(0x024067C0); } // 0xDA1BFED8582F61F0 b1207
	static BOOL _0x232E1EB23CDB313C() { return invoke<BOOL>(0x024067E0); } // 0x232E1EB23CDB313C b1207
	static BOOL _0x3E4A16BC669E71B3() { return invoke<BOOL>(0x02406800); } // 0x3E4A16BC669E71B3 b1207
	static BOOL _0xE348D1404BD80146(Any* gamerHandle) { return invoke<BOOL>(0x02406820, gamerHandle); } // 0xE348D1404BD80146 b1207
	static BOOL _0x665161D250850A9F(Any* gamerHandle) { return invoke<BOOL>(0x024068C0, gamerHandle); } // 0x665161D250850A9F b1207
	static const char* _NETWORK_GET_GAMERTAG_FROM_FRIEND(Any* gamerHandle) { return invoke<const char*>(0x02406960, gamerHandle); } // 0x5659D87BE674AB17 b1207
	static BOOL NETWORK_IS_FRIEND(Any* gamerHandle) { return invoke<BOOL>(0x02406990, gamerHandle); } // 0x1A24A179F9B31654 0x2DA4C282 b1207
	static BOOL NETWORK_IS_PENDING_FRIEND(Any* gamerHandle) { return invoke<BOOL>(0x02406A30, gamerHandle); } // 0x0BE73DA6984A6E33 0x5C85FF81 b1207
	static BOOL NETWORK_ADD_FRIEND(Any* gamerHandle, const char* message) { return invoke<BOOL>(0x02406A40, gamerHandle, message); } // 0x8E02D73914064223 0x20E5B3EE b1207
	static BOOL _NETWORK_REMOVE_FRIEND(Any* gamerHandle) { return invoke<BOOL>(0x02406AE0, gamerHandle); } // 0x55F618F68AB854D3 b1207
	static BOOL _NETWORK_CAN_ADD_FRIEND(Any* gamerHandle) { return invoke<BOOL>(0x02406B70, gamerHandle); } // 0x99ABE9BF9DADA162 b1207
	static void NETWORK_SET_PLAYER_IS_PASSIVE(BOOL toggle) { invoke<Void>(0x02406C00, toggle); } // 0x9C25E8EC4C535FBD b1207
	static void NETWORK_SET_FRIENDLY_FIRE_OPTION(BOOL toggle) { invoke<Void>(0x02406C60, toggle); } // 0xF808475FA571D823 0x6BAF95FA b1207
	static void NETWORK_SET_RICH_PRESENCE(int p0, Any* p1, int p2, int p3) { invoke<Void>(0x02406C70, p0, p1, p2, p3); } // 0x1DCCACDCFC569362 0x932A6CED b1207
	static int NETWORK_GET_TIMEOUT_TIME() { return invoke<int>(0x02406C90); } // 0x5ED0356A0CE3A34F 0xE1F86C6A b1207
	static void _0xBC7D36946D19E60E(BOOL p0) { invoke<Void>(0x02406CA0, p0); } // 0xBC7D36946D19E60E b1207
	static Any _0x880A7202301E282B(Any* p0, Any* p1, float x, float y, float z, float p5, Any p6) { return invoke<Any>(0x02406DE0, p0, p1, x, y, z, p5, p6); } // 0x880A7202301E282B b1311
	static Any _0xC964FCD3D1720697() { return invoke<Any>(0x023ABC20); } // 0xC964FCD3D1720697 b1207
	static Any _0xEC089F84A9C16C62() { return invoke<Any>(0x023ABC30); } // 0xEC089F84A9C16C62 b1207
	static void PREVENT_NETWORK_ID_MIGRATION(int netId) { invoke<Void>(0x02406E20, netId); } // 0x7182EDDA1EE7DB5A b1207
	static void KEEP_NETWORK_ID_IN_FAST_INSTANCE(int netId, BOOL p1, int p2) { invoke<Void>(0x02406E30, netId, p1, p2); } // 0xE1BC73D6815BA361 b1207
	static void _0x02C4C6C2900D84DF(Any p0, Any p1) { invoke<Void>(0x02406ED0, p0, p1); } // 0x02C4C6C2900D84DF b1207
	static void _0xD78A26024BB13E08(Any p0) { invoke<Void>(0x02406EF0, p0); } // 0xD78A26024BB13E08 b1207
	static void SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(int netId, BOOL toggle) { invoke<Void>(0x02406F50, netId, toggle); } // 0xE05E81A888FA63C8 0x68D486B2 b1207
	static void SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(int netId, Player player, BOOL toggle) { invoke<Void>(0x02406F70, netId, player, toggle); } // 0xA8A024587329F36A 0x4D15FDB1 b1207
	static void _0x9ED3108D6847760A(Any p0, Any p1) { invoke<Void>(0x02407010, p0, p1); } // 0x9ED3108D6847760A b1207
	static void _0xD785864798258032(Entity entity, BOOL toggle) { invoke<Void>(0x02407030, entity, toggle); } // 0xD785864798258032 b1207
	static void _NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(Entity entity, BOOL toggle) { invoke<Void>(0x024070F0, entity, toggle); } // 0xF1CA12B18AEF5298 0x09CBC4B0 b1207
	static void _0xE31A04513237DC89(Entity entity) { invoke<Void>(0x024071D0, entity); } // 0xE31A04513237DC89 b1207
	static void SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x024072B0, p0, p1, p2, p3); } // 0xA6928482543022B4 0x199E75EF b1207
	static BOOL IS_NETWORK_ID_OWNED_BY_PARTICIPANT(int netId) { return invoke<BOOL>(0x024072E0, netId); } // 0xA1607996431332DF 0xEA5176C0 b1207
	static Player _NETWORK_GET_PLAYER_OWNER_OF_NETWORK_ID(int netId) { return invoke<Player>(0x02407310, netId); } // 0xA6C0787443C9583E b1207
	static void SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(Any p0, Any p1, Any p2) { invoke<Void>(0x024073E0, p0, p1, p2); } // 0xD1065D68947E7B6E 0x59F3479B b1207
	static void PREVENT_MIGRATION_OF_ENTITIES_IN_FAST_INSTANCE_FOR_LOCAL_PLAYER(BOOL toggle) { invoke<Void>(0x02407440, toggle); } // 0x89D803CD48622150 b1207
	static void SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(BOOL p0) { invoke<Void>(0x024074F0, p0); } // 0xE5F773C1A1D9D168 0x764F6222 b1207
	static void SET_PLAYER_INVISIBLE_LOCALLY(Player player, BOOL toggle) { invoke<Void>(0x02407510, player, toggle); } // 0x12B37D54667DB0B8 0x18227209 b1207
	static void SET_PLAYER_VISIBLE_LOCALLY(Player player, BOOL toggle) { invoke<Void>(0x02407530, player, toggle); } // 0xFAA10F1FAFB11AF2 0xBA2BB4B4 b1207
	static void SET_ENTITY_VISIBLE_IN_CUTSCENE(Entity entity, BOOL p1, BOOL p2, int p3) { invoke<Void>(0x02407550, entity, p1, p2, p3); } // 0xE0031D3C8F36AB82 0xDBFB067B b1207
	static void _0x51D99497ABF3F451(Any p0) { invoke<Void>(0x02407580, p0); } // 0x51D99497ABF3F451 b1207
	static void _0xC1E1A3D5ED7617B8(Any p0, Any p1) { invoke<Void>(0x024075E0, p0, p1); } // 0xC1E1A3D5ED7617B8 b1207
	static BOOL IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(int netID) { return invoke<BOOL>(0x02407600, netID); } // 0x6E192E33AD436366 0x597063BA b1207
	static void ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(int netID, BOOL toggle) { invoke<Void>(0x02407630, netID, toggle); } // 0xD45B1FFCCD52FF19 0x95D07BA5 b1207
	static BOOL IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<BOOL>(0x02407650, p0, p1, p2, p3, p4); } // 0xD82CF8E64C8729D8 0x23C5274E b1207
	static BOOL IS_SPHERE_VISIBLE_TO_PLAYER(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0x024076C0, p0, p1, p2, p3, p4, p5); } // 0xDC3A310219E5DA62 0xE9FCFB32 b1207
	static void _0xD42C543F73233041(Any p0) { invoke<Void>(0x02407760, p0); } // 0xD42C543F73233041 b1232
	static void RESERVE_NETWORK_MISSION_OBJECTS(int amount) { invoke<Void>(0x02407770, amount); } // 0x4E5C93BD0C32FBF8 0x391DF4F3 b1207
	static void RESERVE_NETWORK_CLIENT_MISSION_OBJECTS(int amount) { invoke<Void>(0x02407820, amount); } // 0xE7DDA8BD3BCF751C b1207
	static void RESERVE_NETWORK_MISSION_PEDS(int amount) { invoke<Void>(0x024078D0, amount); } // 0xB60FEBA45333D36F 0x54998C37 b1207
	static void RESERVE_NETWORK_CLIENT_MISSION_PEDS(int amount) { invoke<Void>(0x02407980, amount); } // 0x807E119F80231732 b1207
	static void RESERVE_NETWORK_MISSION_VEHICLES(int amount) { invoke<Void>(0x02407A30, amount); } // 0x76B02E21ED27A469 0x5062875E b1207
	static void RESERVE_NETWORK_MISSION_PICKUPS(int amount) { invoke<Void>(0x02407AE0, amount); } // 0x4D40E7D749BC6E6D b1207
	static BOOL CAN_REGISTER_MISSION_OBJECTS(int amount) { return invoke<BOOL>(0x02407B90, amount); } // 0x800DD4721A8B008B 0x7F85DFDE b1207
	static BOOL CAN_REGISTER_MISSION_PEDS(int amount) { return invoke<BOOL>(0x02407BE0, amount); } // 0xBCBF4FEF9FA5D781 0xCCAA5CE9 b1207
	static BOOL CAN_REGISTER_MISSION_VEHICLES(int amount) { return invoke<BOOL>(0x02407C30, amount); } // 0x7277F1F2E085EE74 0x818B6830 b1207
	static BOOL CAN_REGISTER_MISSION_PICKUPS(int amount) { return invoke<BOOL>(0x02407C90, amount); } // 0xF0460C7BF80011EA b1207
	static BOOL CAN_REGISTER_MISSION_ENTITIES(int ped_amt, int vehicle_amt, int object_amt, int pickup_amt) { return invoke<BOOL>(0x02407CE0, ped_amt, vehicle_amt, object_amt, pickup_amt); } // 0x69778E7564BADE6D 0x83794008 b1207
	static int GET_NUM_RESERVED_MISSION_OBJECTS(BOOL p0) { return invoke<int>(0x02407D50, p0); } // 0xAA81B5F10BC43AC2 0x16A80CD6 b1207
	static int GET_NUM_RESERVED_MISSION_PEDS(BOOL p0) { return invoke<int>(0x02407DD0, p0); } // 0x1F13D5AE5CB17E17 0x6C25975C b1207
	static int GET_NUM_RESERVED_MISSION_VEHICLES(BOOL p0) { return invoke<int>(0x02407E50, p0); } // 0xCF3A965906452031 0xA9A308F3 b1207
	static int _GET_NUM_RESERVED_MISSION_PICKUPS(BOOL p0) { return invoke<int>(0x02407ED0, p0); } // 0x62BE3ECC79FBD004 b1207
	static int GET_NUM_CREATED_MISSION_OBJECTS(BOOL p0) { return invoke<int>(0x02407F50, p0); } // 0x12B6281B6C6706C0 0x603FA104 b1207
	static int GET_NUM_CREATED_MISSION_PEDS(BOOL p0) { return invoke<int>(0x02407FD0, p0); } // 0xCB215C4B56A7FAE7 0xD8FEC4F8 b1207
	static int GET_NUM_CREATED_MISSION_VEHICLES(BOOL p0) { return invoke<int>(0x02408050, p0); } // 0x0CD9AB83489430EA 0x20527695 b1207
	static int _GET_NUM_CREATED_MISSION_PICKUPS(BOOL p0) { return invoke<int>(0x024080D0, p0); } // 0xD2BA051B94CA9BCC b1207
	static void _0x5E71E72A94985214(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x02408150, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x5E71E72A94985214 b1207
	static BOOL _0x5F328FC909F0E0FF(int p0, int p1, int p2, int p3) { return invoke<BOOL>(0x02408180, p0, p1, p2, p3); } // 0x5F328FC909F0E0FF b1311
	static int GET_MAX_NUM_NETWORK_OBJECTS() { return invoke<int>(0x024081F0); } // 0xC7BE335216B5EC7C 0x8687E285 b1207
	static int GET_MAX_NUM_NETWORK_PEDS() { return invoke<int>(0x02408200); } // 0x0C1F7D49C39D2289 0x744AC008 b1207
	static int GET_MAX_NUM_NETWORK_VEHICLES() { return invoke<int>(0x02408210); } // 0x0AFCE529F69B21FF 0xC3A12135 b1207
	static int GET_MAX_NUM_NETWORK_PICKUPS() { return invoke<int>(0x02408220); } // 0xA72835064DD63E4C 0x6A036061 b1207
	static BOOL _0x75FC34A2BA345BD1(Entity entity, Player player, Any* p2) { return invoke<BOOL>(0x02408230, entity, player, p2); } // 0x75FC34A2BA345BD1 b1207
	static void _0x979765465A6F25FC(Entity entity, BOOL p1) { invoke<Void>(0x02408260, entity, p1); } // 0x979765465A6F25FC b1207
	static int _0x5133CF81924F1129() { return invoke<int>(0x02408280); } // 0x5133CF81924F1129 b1207
	static int _0x1E4E097D71D449FB(BOOL p0) { return invoke<int>(0x02408290, p0); } // 0x1E4E097D71D449FB b1311
	static int _0x982D7AD755B8F62C(BOOL p0) { return invoke<int>(0x024082C0, p0); } // 0x982D7AD755B8F62C b1311
	static int _0x917AD74BDCF8B6E9(BOOL p0) { return invoke<int>(0x024082F0, p0); } // 0x917AD74BDCF8B6E9 b1311
	static int _0xF8DC69DC1AD19072(BOOL p0) { return invoke<int>(0x02408320, p0); } // 0xF8DC69DC1AD19072 b1311
	static int _0x744BFBB0CA908161(BOOL p0) { return invoke<int>(0x02408350, p0); } // 0x744BFBB0CA908161 b1311
	static int _0x106CBDD5077DEDE1(BOOL p0) { return invoke<int>(0x02408380, p0); } // 0x106CBDD5077DEDE1 b1311
	static int _0xBAF7E2979442B29F(BOOL p0) { return invoke<int>(0x024083B0, p0); } // 0xBAF7E2979442B29F b1311
	static int _0x039B692B3318FAB6(BOOL p0) { return invoke<int>(0x024083E0, p0); } // 0x039B692B3318FAB6 b1311
	static int _0x4835413EA6F9C9CD(BOOL p0) { return invoke<int>(0x02408410, p0); } // 0x4835413EA6F9C9CD b1311
	static int GET_NETWORK_TIME() { return invoke<int>(0x02408440); } // 0x7A5487FE9FAA6B48 0x998103C2 b1207
	static int GET_NETWORK_TIME_ACCURATE() { return invoke<int>(0x02408490); } // 0x89023FBBF9200E9F 0x98AA48E5 b1207
	static BOOL HAS_NETWORK_TIME_STARTED() { return invoke<BOOL>(0x02408530); } // 0x46718ACEEDEAFC84 0x4538C4A2 b1207
	static int GET_TIME_OFFSET(int timeA, int timeB) { return invoke<int>(0x02408560, timeA, timeB); } // 0x017008CCDAD48503 0x2E079AE6 b1207
	static BOOL IS_TIME_LESS_THAN(int timeA, int timeB) { return invoke<BOOL>(0x02408570, timeA, timeB); } // 0xCB2CF5148012C8D0 0x50EF8FC6 b1207
	static BOOL IS_TIME_MORE_THAN(int timeA, int timeB) { return invoke<BOOL>(0x02408590, timeA, timeB); } // 0xDE350F8651E4346C 0xBBB6DF61 b1207
	static int GET_TIME_DIFFERENCE(int timeA, int timeB) { return invoke<int>(0x024085B0, timeA, timeB); } // 0xA2C6FC031D46FFF0 0x5666A837 b1207
	static int GET_CLOUD_TIME_AS_INT() { return invoke<int>(0x024085C0); } // 0x9A73240B49945C76 0xF2FDF2E0 b1207
	static void CONVERT_POSIX_TIME(int posixTime, Any* timeStructure) { invoke<Void>(0x024085E0, posixTime, timeStructure); } // 0xAC97AF97FA68E5D5 0xBB7CCE49 b1207
	static void NETWORK_SET_IN_SPECTATOR_MODE(BOOL toggle, Ped playerPed) { invoke<Void>(0x02408680, toggle, playerPed); } // 0x423DE3854BB50894 0x5C4C8458 b1207
	static void _NETWORK_SET_IN_STATIC_SPECTATOR_MODE(BOOL toggle, float x, float y, float z) { invoke<Void>(0x024086A0, toggle, x, y, z); } // 0xFBF1ECFB39A77B5F b1207
	static BOOL NETWORK_IS_IN_SPECTATOR_MODE() { return invoke<BOOL>(0x024087C0); } // 0x048746E388762E11 0x3EAD9DB8 b1207
	static BOOL _NETWORK_IS_PLAYER_IN_SPECTATOR_MODE(Player player) { return invoke<BOOL>(0x02408820, player); } // 0x5B709519997ECF0F b1207
	static void NETWORK_SET_IN_MP_CUTSCENE(BOOL p0, BOOL p1, int p2, BOOL p3) { invoke<Void>(0x02408920, p0, p1, p2, p3); } // 0x9CA5DE655269FEC4 0x8434CB43 b1207
	static BOOL NETWORK_IS_IN_MP_CUTSCENE() { return invoke<BOOL>(0x02408A20); } // 0x6CC27C9FA2040220 0x4BB33316 b1207
	static BOOL NETWORK_IS_PLAYER_IN_MP_CUTSCENE(Player player) { return invoke<BOOL>(0x02408A40, player); } // 0x63F9EE203C3619F2 0x56F961E4 b1207
	static void _0x34BC1E79546BA543(Any p0) { invoke<Void>(0x02408A80, p0); } // 0x34BC1E79546BA543 b1232
	static void _SET_NETWORK_RESPOT_TIMER(Entity entity, int timer, BOOL p2) { invoke<Void>(0x02408AB0, entity, timer, p2); } // 0x442B4347B6EC36E8 b1207
	static Any _0x26A867C0B7A456D1(Any p0) { return invoke<Any>(0x02408AD0, p0); } // 0x26A867C0B7A456D1 b1232
	static void _SET_LOCAL_PLAYER_AS_GHOST(BOOL toggle) { invoke<Void>(0x02408BB0, toggle); } // 0x5FFE9B4144F9712F b1207
	static BOOL _IS_ENTITY_GHOSTED_TO_LOCAL_PLAYER(Entity entity) { return invoke<BOOL>(0x02408C50, entity); } // 0x21D04D7BC538C146 b1207
	static void _0xDCA6ABDB9288FBE4(Player player, BOOL toggle) { invoke<Void>(0x02408C80, player, toggle); } // 0xDCA6ABDB9288FBE4 b1207
	static void _SET_ENTITY_GHOSTED_TO_LOCAL_PLAYER(Entity entity, BOOL toggle) { invoke<Void>(0x02408DF0, entity, toggle); } // 0xEE5AE9956743BA20 b1207
	static BOOL _IS_OBJECT_REASSIGNMENT_IN_PROGRESS() { return invoke<BOOL>(0x02408E10); } // 0x8FE9EB11EC9CC23A b1311
	static int _0x039AD6B57D5179FF() { return invoke<int>(0x02408E30); } // 0x039AD6B57D5179FF b1311
	static int _0x02B3CDD652B3CDD6() { return invoke<int>(0x02408E70); } // 0x02B3CDD652B3CDD6 b1311
	static int _GET_NUM_PEER_NEGOTIATION_RESPONSES() { return invoke<int>(0x02408EB0); } // 0x4FE932E84FE932E8 b1311
	static void _NETWORK_DEBUG_REQUEST_ENTITY_POSITION(Any* p0) { invoke<Void>(0x02408EE0, p0); } // 0xFA38B52F91B59075 b1207
	static int _NETWORK_GET_NETWORK_ID_FROM_ROPE(int ropeId) { return invoke<int>(0x02408F90, ropeId); } // 0x42871327315EDAE8 b1207
	static int _NETWORK_GET_ROPE_FROM_NETWORK_ID(int netId) { return invoke<int>(0x02409070, netId); } // 0xEB1A4DD8352EC828 b1207
	static void _0xFD1AC0B3858F224C(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02409150, p0, p1, p2, p3); } // 0xFD1AC0B3858F224C b1207
	static void _0xA63E4F050F20021F() { invoke<Void>(0x024091D0); } // 0xA63E4F050F20021F b1207
	static void _NETWORK_SPAWN_CONFIG_ADD_EXCLUSION_VOLUME(Volume volume) { invoke<Void>(0x02409230, volume); } // 0xEEB7818B1D307212 b1207
	static void _0xA35E7BF20FA269E0(Any p0) { invoke<Void>(0x02409340, p0); } // 0xA35E7BF20FA269E0 b1207
	static void _0x0BF90CBB6B72977B() { invoke<Void>(0x02409420); } // 0x0BF90CBB6B72977B b1207
	static void _0x7B3FF2D193628126(Any p0) { invoke<Void>(0x02409480, p0); } // 0x7B3FF2D193628126 b1207
	static void _0x19B52C20B5C4757C() { invoke<Void>(0x02409540); } // 0x19B52C20B5C4757C b1207
	static void NETWORK_SPAWN_CONFIG_SET_FLAGS(int flags) { invoke<Void>(0x024095A0, flags); } // 0xF94A0D5B254375DF b1207
	static void _0x6CEE2E30021DAEC6() { invoke<Void>(0x02409600); } // 0x6CEE2E30021DAEC6 b1207
	static void _NETWORK_SPAWN_CONFIG_ADD_PROPERTY_SCRIPTED(int configProperty, BOOL include) { invoke<Void>(0x02409660, configProperty, include); } // 0x44D59EC597BBF348 b1207
	static void _0xB131E686BD97B3F8() { invoke<Void>(0x024096D0); } // 0xB131E686BD97B3F8 b1207
	static void _NETWORK_SPAWN_CONFIG_ADD_PROPERTY_PREFERENCE(int configProperty, BOOL include, float weight) { invoke<Void>(0x02409730, configProperty, include, weight); } // 0xEB6027FD1B4600D5 b1207
	static void _0x405DDEFB1F531B18(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x024097B0, p0, p1, p2, p3); } // 0x405DDEFB1F531B18 b1207
	static void _0x43CF999205084B4B() { invoke<Void>(0x024097D0); } // 0x43CF999205084B4B b1207
	static void _0x13F592FC3BF0EA84(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x02409880, p0, p1, p2, p3, p4); } // 0x13F592FC3BF0EA84 b1207
	static void _0xCF23AB5BD47B384D(Any p0) { invoke<Void>(0x024098A0, p0); } // 0xCF23AB5BD47B384D b1207
	static void _0xE5634491A58C2703(Any p0) { invoke<Void>(0x024098B0, p0); } // 0xE5634491A58C2703 b1207
	static void NETWORK_SPAWN_CONFIG_SET_GROUND_TO_ROOT_OFFSET(float offset) { invoke<Void>(0x02409910, offset); } // 0x59577799F6AE2F34 b1207
	static void _0xBDCC671B911040F9(Any p0) { invoke<Void>(0x02409970, p0); } // 0xBDCC671B911040F9 b1207
	static void NETWORK_SPAWN_CONFIG_SET_TUNING_FLOAT(Hash p0, float p1) { invoke<Void>(0x024099D0, p0, p1); } // 0x0608326F7B98C08D b1207
	static void _0x5D3C528B7A7DF836(Any p0) { invoke<Void>(0x02409A70, p0); } // 0x5D3C528B7A7DF836 b1207
	static void _0x2686BD9566B65EDA(Any p0, Any p1, Any p2) { invoke<Void>(0x02409AE0, p0, p1, p2); } // 0x2686BD9566B65EDA b1207
	static void _0xBB1EC8C2EEF33BAA(Any p0) { invoke<Void>(0x02409B80, p0); } // 0xBB1EC8C2EEF33BAA b1207
	static Any _0x67CCDF74C4DF7169() { return invoke<Any>(0x02409C90); } // 0x67CCDF74C4DF7169 b1207
	static void _0xC8B6D18E22484643() { invoke<Void>(0x02409D00); } // 0xC8B6D18E22484643 b1207
	static void _0x97BCE4C4B3191228() { invoke<Void>(0x02409D20); } // 0x97BCE4C4B3191228 b1207
	static Any _0x41452E8A3B9C0C4B() { return invoke<Any>(0x02409D40); } // 0x41452E8A3B9C0C4B b1207
	static Any _0x89EC2FC89ECB1005() { return invoke<Any>(0x02409D90); } // 0x89EC2FC89ECB1005 b1207
	static void _0x61BFBAA795E712AD() { invoke<Void>(0x02409DF0); } // 0x61BFBAA795E712AD b1207
	static void _0x765E60A1DCB8B1CE() { invoke<Void>(0x02409E10); } // 0x765E60A1DCB8B1CE b1207
	static void _0x691E4DE5309EAEFC(Any p0, Any p1) { invoke<Void>(0x02409E30, p0, p1); } // 0x691E4DE5309EAEFC b1207
	static void NETWORK_START_SOLO_TUTORIAL_SESSION() { invoke<Void>(0x02409EC0); } // 0x17E0198B3882C2CB 0x408A9436 b1207
	static void NETWORK_END_TUTORIAL_SESSION() { invoke<Void>(0x02409F40); } // 0xD0AFAFF5A51D72F7 0xBA57E53E b1207
	static BOOL NETWORK_IS_IN_TUTORIAL_SESSION() { return invoke<BOOL>(0x02409FE0); } // 0xADA24309FE08DACF 0x34DD7B28 b1207
	static BOOL NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING() { return invoke<BOOL>(0x0240A040); } // 0x35F0B98A8387274D 0xA003C40B b1207
	static BOOL _NETWORK_IS_PLAYER_EQUAL_TO_INDEX(Player player, int index) { return invoke<BOOL>(0x0240A070, player, index); } // 0x9DE986FC9A87C474 0xE66A0B40 b1207
	static void NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(BOOL toggle) { invoke<Void>(0x0240A1A0, toggle); } // 0x4B05B97BA46F419D b1207
	static void NETWORK_ALLOW_ENTITY_FADING_FOR_INSTANCES(Entity entity, BOOL toggle) { invoke<Void>(0x0240A1B0, entity, toggle); } // 0xF3354D6CA46F419D b1207
	static void _0xDC6AD5C046F33AB4(Any p0, Any p1) { invoke<Void>(0x0240A270, p0, p1); } // 0xDC6AD5C046F33AB4 b1207
	static void _0x6C7E04E9DE451789() { invoke<Void>(0x0240A290); } // 0x6C7E04E9DE451789 b1207
	static void NETWORK_SET_LOCAL_PLAYER_PENDING_FAST_INSTANCE_ID(int instanceId) { invoke<Void>(0x0240A2C0, instanceId); } // 0x007FF852DCF49DA4 b1207
	static int _NETWORK_GET_PLAYER_FAST_INSTANCE_ID(Player player) { return invoke<int>(0x0240A2D0, player); } // 0xD9267375834C5EAB b1207
	static void NETWORK_CONCEAL_PLAYER(Player player, BOOL toggle) { invoke<Void>(0x0240A350, player, toggle); } // 0xBBDF066252829606 0x72052DB3 b1207
	static BOOL NETWORK_IS_PLAYER_CONCEALED(Player player) { return invoke<BOOL>(0x0240A4D0, player); } // 0x919B3C98ED8292F9 0xB0313590 b1207
	static void _0x40FEDB13870042F1() { invoke<Void>(0x0240A560); } // 0x40FEDB13870042F1 b1355
	static void _0x422F9D6D6C7BC290(int p0) { invoke<Void>(0x0240A5D0, p0); } // 0x422F9D6D6C7BC290 b1355
	static void NETWORK_REQUEST_CLOUD_TUNABLES() { invoke<Void>(0x0240A620); } // 0x42FB3B532D526E6C 0xD760CAD5 b1311
	static BOOL NETWORK_IS_TUNABLE_CLOUD_REQUEST_PENDING() { return invoke<BOOL>(0x0240A6C0); } // 0x0467C11ED88B7D28 0x47978D7F b1207
	static int NETWORK_GET_TUNABLE_CLOUD_CRC() { return invoke<int>(0x0240A720); } // 0x10BD227A753B0D84 0x231CFD12 b1436
	static BOOL NETWORK_DOES_TUNABLE_EXIST(Hash tunableContext, Hash tunableName) { return invoke<BOOL>(0x0240A740, tunableContext, tunableName); } // 0x85E5F8B9B898B20A 0x9FCE9C9A b1207
	static BOOL NETWORK_ACCESS_TUNABLE_INT(Hash tunableContext, Hash tunableName, int* value) { return invoke<BOOL>(0x0240A7B0, tunableContext, tunableName, value); } // 0x8BE1146DFD5D4468 0xE4B3726A b1207
	static BOOL NETWORK_ACCESS_TUNABLE_BOOL(Hash tunableContext, Hash tunableName) { return invoke<BOOL>(0x0240A830, tunableContext, tunableName); } // 0xAA6A47A573ABB75A 0x8A04E1FE b1207
	static int _NETWORK_TRY_ACCESS_TUNABLE_INT(Hash tunableContext, Hash tunableName, int defaultValue) { return invoke<int>(0x0240A8B0, tunableContext, tunableName, defaultValue); } // 0xA25E006B36719774 b1207
	static float _NETWORK_TRY_ACCESS_TUNABLE_FLOAT(Hash tunableContext, Hash tunableName, float defaultValue) { return invoke<float>(0x0240A920, tunableContext, tunableName, defaultValue); } // 0xA18393089C05E49C b1207
	static BOOL _NETWORK_TRY_ACCESS_TUNABLE_BOOL(Hash tunableContext, Hash tunableName, BOOL defaultValue) { return invoke<BOOL>(0x0240A990, tunableContext, tunableName, defaultValue); } // 0xB2AD5D29A99D4B26 b1207
	static void _0x894B5ECAB45D2342(int netHandle, Any p1) { invoke<Void>(0x0240AA20, netHandle, p1); } // 0x894B5ECAB45D2342 b1207
	static void NETWORK_DISABLE_PROXIMITY_MIGRATION(int netID) { invoke<Void>(0x0240AAC0, netID); } // 0x407091CF6037118E 0x9F82917F b1207
	static Any _0xCE5E79D9E303628E() { return invoke<Any>(0x0240AB50); } // 0xCE5E79D9E303628E b1355
	static Any _0xDBC754CB6CCB9378() { return invoke<Any>(0x0240AB80); } // 0xDBC754CB6CCB9378 b1232
	static BOOL CLOUD_HAS_REQUEST_COMPLETED(int id) { return invoke<BOOL>(0x0240AC10, id); } // 0x4C61B39930D045DA 0xBAF52DD8 b1207
	static BOOL CLOUD_DID_REQUEST_SUCCEED(int id) { return invoke<BOOL>(0x0240ACA0, id); } // 0x3A3D5568AF297CD5 0x9B9AFFF1 b1207
	static BOOL _GET_LAUNCH_PARAM_EXISTS(const char* paramName) { return invoke<BOOL>(0x0240AD00, paramName); } // 0x02E97CE283648CD9 b1207
	static const char* _GET_LAUNCH_PARAM_VALUE(const char* paramName) { return invoke<const char*>(0x0240AD70, paramName); } // 0x65E65CA6A0FE59D4 b1207
	static void _SET_LAUNCH_PARAM_VALUE(const char* paramName, const char* value) { invoke<Void>(0x0240AEC0, paramName, value); } // 0x668AF6E4933AC13F b1207
	static void _CLEAR_LAUNCH_PARAM(const char* paramName) { invoke<Void>(0x0240AEE0, paramName); } // 0x782C94DB6469634D b1207
	static const char* _GET_LAUNCH_PARAM_STRING() { return invoke<const char*>(0x0240AF10); } // 0xC59AB6A04333C502 b1207
	static void _SET_LAUNCH_PARAM_STRING(const char* params) { invoke<Void>(0x0240AF20, params); } // 0xDFFC15AA63D04AAB b1207
	static void _CLEAR_LAUNCH_PARAMS() { invoke<Void>(0x0240AFF0); } // 0x966DD84FB6A46017 b1207
	static BOOL UGC_IS_REQUEST_PENDING(Any p0) { return invoke<BOOL>(0x0240B040, p0); } // 0xF4AC4FA844FD559A b1207
	static BOOL UGC_HAS_REQUEST_FINISHED(Any p0) { return invoke<BOOL>(0x0240B090, p0); } // 0xA9EB4D606076615D b1207
	static BOOL UGC_DID_REQUEST_SUCCEED(Any p0) { return invoke<BOOL>(0x0240B0F0, p0); } // 0x0B6009A90B8495F1 b1207
	static Any _0xCD53E6CBF609C012(Any p0) { return invoke<Any>(0x0240B140, p0); } // 0xCD53E6CBF609C012 b1207
	static Any _0xF40EF49B3099E98E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x0240B1D0, p0, p1, p2, p3, p4, p5); } // 0xF40EF49B3099E98E b1207
	static Any _0x8C109958C9BB559D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x0240B2E0, p0, p1, p2, p3, p4, p5); } // 0x8C109958C9BB559D b1207
	static BOOL _UGC_QUERY_BY_CONTENT_ID(const char* contentId, BOOL latestVersion, const char* contentTypeName) { return invoke<BOOL>(0x0240B3E0, contentId, latestVersion, contentTypeName); } // 0x69D22E183580113F b1207
	static Any _0xE42D1042F09865FE(Any p0) { return invoke<Any>(0x0240B4C0, p0); } // 0xE42D1042F09865FE b1355
	static void UGC_CLEAR_QUERY_RESULTS(Any p0) { invoke<Void>(0x0240B600, p0); } // 0xE931354FEA710038 b1207
	static BOOL UGC_QUERY_WAS_FORCE_CANCELLED(Any p0) { return invoke<BOOL>(0x0240B640, p0); } // 0xF8F0705E77A0E705 b1207
	static Any UGC_QUERY_GET_CONTENT_NUM(Any p0) { return invoke<Any>(0x0240B650, p0); } // 0x76160E0396142765 b1207
	static Any _0xADB56322EEDFBDC9(Any p0, Any p1, Any p2) { return invoke<Any>(0x0240B6C0, p0, p1, p2); } // 0xADB56322EEDFBDC9 b1207
	static Any _0xF9F0B3028431967B(Any p0, Any p1) { return invoke<Any>(0x0240B7A0, p0, p1); } // 0xF9F0B3028431967B b1207
	static Any _0x2D053EA815702DD1(Any p0, Any p1) { return invoke<Any>(0x0240B7E0, p0, p1); } // 0x2D053EA815702DD1 b1207
	static Any _0x566CEB0542EF5ECF(Any p0, Any p1) { return invoke<Any>(0x0240B820, p0, p1); } // 0x566CEB0542EF5ECF b1207
	static Any _0xCAF50048C8D0FBA0(Any p0, Any p1) { return invoke<Any>(0x0240B850, p0, p1); } // 0xCAF50048C8D0FBA0 b1207
	static Any _0xA6BF569956C60A60(Any p0, Any p1) { return invoke<Any>(0x0240B890, p0, p1); } // 0xA6BF569956C60A60 b1207
	static Any _0x409FE0CA6A4D1D49(Any p0, Any p1, Any p2) { return invoke<Any>(0x0240B8D0, p0, p1, p2); } // 0x409FE0CA6A4D1D49 b1207
	static void _0xE0CB4AB15CB32710(Any p0, Any p1, Any p2) { invoke<Void>(0x0240B910, p0, p1, p2); } // 0xE0CB4AB15CB32710 b1207
	static Any _0x21A99A72B00D8002(Any p0, Any p1) { return invoke<Any>(0x0240B9A0, p0, p1); } // 0x21A99A72B00D8002 b1207
	static Any _0x104080CA9E519B00(Any p0, Any p1) { return invoke<Any>(0x0240B9D0, p0, p1); } // 0x104080CA9E519B00 b1207
	static Any _0x63E9DCBC8B0931ED(Any p0, Any p1, Any p2) { return invoke<Any>(0x0240BA00, p0, p1, p2); } // 0x63E9DCBC8B0931ED b1207
	static Any _0x97764E8AC6487A9A(Any p0, Any p1) { return invoke<Any>(0x0240BA30, p0, p1); } // 0x97764E8AC6487A9A b1207
	static Any _0x9993F1E11944A3DD(Any p0, Any p1) { return invoke<Any>(0x0240BA60, p0, p1); } // 0x9993F1E11944A3DD b1207
	static Any _0x24CD8FAEA1368379(Any p0, Any p1, Any p2) { return invoke<Any>(0x0240BA90, p0, p1, p2); } // 0x24CD8FAEA1368379 b1207
	static Any _0x5F0E99071582DECA(Any p0, Any p1, Any p2) { return invoke<Any>(0x0240BAE0, p0, p1, p2); } // 0x5F0E99071582DECA b1207
	static BOOL UGC_QUERY_GET_CONTENT_HAS_PLAYER_RECORD(Any p0, Any p1) { return invoke<BOOL>(0x0240BB30, p0, p1); } // 0xF794765390A6DCA5 b1207
	static Any _0x98539FC453AEA639(Any p0, Any p1) { return invoke<Any>(0x0240BB60, p0, p1); } // 0x98539FC453AEA639 b1207
	static BOOL _UGC_HAS_PRIVILEGE() { return invoke<BOOL>(0x0240BB90); } // 0x6506BFA755FB209C b1207
	static int UGC_REQUEST_CONTENT_DATA_FROM_PARAMS(const char* contentTypeName, const char* contentId, int fileId, int fileVersion, int languageId) { return invoke<int>(0x0240BBE0, contentTypeName, contentId, fileId, fileVersion, languageId); } // 0x7FD2990AF016795E 0x38FC2EEB b1207
	static int UGC_REQUEST_CACHED_DESCRIPTION(int p0) { return invoke<int>(0x0240BCC0, p0); } // 0x5E0165278F6339EE 0x1C4F9FDB b1207
	static BOOL UGC_IS_DESCRIPTION_REQUEST_IN_PROGRESS(Any p0) { return invoke<BOOL>(0x0240BCF0, p0); } // 0x2D5DC831176D0114 0xA69AE16C b1207
	static BOOL UGC_HAS_DESCRIPTION_REQUEST_FINISHED(Any p0) { return invoke<BOOL>(0x0240BD40, p0); } // 0xEBFA8D50ADDC54C4 0xF50BC67A b1207
	static BOOL UGC_DID_DESCRIPTION_REQUEST_SUCCEED(Any p0) { return invoke<BOOL>(0x0240BDA0, p0); } // 0x162C23CA83ED0A62 0xB3BBD241 b1207
	static const char* UGC_GET_CACHED_DESCRIPTION(int p0, int length) { return invoke<const char*>(0x0240BDF0, p0, length); } // 0x40F7E66472DF3E5C 0x70A2845C b1207
	static BOOL UGC_RELEASE_CACHED_DESCRIPTION(Any p0) { return invoke<BOOL>(0x0240BEA0, p0); } // 0x5A34CD9C3C5BEC44 0x346B506C b1207
	static void _0x68103E2247887242() { invoke<Void>(0x0240BED0); } // 0x68103E2247887242 0x0095DB71 b1207
	static void UGC_SET_QUERY_DATA_FROM_OFFLINE(BOOL p0) { invoke<Void>(0x0240BEE0, p0); } // 0xF98DDE0A8ED09323 0x213C6D36 b1207
	static BOOL UGC_IS_LANGUAGE_SUPPORTED(int languageId) { return invoke<BOOL>(0x0240BF10, languageId); } // 0xF53E48461B71EECB 0xB4668B23 b1207
	static Any _0xD4022C7286B0DFA2(Any p0, Any p1, Any p2) { return invoke<Any>(0x0240C070, p0, p1, p2); } // 0xD4022C7286B0DFA2 b1207
	static BOOL _0xB72999D3120599DF(Any* p0, Any slot, Any p2) { return invoke<BOOL>(0x0240C0C0, p0, slot, p2); } // 0xB72999D3120599DF b1207
	static BOOL _0x2A48D9567940598F(Any* p0, Any cachingSlot, Any p2, Any type) { return invoke<BOOL>(0x0240C130, p0, cachingSlot, p2, type); } // 0x2A48D9567940598F b1207
	static Any _0xA21E3BAD0A42D199() { return invoke<Any>(0x0240C1F0); } // 0xA21E3BAD0A42D199 b1207
	static Any _0xCC4E72C339461ED1() { return invoke<Any>(0x0240C210); } // 0xCC4E72C339461ED1 b1207
	static Any _0x356F9FB0698C1FEB(Any p0, Any p1) { return invoke<Any>(0x0240C230, p0, p1); } // 0x356F9FB0698C1FEB b1207
	static Any _0xCAF4CA2F87779F8F(Any p0, Any p1) { return invoke<Any>(0x0240C390, p0, p1); } // 0xCAF4CA2F87779F8F b1207
	static const char* _0xB5C4B18B12A2AF23(Any* gamerHandle, int p1) { return invoke<const char*>(0x0240C590, gamerHandle, p1); } // 0xB5C4B18B12A2AF23 b1207
	static BOOL _0xE2C3CEC3C0903A00(const char* name) { return invoke<BOOL>(0x0240C6A0, name); } // 0xE2C3CEC3C0903A00 b1207
	static int TEXTURE_DOWNLOAD_REQUEST(Any* gamerHandle, const char* filePath, const char* name, BOOL p3) { return invoke<int>(0x0240C790, gamerHandle, filePath, name, p3); } // 0x16160DA74A8E74A2 0xAD546CC3 b1207
	static int _MUGSHOT_TEXTURE_DOWNLOAD_REQUEST(Any* gamerHandle, int p1, const char* name, BOOL p3) { return invoke<int>(0x0240C7D0, gamerHandle, p1, name, p3); } // 0x9B5DB6CEAFAA10BB b1207
	static int UGC_TEXTURE_DOWNLOAD_REQUEST(Any* p0, Any p1, Any p2, Any p3, Any* p4, BOOL p5) { return invoke<int>(0x0240C810, p0, p1, p2, p3, p4, p5); } // 0x308F96458B7087CC 0x68C9AF69 b1207
	static int _LOCAL_PLAYER_PEDSHOT_TEXTURE_DOWNLOAD_REQUEST(int player, int p1) { return invoke<int>(0x0240C850, player, p1); } // 0x6E2FD8CF7EB10E53 b1207
	static void TEXTURE_DOWNLOAD_RELEASE(int textureDownloadId) { invoke<Void>(0x0240CB00, textureDownloadId); } // 0x487EB90B98E9FB19 0xEE8D9E70 b1207
	static void _TEXTURE_DOWNLOAD_RELEASE_BY_NAME(const char* name) { invoke<Void>(0x0240CB50, name); } // 0x7A17B7981560FFA5 b1207
	static const char* TEXTURE_DOWNLOAD_GET_NAME(int textureDownloadId) { return invoke<const char*>(0x0240CC30, textureDownloadId); } // 0x3448505B6E35262D 0xA40EF65A b1207
	static int GET_STATUS_OF_TEXTURE_DOWNLOAD(int textureDownloadId) { return invoke<int>(0x0240CCA0, textureDownloadId); } // 0x8BD6C6DEA20E82C6 0x03225BA3 b1207
	static int _0xCBAC13F065C47596() { return invoke<int>(0x0240CD50); } // 0xCBAC13F065C47596 b1207
	static Any _0xCD954F330693F5F2() { return invoke<Any>(0x0240CD60); } // 0xCD954F330693F5F2 b1207
	static Any _0xFBC30B70B3CDB87E() { return invoke<Any>(0x0240CDC0); } // 0xFBC30B70B3CDB87E b1207
	static void _0x814729078AED6D30() { invoke<Void>(0x0240CDE0); } // 0x814729078AED6D30 b1207
	static BOOL NETWORK_HAVE_ROS_BANNED_PRIV() { return invoke<BOOL>(0x0240CE00); } // 0x8020A73847E0CA7D 0xD3BBE42F b1207
	static BOOL NETWORK_HAS_ROS_PRIVILEGE(int index) { return invoke<BOOL>(0x0240CE20, index); } // 0xA699957E60D80214 0xFD261E30 b1207
	static int NETWORK_START_USER_CONTENT_PERMISSIONS_CHECK(Any* gamerHandle) { return invoke<int>(0x0240CE50, gamerHandle); } // 0xDEB2B99A1AF1A2A6 b1207
	static void _NETWORK_AUTO_SESSION_SET_ALLOWED_TO_SPLIT(BOOL toggle) { invoke<Void>(0x0240CE60, toggle); } // 0x0A428058079EE65C b1207
	static BOOL NETWORK_AUTO_SESSION_IS_ALLOWED_TO_MERGE() { return invoke<BOOL>(0x0240CF30); } // 0xAADED99A6B268A27 b1207
	static void _NETWORK_AUTO_SESSION_SET_ALLOWED_TO_MERGE(BOOL toggle, Any* p1, int p2) { invoke<Void>(0x0240CF80, toggle, p1, p2); } // 0x63246A24F5747510 b1207
	static BOOL _0xE258570E0C116A66() { return invoke<BOOL>(0x0240CFA0); } // 0xE258570E0C116A66 b1207
	static void _0x4440FEE3EFE78F54(BOOL toggle) { invoke<Void>(0x0240CFE0, toggle); } // 0x4440FEE3EFE78F54 b1207
	static BOOL NETWORK_AUTO_SESSION_CAN_SPLIT_SESSION(int* p0) { return invoke<BOOL>(0x0240D020, p0); } // 0xE404BFF0ABA23CDC b1207
	static BOOL NETWORK_AUTO_SESSION_SPLIT_SESSION(int playersToTake, int maxInstancePlayers, int sessionFlags, int bucketId) { return invoke<BOOL>(0x0240D050, playersToTake, maxInstancePlayers, sessionFlags, bucketId); } // 0xC223D299C670413D b1207
	static Any _0xA021095C983F20D8() { return invoke<Any>(0x0240D080); } // 0xA021095C983F20D8 b1207
	static Any _0x6D87BA8EF15226CD() { return invoke<Any>(0x0240D170); } // 0x6D87BA8EF15226CD b1207
	static Any _0x277865A734918AE6() { return invoke<Any>(0x0240D230); } // 0x277865A734918AE6 b1207
	static void NETWORK_AUTO_SESSION_FINISH_INSTANCE() { invoke<Void>(0x0240D2F0); } // 0xBB51299166B844F3 b1207
	static void _0xFD8112109A96877C() { invoke<Void>(0x0240D400); } // 0xFD8112109A96877C b1311
	static void _0x5A91BCEF74944E93(Any p0, Any p1) { invoke<Void>(0x0240D430, p0, p1); } // 0x5A91BCEF74944E93 b1207
	static int _0xFB3205788F8AFA3F() { return invoke<int>(0x0240D4E0); } // 0xFB3205788F8AFA3F b1311
	static void _0x335AF56613CA0F49(int p0) { invoke<Void>(0x0240D530, p0); } // 0x335AF56613CA0F49 b1311
	static BOOL _0x9E5A47744C0F0376(int p0) { return invoke<BOOL>(0x0240D570, p0); } // 0x9E5A47744C0F0376 b1311
	static void _0xD3B6EBC6C3D77D44(int p0) { invoke<Void>(0x0240D5E0, p0); } // 0xD3B6EBC6C3D77D44 b1311
	static void _0xA7670F7991099680(int p0) { invoke<Void>(0x0240D630, p0); } // 0xA7670F7991099680 b1311
	static void _0x7673C0D2C5CDAC55() { invoke<Void>(0x0240D680); } // 0x7673C0D2C5CDAC55 b1311
	static void _0x3CBD6565D9C3B133(int p0, int p1, float p2) { invoke<Void>(0x0240D6C0, p0, p1, p2); } // 0x3CBD6565D9C3B133 b1311
	static void _0x0D183D8490EE4366(int p0, int p1) { invoke<Void>(0x0240D780, p0, p1); } // 0x0D183D8490EE4366 b1311
	static void _0xC1968045EEB563B7(int p0) { invoke<Void>(0x0240D820, p0); } // 0xC1968045EEB563B7 b1311
	static BOOL NETWORK_AUTO_SESSION_IS_OBJECT_CREATION_PAUSED() { return invoke<BOOL>(0x0240D8B0); } // 0x0E2C3AEE6CE603B7 b1207
	static Any _0x0B6B4507AC5EA8B8() { return invoke<Any>(0x0240D8E0); } // 0x0B6B4507AC5EA8B8 b1207
	static BOOL NETWORK_IS_RESETTING_POPULATION() { return invoke<BOOL>(0x0240D930); } // 0x1BB50CD340A996E6 b1207
	static BOOL NETWORK_RESET_POPULATION(BOOL p0, int p1) { return invoke<BOOL>(0x0240D990, p0, p1); } // 0x101F538C25ABB39A b1207
	static void NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(BOOL toggle) { invoke<Void>(0x0240D9C0, toggle); } // 0xC505036A35AFD01B 0xA100CC97 b1207
	static void _0x3034C77C79A58880(Any p0) { invoke<Void>(0x0240DA40, p0); } // 0x3034C77C79A58880 b1207
	static void _NETWORK_ALLOW_LOCAL_ENTITY_ATTACHMENT(Entity entity, BOOL toggle) { invoke<Void>(0x0240DAC0, entity, toggle); } // 0x267C78C60E806B9A 0xBB2D33D3 b1207
	static void _0x6BFF5F84102DF80A(Player player) { invoke<Void>(0x0240DBB0, player); } // 0x6BFF5F84102DF80A b1207
	static void _0x5C497525F803486B() { invoke<Void>(0x0240DBD0); } // 0x5C497525F803486B b1207
	static BOOL _NETWORK_IS_CONNECTION_ENDPOINT_RELAY_SERVER(Player player) { return invoke<BOOL>(0x0240DBF0, player); } // 0x16D3D49902F697BB b1207
	static float _NETWORK_GET_AVERAGE_LATENCY_FOR_PLAYER(Player player) { return invoke<float>(0x0240DC40, player); } // 0xD414BE129BB81B32 b1207
	static float _NETWORK_GET_AVERAGE_LATENCY_FOR_PLAYER_2(Player player) { return invoke<float>(0x0240DCA0, player); } // 0x0E3A041ED6AC2B45 b1207
	static float _NETWORK_GET_AVERAGE_PACKET_LOSS_FOR_PLAYER(Player player) { return invoke<float>(0x0240DD00, player); } // 0x350C23949E43686C b1207
	static int _NETWORK_GET_NUM_UNACKED_FOR_PLAYER(Player player) { return invoke<int>(0x0240DD60, player); } // 0xFF8FCF9FFC458A1C b1207
	static int _NETWORK_GET_UNRELIABLE_RESEND_COUNT_FOR_PLAYER(Player player) { return invoke<int>(0x0240DE50, player); } // 0x3765C3A3E8192E10 b1207
	static int _NETWORK_GET_OLDEST_RESEND_COUNT_FOR_PLAYER(Player player) { return invoke<int>(0x0240DEC0, player); } // 0x52C1EADAF7B10302 b1207
	static Any _0xAEDF1BC1C133D6E3() { return invoke<Any>(0x0240DFD0); } // 0xAEDF1BC1C133D6E3 b1207
	static Any _0x6FD992C4A1C1B986() { return invoke<Any>(0x0240DFE0); } // 0x6FD992C4A1C1B986 b1207
	static BOOL NETWORK_IS_PLAYER_INDEX_VALID(Player player) { return invoke<BOOL>(0x0240DFF0, player); } // 0x255A5EF65EDA9167 b1207
	static BOOL _GET_PLAYER_WAYPOINT_IS_ACTIVE(Player player) { return invoke<BOOL>(0x0240E010, player); } // 0xDCC4B7F7112E8AB7 b1207
	static void _0x455156F47DC6B78C(Any p0) { invoke<Void>(0x0240E0A0, p0); } // 0x455156F47DC6B78C b1207
	static void _SET_LOCAL_PLAYER_DAMAGE_MULTIPLIER_FOR_PLAYER(Player player, float damageMultiplier) { invoke<Void>(0x0240E120, player, damageMultiplier); } // 0xD041A32992A55F84 b1207
	static void _NETWORK_SET_VEHICLE_WHEELS_DESTRUCTIBLE(Any p0, Any p1) { invoke<Void>(0x0240E1D0, p0, p1); } // 0x0C8BC052AE87D744 b1207
	static void _0x5CD3AAD8FF9ED121(Any p0) { invoke<Void>(0x0240E2C0, p0); } // 0x5CD3AAD8FF9ED121 b1207
	static void _0x51951DE06C0D1C40(Player player, int type) { invoke<Void>(0x0240E2D0, player, type); } // 0x51951DE06C0D1C40 b1207
	static void _0xE3AB5EEFCB6671A2(int setting) { invoke<Void>(0x0240E300, setting); } // 0xE3AB5EEFCB6671A2 b1207
	static void _0x9B39B0555CC692B5() { invoke<Void>(0x0240E320); } // 0x9B39B0555CC692B5 b1207
	static int _0xFE53B1F8D43F19BF(Player player1, Player player2) { return invoke<int>(0x0240E340, player1, player2); } // 0xFE53B1F8D43F19BF b1207
	static BOOL _0x862C5040F4888741(Player player1, Player player2) { return invoke<BOOL>(0x0240E3A0, player1, player2); } // 0x862C5040F4888741 b1207
	static void _0x2CD41AC000E6F611() { invoke<Void>(0x0240E400); } // 0x2CD41AC000E6F611 b1207
	static void _0xACC44768AF229042() { invoke<Void>(0x0240E410); } // 0xACC44768AF229042 b1207
	static void _0x7E300B5B86AB1D1A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { invoke<Void>(0x0240E420, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // 0x7E300B5B86AB1D1A b1207
	static int GET_UNIQUE_INT_FOR_PLAYER(Player player) { return invoke<int>(0x0240E550, player); } // 0x07F723401B9D921C b1207
	static void _0x780A13F780A13F1B(Any p0) { invoke<Void>(0x0240E570, p0); } // 0x780A13F780A13F1B b1311
	static BOOL _NETWORK_IS_TRACKED_PLAYER_VISIBLE(Player player, Player trackedPlayer) { return invoke<BOOL>(0x0240E580, player, trackedPlayer); } // 0xE525878A35B9EEBD b1207
	static BOOL NETWORK_IS_AIM_CAM_ACTIVE(Player player) { return invoke<BOOL>(0x0240E5B0, player); } // 0x8E7CE19219669AEB b1207
	static void _NETWORK_ALERT(Hash ctx, Hash lh, int ec, int h) { invoke<Void>(0x0240E740, ctx, lh, ec, h); } // 0x1BAA028F52EED310 b1311
	static void _0x19447FCAE97704DC(Hash ctx, int ec, BOOL ex, BOOL ro) { invoke<Void>(0x0240E7B0, ctx, ec, ex, ro); } // 0x19447FCAE97704DC b1311
	static void _0x2C4E98DDA475364F(const char* p0) { invoke<Void>(0x0240E830, p0); } // 0x2C4E98DDA475364F b1207
	static void _0x3F0ABAE38A0515AD(Any p0, Any p1) { invoke<Void>(0x0240E840, p0, p1); } // 0x3F0ABAE38A0515AD b1207
	static Any _0x3F2EE18A3E294801(Any p0) { return invoke<Any>(0x0240E860, p0); } // 0x3F2EE18A3E294801 b1207
	static void _SET_SOCIAL_MATCHMAKING_ALLOWED(BOOL toggle) { invoke<Void>(0x0240E8A0, toggle); } // 0x777D0571A466B520 b1207
	static BOOL _GET_SOCIAL_MATCHMAKING_ALLOWED() { return invoke<BOOL>(0x0240E9A0); } // 0xD0541EF28E9C4783 b1207
	static BOOL NETWORK_AWARD_HAS_REACHED_MAXCLAIM(Any p0) { return invoke<BOOL>(0x0240E9E0, p0); } // 0xFBE782B3165AC8EC b1207
	static Any _0x271F95E55C663B8B(Any p0, Any p1) { return invoke<Any>(0x0240EA20, p0, p1); } // 0x271F95E55C663B8B b1207
	static Any _0x64A36BA85CE01A81(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x0240EA50, p0, p1, p2, p3); } // 0x64A36BA85CE01A81 b1207
	static Any _0xE10F2D7715ABABEC(Any p0) { return invoke<Any>(0x0240EA80, p0); } // 0xE10F2D7715ABABEC b1207
	static Any _0x7A8E8DF782B47EB0(Any p0, Any p1, Any p2) { return invoke<Any>(0x0240EB10, p0, p1, p2); } // 0x7A8E8DF782B47EB0 b1207
	static Any _0x77B299E8799B1332(Any p0, Any p1, Any p2) { return invoke<Any>(0x0240EB40, p0, p1, p2); } // 0x77B299E8799B1332 b1207
	static Any _0x923346025512DFB7(Any p0) { return invoke<Any>(0x0240EB70, p0); } // 0x923346025512DFB7 b1207
	static int _NETWORK_GET_XP() { return invoke<int>(0x0240EC00); } // 0xDB438CC9BC6F4022 b1207
	static int _NETWORK_GET_RANK() { return invoke<int>(0x0240EC30); } // 0x32C90CDFAF40514C b1207
	static void NETWORK_SET_RECENT_GAMERS_ENABLED(BOOL toggle) { invoke<Void>(0x0240EC60, toggle); } // 0x29FE035D35B8589C b1207
	static Any _0x273E04A3A7AD1F2D() { return invoke<Any>(0x0240EC70); } // 0x273E04A3A7AD1F2D b1207
	static void _NETWORK_ADD_PLAYER_TO_RECENT_GAMERS_LIST(Player player, int p1) { invoke<Void>(0x0240EC80, player, p1); } // 0x157D8F3DE12B307F b1207
	static BOOL NETWORK_REQUEST_RECENT_GAMER_NAMES(int p0, int playerCount) { return invoke<BOOL>(0x0240ECD0, p0, playerCount); } // 0x6D206D383BB5F6B1 b1207
	static BOOL _NETWORK_IS_RECENT_GAMER_NAMES_REQUEST_IN_PROGRESS() { return invoke<BOOL>(0x0240ED00); } // 0x4664D213A0CCAF40 b1207
	static BOOL _NETWORK_DID_RECENT_GAMER_NAMES_REQUEST_SUCCEED() { return invoke<BOOL>(0x0240ED20); } // 0x12AEB56B489415C5 b1207
	static int _NETWORK_GET_NUM_RECENT_GAMERS() { return invoke<int>(0x0240ED50); } // 0x37A834AEC6A4F74A b1207
	static BOOL NETWORK_GET_RECENT_GAMER_NAMES(int p0, int p1, Any* outData, int dataSize) { return invoke<BOOL>(0x0240ED60, p0, p1, outData, dataSize); } // 0xFEFCC345CE357453 b1207
	static void _0x49CF17A564918E8D() { invoke<Void>(0x0240ED90); } // 0x49CF17A564918E8D b1207
	static void _0xD637D327080CD86E(Any p0) { invoke<Void>(0x0240EDA0, p0); } // 0xD637D327080CD86E b1207
	static void _0x564552C6AF1EEAB1() { invoke<Void>(0x0240EF20); } // 0x564552C6AF1EEAB1 b1207
	static void NETWORK_ACTIVITY_RESET_TO_IDLE() { invoke<Void>(0x0240EF30); } // 0x3FE141FDB990E3D1 b1207
	static void NETWORK_ACTIVITY_SET_CURRENT(Any p0) { invoke<Void>(0x0240EFC0, p0); } // 0x9ADAC065D9F6706F b1207
	static const char* _NETWORK_GET_ROS_TITLE_NAME() { return invoke<const char*>(0x0240EFE0); } // 0xAC6153A0722F524C b1207
	static void _REPORT_PLAYER(Player player, int reportType, const char* description, const char* horseName) { invoke<Void>(0x0240F000, player, reportType, description, horseName); } // 0xA197C35F73AC0F12 b1207
}

namespace OBJECT
{
	static Object CREATE_OBJECT(Hash modelHash, float x, float y, float z, BOOL isNetwork, BOOL bScriptHostObj, BOOL dynamic, BOOL p7, BOOL p8) { return invoke<Object>(0x0242CD20, modelHash, x, y, z, isNetwork, bScriptHostObj, dynamic, p7, p8); } // 0x509D5878EB39E842 0x2F7AA05C b1207
	static Object CREATE_OBJECT_NO_OFFSET(Hash modelHash, float x, float y, float z, BOOL isNetwork, BOOL bScriptHostObj, BOOL dynamic, BOOL p7) { return invoke<Object>(0x0242CE50, modelHash, x, y, z, isNetwork, bScriptHostObj, dynamic, p7); } // 0x9A294B2138ABB884 0x58040420 b1207
	static void DELETE_OBJECT(Object* object) { invoke<Void>(0x0242CF60, object); } // 0x931914268722C263 0xD6EF9DA7 b1207
	static BOOL PLACE_OBJECT_ON_GROUND_PROPERLY(Object object, BOOL p1) { return invoke<BOOL>(0x0242CF70, object, p1); } // 0x58A850EAEE20FAA3 0x8F95A20B b1207
	static BOOL SLIDE_OBJECT(Object object, float toX, float toY, float toZ, float speedX, float speedY, float speedZ, BOOL collision) { return invoke<BOOL>(0x0242D090, object, toX, toY, toZ, speedX, speedY, speedZ, collision); } // 0x2FDFF4107B8C1147 0x63BFA7A0 b1207
	static void SET_OBJECT_TARGETTABLE(Object object, BOOL targettable) { invoke<Void>(0x0242D0D0, object, targettable); } // 0x8A7391690F5AFD81 0x3F88CD86 b1207
	static void _SET_OBJECT_TARGETTABLE_2(Object object, BOOL targettable) { invoke<Void>(0x0242D0F0, object, targettable); } // 0x581EDBE56E8D62C9 b1207
	static void _SET_OBJECT_TARGETTABLE_FOCUS(Object object, BOOL p1, BOOL p2) { invoke<Void>(0x0242D110, object, p1, p2); } // 0xA22712E8471AA08E b1207
	static void _0xF6E88489B4E6EBE5(Any p0, Any p1) { invoke<Void>(0x0242D130, p0, p1); } // 0xF6E88489B4E6EBE5 b1207
	static void _0xE157A8A336C7F04A(Any p0, Any p1) { invoke<Void>(0x0242D210, p0, p1); } // 0xE157A8A336C7F04A b1207
	static void _0x46CBCF0E98A4E156(Any p0, Any p1) { invoke<Void>(0x0242D2F0, p0, p1); } // 0x46CBCF0E98A4E156 b1207
	static Object GET_CLOSEST_OBJECT_OF_TYPE(float x, float y, float z, float radius, Hash modelHash, BOOL isMission, BOOL p6, BOOL p7) { return invoke<Object>(0x0242D3E0, x, y, z, radius, modelHash, isMission, p6, p7); } // 0xE143FA2249364369 0x45619B33 b1207
	static BOOL HAS_OBJECT_BEEN_BROKEN(Any p0) { return invoke<BOOL>(0x0242D430, p0); } // 0x8ABFB70C49CC43E2 0xFE21F891 b1207
	static BOOL HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_BROKEN(float p0, float p1, float p2, float p3, Hash modelHash, Any p5) { return invoke<BOOL>(0x0242D4F0, p0, p1, p2, p3, modelHash, p5); } // 0x761B0E69AC4D007E 0x6FC0353D b1207
	static Vector3 _GET_OBJECT_OFFSET_FROM_COORDS(float xPos, float yPos, float zPos, float heading, float xOffset, float yOffset, float zOffset) { return invoke<Vector3>(0x0242D520, xPos, yPos, zPos, heading, xOffset, yOffset, zOffset); } // 0x163E252DE035A133 0x87A42A12 b1207
	static void _ADD_DOOR_TO_SYSTEM_NEW(Hash doorHash, BOOL p1, BOOL p2, BOOL p3, int threadId, int p5, BOOL p6) { invoke<Void>(0x0242D610, doorHash, p1, p2, p3, threadId, p5, p6); } // 0xD99229FE93B46286 b1207
	static BOOL _IS_DOOR_REGISTERED_WITH_NETWORK(Hash doorHash) { return invoke<BOOL>(0x0242D660, doorHash); } // 0xB5DED7B65C604FDF b1207
	static void REMOVE_DOOR_FROM_SYSTEM(Hash doorHash) { invoke<Void>(0x0242D6C0, doorHash); } // 0x464D8E1427156FE4 0x00253286 b1207
	static void DOOR_SYSTEM_SET_DOOR_STATE(Hash doorHash, int state) { invoke<Void>(0x0242D7E0, doorHash, state); } // 0x6BAB9442830C7F53 0xDF83DB47 b1207
	static int DOOR_SYSTEM_GET_DOOR_STATE(Hash doorHash) { return invoke<int>(0x0242D8A0, doorHash); } // 0x160AA1B32F6139B8 0xD42A41C2 b1207
	static void DOOR_SYSTEM_SET_AUTOMATIC_RATE(Hash doorHash, float rate) { invoke<Void>(0x0242D900, doorHash, rate); } // 0x03C27E13B42A0E82 0x4F44AF21 b1207
	static void DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Hash doorHash, float distance) { invoke<Void>(0x0242D9B0, doorHash, distance); } // 0x9BA001CB45CBF627 0x47531446 b1207
	static void _0xB3B1546D23DF8DE1(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x0242DA50, p0, p1, p2, p3, p4); } // 0xB3B1546D23DF8DE1 b1207
	static void DOOR_SYSTEM_SET_OPEN_RATIO(Hash doorHash, float ajar, BOOL forceUpdate) { invoke<Void>(0x0242DA70, doorHash, ajar, forceUpdate); } // 0xB6E6FBA95C7324AC 0x34883DE3 b1207
	static void _0x3A77DAE8B4FD7586(Any p0, Any p1) { invoke<Void>(0x0242DB50, p0, p1); } // 0x3A77DAE8B4FD7586 b1207
	static void _DOOR_SYSTEM_SET_ABLE_TO_CHANGE_OPEN_RATIO_WHILE_LOCKED(Hash doorHash, BOOL p1) { invoke<Void>(0x0242DBD0, doorHash, p1); } // 0x1F1FABFE9B2A1254 b1207
	static Any _0x4F89DAD4156BA145(Any p0) { return invoke<Any>(0x0242DC50, p0); } // 0x4F89DAD4156BA145 b1207
	static void _0x985767F5FA45BC44(Any p0) { invoke<Void>(0x0242DD70, p0); } // 0x985767F5FA45BC44 b1207
	static Any _0x8433E1954BE323FC(Any p0) { return invoke<Any>(0x0242DD80, p0); } // 0x8433E1954BE323FC b1207
	static Any _0x6E2AA80BB0C03728(Any p0, Any p1) { return invoke<Any>(0x0242DDF0, p0, p1); } // 0x6E2AA80BB0C03728 b1207
	static void _0x1BC47A9DEDC8DF5D(Any p0, Any p1) { invoke<Void>(0x0242DE60, p0, p1); } // 0x1BC47A9DEDC8DF5D b1207
	static float DOOR_SYSTEM_GET_OPEN_RATIO(Hash doorHash) { return invoke<float>(0x0242DF10, doorHash); } // 0x65499865FCA6E5EC 0xB74C3BD7 b1207
	static void _0x7F458B543006C8FE(Any p0, Any p1) { invoke<Void>(0x0242DF90, p0, p1); } // 0x7F458B543006C8FE b1207
	static Any _0xACD4F9831DFAD7F5(Any p0) { return invoke<Any>(0x0242E000, p0); } // 0xACD4F9831DFAD7F5 b1207
	static void _0x0C0A373D181BF900(Any p0) { invoke<Void>(0x0242E080, p0); } // 0x0C0A373D181BF900 b1207
	static void _0xA93F925F1942E434(Any p0, Any p1) { invoke<Void>(0x0242E0F0, p0, p1); } // 0xA93F925F1942E434 b1207
	static Any _0x4D8611DFE1126478(Any p0) { return invoke<Any>(0x0242E190, p0); } // 0x4D8611DFE1126478 b1207
	static void _0x57C242543B7B8FB9(Any p0, Any p1) { invoke<Void>(0x0242E220, p0, p1); } // 0x57C242543B7B8FB9 b1207
	static void _0x4AE07EBA3462C5D5(Any p0, Any p1) { invoke<Void>(0x0242E2C0, p0, p1); } // 0x4AE07EBA3462C5D5 b1207
	static void _0x22031584496CFB70(Any p0, Any p1) { invoke<Void>(0x0242E360, p0, p1); } // 0x22031584496CFB70 b1207
	static void _0xC07B91B996C1DE89(Any p0, Any p1) { invoke<Void>(0x0242E400, p0, p1); } // 0xC07B91B996C1DE89 b1207
	static BOOL IS_DOOR_REGISTERED_WITH_SYSTEM(Hash doorHash) { return invoke<BOOL>(0x0242E4C0, doorHash); } // 0xC153C43EA202C8C1 0x5AFCD8A1 b1207
	static BOOL IS_DOOR_CLOSED(Hash doorHash) { return invoke<BOOL>(0x0242E620, doorHash); } // 0xC531EE8A1145A149 0x48659CD7 b1207
	static Any _0x0943113E02322164(Object object, int p1) { return invoke<Any>(0x0242E6D0, object, p1); } // 0x0943113E02322164 b1207
	static Any _0x614D0B4533F842D3(Any p0) { return invoke<Any>(0x0242E7A0, p0); } // 0x614D0B4533F842D3 b1207
	static void _DOOR_SYSTEM_FORCE_SHUT(Hash doorHash, BOOL p1) { invoke<Void>(0x0242E860, doorHash, p1); } // 0x276AAF0F1C7F2494 b1207
	static Any _0xEBA314768FB35D58(Any p0) { return invoke<Any>(0x0242E8E0, p0); } // 0xEBA314768FB35D58 b1207
	static void _0x5230BF34EB0EC645(Any p0) { invoke<Void>(0x0242E940, p0); } // 0x5230BF34EB0EC645 b1207
	static BOOL DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(float x, float y, float z, float radius, Hash hash, BOOL p5) { return invoke<BOOL>(0x0242E9D0, x, y, z, radius, hash, p5); } // 0xBFA48E2FF417213F 0x23FF2BA4 b1207
	static BOOL IS_POINT_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, BOOL p10, BOOL p11) { return invoke<BOOL>(0x0242EC60, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x2A70BAE8883E4C81 0x73BCFFDC b1207
	static void SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(Object object, BOOL toggle) { invoke<Void>(0x0242ED10, object, toggle); } // 0x4D89D607CB3DD1D2 0x19B17769 b1207
	static void SET_OBJECT_PHYSICS_PARAMS(Object object, float weight, float p2, float p3, float p4, float p5, float gravity, float p7, float p8, float p9, float p10, float buoyancy) { invoke<Void>(0x0242EDE0, object, weight, p2, p3, p4, p5, gravity, p7, p8, p9, p10, buoyancy); } // 0xF6DF6E90DE7DF90F 0xE8D11C58 b1207
	static float GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(Any p0, BOOL p1) { return invoke<float>(0x0242EE10, p0, p1); } // 0xB6FBFD079B8D0596 0xF0B330AD b1207
	static Any _0x235C863DA77BD88D(Any p0, Any p1, Any p2) { return invoke<Any>(0x0242EED0, p0, p1, p2); } // 0x235C863DA77BD88D b1207
	static void SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(Object object, BOOL toggle) { invoke<Void>(0x0242EF00, object, toggle); } // 0x406137F8EF90EAF5 0x3E263AE1 b1207
	static void BREAK_OBJECT_FRAGMENT_CHILD(Object object, Any p1, BOOL p2) { invoke<Void>(0x0242EFE0, object, p1, p2); } // 0xE7E4C198B0185900 0x1E82C2AE b1207
	static void BREAK_ALL_OBJECT_FRAGMENT_BONES(Object object) { invoke<Void>(0x0242F0B0, object); } // 0x8462BE2341A55B6F b1207
	static void _0xAAACF33CBF9B990A(Any p0, Any p1) { invoke<Void>(0x0242F220, p0, p1); } // 0xAAACF33CBF9B990A b1207
	static void _0xE4EFB315BCD2A838(Any p0, Any p1) { invoke<Void>(0x0242F230, p0, p1); } // 0xE4EFB315BCD2A838 b1207
	static void _0xF9C1681347C8BD15(Object object) { invoke<Void>(0x0242F240, object); } // 0xF9C1681347C8BD15 b1207
	static Any _0x58DE624FA7FB0E7F(Any p0) { return invoke<Any>(0x0242F250, p0); } // 0x58DE624FA7FB0E7F b1207
	static void _0x491439AEF410A2FC(Any p0) { invoke<Void>(0x0242F370, p0); } // 0x491439AEF410A2FC b1207
	static void _0xFFB99FFD17F65889(Any p0, Any p1) { invoke<Void>(0x0242F380, p0, p1); } // 0xFFB99FFD17F65889 b1207
	static void _0xCEAB54F4632C6EF6(Any p0, Any p1) { invoke<Void>(0x0242F450, p0, p1); } // 0xCEAB54F4632C6EF6 b1207
	static void TRACK_OBJECT_VISIBILITY(Object object) { invoke<Void>(0x0242F530, object); } // 0xB252BC036B525623 0x46D06B9A b1207
	static BOOL IS_OBJECT_VISIBLE(Object object) { return invoke<BOOL>(0x0242F5D0, object); } // 0x8B32ACE6326A7546 0xF4FD8AE4 b1207
	static void _0xEB6F1A9B5510A5D2(Any p0, BOOL p1) { invoke<Void>(0x0242F6B0, p0, p1); } // 0xEB6F1A9B5510A5D2 0xAF016CC1 b1207
	static void ALLOW_DAMAGE_EVENTS_FOR_NON_NETWORKED_OBJECTS(BOOL enabled) { invoke<Void>(0x0242F7A0, enabled); } // 0xE2B3B852B537C398 b1207
	static void _0x6579860A5558524A(Any p0, Any p1) { invoke<Void>(0x0242F7B0, p0, p1); } // 0x6579860A5558524A b1207
	static void _0xDFA1237F5228263F(Any p0, Any p1) { invoke<Void>(0x0242F880, p0, p1); } // 0xDFA1237F5228263F b1207
	static float _GET_LIGHT_INTENSITY_FROM_OBJECT(Object object) { return invoke<float>(0x0242F9C0, object); } // 0xFA3B61EC249B4674 b1207
	static void _SET_LIGHT_INTENSITY_FOR_OBJECT(Object object, float lightIntensity) { invoke<Void>(0x0242FA80, object, lightIntensity); } // 0xF49574E2332A8F06 b1207
	static void _SET_LIGHT_TRANSLUCENCY_FOR_OBJECT(Object object, float value) { invoke<Void>(0x0242FB50, object, value); } // 0x63E39F09310F481F b1207
	static void _SET_LIGHT_SCATTERING_DISABLED_FOR_OBJECT(Object object, BOOL disable) { invoke<Void>(0x0242FC20, object, disable); } // 0x04D1D4E411CE52D0 b1207
	static void _0x7FCD49388BC9B775(Any p0, Any p1) { invoke<Void>(0x0242FCE0, p0, p1); } // 0x7FCD49388BC9B775 b1207
	static Any _0xFA99E8E575F2FEF8(Any p0) { return invoke<Any>(0x0242FDB0, p0); } // 0xFA99E8E575F2FEF8 b1436
	static Object GET_RAYFIRE_MAP_OBJECT(float x, float y, float z, float radius, const char* name) { return invoke<Object>(0x0242FE70, x, y, z, radius, name); } // 0xB48FCED898292E52 0xA286DE96 b1207
	static void SET_STATE_OF_RAYFIRE_MAP_OBJECT(Object object, int state) { invoke<Void>(0x02430030, object, state); } // 0x5C29F698D404C5E1 0x21F51560 b1207
	static int GET_STATE_OF_RAYFIRE_MAP_OBJECT(Object object) { return invoke<int>(0x02430040, object); } // 0x899BA936634A322E 0xF1B8817A b1207
	static BOOL DOES_RAYFIRE_MAP_OBJECT_EXIST(Object object) { return invoke<BOOL>(0x02430080, object); } // 0x52AF537A0C5B8AAD 0xE08C834D b1207
	static float GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(Object object) { return invoke<float>(0x024300C0, object); } // 0x260EE4FDBDF4DB01 0x020497DE b1207
	static Pickup CREATE_PICKUP(Hash pickupHash, float x, float y, float z, int flags, int p5, BOOL p6, Hash modelHash, int p8, float p9, Any p10) { return invoke<Pickup>(0x024300F0, pickupHash, x, y, z, flags, p5, p6, modelHash, p8, p9, p10); } // 0xFBA08C503DD5FA58 0x5E14DF68 b1207
	static Pickup CREATE_PICKUP_ROTATE(Hash pickupHash, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, int flags, int p8, int p9, BOOL p10, Hash modelHash, int p12, float p13, Any p14) { return invoke<Pickup>(0x02430140, pickupHash, posX, posY, posZ, rotX, rotY, rotZ, flags, p8, p9, p10, modelHash, p12, p13, p14); } // 0x891804727E0A98B7 0xF015BFE2 b1207
	static Object CREATE_AMBIENT_PICKUP(Hash pickupHash, float x, float y, float z, int flags, int value, Hash modelHash, BOOL p7, BOOL p8, int p9, float p10) { return invoke<Object>(0x024301A0, pickupHash, x, y, z, flags, value, modelHash, p7, p8, p9, p10); } // 0x673966A0C0FD7171 0x17B99CE7 b1207
	static Object CREATE_PORTABLE_PICKUP(Hash pickupHash, float x, float y, float z, BOOL placeOnGround, Hash modelHash) { return invoke<Object>(0x02430200, pickupHash, x, y, z, placeOnGround, modelHash); } // 0x2EAF1FDB2FB55698 0x8C886BE5 b1207
	static void ATTACH_PORTABLE_PICKUP_TO_PED(Object pickupObject, Ped ped) { invoke<Void>(0x02430230, pickupObject, ped); } // 0x8DC39368BDD57755 0x184F6AB3 b1207
	static void DETACH_PORTABLE_PICKUP_FROM_PED(Object pickupObject) { invoke<Void>(0x024302F0, pickupObject); } // 0xCF463D1E9A0AECB1 0x1D094562 b1207
	static void _HIDE_PICKUP_OBJECT(Object pickupObject, BOOL toggle) { invoke<Void>(0x02430300, pickupObject, toggle); } // 0x2777150CC7D9365E b1207
	static void SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(Hash modelHash, int p1) { invoke<Void>(0x024303D0, modelHash, p1); } // 0x0BF3B3BD47D79C08 0x7EFBA039 b1207
	static Any _0x3E2616E7EA539480(Any p0) { return invoke<Any>(0x024303E0, p0); } // 0x3E2616E7EA539480 b1207
	static void SET_LOCAL_PLAYER_CAN_COLLECT_PORTABLE_PICKUPS(BOOL toggle) { invoke<Void>(0x02430430, toggle); } // 0x78857FC65CADB909 0xA3CDF152 b1207
	static Vector3 GET_SAFE_PICKUP_COORDS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Vector3>(0x024304B0, p0, p1, p2, p3, p4, p5); } // 0x6E16BC2503FF1FF0 0x618B5F67 b1207
	static Vector3 GET_PICKUP_COORDS(Pickup pickup) { return invoke<Vector3>(0x024306B0, pickup); } // 0x225B8B35C88029B3 0xC2E1E2C5 b1207
	static void REMOVE_ALL_PICKUPS_OF_TYPE(Hash pickupHash) { invoke<Void>(0x02430780, pickupHash); } // 0x27F9D613092159CF 0x40062C53 b1207
	static BOOL HAS_PICKUP_BEEN_COLLECTED(Pickup pickup) { return invoke<BOOL>(0x024307A0, pickup); } // 0x80EC48E6679313F9 0x0BE5CCED b1207
	static void REMOVE_PICKUP(Pickup pickup) { invoke<Void>(0x02430870, pickup); } // 0x3288D8ACAECD2AB2 0x64A7A0E0 b1207
	static void SET_PICKUP_DO_NOT_AUTO_PLACE_ON_GROUND(Object pickupObject) { invoke<Void>(0x02430880, pickupObject); } // 0x634C19521485AB25 b1207
	static BOOL DOES_PICKUP_EXIST(Pickup pickup) { return invoke<BOOL>(0x02430930, pickup); } // 0xAFC1CA75AD4074D1 0x9C6DA0B3 b1207
	static BOOL DOES_PICKUP_OBJECT_EXIST(Object pickupObject) { return invoke<BOOL>(0x024309E0, pickupObject); } // 0xD9EFB6DBF7DAAEA3 0xE0B32108 b1207
	static Object GET_PICKUP_OBJECT(Pickup pickup) { return invoke<Object>(0x02430AA0, pickup); } // 0x5099BC55630B25AE 0x6052E62E b1207
	static BOOL IS_OBJECT_A_PICKUP(Object object) { return invoke<BOOL>(0x02430B60, object); } // 0x0378C08504160D0D 0x93D23399 b1207
	static BOOL _IS_PICKUP_TYPE_VALID(Hash pickupHash) { return invoke<BOOL>(0x02430C20, pickupHash); } // 0x007BD043587F7C82 b1207
	static BOOL DOES_PICKUP_OF_TYPE_EXIST_IN_AREA(Hash pickupHash, float x, float y, float z, float radius) { return invoke<BOOL>(0x02430CA0, pickupHash, x, y, z, radius); } // 0xF9C36251F6E48E33 0xF139681B b1207
	static void SET_PICKUP_REGENERATION_TIME(Pickup pickup, int duration) { invoke<Void>(0x02430DB0, pickup, duration); } // 0x78015C9B4B3ECC9D 0xAB11267D b1207
	static void FORCE_PICKUP_REGENERATE(Any p0) { invoke<Void>(0x02430DC0, p0); } // 0x758A5C1B3B1E1990 b1207
	static void _0x94F3D956BFAEAE18(Any p0, Any p1, Any p2) { invoke<Void>(0x02430DD0, p0, p1, p2); } // 0x94F3D956BFAEAE18 b1207
	static void _SET_LOCAL_PLAYER_CAN_USE_PICKUPS_WITH_THIS_MODEL(Hash modelHash, BOOL toggle) { invoke<Void>(0x02430EC0, modelHash, toggle); } // 0x88EAEC617CD26926 0x3A8F1BF7 b1207
	static void BLOCK_PICKUP_FROM_PLAYER_COLLECTION(Any p0, Any p1) { invoke<Void>(0x02430EE0, p0, p1); } // 0xB8F5062070BB6DBD b1207
	static void SET_PICKUP_NOT_LOOTABLE(Any p0, Any p1) { invoke<Void>(0x02430FD0, p0, p1); } // 0x92E87F60F21A0C3A b1207
	static void _0x1F5E07E14A86FAFC(Any p0) { invoke<Void>(0x024310C0, p0); } // 0x1F5E07E14A86FAFC b1207
	static void SET_TEAM_PICKUP_OBJECT(Object object, Any p1, BOOL p2) { invoke<Void>(0x024310D0, object, p1, p2); } // 0x53E0DF1A2A3CF0CA 0x77687DC5 b1207
	static Any _0x9F52AD67D1A91BAD(Any p0, Any p1) { return invoke<Any>(0x024311D0, p0, p1); } // 0x9F52AD67D1A91BAD b1207
	static void PREVENT_COLLECTION_OF_PORTABLE_PICKUP(Object object, BOOL p1, BOOL p2) { invoke<Void>(0x024312B0, object, p1, p2); } // 0x92AEFB5F6E294023 0xCBB5F9B6 b1207
	static void SET_PICKUP_GENERATION_RANGE_MULTIPLIER(float multiplier) { invoke<Void>(0x024313C0, multiplier); } // 0x318516E02DE3ECE2 0x9879AC51 b1207
	static void SET_PICKUP_UNCOLLECTABLE(Any p0, Any p1) { invoke<Void>(0x024313D0, p0, p1); } // 0x4A8CB328CD6F1C9B b1207
	static void SET_PICKUP_HIDDEN_WHEN_UNCOLLECTABLE(Any p0, Any p1) { invoke<Void>(0x024314D0, p0, p1); } // 0x81218CE01B672219 b1207
	static void _SET_PICKUP_AMBIENT_LIFETIME(int p0) { invoke<Void>(0x02431580, p0); } // 0xAC9AE68F0A463752 b1207
	static void SET_PICKUP_PARTICLE_FX_SPAWN(Any p0, Any p1) { invoke<Void>(0x02431590, p0, p1); } // 0xEB9740A38FD6D634 b1207
	static void SET_PICKUP_PARTICLE_FX_HIGHLIGHT(Any p0, Any p1) { invoke<Void>(0x02431640, p0, p1); } // 0x1607C7D9B3021DF5 b1207
	static void SUPPRESS_PICKUP_REWARD_TYPE(int rewardType, BOOL suppress) { invoke<Void>(0x024316F0, rewardType, suppress); } // 0xF92099527DB8E2A7 0xA7E936FD b1207
	static Any _0x20135AF9C10D2A3D(Any p0) { return invoke<Any>(0x02431720, p0); } // 0x20135AF9C10D2A3D b1207
	static void _0x00EE08603EADEE92(Any p0) { invoke<Void>(0x02431870, p0); } // 0x00EE08603EADEE92 b1207
	static void _0xDE116ECFFDD4B997(Any p0, Any p1) { invoke<Void>(0x02431920, p0, p1); } // 0xDE116ECFFDD4B997 b1207
	static Hash GET_WEAPON_TYPE_FROM_PICKUP_TYPE(Hash pickupHash) { return invoke<Hash>(0x02431A00, pickupHash); } // 0x08F96CA6C551AD51 0xEDD01937 b1207
	static Any _0x44B09A23D728045A(Any p0) { return invoke<Any>(0x02431B60, p0); } // 0x44B09A23D728045A b1207
	static void _SET_OBJECT_TEXTURE_VARIATION(Object object, int textureVariation) { invoke<Void>(0x02431CC0, object, textureVariation); } // 0x971DA0055324D033 b1207
	static Any _0x3397CD4E0353DFBA(Any p0) { return invoke<Any>(0x02431DC0, p0); } // 0x3397CD4E0353DFBA b1207
	static void _SET_OBJECT_BURN_OPACITY(Object object, float opacity) { invoke<Void>(0x02431EC0, object, opacity); } // 0x7D7285EFEAB5AF15 b1207
	static void _SET_OBJECT_BURN_INTENSITY(Object object, float intensity) { invoke<Void>(0x02431FB0, object, intensity); } // 0xC8E21C1677DC5E6F b1207
	static void _SET_OBJECT_BURN_LEVEL(Object object, float burnLevel, BOOL affectAsh) { invoke<Void>(0x024320A0, object, burnLevel, affectAsh); } // 0x2797C633DCDBBAC5 b1207
	static void _0x9A74A9CADFA8A598(Any p0) { invoke<Void>(0x024320C0, p0); } // 0x9A74A9CADFA8A598 b1207
	static void _RESET_OBJECT_VELOCITY(Object object) { invoke<Void>(0x02432180, object); } // 0xF40AB58D83C35027 b1207
	static void _SET_OBJECT_BURN_SPEED(Object object, float speed, float p2) { invoke<Void>(0x02432240, object, speed, p2); } // 0x646564A3B7DF68F8 b1207
	static void _0xCBFBD38F2E0A263B(Any p0, Any p1) { invoke<Void>(0x02432330, p0, p1); } // 0xCBFBD38F2E0A263B b1207
	static Hash _GET_PICKUP_HASH(Hash pickupHash) { return invoke<Hash>(0x02432410, pickupHash); } // 0x5EAAD83F8CFB4575 0x6AE36192 b1207
	static void SET_FORCE_OBJECT_THIS_FRAME(float x, float y, float z, float p3) { invoke<Void>(0x02432430, x, y, z, p3); } // 0xF538081986E49E9D 0x3DA41C1A b1207
	static Any _0xD91E55B6C005EB09(Any p0, Any p1) { return invoke<Any>(0x02432490, p0, p1); } // 0xD91E55B6C005EB09 b1207
	static void _MARK_OBJECT_FOR_DELETION(Object object) { invoke<Void>(0x02432560, object); } // 0xADBE4809F19F927A 0x2048A7DD b1207
	static void _0xCAAF2BCCFEF37F77(Object object, Any p1) { invoke<Void>(0x02432620, object, p1); } // 0xCAAF2BCCFEF37F77 b1207
	static Any _0x08C5825A2932EA7B(Any p0) { return invoke<Any>(0x02432730, p0); } // 0x08C5825A2932EA7B b1207
	static Any _0x7D4411D6736CD295(Any p0, Any p1) { return invoke<Any>(0x024327B0, p0, p1); } // 0x7D4411D6736CD295 b1207
	static Any _0x250EBB11E81A10BE(Any p0) { return invoke<Any>(0x024327E0, p0); } // 0x250EBB11E81A10BE b1207
	static Any _0x2BF1953C0C21AC88(Any p0) { return invoke<Any>(0x024328A0, p0); } // 0x2BF1953C0C21AC88 b1207
	static BOOL CREATE_OBJECT_SKELETON(Object object) { return invoke<BOOL>(0x024328E0, object); } // 0xB6CBD40F8EA69E8A b1207
	static void _0x1461DF6DB886BE3F(Object object) { invoke<Void>(0x02432910, object); } // 0x1461DF6DB886BE3F b1207
	static void _0xF65EDE5D02A7A760(Any p0, Any p1) { invoke<Void>(0x024329C0, p0, p1); } // 0xF65EDE5D02A7A760 b1207
	static void _0x98D2D9C053A1F449(Any p0, Any p1) { invoke<Void>(0x02432AA0, p0, p1); } // 0x98D2D9C053A1F449 b1207
	static void _0xE1C708BA4885796B(Any p0, Any p1) { invoke<Void>(0x02432B80, p0, p1); } // 0xE1C708BA4885796B b1207
	static void _0xB7017DA4D498269F(Any p0, Any p1) { invoke<Void>(0x02432C70, p0, p1); } // 0xB7017DA4D498269F b1207
	static void SET_CUSTOM_TEXTURES_ON_OBJECT(Object object, Hash txdHash, Any p2, Any p3) { invoke<Void>(0x02432D50, object, txdHash, p2, p3); } // 0xE124889AE0521FCF b1207
	static void _0xD503D6F0986D58BC(Any p0, Any p1) { invoke<Void>(0x02432E30, p0, p1); } // 0xD503D6F0986D58BC b1207
	static void _0xAEE6C800E124CFE1(Any p0, Any p1) { invoke<Void>(0x02432ED0, p0, p1); } // 0xAEE6C800E124CFE1 b1207
	static void _0x3DF1A0A58498E209(Object object, Any p1) { invoke<Void>(0x02432FA0, object, p1); } // 0x3DF1A0A58498E209 b1436
}

namespace PAD
{
	static void _SET_CONTROL_CONTEXT(int p0, Hash context) { invoke<Void>(0x0243C650, p0, context); } // 0x2804658EB7D8A50B b1207
	static Any _0xDDCEB0F26C89C00F(int p0) { return invoke<Any>(0x0243C670, p0); } // 0xDDCEB0F26C89C00F b1207
	static BOOL _IS_CONTROL_ACTION_VALID(Hash control, int padIndex) { return invoke<BOOL>(0x0243C6D0, control, padIndex); } // 0xBC0884BC590951C7 b1207
	static BOOL IS_CONTROL_ENABLED(int padIndex, Hash control) { return invoke<BOOL>(0x0243C8E0, padIndex, control); } // 0x1CEA6BFDF248E5D9 0x9174AF84 b1207
	static BOOL IS_CONTROL_PRESSED(int padIndex, Hash control) { return invoke<BOOL>(0x0243C910, padIndex, control); } // 0xF3A21BCD95725A4A 0x517A4384 b1207
	static BOOL IS_CONTROL_RELEASED(int padIndex, Hash control) { return invoke<BOOL>(0x0243C940, padIndex, control); } // 0x648EE3E7F38877DD 0x1F91A06E b1207
	static BOOL IS_CONTROL_JUST_PRESSED(int padIndex, Hash control) { return invoke<BOOL>(0x0243C970, padIndex, control); } // 0x580417101DDB492F 0x4487F579 b1207
	static BOOL IS_CONTROL_JUST_RELEASED(int padIndex, Hash control) { return invoke<BOOL>(0x0243C9A0, padIndex, control); } // 0x50F940259D3841E6 0x2314444B b1207
	static int GET_CONTROL_VALUE(int padIndex, Hash control) { return invoke<int>(0x0243C9D0, padIndex, control); } // 0xD95E79E8686D2C27 0xC526F3C6 b1207
	static float GET_CONTROL_NORMAL(int padIndex, Hash control) { return invoke<float>(0x0243CA00, padIndex, control); } // 0xEC3C9B8D5327B563 0x5DE226A5 b1207
	static float GET_CONTROL_UNBOUND_NORMAL(int padIndex, Hash control) { return invoke<float>(0x0243CA30, padIndex, control); } // 0x5B84D09CEC5209C5 0xC49343BB b1207
	static BOOL _SET_CONTROL_NORMAL(int padIndex, Hash control, float amount) { return invoke<BOOL>(0x0243CA60, padIndex, control, amount); } // 0xE8A25867FBA3B05E b1207
	static BOOL IS_DISABLED_CONTROL_PRESSED(int padIndex, Hash control) { return invoke<BOOL>(0x0243CD20, padIndex, control); } // 0xE2587F8CBBD87B1D 0x32A93544 b1207
	static BOOL IS_DISABLED_CONTROL_JUST_PRESSED(int padIndex, Hash control) { return invoke<BOOL>(0x0243CD50, padIndex, control); } // 0x91AEF906BCA88877 0xEE6ABD32 b1207
	static BOOL IS_DISABLED_CONTROL_JUST_RELEASED(int padIndex, Hash control) { return invoke<BOOL>(0x0243CD80, padIndex, control); } // 0x305C8DCD79DA8B0F 0xD6A679E1 b1207
	static float GET_DISABLED_CONTROL_NORMAL(int padIndex, Hash control) { return invoke<float>(0x0243CDB0, padIndex, control); } // 0x11E65974A982637C 0x66FF4FAA b1207
	static float GET_DISABLED_CONTROL_UNBOUND_NORMAL(int padIndex, Hash control) { return invoke<float>(0x0243CDE0, padIndex, control); } // 0x4F8A26A890FD62FB 0xF2A65A4C b1207
	static int _0xD7D22F5592AED8BA(int p0) { return invoke<int>(0x0243CE10, p0); } // 0xD7D22F5592AED8BA 0x0E8EF929 b1207
	static Any _0x771DFCB24D19C2F6(Any p0) { return invoke<Any>(0x0243CFE0, p0); } // 0x771DFCB24D19C2F6 b1207
	static BOOL _IS_USING_KEYBOARD(int padIndex) { return invoke<BOOL>(0x0243D090, padIndex); } // 0xA571D46727E2B718 b1207
	static Any _0x43F35DDB2905D945(Any p0, Any p1) { return invoke<Any>(0x0243D0A0, p0, p1); } // 0x43F35DDB2905D945 b1207
	static Any _0xBD629C1C4F501C80(Any p0) { return invoke<Any>(0x0243D0B0, p0); } // 0xBD629C1C4F501C80 b1207
	static BOOL _0x6CD79468A1E595C6(int padIndex) { return invoke<BOOL>(0x0243D140, padIndex); } // 0x6CD79468A1E595C6 b1207
	static void SET_CONTROL_LIGHT_EFFECT_COLOR(int padIndex, int red, int green, int blue) { invoke<Void>(0x0243D170, padIndex, red, green, blue); } // 0x8290252FFF36ACB5 b1207
	static void _0xCB0360EFEFB2580D(int padIndex) { invoke<Void>(0x0243D2E0, padIndex); } // 0xCB0360EFEFB2580D b1207
	static void SET_CONTROL_LIGHT_EFFECT_FLASHING_COLOR(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x0243D3D0, p0, p1, p2, p3); } // 0xA45884DB10EC7EE3 b1207
	static void SET_PAD_SHAKE(int padIndex, int duration, int frequency) { invoke<Void>(0x0243D4F0, padIndex, duration, frequency); } // 0x48B3886C1358D0D5 0x5D38BD2F b1207
	static void _0x14D29BB12D47F68C(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x0243D640, p0, p1, p2, p3, p4); } // 0x14D29BB12D47F68C b1207
	static void STOP_PAD_SHAKE(int padIndex) { invoke<Void>(0x0243D650, padIndex); } // 0x38C16A305E8CDC8D 0x8F75657E b1207
	static void SET_PAD_SHAKE_SUPPRESSED_ID(int padIndex, int p1) { invoke<Void>(0x0243D790, padIndex, p1); } // 0xF239400E16C23E08 0x7D65EB6E b1207
	static void _CLEAR_SUPPRESSED_PAD_RUMBLE(int p0) { invoke<Void>(0x0243D820, p0); } // 0xA0CEFCEA390AAB9B b1207
	static BOOL IS_LOOK_INVERTED() { return invoke<BOOL>(0x0243D8C0); } // 0x77B612531280010D 0x313434B2 b1207
	static void SET_INPUT_EXCLUSIVE(int padIndex, Hash control) { invoke<Void>(0x0243D9B0, padIndex, control); } // 0xEDE476E5EE29EDB1 0x4E8E29E6 b1207
	static void DISABLE_CONTROL_ACTION(int padIndex, Hash control, BOOL disable) { invoke<Void>(0x0243DBA0, padIndex, control, disable); } // 0xFE99B66D079CF6BC 0x3800C0DC b1207
	static void ENABLE_CONTROL_ACTION(int padIndex, Hash control, BOOL enable) { invoke<Void>(0x0243DDD0, padIndex, control, enable); } // 0x351220255D64C155 0xD2753551 b1207
	static void DISABLE_ALL_CONTROL_ACTIONS(int padIndex) { invoke<Void>(0x0243DDF0, padIndex); } // 0x5F4B6931816E599B 0x16753CF4 b1207
	static void _0x5F217BC1190503D8(const char* rumbleCurve, float p1) { invoke<Void>(0x0243DE00, rumbleCurve, p1); } // 0x5F217BC1190503D8 b1207
	static void _0x709BA8C08C5C008D() { invoke<Void>(0x0243DEB0); } // 0x709BA8C08C5C008D b1207
	static Any _0x1252C029FC8EBB4D() { return invoke<Any>(0x0243DF10); } // 0x1252C029FC8EBB4D b1207
	static void _0x52C68E92D6E23ADD(Any p0) { invoke<Void>(0x0243DF50, p0); } // 0x52C68E92D6E23ADD b1311
}

namespace PATHFIND
{
	static void SET_ROADS_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0x0244B9E0, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xBF1A602B5BA52FEE 0xEBC7B918 b1207
	static void SET_ROADS_IN_ANGLED_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoke<Void>(0x0244BB60, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x1A5AA1208AF5DB59 0xBD088F4B b1207
	static void SET_ROADS_IN_VOLUME(Volume volume, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0x0244BCB0, volume, p1, p2, p3); } // 0xC1799FAFD2FDF52B b1207
	static void RESET_ROADS_IN_VOLUME(Volume volume, BOOL p1) { invoke<Void>(0x0244BDD0, volume, p1); } // 0xD17672447692478E b1207
	static void SET_ROADS_BACK_TO_ORIGINAL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x0244BED0, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x1EE7063B80FFC77C 0x86AC4A85 b1207
	static void SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0x0244BEF0, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x0027501B9F3B407E 0x9DB5D209 b1207
	static void _0xAFE2AE66F6251C66(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x0244C030, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xAFE2AE66F6251C66 b1207
	static void _0x4358BCF14C91761C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0x0244C1A0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x4358BCF14C91761C b1207
	static void _0xB03944057FD735BA(Any p0, Any p1, Any p2) { invoke<Void>(0x0244C2E0, p0, p1, p2); } // 0xB03944057FD735BA b1207
	static void _0x6C3F12ECEB6D2E2A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x0244C3F0, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x6C3F12ECEB6D2E2A b1207
	static void _0x5A4E1A41E3A02AD0(Any p0, Any p1, Any p2) { invoke<Void>(0x0244C410, p0, p1, p2); } // 0x5A4E1A41E3A02AD0 b1207
	static BOOL GET_CLOSEST_VEHICLE_NODE(float x, float y, float z, Vector3* outPosition, int nodeType, float p5, float p6) { return invoke<BOOL>(0x0244C520, x, y, z, outPosition, nodeType, p5, p6); } // 0x240A18690AE96513 0x6F5F1E6C b1207
	static Any _0xCA27A86CAA4E98ED(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0x0244C600, p0, p1, p2, p3, p4, p5, p6); } // 0xCA27A86CAA4E98ED b1207
	static BOOL GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(float x, float y, float z, Vector3* outPosition, float* outHeading, int nodeType, float p6, int p7) { return invoke<BOOL>(0x0244C6E0, x, y, z, outPosition, outHeading, nodeType, p6, p7); } // 0x23CFFD4CCB243354 0x8BD5759B b1207
	static BOOL GET_NTH_CLOSEST_VEHICLE_NODE(float x, float y, float z, int nthClosest, Vector3* outPosition, Any unknown1, Any unknown2, Any unknown3) { return invoke<BOOL>(0x0244C7C0, x, y, z, nthClosest, outPosition, unknown1, unknown2, unknown3); } // 0x5A6D8DF6FBC5D0C4 0xF125BFCC b1207
	static int GET_NTH_CLOSEST_VEHICLE_NODE_ID(float x, float y, float z, int nth, int nodetype, float p5, float p6) { return invoke<int>(0x0244C890, x, y, z, nth, nodetype, p5, p6); } // 0x116443008E5CEFC3 0x3F358BEA b1207
	static BOOL GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(float x, float y, float z, int nthClosest, Vector3* outPosition, float* heading, Any* unknown1, int unknown2, float unknown3, float unknown4) { return invoke<BOOL>(0x0244C920, x, y, z, nthClosest, outPosition, heading, unknown1, unknown2, unknown3, unknown4); } // 0x591B40D4390DB54A 0x7349C856 b1207
	static BOOL GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(float x, float y, float z, int nthClosest, Vector3* outPosition, float outHeading, Any p6, float p7, float p8) { return invoke<BOOL>(0x0244CA00, x, y, z, nthClosest, outPosition, outHeading, p6, p7, p8); } // 0x4114EAA8A7F7766D 0xC1AEB88D b1207
	static BOOL GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(float x, float y, float z, float desiredX, float desiredY, float desiredZ, int nthClosest, Vector3* outPosition, float* outHeading, int nodetype, Any p10, Any p11) { return invoke<BOOL>(0x0244CAA0, x, y, z, desiredX, desiredY, desiredZ, nthClosest, outPosition, outHeading, nodetype, p10, p11); } // 0x2FAC235A6062F14A 0x928A4DEC b1207
	static BOOL IS_VEHICLE_NODE_ID_VALID(int vehicleNodeId) { return invoke<BOOL>(0x0244CBA0, vehicleNodeId); } // 0x5829A02AF4F0B3CB 0x57DFB1EF b1207
	static void GET_VEHICLE_NODE_POSITION(int nodeId, Vector3* outPosition) { invoke<Void>(0x0244CBC0, nodeId, outPosition); } // 0x8E8D72FF24DEE1FB 0xE38E252D b1207
	static BOOL GET_VEHICLE_NODE_IS_SWITCHED_OFF(int nodeID) { return invoke<BOOL>(0x0244CCA0, nodeID); } // 0x28533DBDDF7C2C97 0x56737A3C b1207
	static Any GET_CLOSEST_ROAD(float x, float y, float z, float p3, int p4, Vector3* p5, Vector3* p6, Any* p7, Any* p8, float* p9, BOOL p10) { return invoke<Any>(0x0244CD10, x, y, z, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x132F52BBA570FE92 0x567B0E11 b1207
	static BOOL ARE_NODES_LOADED_FOR_AREA(float x1, float y1, float x2, float y2) { return invoke<BOOL>(0x0244CDF0, x1, y1, x2, y2); } // 0xF7B79A50B905A30D 0x86E80A17 b1207
	static BOOL _REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(float x1, float y1, float x2, float y2) { return invoke<BOOL>(0x0244CF60, x1, y1, x2, y2); } // 0x07FB139B592FA687 0x2CDA5012 b1207
	static BOOL GET_RANDOM_VEHICLE_NODE(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, Vector3* outPosition, int* nodeId) { return invoke<BOOL>(0x0244CFB0, x, y, z, radius, p4, p5, p6, outPosition, nodeId); } // 0x93E0DB8440B73A7D 0xAD1476EA b1207
	static void _0xA3791B915B8B84C6(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x0244D0A0, p0, p1, p2, p3, p4, p5); } // 0xA3791B915B8B84C6 b1207
	static BOOL IS_POINT_ON_ROAD(float x, float y, float z, Vehicle vehicle) { return invoke<BOOL>(0x0244D170, x, y, z, vehicle); } // 0x125BF4ABFC536B09 0xCF198055 b1207
	static void SET_PED_PATHS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL unknown, Any p7) { invoke<Void>(0x0244D230, x1, y1, z1, x2, y2, z2, unknown, p7); } // 0x34F060F4BF92E018 0x2148EA84 b1207
	static void _0xE5EF9DE716FF737E(Any p0, Any p1, Any p2) { invoke<Void>(0x0244D450, p0, p1, p2); } // 0xE5EF9DE716FF737E b1207
	static BOOL GET_SAFE_COORD_FOR_PED(float x, float y, float z, BOOL onGround, Vector3* outPosition, int flags) { return invoke<BOOL>(0x0244D470, x, y, z, onGround, outPosition, flags); } // 0xB61C8E878A4199CA 0xB370270A b1207
	static void SET_PED_PATHS_BACK_TO_ORIGINAL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x0244D5A0, p0, p1, p2, p3, p4, p5, p6); } // 0xE04B48F2CC926253 0x3F1ABDA4 b1207
	static void _0xCF213A5FC3ABFC08(Any p0, Any p1, Any p2) { invoke<Void>(0x0244D6E0, p0, p1, p2); } // 0xCF213A5FC3ABFC08 b1207
	static void ADD_NAVMESH_REQUIRED_REGION(float x, float y, float radius) { invoke<Void>(0x0244D7C0, x, y, radius); } // 0x387EAD7EE42F6685 0x12B086EA b1207
	static BOOL IS_NAVMESH_LOADED_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0x0244D810, x1, y1, z1, x2, y2, z2); } // 0xF813C7E63F9062A5 0x4C2BA99E b1207
	static Any _0x01708E8DD3FF8C65(float p0, float p1, float p2, float p3, float p4, float p5) { return invoke<Any>(0x0244DA40, p0, p1, p2, p3, p4, p5); } // 0x01708E8DD3FF8C65 b1207
	static BOOL _NAVMESH_ACTIVATE_SWAP(const char* name) { return invoke<BOOL>(0x0244DC60, name); } // 0x7C334FF4D9215912 b1207
	static BOOL _NAVMESH_DEACTIVATE_SWAP(const char* name) { return invoke<BOOL>(0x0244DC90, name); } // 0x527B97C203BB8606 b1207
	static BOOL _NAVMESH_IS_SWAP_ACTIVE(const char* name) { return invoke<BOOL>(0x0244DCC0, name); } // 0x5AC0944C156E5F44 b1207
	static BOOL _NAVMESH_DOES_SWAP_EXIST(const char* name) { return invoke<BOOL>(0x0244DDB0, name); } // 0x495CFAB2924237C7 b1207
	static int _0x5A3B54ADDF5472A3(const char* p0) { return invoke<int>(0x0244DEA0, p0); } // 0x5A3B54ADDF5472A3 b1207
	static Any* _0xA33914B00CA55756(const char* p0, int p1) { return invoke<Any*>(0x0244DF40, p0, p1); } // 0xA33914B00CA55756 b1207
	static BOOL _NAVMESH_ASSIGN_NAVMESH_TO_VEHICLE(Vehicle vehicle, const char* navMeshName) { return invoke<BOOL>(0x0244DFF0, vehicle, navMeshName); } // 0x44026E3DB3CED602 b1207
	static Any ADD_NAVMESH_BLOCKING_OBJECT(float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7, Any p8) { return invoke<Any>(0x0244E020, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xFCD5C8E06E502F5A 0x2952BA56 b1207
	static void REMOVE_NAVMESH_BLOCKING_OBJECT(Any p0) { invoke<Void>(0x0244E0E0, p0); } // 0x46399A7895957C0E 0x098602B0 b1207
	static BOOL DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Any p0) { return invoke<BOOL>(0x0244E1D0, p0); } // 0x0EAEB0DB4B132399 0x4B67D7EE b1207
	static BOOL _ADD_NAVMESH_BLOCKING_VOLUME(Volume volume, int flags) { return invoke<BOOL>(0x0244E210, volume, flags); } // 0x19C7567D2F2287D6 b1207
	static void _REMOVE_NAVMESH_BLOCKING_VOLUME(Volume volume) { invoke<Void>(0x0244E2D0, volume); } // 0x2C87C3E1C7B96EE2 b1207
	static BOOL _DOES_NAVMESH_BLOCKING_VOLUME_EXIST(Volume volume) { return invoke<BOOL>(0x0244E370, volume); } // 0xDE0EA444735C1368 b1207
	static void _0x6DAD6630AE4A74CB(Any p0, Any p1) { invoke<Void>(0x0244E420, p0, p1); } // 0x6DAD6630AE4A74CB b1207
	static Any NAVMESH_REQUEST_PATH(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke<Any>(0x0244E440, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x348F211CA2404039 b1207
	static Any _0x661BB1E1FF77742D(Any p0) { return invoke<Any>(0x0244E550, p0); } // 0x661BB1E1FF77742D b1207
	static Any _0x3A0F82F6EE2291C8(Any p0) { return invoke<Any>(0x0244E690, p0); } // 0x3A0F82F6EE2291C8 b1207
	static Any _0x8800776E410EB669(Any p0) { return invoke<Any>(0x0244E740, p0); } // 0x8800776E410EB669 b1207
	static Any _0xF61CFEDEAB627BFA(Any p0) { return invoke<Any>(0x0244E840, p0); } // 0xF61CFEDEAB627BFA b1207
	static Any _0xD470725E0703D22F(Any p0) { return invoke<Any>(0x0244E860, p0); } // 0xD470725E0703D22F b1207
	static Vector3 _0x430F8319AE56C8A9(Any p0, Any p1) { return invoke<Vector3>(0x0244E880, p0, p1); } // 0x430F8319AE56C8A9 b1207
	static float GET_APPROX_FLOOR_FOR_POINT(float x, float y) { return invoke<float>(0x0244E8C0, x, y); } // 0x336511A34F2E5185 0xA07C5B7D b1207
	static void SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0x0244E8F0, multiplier); } // 0x0B919E1FB47CC4E0 0x3C5085E4 b1207
	static void SET_IGNORE_NO_GPS_FLAG(BOOL toggle) { invoke<Void>(0x0244E900, toggle); } // 0x72751156E7678833 0xB72CF194 b1207
	static int GET_GPS_BLIP_ROUTE_LENGTH() { return invoke<int>(0x0244E910); } // 0xBBB45C3CF5C8AA85 0x4B770634 b1207
	static Any _0xEFC535C9FAF563B3(Any p0) { return invoke<Any>(0x0244E9C0, p0); } // 0xEFC535C9FAF563B3 b1207
	static Any _0x665B21666351CB37(Any p0, Any p1, Any p2) { return invoke<Any>(0x0244EA40, p0, p1, p2); } // 0x665B21666351CB37 b1207
	static BOOL GET_GPS_BLIP_ROUTE_FOUND() { return invoke<BOOL>(0x0244EB70); } // 0x869DAACBBE9FA006 0x286F82CC b1207
	static Any _0x54F4D7B6670FBB5A(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x0244EC20, p0, p1, p2, p3, p4); } // 0x54F4D7B6670FBB5A b1207
	static void _0x34C9AF25649172D0(Any p0) { invoke<Void>(0x0244EC50, p0); } // 0x34C9AF25649172D0 b1207
	static void _0xF2A2177AC848B3A8(Volume volume, int p1, int p2) { invoke<Void>(0x0244EC60, volume, p1, p2); } // 0xF2A2177AC848B3A8 b1207
	static void _0x4BDEBEA5702B97A9(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x0244EC80, p0, p1, p2, p3, p4, p5); } // 0x4BDEBEA5702B97A9 b1207
	static void _0x264E9A5CD78C338F(Any p0) { invoke<Void>(0x0244ECB0, p0); } // 0x264E9A5CD78C338F b1207
	static void _0x869A7015BD4606E9(Any p0) { invoke<Void>(0x0244ECC0, p0); } // 0x869A7015BD4606E9 b1207
	static Any _0xFD5BB35AAB83FD48(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0x0244ECD0, p0, p1, p2, p3, p4, p5, p6); } // 0xFD5BB35AAB83FD48 b1207
	static void _0x4907D0E4FB26EE65(Any p0) { invoke<Void>(0x0244EDB0, p0); } // 0x4907D0E4FB26EE65 b1207
	static Any _0x65A8196B8D7F5E0B(Any p0) { return invoke<Any>(0x0244EDE0, p0); } // 0x65A8196B8D7F5E0B b1207
	static BOOL SIMULATED_ROUTE_IS_LOADED(Any p0) { return invoke<BOOL>(0x0244EE20, p0); } // 0x240915043CB799D7 b1207
	static void SIMULATED_ROUTE_TRAVEL_TO_POINT(Any p0, float p1, float p2) { invoke<Void>(0x0244EE60, p0, p1, p2); } // 0xA1A3DE1C215C7394 b1207
	static float SIMULATED_ROUTE_GET_ETA(Any p0) { return invoke<float>(0x0244EF00, p0); } // 0x2DD5F78D73B24172 b1207
}

namespace PED
{
	static Ped CREATE_PED(Hash modelHash, float x, float y, float z, float heading, BOOL isNetwork, BOOL bScriptHostPed, BOOL p7, BOOL p8) { return invoke<Ped>(0x0250D1E0, modelHash, x, y, z, heading, isNetwork, bScriptHostPed, p7, p8); } // 0xD49F9B0955C367DE 0x0389EF71 b1207
	static void DELETE_PED(Ped* ped) { invoke<Void>(0x0250D240, ped); } // 0xCC0EF140F99365C5 0x13EFB9A0 b1207
	static void _SET_REMOVE_PED_NETWORKED(Ped ped, int p1) { invoke<Void>(0x0250D250, ped, p1); } // 0x39A2FC5AF55A52B1 b1207
	static void _0x7C08E7CB8D951B70(Ped ped, float p1) { invoke<Void>(0x0250D260, ped, p1); } // 0x7C08E7CB8D951B70 b1207
	static void _SET_PED_TO_BE_REMOVED(Ped ped, float p1, float p2, int p3, Any p4) { invoke<Void>(0x0250D270, ped, p1, p2, p3, p4); } // 0x36E4B61DC56DE77C b1207
	static Ped CLONE_PED(Ped ped, BOOL isNetwork, BOOL bScriptHostPed, BOOL copyHeadBlendFlag) { return invoke<Ped>(0x0250D290, ped, isNetwork, bScriptHostPed, copyHeadBlendFlag); } // 0xEF29A16337FACADB 0x8C8A8D6E b1207
	static void CLONE_PED_TO_TARGET(Ped ped, Ped targetPed) { invoke<Void>(0x0250D2D0, ped, targetPed); } // 0xE952D6431689AD9A 0xFC70EEC7 b1207
	static BOOL IS_PED_IN_VEHICLE(Ped ped, Vehicle vehicle, BOOL atGetIn) { return invoke<BOOL>(0x0250D2E0, ped, vehicle, atGetIn); } // 0xA3EE4A07279BB9DB 0x7DA6BC83 b1207
	static BOOL IS_PED_IN_MODEL(Ped ped, Hash modelHash) { return invoke<BOOL>(0x0250D310, ped, modelHash); } // 0x796D90EFB19AA332 0xA6438D4B b1207
	static BOOL IS_PED_IN_ANY_VEHICLE(Ped ped, BOOL atGetIn) { return invoke<BOOL>(0x0250D340, ped, atGetIn); } // 0x997ABD671D25CA0B 0x3B0171EE b1207
	static void _0x9851DE7AEC10B4E1(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x0250D370, p0, p1, p2, p3, p4, p5); } // 0x9851DE7AEC10B4E1 b1207
	static BOOL IS_PED_INJURED(Ped ped) { return invoke<BOOL>(0x0250D3B0, ped); } // 0x84A2DD9AC37C35C1 0x2530A087 b1207
	static BOOL IS_PED_FATALLY_INJURED(Ped ped) { return invoke<BOOL>(0x0250D4B0, ped); } // 0xD839450756ED5A80 0xBADA0093 b1207
	static BOOL IS_PED_DEAD_OR_DYING(Ped ped, BOOL p1) { return invoke<BOOL>(0x0250D5B0, ped, p1); } // 0x3317DEDB88C95038 0xCBDB7739 b1207
	static void _0x66C047719B0E80E1(Any p0, Any p1) { invoke<Void>(0x0250D6A0, p0, p1); } // 0x66C047719B0E80E1 b1207
	static BOOL IS_PED_AIMING_FROM_COVER(Ped ped) { return invoke<BOOL>(0x0250D780, ped); } // 0x3998B1276A3300E5 0xDEBAB2AF b1207
	static BOOL IS_PED_RELOADING(Ped ped) { return invoke<BOOL>(0x0250D8A0, ped); } // 0x24B100C68C645951 0x961E1745 b1207
	static BOOL IS_PED_A_PLAYER(Ped ped) { return invoke<BOOL>(0x0250D990, ped); } // 0x12534C348C6CB68B 0x404794CA b1207
	static Any _0x0E2F43516F998269(Any p0) { return invoke<Any>(0x0250DA70, p0); } // 0x0E2F43516F998269 b1311
	static Ped CREATE_PED_INSIDE_VEHICLE(Vehicle vehicle, Hash modelHash, int seatIndex, BOOL p3, BOOL p4, BOOL p5) { return invoke<Ped>(0x0250DB60, vehicle, modelHash, seatIndex, p3, p4, p5); } // 0x7DD959874C1FD534 0x3000F092 b1207
	static void SET_PED_DESIRED_HEADING(Ped ped, float heading) { invoke<Void>(0x0250DBB0, ped, heading); } // 0xAA5A7ECE2AA8FE70 0x961458F9 b1207
	static void _FREEZE_PED_CAMERA_ROTATION(Ped ped) { invoke<Void>(0x0250DD60, ped); } // 0xFF287323B0E2C69A 0x290421BE b1207
	static BOOL IS_PED_FACING_PED(Ped ped, Ped otherPed, float angle) { return invoke<BOOL>(0x0250DE10, ped, otherPed, angle); } // 0xD71649DB0A545AA3 0x0B775838 b1207
	static BOOL IS_PED_IN_MELEE_COMBAT(Ped ped) { return invoke<BOOL>(0x0250E160, ped); } // 0x4E209B2C1EAD5159 0xFD7814A5 b1207
	static Any _0x6DB875AFC584FA32(Any p0, Any p1) { return invoke<Any>(0x0250E2B0, p0, p1); } // 0x6DB875AFC584FA32 b1207
	static BOOL IS_PED_STOPPED(Ped ped) { return invoke<BOOL>(0x0250E400, ped); } // 0x530944F6F4B8A214 0xA0DC0B87 b1207
	static BOOL IS_PED_SITTING(Ped ped) { return invoke<BOOL>(0x0250E4B0, ped); } // 0x84D0BF2B21862059 b1207
	static Any _0x09D7AFD3716DA8E1(Any p0, Any p1) { return invoke<Any>(0x0250E5A0, p0, p1); } // 0x09D7AFD3716DA8E1 b1207
	static Any _0x9C81338B2E62CE0A(Any p0, Any p1, Any p2) { return invoke<Any>(0x0250E710, p0, p1, p2); } // 0x9C81338B2E62CE0A b1207
	static Any _0xB7DBB2986B87E230(Any p0, Any p1) { return invoke<Any>(0x0250E880, p0, p1); } // 0xB7DBB2986B87E230 b1207
	static Any _0xD355E2F1BB41087E(Any p0, Any p1) { return invoke<Any>(0x0250E9B0, p0, p1); } // 0xD355E2F1BB41087E b1207
	static BOOL IS_ANY_PED_SHOOTING_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, BOOL p7) { return invoke<BOOL>(0x0250EB10, x1, y1, z1, x2, y2, z2, p6, p7); } // 0xA0D3D71EA1086C55 0x91833867 b1207
	static BOOL IS_PED_SHOOTING(Ped ped) { return invoke<BOOL>(0x0250EB50, ped); } // 0x34616828CD07F1A1 0xE7C3405E b1207
	static float TIME_SINCE_PED_LAST_SHOT(Ped ped) { return invoke<float>(0x0250EC40, ped); } // 0x285D36C5C72B0569 b1207
	static void SET_PED_ACCURACY(Ped ped, int accuracy) { invoke<Void>(0x0250ED60, ped, accuracy); } // 0x7AEFB85C1D49DEB6 0x6C17122E b1207
	static int GET_PED_ACCURACY(Ped ped) { return invoke<int>(0x0250EE80, ped); } // 0x37F4AD56ECBC0CD6 0x0A2A0AA0 b1207
	static BOOL IS_PED_MODEL(Ped ped, Hash modelHash) { return invoke<BOOL>(0x0250EFD0, ped, modelHash); } // 0xC9D55B1A358A5BF7 0x5F1DDFCB b1207
	static void EXPLODE_PED_HEAD(Ped ped, Hash weaponHash) { invoke<Void>(0x0250F130, ped, weaponHash); } // 0x2D05CED3A38D0F3A 0x05CC1380 b1207
	static void ADD_ARMOUR_TO_PED(Ped ped, int amount) { invoke<Void>(0x0250F200, ped, amount); } // 0x5BA652A0CD14DF2F 0xF686B26E b1207
	static void _0x5CA20FBE49891BBD(Any p0, Any p1) { invoke<Void>(0x0250F3A0, p0, p1); } // 0x5CA20FBE49891BBD b1207
	static void SET_PED_INTO_VEHICLE(Ped ped, Vehicle vehicle, int seatIndex) { invoke<Void>(0x0250F470, ped, vehicle, seatIndex); } // 0xF75B0D629E1C063D 0x07500C79 b1207
	static void SET_PED_MOVE_ANIMS_BLEND_OUT(Ped ped) { invoke<Void>(0x0250F540, ped); } // 0x9E8C908F41584ECD 0x20E01957 b1207
	static void _0x606D529DADA3C940(Ped ped, Any p1) { invoke<Void>(0x0250F720, ped, p1); } // 0x606D529DADA3C940 b1207
	static BOOL IS_PED_MALE(Ped ped) { return invoke<BOOL>(0x0250F7B0, ped); } // 0x6D9F5FAA7488BA46 0x90950455 b1207
	static BOOL IS_PED_HUMAN(Ped ped) { return invoke<BOOL>(0x0250F8A0, ped); } // 0xB980061DA992779D 0x194BB7B0 b1207
	static Vehicle GET_VEHICLE_PED_IS_IN(Ped ped, BOOL lastVehicle) { return invoke<Vehicle>(0x0250F980, ped, lastVehicle); } // 0x9A9112A0FE9A4713 0xAFE92319 b1207
	static void RESET_PED_LAST_VEHICLE(Ped ped) { invoke<Void>(0x0250F9B0, ped); } // 0xBB8DE8CF6A8DD8BB 0x5E3B5942 b1207
	static void _0xC6136B40FFFB778B(Any p0) { invoke<Void>(0x0250FBD0, p0); } // 0xC6136B40FFFB778B b1207
	static void _0x6E8B87139854022D(Any p0, Any p1) { invoke<Void>(0x0250FBE0, p0, p1); } // 0x6E8B87139854022D b1207
	static int _GET_NUM_FREE_SLOTS_IN_PED_POOL() { return invoke<int>(0x0250FCB0); } // 0x313778EDCA9158E2 b1207
	static void _RESERVE_AMBIENT_PEDS(int numPeds) { invoke<Void>(0x0250FCD0, numPeds); } // 0xED9582B3DA8F02B4 b1207
	static void _RESERVE_AMBIENT_PEDS_TOTAL(int numPeds) { invoke<Void>(0x0250FD10, numPeds); } // 0xF008E0BA1FE1D644 b1207
	static void _UNRESERVE_AMBIENT_PEDS(int numPeds) { invoke<Void>(0x0250FD50, numPeds); } // 0x7D4E70A67A651C71 b1207
	static int _GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED() { return invoke<int>(0x0250FDB0); } // 0x62DE46F061CAA468 b1207
	static int _GET_NUM_RESERVED_AMBIENT_PEDS_READY() { return invoke<int>(0x0250FDD0); } // 0x5C16855277819BBF b1207
	static BOOL _ARE_ALL_AMBIENT_PED_RESERVATIONS_READY() { return invoke<BOOL>(0x0250FDF0); } // 0x5E420FF293EE5472 b1207
	static void _SET_SCENARIO_PED_RANGE_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0x0250FE20, multiplier); } // 0xA77FA7BE9312F8C0 b1207
	static void _0x9E3842E5DAD69F80(Volume volume) { invoke<Void>(0x0250FE50, volume); } // 0x9E3842E5DAD69F80 b1207
	static void _SET_AMBIENT_PED_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0x0250FEF0, multiplier); } // 0xAB0D553FE20A6E25 b1207
	static void SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0x0250FFD0, multiplier); } // 0x7A556143A1C03898 0x2909ABF0 b1207
	static void _SET_AMBIENT_ANIMAL_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0x025100B0, multiplier); } // 0xC0258742B034DFAF b1207
	static void _SET_AMBIENT_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0x02510190, multiplier); } // 0xBA0980B5C0A11924 b1207
	static void _SET_SCENARIO_ANIMAL_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0x02510270, multiplier); } // 0xDB48E99F8E064E56 b1207
	static void _SET_SCENARIO_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0x02510350, multiplier); } // 0x28CB6391ACEDD9DB b1207
	static void _SET_SCENARIO_PED_DENSITY_THIS_FRAME(Hash configHash) { invoke<Void>(0x02510430, configHash); } // 0x95423627A9CA598E b1207
	static void INSTANTLY_FILL_PED_POPULATION() { invoke<Void>(0x02510480); } // 0x4759CC730F947C81 0x8C555ADD b1207
	static void _0xBFA6B7731C3BAF02() { invoke<Void>(0x025104C0); } // 0xBFA6B7731C3BAF02 b1207
	static BOOL IS_INSTANTLY_FILL_PED_POPULATION_FINISHED() { return invoke<BOOL>(0x02510510); } // 0x0EE3F0D7FECCC54F b1207
	static void SET_PED_NON_CREATION_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { invoke<Void>(0x02510520, x1, y1, z1, x2, y2, z2); } // 0xEE01041D559983EA 0x7A97283F b1207
	static void CLEAR_PED_NON_CREATION_AREA() { invoke<Void>(0x02510580); } // 0x2E05208086BA0651 0x6F7043A3 b1207
	static void _0x7C00CFC48A782DC0(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0x02510590, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x7C00CFC48A782DC0 b1207
	static void _0x19C975B81BE53C28(Any p0, Any p1) { invoke<Void>(0x02510880, p0, p1); } // 0x19C975B81BE53C28 b1207
	static void SET_PED_ONTO_MOUNT(Ped ped, Ped mount, int seatIndex, BOOL p3) { invoke<Void>(0x02510990, ped, mount, seatIndex, p3); } // 0x028F76B6E78246EB b1207
	static void _REMOVE_PED_FROM_MOUNT(Ped ped, BOOL p1, BOOL p2) { invoke<Void>(0x02510AF0, ped, p1, p2); } // 0x5337B721C51883A9 b1207
	static Ped CREATE_PED_ON_MOUNT(Ped mount, Hash modelHash, int index, BOOL p3, BOOL p4, BOOL p5, BOOL p6) { return invoke<Ped>(0x02510BD0, mount, modelHash, index, p3, p4, p5, p6); } // 0xF89AA2BD01FC06B7 b1207
	static BOOL _IS_MOUNT_SEAT_FREE(Ped mount, int seat) { return invoke<BOOL>(0x02510CD0, mount, seat); } // 0xAAB0FE202E9FC9F0 b1207
	static BOOL IS_PED_ON_MOUNT(Ped ped) { return invoke<BOOL>(0x02510DE0, ped); } // 0x460BC76A0E10655E 0x43103006 b1207
	static BOOL IS_PED_FULLY_ON_MOUNT(Ped ped, BOOL p1) { return invoke<BOOL>(0x02510EE0, ped, p1); } // 0x95CBC65780DE7EB1 b1207
	static Ped GET_MOUNT(Ped ped) { return invoke<Ped>(0x02510FA0, ped); } // 0xE7E11B8DCBED1058 0xDD31EC4E b1207
	static Any _0x693126B5D0457D0D(Any p0) { return invoke<Any>(0x025110A0, p0); } // 0x693126B5D0457D0D b1232
	static Ped _GET_LAST_MOUNT(Ped ped) { return invoke<Ped>(0x025111D0, ped); } // 0x4C8B59171957BCF7 b1207
	static void _0xED1C764997A86D5A(Any p0, Any p1) { invoke<Void>(0x025112D0, p0, p1); } // 0xED1C764997A86D5A b1207
	static void _0xB8AB265426CFE6DD(Any p0, Any p1) { invoke<Void>(0x02511510, p0, p1); } // 0xB8AB265426CFE6DD b1207
	static Any _0xE8D1CCB9375C101B(Any p0, Any p1) { return invoke<Any>(0x02511630, p0, p1); } // 0xE8D1CCB9375C101B b1207
	static void _0xA691C10054275290(Any p0, Any p1, Any p2) { invoke<Void>(0x025117E0, p0, p1, p2); } // 0xA691C10054275290 b1207
	static void _0x6734F0A6A52C371C(Any p0, Any p1) { invoke<Void>(0x025119B0, p0, p1); } // 0x6734F0A6A52C371C b1207
	static void _0x024EC9B649111915(Any p0, Any p1) { invoke<Void>(0x02511B20, p0, p1); } // 0x024EC9B649111915 b1207
	static void SET_PED_OWNS_ANIMAL(Ped ped, Ped animal, BOOL p2) { invoke<Void>(0x02511C20, ped, animal, p2); } // 0x931B241409216C1F b1207
	static Ped _GET_ACTIVE_ANIMAL_OWNER(Ped animal) { return invoke<Ped>(0x02511D80, animal); } // 0xF103823FFE72BB49 b1207
	static void _0xBCC76708E5677E1D(Any p0, Any p1) { invoke<Void>(0x02511F00, p0, p1); } // 0xBCC76708E5677E1D b1207
	static int _GET_HORSE_TAMING_STATE(Ped horse) { return invoke<int>(0x02512000, horse); } // 0x454AD4DA6C41B5BD b1207
	static void _0x54D3CD482742C482(Any p0, Any p2) { invoke<Void>(0x025120C0, p0, p2); } // 0x54D3CD482742C482 b1355
	static void _0x5CB2EBB467BE3ED6(Any p0, Any p2) { invoke<Void>(0x025121C0, p0, p2); } // 0x5CB2EBB467BE3ED6 b1355
	static void _0x9F0F28B42C4EE80A(Any p0, Any p2) { invoke<Void>(0x025122C0, p0, p2); } // 0x9F0F28B42C4EE80A b1355
	static void _0xA69899995997A63B(Ped ped, int p1) { invoke<Void>(0x025123C0, ped, p1); } // 0xA69899995997A63B b1207
	static void _0x11E6B9629C46D6EC(Ped ped, BOOL p1) { invoke<Void>(0x025124C0, ped, p1); } // 0x11E6B9629C46D6EC b1232
	static void _0x9B65444C07B782BF(Any p0, Any p1) { invoke<Void>(0x025125A0, p0, p1); } // 0x9B65444C07B782BF b1207
	static BOOL IS_ANIMAL_INTERACTION_POSSIBLE(Ped ped, Ped animal) { return invoke<BOOL>(0x025126C0, ped, animal); } // 0xD543D3A8FDE4F185 b1207
	static BOOL _IS_ANIMAL_INTERACTION_RUNNING(Ped ped) { return invoke<BOOL>(0x025126F0, ped); } // 0x7FC84E85D98F063D b1207
	static Any _0x8BE24D74D74C6E9B(Any p0) { return invoke<Any>(0x02512720, p0); } // 0x8BE24D74D74C6E9B b1207
	static Any _0x77243ED4F7CAAA55(Any p0) { return invoke<Any>(0x02512740, p0); } // 0x77243ED4F7CAAA55 b1207
	static BOOL IS_PED_ON_VEHICLE(Ped ped, BOOL p1) { return invoke<BOOL>(0x02512840, ped, p1); } // 0x67722AEB798E5FAB 0xA1AE7CC7 b1207
	static BOOL IS_PED_ON_SPECIFIC_VEHICLE(Ped ped, Vehicle vehicle) { return invoke<BOOL>(0x02512900, ped, vehicle); } // 0xEC5F66E459AF3BB2 0x63CB4603 b1207
	static void _0xE0B61ED8BB37712F(Any p0) { invoke<Void>(0x025129C0, p0); } // 0xE0B61ED8BB37712F b1207
	static void SET_PED_MONEY(Ped ped, int amount) { invoke<Void>(0x025129D0, ped, amount); } // 0xA9C8960E8684C1B5 0x40D90BF2 b1207
	static int GET_PED_MONEY(Ped ped) { return invoke<int>(0x02512AE0, ped); } // 0x3F69145BBA87BAE7 0xEB3C4C7E b1207
	static void _0x9911F4A24485F653(BOOL p0) { invoke<Void>(0x02512BD0, p0); } // 0x9911F4A24485F653 0x02A080C8 b1207
	static void _0x34EDDD59364AD74A(Any p0, Any p1) { invoke<Void>(0x02512BE0, p0, p1); } // 0x34EDDD59364AD74A b1207
	static void _0x2D976DBDC731DF80(Any p0) { invoke<Void>(0x02512BF0, p0); } // 0x2D976DBDC731DF80 b1207
	static BOOL IS_PED_SITTING_IN_VEHICLE(Ped ped, Vehicle vehicle) { return invoke<BOOL>(0x02512CE0, ped, vehicle); } // 0xA808AA1D79230FC2 0xDDDE26FA b1207
	static BOOL IS_PED_SITTING_IN_ANY_VEHICLE(Ped ped) { return invoke<BOOL>(0x02512DA0, ped); } // 0x826AA586EDB9FEF8 0x0EA9CA03 b1207
	static BOOL IS_PED_ON_FOOT(Ped ped) { return invoke<BOOL>(0x02512FB0, ped); } // 0x01FEE67DB37F59B2 0xC60D0785 b1207
	static BOOL IS_PED_PLANTING_BOMB(Ped ped) { return invoke<BOOL>(0x02513060, ped); } // 0xC70B5FAE151982D8 0x0EDAC574 b1207
	static Vector3 GET_DEAD_PED_PICKUP_COORDS(Ped ped, float p1, float p2) { return invoke<Vector3>(0x02513190, ped, p1, p2); } // 0xCD5003B097200F36 0x129F9DC1 b1207
	static BOOL IS_PED_IN_ANY_BOAT(Ped ped) { return invoke<BOOL>(0x02513330, ped); } // 0x2E0E1C2B4F6CB339 0x1118A947 b1207
	static BOOL IS_PED_IN_ANY_HELI(Ped ped) { return invoke<BOOL>(0x02513440, ped); } // 0x298B91AE825E5705 0x7AB5523B b1207
	static BOOL IS_PED_IN_ANY_PLANE(Ped ped) { return invoke<BOOL>(0x02513550, ped); } // 0x5FFF4CFC74D8FB80 0x51BBCE7E b1207
	static BOOL IS_PED_IN_FLYING_VEHICLE(Ped ped) { return invoke<BOOL>(0x02513650, ped); } // 0x9134873537FA419C 0xCA072485 b1207
	static Any _0x256EDD55C6BE1482(Any p0) { return invoke<Any>(0x02513770, p0); } // 0x256EDD55C6BE1482 b1207
	static BOOL GET_PED_LAST_DAMAGE_BONE(Ped ped, int* outBone) { return invoke<BOOL>(0x02513860, ped, outBone); } // 0xD75960F6BD9EA49C 0xAB933841 b1207
	static void CLEAR_PED_LAST_DAMAGE_BONE(Ped ped) { invoke<Void>(0x02513890, ped); } // 0x8EF6B7AC68E2F01B 0x56CB715E b1207
	static int _GET_PED_DAMAGE_CLEANLINESS(Ped ped) { return invoke<int>(0x02513A00, ped); } // 0x88EFFED5FE8B0B4A b1207
	static void _SET_PED_DAMAGE_CLEANLINESS(Ped ped, int damageCleanliness) { invoke<Void>(0x02513AF0, ped, damageCleanliness); } // 0x7528720101A807A5 b1207
	static BOOL _GET_PED_DAMAGED(Ped ped) { return invoke<BOOL>(0x02513C70, ped); } // 0x6CFC373008A1EDAF b1207
	static void _SET_PED_DAMAGED(Ped ped, BOOL damaged) { invoke<Void>(0x02513D60, ped, damaged); } // 0xDACE03C65C6666DB b1207
	static Any _SET_PLAYER_CURRENT_ANIMAL_DAMAGE_MODIFIER(Player player, float modifier, int p2, int p3) { return invoke<Any>(0x02513ED0, player, modifier, p2, p3); } // 0x9EFF3C91DF38304F b1311
	static void _UPDATE_ANIMAL_DAMAGE_MODIFIER(Player player) { invoke<Void>(0x02513F00, player); } // 0x0F9E754EBE8FDBFA b1311
	static float _GET_PLAYER_CURRENT_ANIMAL_DAMAGE_MODIFIER(Player player) { return invoke<float>(0x02513FA0, player); } // 0xEE2D5C819A65BF26 b1311
	static Any _0xB29C553BA582D09E(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x02514070, p0, p1, p2, p3); } // 0xB29C553BA582D09E b1207
	static Any _0x101B45C5F56D970F(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x025140B0, p0, p1, p2, p3); } // 0x101B45C5F56D970F b1207
	static Any _0x6B89FAA36FC909A3(Any p0, Ped ped, int pedDamage, int pedQuality) { return invoke<Any>(0x025141A0, p0, ped, pedDamage, pedQuality); } // 0x6B89FAA36FC909A3 b1207
	static Any COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(Any p0, Any p1, Any p2) { return invoke<Any>(0x02514290, p0, p1, p2); } // 0x9E7738B291706746 b1207
	static void SET_AI_WEAPON_DAMAGE_MODIFIER(float value) { invoke<Void>(0x02514360, value); } // 0x1B1E2A40A65B8521 0x516E30EE b1207
	static void RESET_AI_WEAPON_DAMAGE_MODIFIER() { invoke<Void>(0x02514370); } // 0xEA16670E7BA4743C 0x6E965420 b1207
	static void _0x73B6F907B913C860(Any p0, Any p1) { invoke<Void>(0x02514380, p0, p1); } // 0x73B6F907B913C860 b1207
	static void _0xA6D6F03095C88F59(Any p0) { invoke<Void>(0x025144A0, p0); } // 0xA6D6F03095C88F59 b1207
	static Any _0x92C8EACA29F6BED6(Any p0) { return invoke<Any>(0x02514620, p0); } // 0x92C8EACA29F6BED6 b1207
	static void SET_PED_TO_PLAYER_WEAPON_DAMAGE_MODIFIER(Ped ped, float damageModifier) { invoke<Void>(0x02514710, ped, damageModifier); } // 0xD77AE48611B7B10A b1207
	static float GET_PED_TO_PLAYER_WEAPON_DAMAGE_MODIFIER(Ped ped) { return invoke<float>(0x02514830, ped); } // 0x936E7CAD0AE2EE14 b1207
	static void _SET_CURRENT_DEFENSE_AGAINST_PLAYERS_MODIFIER(Ped horse, float modifier) { invoke<Void>(0x02514930, horse, modifier); } // 0x069EDDF1FD4DEB0A b1207
	static Any _0x763FA8A9D76EE3A7(Any p0) { return invoke<Any>(0x02514A50, p0); } // 0x763FA8A9D76EE3A7 b1311
	static void SET_AI_MELEE_WEAPON_DAMAGE_MODIFIER(float modifier) { invoke<Void>(0x02514B50, modifier); } // 0x66460DEDDD417254 0x0F9A401F b1207
	static void _SET_ACCURACY_AGAINST_LOCAL_PLAYER_MODIFIER(Ped ped, float modifier) { invoke<Void>(0x02514B60, ped, modifier); } // 0xC2266AA617668AD3 b1207
	static Any _0xDC9273D95976BA22(Any p0) { return invoke<Any>(0x02514C70, p0); } // 0xDC9273D95976BA22 b1207
	static void _SET_PED_HEADSHOT_DAMAGE_MULTIPLIER(Ped ped, float multiplier) { invoke<Void>(0x02514D60, ped, multiplier); } // 0x2BA918C823B8BA56 b1207
	static void _0xDEE8D30AA5C2E28D(Any p0, Any p1, Any p2) { invoke<Void>(0x02514E70, p0, p1, p2); } // 0xDEE8D30AA5C2E28D b1207
	static void _0xE1B3BE07D3AADDED(Any p0, Any p1, Any p2) { invoke<Void>(0x02514FA0, p0, p1, p2); } // 0xE1B3BE07D3AADDED b1207
	static void _0x32CEDA9A0AB4CEF7(Any p0, Any p1, Any p2) { invoke<Void>(0x025150D0, p0, p1, p2); } // 0x32CEDA9A0AB4CEF7 b1207
	static void _0x52A24D8A1DA89658(Any p0, Any p1, Any p2) { invoke<Void>(0x02515200, p0, p1, p2); } // 0x52A24D8A1DA89658 b1207
	static void _0x34B5CEAC180A5D6E(Any p0, Any p1, Any p2) { invoke<Void>(0x02515340, p0, p1, p2); } // 0x34B5CEAC180A5D6E b1207
	static void _0x4F27603E44A8E4C0(Any p0, Any p1, Any p2) { invoke<Void>(0x02515470, p0, p1, p2); } // 0x4F27603E44A8E4C0 b1207
	static void _0x3FDCC1F8C17E303E(Ped ped, int p1, float p2) { invoke<Void>(0x025155B0, ped, p1, p2); } // 0x3FDCC1F8C17E303E b1207
	static void _0xE50C9816B3F22D8B(Any p0, Any p1, Any p2) { invoke<Void>(0x025156D0, p0, p1, p2); } // 0xE50C9816B3F22D8B b1311
	static void _SET_DEFENSE_MODIFIER_FOR_PED(Ped ped, float modifier) { invoke<Void>(0x02515800, ped, modifier); } // 0x9B6808EC46BE849B b1207
	static void _0x7883AA809DF43D98(Any p0, Any p1) { invoke<Void>(0x02515920, p0, p1); } // 0x7883AA809DF43D98 b1355
	static void _0xC5B78E41DCF8227C(Any p0, Any p1) { invoke<Void>(0x02515A40, p0, p1); } // 0xC5B78E41DCF8227C b1207
	static void SET_PED_CAN_BE_TARGETTED(Ped ped, BOOL toggle) { invoke<Void>(0x02515B40, ped, toggle); } // 0x63F58F7C80513AAD 0x75C49F74 b1207
	static void SET_PED_CAN_BE_TARGETTED_BY_TEAM(Ped ped, int team, BOOL toggle) { invoke<Void>(0x02515C40, ped, team, toggle); } // 0xBF1CA77833E58F2C 0xB103A8E1 b1207
	static void SET_PED_CAN_BE_TARGETTED_BY_PLAYER(Ped ped, Player player, BOOL toggle) { invoke<Void>(0x02515D00, ped, player, toggle); } // 0x66B57B72E0836A76 0xD050F490 b1207
	static void _0xFECA2081F61ED2CD(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02515DE0, p0, p1, p2, p3); } // 0xFECA2081F61ED2CD b1207
	static BOOL IS_PED_FALLING(Ped ped) { return invoke<BOOL>(0x02515EE0, ped); } // 0xFB92A102F1C4DFA3 0xABF77334 b1207
	static BOOL _IS_PED_SLIDING(Ped ped) { return invoke<BOOL>(0x02515FD0, ped); } // 0xD6740E14E4CEFC0B b1207
	static BOOL IS_PED_JUMPING(Ped ped) { return invoke<BOOL>(0x025160C0, ped); } // 0xCEDABC5900A0BF97 0x07E5BC0E b1207
	static BOOL IS_PED_CLIMBING(Ped ped) { return invoke<BOOL>(0x025161B0, ped); } // 0x53E8CB4F48BFE623 0xBCE03D35 b1207
	static BOOL _IS_PED_CLIMBING_LADDER(Ped ped) { return invoke<BOOL>(0x025162A0, ped); } // 0x59643424B68D52B5 b1207
	static BOOL _0x577C60BA06D0EA64(Ped ped) { return invoke<BOOL>(0x02516410, ped); } // 0x577C60BA06D0EA64 b1207
	static BOOL IS_PED_VAULTING(Ped ped) { return invoke<BOOL>(0x025165B0, ped); } // 0x117C70D1F5730B5E 0xC3169BDA b1207
	static BOOL IS_PED_DIVING(Ped ped) { return invoke<BOOL>(0x025166A0, ped); } // 0x5527B8246FEF9B11 0x7BC5BF3C b1207
	static BOOL _IS_PED_OPENING_A_DOOR(Ped ped) { return invoke<BOOL>(0x02516790, ped); } // 0x26AF0E8E30BD2A2C b1207
	static Any _0x5C6C7C70CA302801(Any p0) { return invoke<Any>(0x02516840, p0); } // 0x5C6C7C70CA302801 b1207
	static Any _0xB91AB3BE7F655D49(Any p0) { return invoke<Any>(0x025168F0, p0); } // 0xB91AB3BE7F655D49 b1207
	static BOOL IS_PED_IN_ANY_TAXI(Ped ped) { return invoke<BOOL>(0x025169E0, ped); } // 0x6E575D6A898AB852 0x16FD386C b1207
	static void SET_PED_ID_RANGE(Ped ped, float value) { invoke<Void>(0x02516B90, ped, value); } // 0xF107E836A70DCE05 0xEF3B4ED9 b1207
	static float _GET_PED_ID_RANGE(Ped ped) { return invoke<float>(0x02516C90, ped); } // 0x31167ED4324B758D b1207
	static void SET_PED_HIGHLY_PERCEPTIVE(Ped ped, BOOL toggle) { invoke<Void>(0x02516D80, ped, toggle); } // 0x52D59AB61DDC05DD 0x9A2180FF b1207
	static void _0xEC4B4B3B9908052A(Ped ped, float unk) { invoke<Void>(0x02516E80, ped, unk); } // 0xEC4B4B3B9908052A 0xF30658D2 b1311
	static void _0x733C87D4CE22BEA2(Any p0) { invoke<Void>(0x02516FA0, p0); } // 0x733C87D4CE22BEA2 0x43709044 b1207
	static void _0x028E7B3BBA0BD2FC(Any p0) { invoke<Void>(0x02517080, p0); } // 0x028E7B3BBA0BD2FC b1207
	static Any _0xFA8C10DCE0706D43(Any p0) { return invoke<Any>(0x02517170, p0); } // 0xFA8C10DCE0706D43 b1207
	static void _SET_PED_ANIMAL_DETECTION_MODIFIER(Ped ped, float modifier) { invoke<Void>(0x02517260, ped, modifier); } // 0x43CA928E892CFDB8 b1311
	static Any _0x2BA9D7BF629F920C(Any p0) { return invoke<Any>(0x02517380, p0); } // 0x2BA9D7BF629F920C b1207
	static void SET_PED_SEEING_RANGE(Ped ped, float value) { invoke<Void>(0x02517470, ped, value); } // 0xF29CF591C4BF6CEE 0x4BD72FE8 b1207
	static Any _0x900CA00CE703E1E2(Any p0) { return invoke<Any>(0x02517570, p0); } // 0x900CA00CE703E1E2 b1207
	static void SET_PED_HEARING_RANGE(Ped ped, float value) { invoke<Void>(0x02517660, ped, value); } // 0x33A8F7F7D5F7F33C 0xB32087E0 b1207
	static void SET_PED_VISUAL_FIELD_MIN_ANGLE(Ped ped, float value) { invoke<Void>(0x02517760, ped, value); } // 0x2DB492222FB21E26 0x72E2E18B b1207
	static void SET_PED_VISUAL_FIELD_MAX_ANGLE(Ped ped, float value) { invoke<Void>(0x02517860, ped, value); } // 0x70793BDCA1E854D4 0x0CEA0F9A b1207
	static void SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(Ped ped, float range) { invoke<Void>(0x02517960, ped, range); } // 0x9C74B0BC831B753A 0xFDF2F7C2 b1207
	static void SET_PED_VISUAL_FIELD_CENTER_ANGLE(Ped ped, float angle) { invoke<Void>(0x02517A60, ped, angle); } // 0x3B6405E8AB34A907 0xE57202A1 b1207
	static void _0x9AB33CB5834885B3(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x02517B60, p0, p1, p2, p3, p4); } // 0x9AB33CB5834885B3 b1207
	static void _0x899DFA0009AC93DE(Any p0, Any p1) { invoke<Void>(0x02517CD0, p0, p1); } // 0x899DFA0009AC93DE b1207
	static void _0x3A5697B80FED5EBE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x02517DD0, p0, p1, p2, p3, p4); } // 0x3A5697B80FED5EBE b1207
	static void SET_PED_STEALTH_MOVEMENT(Ped ped, Any p1, Any p2, Any p3) { invoke<Void>(0x02517EF0, ped, p1, p2, p3); } // 0x88CBB5CEB96B7BD2 0x67E28E1D b1207
	static BOOL GET_PED_STEALTH_MOVEMENT(Ped ped) { return invoke<BOOL>(0x02517F80, ped); } // 0x7C2AC9CA66575FBF 0x40321B83 b1207
	static void _SET_PED_CROUCH_MOVEMENT(Ped ped, BOOL state, int p2, BOOL immediately) { invoke<Void>(0x02518020, ped, state, p2, immediately); } // 0x7DE9692C6F64CFE8 b1207
	static BOOL GET_PED_CROUCH_MOVEMENT(Ped ped) { return invoke<BOOL>(0x025181A0, ped); } // 0xD5FE956C70FF370B b1207
	static BOOL GET_PED_IS_DOING_COMBAT_ROLL(Ped ped) { return invoke<BOOL>(0x02518290, ped); } // 0xC48A9EB0D499B3E5 b1207
	static int CREATE_GROUP(int unused) { return invoke<int>(0x02518380, unused); } // 0x90370EBE0FEE1A3D 0x8DC0368D b1207
	static void SET_PED_AS_GROUP_LEADER(Ped ped, int groupId, BOOL p2) { invoke<Void>(0x025183A0, ped, groupId, p2); } // 0x2A7819605465FBCE 0x7265BEA2 b1207
	static void SET_PED_AS_GROUP_MEMBER(Ped ped, int groupId) { invoke<Void>(0x02518510, ped, groupId); } // 0x9F3480FE65DB31B5 0x0EE13F92 b1207
	static void SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(Ped pedHandle, int groupHandle, BOOL toggle) { invoke<Void>(0x02518520, pedHandle, groupHandle, toggle); } // 0x2E2F4240B3F24647 0xD0D8BDBC b1207
	static void REMOVE_GROUP(int groupId) { invoke<Void>(0x02518540, groupId); } // 0x8EB2F69076AF7053 0x48D72B88 b1207
	static void REMOVE_PED_FROM_GROUP(Ped ped) { invoke<Void>(0x02518550, ped); } // 0xED74007FFB146BC2 0x82697713 b1207
	static BOOL IS_PED_GROUP_MEMBER(Any p0, Any p1, Any p2) { return invoke<BOOL>(0x02518560, p0, p1, p2); } // 0x9BB01E3834671191 0x876D5363 b1207
	static BOOL _IS_PED_GROUP_LEADER(Ped ped, int groupId) { return invoke<BOOL>(0x02518620, ped, groupId); } // 0x878B68960C1C2A35 b1207
	static BOOL IS_PED_HANGING_ON_TO_VEHICLE(Ped ped) { return invoke<BOOL>(0x025186E0, ped); } // 0x1C86D8AEF8254B78 0x9678D4FF b1207
	static void SET_GROUP_SEPARATION_RANGE(int groupHandle, float separationRange) { invoke<Void>(0x02518790, groupHandle, separationRange); } // 0x4102C7858CFEE4E4 0x7B820CD5 b1207
	static void _0x89E59DBD15E21177(Any p0, Any p1) { invoke<Void>(0x02518860, p0, p1); } // 0x89E59DBD15E21177 b1207
	static BOOL IS_PED_PRONE(Ped ped) { return invoke<BOOL>(0x025188A0, ped); } // 0xD6A86331A537A7B9 0x02C2A6C3 b1207
	static Any _0x7583A9D35248B83F(Any p0) { return invoke<Any>(0x02518990, p0); } // 0x7583A9D35248B83F b1207
	static BOOL IS_PED_IN_COMBAT(Ped ped, Ped target) { return invoke<BOOL>(0x02518AC0, ped, target); } // 0x4859F1FC66A6278E 0xFE027CB5 b1207
	static BOOL CAN_PED_IN_COMBAT_SEE_TARGET(Ped ped, Ped target) { return invoke<BOOL>(0x02518C90, ped, target); } // 0xEAD42DE3610D0721 0xCCD525E1 b1207
	static BOOL IS_PED_JACKING(Ped ped) { return invoke<BOOL>(0x02518EA0, ped); } // 0x4AE4FF911DFB61DA 0x3B321816 b1207
	static BOOL IS_PED_BEING_JACKED(Ped ped) { return invoke<BOOL>(0x02518F90, ped); } // 0x9A497FE2DF198913 0xD45D605C b1207
	static BOOL IS_PED_BEING_STUNNED(Ped ped, int p1) { return invoke<BOOL>(0x02519080, ped, p1); } // 0x4FBACCE3B4138EE8 0x0A66CE30 b1207
	static Ped GET_PEDS_JACKER(Ped ped) { return invoke<Ped>(0x02519140, ped); } // 0x9B128DC36C1E04CF 0xDE1DBB59 b1207
	static Ped GET_JACK_TARGET(Ped ped) { return invoke<Ped>(0x02519240, ped); } // 0x5486A79D9FBD342D 0x1D196361 b1207
	static BOOL IS_PED_FLEEING(Ped ped) { return invoke<BOOL>(0x025193F0, ped); } // 0xBBCCE00B381F8482 0x85D813C6 b1207
	static BOOL IS_PED_IN_COVER(Ped ped, BOOL p1, BOOL p2) { return invoke<BOOL>(0x02519560, ped, p1, p2); } // 0x60DFD0691A170B88 0x972C5A8B b1207
	static Any _0x2DD4E0E26DFAD97D(Any p0, Any p1, Any p2) { return invoke<Any>(0x02519630, p0, p1, p2); } // 0x2DD4E0E26DFAD97D b1207
	static Any _0x06FA94C835787C64(Any p0) { return invoke<Any>(0x02519760, p0); } // 0x06FA94C835787C64 b1207
	static BOOL _PED_DUELING_DID_PLAYER_HEADSHOT_OPPONENT(Ped ped) { return invoke<BOOL>(0x02519850, ped); } // 0xBD6B242B8BD5543A b1207
	static BOOL IS_PED_IN_COVER_FACING_LEFT(Ped ped) { return invoke<BOOL>(0x02519940, ped); } // 0x845333B3150583AB 0xB89DBB80 b1207
	static BOOL IS_PED_GOING_INTO_COVER(Ped ped) { return invoke<BOOL>(0x025199F0, ped); } // 0x9F65DBC537E59AD5 0xA3589628 b1207
	static BOOL IS_PED_RESPONDING_TO_THREAT(Ped ped) { return invoke<BOOL>(0x02519BA0, ped); } // 0x77525BBF433F2CD6 b1207
	static Any _0xC22AA08A8ADB87D4(Any p0) { return invoke<Any>(0x02519D00, p0); } // 0xC22AA08A8ADB87D4 b1207
	static Any _0x569F1E1237508DEB(Any p0) { return invoke<Any>(0x02519E40, p0); } // 0x569F1E1237508DEB b1207
	static BOOL _0x3BBDD6143FF16F98(Ped ped, Object object, const char* p2, const char* p3, const char* p4, int p5) { return invoke<BOOL>(0x02519F90, ped, object, p2, p3, p4, p5); } // 0x3BBDD6143FF16F98 b1207
	static BOOL GIVE_PED_HASH_SCENARIO_PROP(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0x0251A0B0, ped, p1, p2, p3, p4, p5); } // 0x2B02DB082258625F b1207
	static Any _0xA0774E388CE4A679(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x0251A1A0, p0, p1, p2, p3, p4); } // 0xA0774E388CE4A679 b1207
	static Any _0xBEC65C6049B3219D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x0251A280, p0, p1, p2, p3, p4, p5); } // 0xBEC65C6049B3219D b1207
	static Any _0xBDED916A9F9B0604(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x0251A3A0, p0, p1, p2, p3, p4, p5); } // 0xBDED916A9F9B0604 b1207
	static Entity _GET_PED_REGISTER_PROP(Ped ped, const char* p1, BOOL p2) { return invoke<Entity>(0x0251A490, ped, p1, p2); } // 0x4D0D2E3D8BC000EB b1207
	static int GET_SEAT_PED_IS_TRYING_TO_ENTER(Ped ped) { return invoke<int>(0x0251A570, ped); } // 0x6F4C85ACD641BCD2 0xACF162E0 b1207
	static Entity GET_PED_SOURCE_OF_DEATH(Ped ped) { return invoke<Entity>(0x0251A690, ped); } // 0x93C8B64DEB84728C 0x84ADF9EB b1207
	static Hash GET_PED_CAUSE_OF_DEATH(Ped ped) { return invoke<Hash>(0x0251A7A0, ped); } // 0x16FFE42AB2D2DC59 0x63458C27 b1207
	static int GET_PED_TIME_OF_DEATH(Ped ped) { return invoke<int>(0x0251A890, ped); } // 0x1E98817B311AE98A 0xDF6D5D54 b1207
	static int _0x5407B7288D0478B7(Any p0, Any p1) { return invoke<int>(0x0251A980, p0, p1); } // 0x5407B7288D0478B7 0xEF0B78E6 b1207
	static Any _0x7BE607DAFF382FD2(Any p0, Any p1, Any p2) { return invoke<Any>(0x0251AB40, p0, p1, p2); } // 0x7BE607DAFF382FD2 b1207
	static Any _0x336B3D200AB007CB(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x0251AC00, p0, p1, p2, p3, p4, p5); } // 0x336B3D200AB007CB 0xFB18CB19 b1207
	static Any GET_CURRENT_TARGET_FOR_PED(Ped ped) { return invoke<Any>(0x0251AE00, ped); } // 0xCD66FEA29400A0B5 b1207
	static void SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Ped ped, Hash hash) { invoke<Void>(0x0251AF60, ped, hash); } // 0xADB3F206518799E8 0x423B7BA2 b1207
	static Hash _GET_DEFAULT_RELATIONSHIP_GROUP_HASH(Hash modelHash) { return invoke<Hash>(0x0251AF70, modelHash); } // 0x3CC4A718C258BDD0 b1207
	static void SET_PED_RELATIONSHIP_GROUP_HASH(Ped ped, Hash hash) { invoke<Void>(0x0251B060, ped, hash); } // 0xC80A74AC829DDD92 0x79F8C18C b1207
	static void SET_RELATIONSHIP_BETWEEN_GROUPS(int relationship, Hash group1, Hash group2) { invoke<Void>(0x0251B070, relationship, group1, group2); } // 0xBF25EB89375A37AD 0xD4A215BA b1207
	static void CLEAR_RELATIONSHIP_BETWEEN_GROUPS(int relationship, Hash group1, Hash group2) { invoke<Void>(0x0251B170, relationship, group1, group2); } // 0x5E29243FB56FC6D4 0x994B8C2D b1207
	static Any ADD_RELATIONSHIP_GROUP(const char* name, Hash* groupHash) { return invoke<Any>(0x0251B240, name, groupHash); } // 0xF372BC22FCB88606 0x8B635546 b1207
	static void REMOVE_RELATIONSHIP_GROUP(Hash groupHash) { invoke<Void>(0x0251B2E0, groupHash); } // 0xB6BA2444AB393DA2 0x4A1DC59A b1207
	static int GET_RELATIONSHIP_BETWEEN_PEDS(Ped ped1, Ped ped2) { return invoke<int>(0x0251B2F0, ped1, ped2); } // 0xEBA5AD3A0EAF7121 0xE254C39C b1207
	static Hash GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Ped ped) { return invoke<Hash>(0x0251B4F0, ped); } // 0x42FDD0F017B1E38E 0x714BD6E4 b1207
	static Hash GET_PED_RELATIONSHIP_GROUP_HASH(Ped ped) { return invoke<Hash>(0x0251B5E0, ped); } // 0x7DBDD04862D95F04 0x354F283C b1207
	static int GET_RELATIONSHIP_BETWEEN_GROUPS(Hash group1, Hash group2) { return invoke<int>(0x0251B6E0, group1, group2); } // 0x9E6B70061662AE5C 0x4E372FE2 b1207
	static void _0xDC91F22F09BC6C2F(Hash group, BOOL p1) { invoke<Void>(0x0251B7B0, group, p1); } // 0xDC91F22F09BC6C2F b1207
	static void _0x9629FAF6460D35CB(Any p0, Any p1) { invoke<Void>(0x0251B8D0, p0, p1); } // 0x9629FAF6460D35CB b1207
	static void _0x4E68C7EF706DF35D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x0251B8F0, p0, p1, p2, p3, p4, p5); } // 0x4E68C7EF706DF35D b1207
	static Any _0x3ACCE14DFA6BA8C2(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0x0251B9B0, p0, p1, p2, p3, p4, p5, p6); } // 0x3ACCE14DFA6BA8C2 b1207
	static void SET_PED_TO_INFORM_RESPECTED_FRIENDS(Ped ped, float radius, int maxFriends) { invoke<Void>(0x0251BA70, ped, radius, maxFriends); } // 0x112942C6E708F70B 0xD78AC46C b1207
	static Any _0x40C9155AF8BC13F3(Any p0) { return invoke<Any>(0x0251BB60, p0); } // 0x40C9155AF8BC13F3 b1207
	static Any _0xF4860514AD354226(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x0251BC10, p0, p1, p2, p3, p4, p5); } // 0xF4860514AD354226 b1207
	static BOOL IS_PED_RESPONDING_TO_EVENT(Ped ped, Hash eventType) { return invoke<BOOL>(0x0251BC40, ped, eventType); } // 0x625B774D75C87068 0x7A877554 b1207
	static Any _0x5E9FAF6C513347B4(Any p0, Any p1) { return invoke<Any>(0x0251BDE0, p0, p1); } // 0x5E9FAF6C513347B4 b1207
	static Any _0x326F7951EF0D7F75(Any p0, Any p1) { return invoke<Any>(0x0251BF40, p0, p1); } // 0x326F7951EF0D7F75 b1207
	static Entity _0xE76687023D8C8505(Hash p0, Any p1) { return invoke<Entity>(0x0251C0A0, p0, p1); } // 0xE76687023D8C8505 b1207
	static Any _0xCB8F4C9343EBE240(Any p0, Any p1, Any p2) { return invoke<Any>(0x0251C150, p0, p1, p2); } // 0xCB8F4C9343EBE240 b1207
	static void SET_PED_FIRING_PATTERN(Ped ped, Hash patternHash) { invoke<Void>(0x0251C2E0, ped, patternHash); } // 0x9AC577F5A12AD8A9 0xB4629D66 b1207
	static void _0x20E54854DEF6A54A(Any p0, Any p1) { invoke<Void>(0x0251C3B0, p0, p1); } // 0x20E54854DEF6A54A b1207
	static void _SET_PED_FIRING_PATTERN_2(Ped ped, Hash patternHash) { invoke<Void>(0x0251C540, ped, patternHash); } // 0x244E8C282188E40F b1207
	static void SET_PED_SHOOT_RATE(Ped ped, int shootRate) { invoke<Void>(0x0251C6D0, ped, shootRate); } // 0x614DA022990752DC 0xFB301746 b1207
	static void _0x3C529A827998F9B3(Any p0, Any p1, Any p2) { invoke<Void>(0x0251C850, p0, p1, p2); } // 0x3C529A827998F9B3 b1207
	static void _0x1F44B7E283C09EDE(Any p0, Any p1, Any p2) { invoke<Void>(0x0251C9B0, p0, p1, p2); } // 0x1F44B7E283C09EDE b1207
	static void SET_COMBAT_FLOAT(Ped ped, int combatType, float newValue) { invoke<Void>(0x0251CB10, ped, combatType, newValue); } // 0xFF41B4B141ED981C 0xD8B7637C b1207
	static float GET_COMBAT_FLOAT(Ped ped, int combatType) { return invoke<float>(0x0251CBE0, ped, combatType); } // 0x52DFF8A10508090A 0x511D7EF8 b1207
	static void GET_GROUP_SIZE(int groupID, BOOL* unknown, int* sizeInMembers) { invoke<Void>(0x0251CD40, groupID, unknown, sizeInMembers); } // 0x8DE69FE35CA09A45 0xF7E1A691 b1207
	static BOOL DOES_GROUP_EXIST(int groupId) { return invoke<BOOL>(0x0251CD60, groupId); } // 0x7C6B0C22F9F40BBE 0x935C978D b1207
	static Any _0x0455546F23FF08E4(Any p0) { return invoke<Any>(0x0251CE50, p0); } // 0x0455546F23FF08E4 b1207
	static Any _0x909AD9E9A92A10DF(Any p0) { return invoke<Any>(0x0251CF40, p0); } // 0x909AD9E9A92A10DF b1207
	static int GET_PED_GROUP_INDEX(Ped ped) { return invoke<int>(0x0251CF70, ped); } // 0xF162E133B4E7A675 0x134E0785 b1207
	static BOOL IS_PED_IN_GROUP(Ped ped) { return invoke<BOOL>(0x0251D020, ped); } // 0x5891CAC5D4ACFF74 0x836D9795 b1207
	static Any _0x917760CFE7A0E0F1(Any p0) { return invoke<Any>(0x0251D130, p0); } // 0x917760CFE7A0E0F1 b1207
	static Player GET_PLAYER_PED_IS_FOLLOWING(Ped ped) { return invoke<Player>(0x0251D260, ped); } // 0x6A3975DEA89F9A17 0xDE7442EE b1207
	static void SET_GROUP_FORMATION(int groupId, int formationType) { invoke<Void>(0x0251D310, groupId, formationType); } // 0xCE2F5FC3AF7E8C1E 0x08FAC739 b1207
	static int _GET_GROUP_FORMATION(int groupId) { return invoke<int>(0x0251D360, groupId); } // 0x13A1B061007C906B b1207
	static void SET_GROUP_FORMATION_SPACING(int groupId, float p1, float p2, float p3) { invoke<Void>(0x0251D380, groupId, p1, p2, p3); } // 0x1D9D45004C28C916 0xB1E086FF b1207
	static void RESET_GROUP_FORMATION_DEFAULT_SPACING(int groupHandle) { invoke<Void>(0x0251D4D0, groupHandle); } // 0x63DAB4CCB3273205 0x267FCEAD b1207
	static Any _0xB05CC690CDE8A4A9(Any p0, Any p1) { return invoke<Any>(0x0251D520, p0, p1); } // 0xB05CC690CDE8A4A9 b1207
	static void ADD_CUSTOM_FORMATION_LOCATION(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x0251D570, p0, p1, p2, p3, p4); } // 0x4E23CD07BD161E06 b1207
	static Any ADD_FORMATION_LOCATION(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x0251D730, p0, p1, p2, p3); } // 0xB05945C1E9E60D91 b1207
	static Any SET_FORMATION_POSITIONS_TARGET_RADIUS(Any p0, Any p1) { return invoke<Any>(0x0251D7C0, p0, p1); } // 0x7CC7D3B7AF7FB71F b1207
	static void _0x478F6B9920446CE2(Any p0, Any p1) { invoke<Void>(0x0251D820, p0, p1); } // 0x478F6B9920446CE2 b1207
	static void _0x0E9E95FDEDCC9D35(Any p0, Any p1, Any p2) { invoke<Void>(0x0251D870, p0, p1, p2); } // 0x0E9E95FDEDCC9D35 b1207
	static Any _0x8AF8E647D6B2A649(Any p0, Any p1) { return invoke<Any>(0x0251D940, p0, p1); } // 0x8AF8E647D6B2A649 b1207
	static void _0x87C2724A56F66020(Any p0) { invoke<Void>(0x0251DA10, p0); } // 0x87C2724A56F66020 b1207
	static void _0xD5BD1B5318A81994(Any p0, Any p1) { invoke<Void>(0x0251DAC0, p0, p1); } // 0xD5BD1B5318A81994 b1207
	static void _0x9BBEAF8B0C007F1E(Any p0, Any p1) { invoke<Void>(0x0251DB00, p0, p1); } // 0x9BBEAF8B0C007F1E b1207
	static void _0xC99F104BDF8C7F5A(Any p0, Any p1) { invoke<Void>(0x0251DC50, p0, p1); } // 0xC99F104BDF8C7F5A b1207
	static void _0x02E741E19E39628C(Any p0, Any p1) { invoke<Void>(0x0251DD20, p0, p1); } // 0x02E741E19E39628C b1207
	static void _0x97C475212B327666(Any p0, Any p1) { invoke<Void>(0x0251DE70, p0, p1); } // 0x97C475212B327666 b1207
	static void _0x154B7E841AC7412F(Any p0, Any p1) { invoke<Void>(0x0251DEC0, p0, p1); } // 0x154B7E841AC7412F b1207
	static void _0x8AFCCC0F18D70018(Any p0, Any p1) { invoke<Void>(0x0251DF10, p0, p1); } // 0x8AFCCC0F18D70018 b1207
	static void _0xE1103300F3456DE7(Any p0, Any p1, Any p2) { invoke<Void>(0x0251DF90, p0, p1, p2); } // 0xE1103300F3456DE7 b1207
	static void _0xA8A95CECB1906EA2(Any p0, Any p1) { invoke<Void>(0x0251DFF0, p0, p1); } // 0xA8A95CECB1906EA2 b1207
	static void _0xDDFAD4DEAA7FA362(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x0251E0A0, p0, p1, p2, p3, p4); } // 0xDDFAD4DEAA7FA362 b1207
	static void _0x966DE09688A1DE39(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x0251E1E0, p0, p1, p2, p3, p4); } // 0x966DE09688A1DE39 b1207
	static void _0x7E5185B979706210(Any p0, Any p1) { invoke<Void>(0x0251E320, p0, p1); } // 0x7E5185B979706210 b1207
	static void _0x40C3524D4ED83554(Any p0, Any p1) { invoke<Void>(0x0251E380, p0, p1); } // 0x40C3524D4ED83554 b1207
	static void _0x86FAFC18E3D4380C(Any p0, Any p1) { invoke<Void>(0x0251E400, p0, p1); } // 0x86FAFC18E3D4380C b1207
	static void _0x07EA5B053FA60AC7(Any p0, Any p1) { invoke<Void>(0x0251E480, p0, p1); } // 0x07EA5B053FA60AC7 b1207
	static void _0xF9CBD46433E36713(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0x0251E4C0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xF9CBD46433E36713 b1207
	static Vehicle GET_VEHICLE_PED_IS_USING(Ped ped) { return invoke<Vehicle>(0x0251E620, ped); } // 0x6094AD011A2EA87D 0x6DE3AADA b1207
	static Vehicle GET_VEHICLE_PED_IS_ENTERING(Ped ped) { return invoke<Vehicle>(0x0251E730, ped); } // 0xF92691AED837A5FC 0x56E0C163 b1207
	static Vehicle _GET_VEHICLE_DRAFT_HORSE_IS_ATTACHED_TO(Ped horse) { return invoke<Vehicle>(0x0251E7E0, horse); } // 0xE4770DA1B8FF4FD1 b1207
	static Vehicle _GET_LAST_VEHICLE_DRAFT_HORSE_WAS_ATTACHED_TO(Ped horse) { return invoke<Vehicle>(0x0251E8E0, horse); } // 0x5064DB5083C29921 b1207
	static int GET_SEAT_PED_IS_USING(Ped ped) { return invoke<int>(0x0251E9F0, ped); } // 0x4E76CB57222A00E5 b1207
	static Entity _GET_TRANSPORT_PED_IS_SEATED_ON(Ped ped) { return invoke<Entity>(0x0251EB80, ped); } // 0x849BD6C6314793D0 b1207
	static BOOL IS_PED_ENTERING_ANY_TRANSPORT(Ped ped) { return invoke<BOOL>(0x0251ECA0, ped); } // 0x1D46B417F926D34D b1207
	static void SET_PED_GRAVITY(Ped ped, BOOL toggle) { invoke<Void>(0x0251EE50, ped, toggle); } // 0x9FF447B6B6AD960A 0x3CA16652 b1207
	static void _0x96595B36D6A2279B(Any p0, Any p1) { invoke<Void>(0x0251EF80, p0, p1); } // 0x96595B36D6A2279B b1207
	static void _SET_PED_IMMERSION_FLAG(Ped ped, Any p1) { invoke<Void>(0x0251F080, ped, p1); } // 0x7FB0088E8769CDDB b1207
	static void _0xA90684ED185CCB4B(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x0251F1A0, p0, p1, p2, p3); } // 0xA90684ED185CCB4B b1207
	static void _FAKE_SET_PED_LOCO_INJURED(Ped ped, BOOL enabled) { invoke<Void>(0x0251F2D0, ped, enabled); } // 0x8B3CB08158E98481 b1207
	static void _FORCE_PED_DEATH(Ped ped, Ped pedKiller, Hash weapon) { invoke<Void>(0x0251F400, ped, pedKiller, weapon); } // 0x1CE875505D45338A b1207
	static void APPLY_DAMAGE_TO_PED(Ped ped, int damageAmount, int p2, int boneId, Ped pedKiller) { invoke<Void>(0x0251F4D0, ped, damageAmount, p2, boneId, pedKiller); } // 0x697157CED63F18D4 0x4DC27FCF b1207
	static void _0xBAD2A311667A50D7(Any p0, Any p1) { invoke<Void>(0x0251F5B0, p0, p1); } // 0xBAD2A311667A50D7 b1207
	static int GET_PED_TYPE(Ped ped) { return invoke<int>(0x0251F680, ped); } // 0xFF059E1E4C01E63C 0xB1460D43 b1207
	static void SET_PED_AS_COP(Ped ped, BOOL toggle) { invoke<Void>(0x0251F770, ped, toggle); } // 0xBB03C38DD3FB7FFD 0x84E7DE9F b1207
	static void _0x405180B14DA5A935(Ped ped, Any p1) { invoke<Void>(0x0251F840, ped, p1); } // 0x405180B14DA5A935 b1207
	static void _SET_PED_INTERACTION_PERSONALITY(Ped ped, Hash personality) { invoke<Void>(0x0251F910, ped, personality); } // 0x24C82EF607105FAA b1207
	static Any _0xD7AD3C7EBAF88C92(Any p0) { return invoke<Any>(0x0251FA10, p0); } // 0xD7AD3C7EBAF88C92 b1207
	static void _0xB8B6430EAD2D2437(Ped ped, Hash p1) { invoke<Void>(0x0251FB00, ped, p1); } // 0xB8B6430EAD2D2437 b1207
	static void _0x329772C47DBB2FBC(Any p0) { invoke<Void>(0x0251FC30, p0); } // 0x329772C47DBB2FBC b1207
	static Any _0x331550B212014B92(Any p0, Any p1) { return invoke<Any>(0x0251FD30, p0, p1); } // 0x331550B212014B92 b1207
	static Any _0x94132D7C8D3575C4(Any p0) { return invoke<Any>(0x0251FDF0, p0); } // 0x94132D7C8D3575C4 b1207
	static void _0x8AF46E5159A5B620(Any p0, Any p1) { invoke<Void>(0x0251FEE0, p0, p1); } // 0x8AF46E5159A5B620 b1207
	static void _0x45FEA6D5539BD474(Any p0, Any p1) { invoke<Void>(0x0251FFF0, p0, p1); } // 0x45FEA6D5539BD474 b1207
	static void _0x20C5459379D75C1C(Any p0, Any p1) { invoke<Void>(0x02520110, p0, p1); } // 0x20C5459379D75C1C b1207
	static void _0xE37ACEE15AC50C7E(Any p0, Any p1) { invoke<Void>(0x025202A0, p0, p1); } // 0xE37ACEE15AC50C7E b1207
	static void _0xA3C53CDE922BC78B(Any p0, Any p1) { invoke<Void>(0x025203C0, p0, p1); } // 0xA3C53CDE922BC78B b1207
	static void _0x41C23A8E6B344867(Any p0, Any p1) { invoke<Void>(0x02520550, p0, p1); } // 0x41C23A8E6B344867 b1207
	static Any _0x9337183FDA2E9035(Any p0, Any p1) { return invoke<Any>(0x025206E0, p0, p1); } // 0x9337183FDA2E9035 b1207
	static BOOL GET_IS_PED_RESPONDING_TO_NEGATIVE_INTERACTION(Ped ped, Player player) { return invoke<BOOL>(0x02520870, ped, player); } // 0xA454D234E45BB6E5 b1207
	static void _0xA7DC9266ED6A4E51(Any p0) { invoke<Void>(0x025209F0, p0); } // 0xA7DC9266ED6A4E51 b1207
	static Any _0x89816B58C3466262(Any p0) { return invoke<Any>(0x02520AD0, p0); } // 0x89816B58C3466262 b1207
	static void _0x97B06669AC569003(Any p0, Any p1) { invoke<Void>(0x02520BB0, p0, p1); } // 0x97B06669AC569003 b1207
	static void _0x85F500F4E24CA43E(Any p0, Any p1) { invoke<Void>(0x02520D50, p0, p1); } // 0x85F500F4E24CA43E b1207
	static void _0x9B9B9FA0EA283E3D(Any p0, Any p1) { invoke<Void>(0x02520E50, p0, p1); } // 0x9B9B9FA0EA283E3D b1207
	static void _0xEC60D1D225BC50AA(Any p0, Any p1) { invoke<Void>(0x02520F50, p0, p1); } // 0xEC60D1D225BC50AA b1207
	static void _0x12F2D161BF4031FC(Any p0, Any p1) { invoke<Void>(0x02521050, p0, p1); } // 0x12F2D161BF4031FC b1207
	static void _0x0ADA3EC589E1736E() { invoke<Void>(0x02521070); } // 0x0ADA3EC589E1736E b1207
	static Any _0xE33F98BD76490ABC(Any p0, Any p1, Any p2) { return invoke<Any>(0x025210A0, p0, p1, p2); } // 0xE33F98BD76490ABC b1207
	static Any _0xD55DB4466D00A258(Any p0) { return invoke<Any>(0x02521250, p0); } // 0xD55DB4466D00A258 b1207
	static void SET_PED_MAX_HEALTH(Ped ped, int value) { invoke<Void>(0x025213E0, ped, value); } // 0xF5F6378C4F3419D3 0x5533F60B b1207
	static int GET_PED_MAX_HEALTH(Ped ped) { return invoke<int>(0x02521510, ped); } // 0x4700A416E8324EF3 0xA45B6C8D b1207
	static void _SET_PED_HEALTH_CONFIG(Ped ped, Hash configHash) { invoke<Void>(0x02521600, ped, configHash); } // 0xF6B82FCE03B43A37 b1207
	static void INIT_PED_DEFAULT_HEALTH(Ped ped) { invoke<Void>(0x025216F0, ped); } // 0x7DD7FB3480D8083E b1207
	static void SET_PED_MAX_TIME_IN_WATER(Ped ped, float value) { invoke<Void>(0x025217D0, ped, value); } // 0x43C851690662113D 0xFE0A106B b1207
	static void SET_PED_MAX_TIME_UNDERWATER(Ped ped, float value) { invoke<Void>(0x02521940, ped, value); } // 0x6BA428C528D9E522 0x082EF240 b1207
	static void _0xAF041C10756C30FB(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02521A50, p0, p1, p2, p3); } // 0xAF041C10756C30FB b1207
	static void _0x5AF24CA9C974E51A(Any p0, Any p1) { invoke<Void>(0x02521B80, p0, p1); } // 0x5AF24CA9C974E51A b1207
	static void SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Ped ped, int state) { invoke<Void>(0x02521CC0, ped, state); } // 0x7A6535691B477C48 0x8A251612 b1207
	static BOOL CAN_KNOCK_PED_OFF_VEHICLE(Ped ped) { return invoke<BOOL>(0x02521DC0, ped); } // 0x51AC07A44D4F5B8A 0xC9D098B3 b1207
	static void KNOCK_PED_OFF_VEHICLE(Ped ped) { invoke<Void>(0x02521E80, ped); } // 0x45BBCBA77C29A841 0xACDD0674 b1207
	static Ped GET_PED_AS_GROUP_MEMBER(int groupID, int memberNumber) { return invoke<Ped>(0x02521F30, groupID, memberNumber); } // 0x51455483CF23ED97 0x9AA3CC8C b1207
	static Ped GET_PED_AS_GROUP_LEADER(int groupID) { return invoke<Ped>(0x02521F60, groupID); } // 0x5CCE68DBD5FE93EC 0x52873C6A b1207
	static void SET_PED_KEEP_TASK(Ped ped, BOOL toggle) { invoke<Void>(0x02521F80, ped, toggle); } // 0x971D38760FBC02EF 0xA7EC79CE b1207
	static BOOL IS_PED_SWIMMING(Ped ped) { return invoke<BOOL>(0x02522080, ped); } // 0x9DE327631295B4C2 0x7AB43DB8 b1207
	static BOOL IS_PED_SWIMMING_UNDER_WATER(Ped ped) { return invoke<BOOL>(0x025221B0, ped); } // 0xC024869A53992F34 0x0E8D524F b1207
	static Any _0xDC88D06719070C39(Any p0) { return invoke<Any>(0x02522260, p0); } // 0xDC88D06719070C39 b1207
	static void SET_CREATE_RANDOM_COPS(BOOL toggle) { invoke<Void>(0x02522350, toggle); } // 0x102E68B2024D536D 0x23441648 b1207
	static BOOL IS_PED_IN_ANY_TRAIN(Ped ped) { return invoke<BOOL>(0x02522370, ped); } // 0x6F972C1AB75A1ED0 0x759EF63A b1207
	static BOOL IS_PED_GETTING_INTO_A_VEHICLE(Ped ped) { return invoke<BOOL>(0x025224A0, ped); } // 0xBB062B2B5722478E 0x90E805AC b1207
	static Any _0x550CB89DD7F4FA3D(Any p0, Any p1) { return invoke<Any>(0x025226A0, p0, p1); } // 0x550CB89DD7F4FA3D b1207
	static void SET_ENABLE_HANDCUFFS(Ped ped, BOOL p1, BOOL p2) { invoke<Void>(0x02522810, ped, p1, p2); } // 0xDF1AF8B5D56542FA 0xAC9BBA23 b1207
	static void SET_ENABLE_BOUND_ANKLES(Ped ped, BOOL toggle) { invoke<Void>(0x02522990, ped, toggle); } // 0xC52E0F855C58FC2E 0x9208D689 b1207
	static Any _0x8822F139408B8D0A(Any p0) { return invoke<Any>(0x02522B00, p0); } // 0x8822F139408B8D0A b1207
	static void _0x8822F124788B8D0A(Any p0, Any p1) { invoke<Void>(0x02522BF0, p0, p1); } // 0x8822F124788B8D0A b1207
	static void RESET_PED_WEAPON_MOVEMENT_CLIPSET(Ped ped) { invoke<Void>(0x02522D00, ped); } // 0x97B0DB5B4AA74E77 0xC60C9ACD b1207
	static void _SET_PED_GETUP_ANIMATION(Ped ped, const char* animName, BOOL p2) { invoke<Void>(0x02522F00, ped, animName, p2); } // 0x3AE3552E7C207CC5 b1207
	static void _0x88A95BB640FC186F(Any p0) { invoke<Void>(0x02522FD0, p0); } // 0x88A95BB640FC186F b1207
	static void RESET_PED_IN_VEHICLE_CONTEXT(Ped ped) { invoke<Void>(0x025230D0, ped); } // 0x22EF8FF8778030EB 0x3C94D88A b1207
	static void _0x878E8104FA27CDAE(Any p0, Any p1) { invoke<Void>(0x02523240, p0, p1); } // 0x878E8104FA27CDAE b1207
	static void SET_PED_GESTURE_GROUP(Any p0, Any p1, Any p2) { invoke<Void>(0x02523320, p0, p1, p2); } // 0xDDF803377F94AAA8 0x170DA109 b1207
	static void _SET_PED_DESIRED_LOCO_FOR_MODEL(Ped ped, const char* locomotionArchetype) { invoke<Void>(0x025233F0, ped, locomotionArchetype); } // 0x923583741DC87BCE b1207
	static void _CLEAR_PED_DESIRED_LOCO_FOR_MODEL(Ped ped) { invoke<Void>(0x02523510, ped); } // 0x4FD80C3DD84B817B b1207
	static void _SET_PED_DESIRED_LOCO_MOTION_TYPE(Ped ped, const char* locoMotionType) { invoke<Void>(0x02523600, ped, locoMotionType); } // 0x89F5E7ADECCCB49C b1207
	static void _CLEAR_PED_DESIRED_LOCO_MOTION_TYPE(Ped ped) { invoke<Void>(0x02523720, ped); } // 0x58F7DB5BD8FA2288 b1207
	static void _0x2371C39D4F91C288(Ped ped) { invoke<Void>(0x02523810, ped); } // 0x2371C39D4F91C288 b1207
	static void _REQUEST_PED_GETUP_ANIMATION(Ped ped, const char* getUpType) { invoke<Void>(0x02523900, ped, getUpType); } // 0xEAA8242C8479C27D b1207
	static void PED_COWER_IN_PLACE(Ped ped, Ped ped2) { invoke<Void>(0x02523A20, ped, ped2); } // 0xF6E1E9F47A7686F8 b1207
	static void PED_COWER_MOVE_TO_POINT(Ped ped, float p1, float p2, float p3, Ped ped2, float p5) { invoke<Void>(0x02523AE0, ped, p1, p2, p3, ped2, p5); } // 0x1E4C940233FC0C6F b1207
	static void _0x16F798A05BB9E3B5(Any p0) { invoke<Void>(0x02523B00, p0); } // 0x16F798A05BB9E3B5 b1207
	static void _PED_EMOTIONAL_PRESET_LOCO_MOTION(Ped ped, const char* presetName, Ped targetPed, int duration, int flag) { invoke<Void>(0x02523B10, ped, presetName, targetPed, duration, flag); } // 0xAAB050DA48B57978 b1207
	static void _PED_CLEAR_LOCO_MOTION(Ped ped) { invoke<Void>(0x02523C60, ped); } // 0x935CF6E42BAF7F4D b1207
	static void _0x32CCAD8A981B53D3(Any p0) { invoke<Void>(0x02523D80, p0); } // 0x32CCAD8A981B53D3 b1207
	static void _SET_PED_DRUNKNESS(Ped ped, BOOL enabled, float drunknessLevel) { invoke<Void>(0x02523F00, ped, enabled, drunknessLevel); } // 0x406CCF555B04FAD3 b1207
	static BOOL _IS_PED_DRUNK(Ped ped) { return invoke<BOOL>(0x02524010, ped); } // 0x50F124E6EF188B22 b1207
	static float _GET_PED_DRUNKNESS(Ped ped) { return invoke<float>(0x02524120, ped); } // 0x6FB76442469ABD68 b1207
	static Vector3 GET_ANIM_INITIAL_OFFSET_POSITION(const char* animDict, const char* animName, float x, float y, float z, float xRot, float yRot, float zRot, float p8, int p9) { return invoke<Vector3>(0x02524220, animDict, animName, x, y, z, xRot, yRot, zRot, p8, p9); } // 0xBE22B26DD764C040 0xC59D4268 b1207
	static Vector3 GET_ANIM_INITIAL_OFFSET_ROTATION(const char* animDict, const char* animName, float x, float y, float z, float xRot, float yRot, float zRot, float p8, int p9) { return invoke<Vector3>(0x02524370, animDict, animName, x, y, z, xRot, yRot, zRot, p8, p9); } // 0x4B805E6046EE9E47 0x5F7789E6 b1207
	static void SET_PED_RANDOM_COMPONENT_VARIATION(Ped ped, int p1) { invoke<Void>(0x025244C0, ped, p1); } // 0xC8A9481A01E63C28 0x4111BA46 b1207
	static void KNOCK_OFF_PED_PROP(Ped ped, BOOL p1, BOOL p2, BOOL p3, BOOL p4) { invoke<Void>(0x025245D0, ped, p1, p2, p3, p4); } // 0x6FD7816A36615F48 0x08D8B180 b1207
	static void SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped ped, BOOL toggle) { invoke<Void>(0x025246C0, ped, toggle); } // 0x9F8AA94D6D97DBF4 0xDFE34E4A b1207
	static Any _0x268B3AEBF032A88D(Any p0) { return invoke<Any>(0x025246E0, p0); } // 0x268B3AEBF032A88D b1207
	static void _0xC17A94CC8FC3C61A(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x02524840, p0, p1, p2, p3, p4); } // 0xC17A94CC8FC3C61A b1207
	static void _SET_PED_SCALE(Ped ped, float scale) { invoke<Void>(0x025249D0, ped, scale); } // 0x25ACFC650B65C538 b1207
	static float _0x134775B093AD5C38(Ped ped) { return invoke<float>(0x02524BC0, ped); } // 0x134775B093AD5C38 b1207
	static float _GET_PED_HEIGHT(Ped ped) { return invoke<float>(0x02524C90, ped); } // 0x1D491CCF7211FB74 b1207
	static int _GET_PED_SIZE_FROM_MODEL(Hash modelHash) { return invoke<int>(0x02524DB0, modelHash); } // 0xA65AA1ACE81E5A77 b1311
	static void REGISTER_TARGET(Ped ped, Ped targetPed, BOOL p2) { invoke<Void>(0x02524E90, ped, targetPed, p2); } // 0x2F25D9AEFA34FBA2 0x50A95442 b1207
	static void _0xD8736EFDA38EDC5C(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x02524EB0, p0, p1, p2, p3, p4); } // 0xD8736EFDA38EDC5C b1207
	static void REGISTER_HATED_TARGETS_AROUND_PED(Ped ped, float radius) { invoke<Void>(0x02524ED0, ped, radius); } // 0x9222F300BF8354FE 0x7F87559E b1207
	static BOOL _IS_TARGET(Ped ped, Ped targetPed) { return invoke<BOOL>(0x02524FE0, ped, targetPed); } // 0x6E5CBCB3941D7D08 b1207
	static void _REMOVE_TARGET(Ped ped, Ped targetPed) { invoke<Void>(0x02525010, ped, targetPed); } // 0x4707E9C23D8CA3FE b1207
	static BOOL GET_CLOSEST_PED(float x, float y, float z, float radius, BOOL p4, BOOL p5, Ped* outPed, BOOL p7, BOOL p8, BOOL p9, int pedType) { return invoke<BOOL>(0x02525020, x, y, z, radius, p4, p5, outPed, p7, p8, p9, pedType); } // 0xC33AB876A77F8164 0x8F6C1F55 b1207
	static BOOL CAN_PED_RAGDOLL(Ped ped) { return invoke<BOOL>(0x02525350, ped); } // 0x128F79EDCECE4FD5 0xC0EFB7A3 b1207
	static BOOL SET_PED_TO_RAGDOLL(Ped ped, int time1, int time2, int ragdollType, BOOL p4, BOOL p5, BOOL p6) { return invoke<BOOL>(0x02525410, ped, time1, time2, ragdollType, p4, p5, p6); } // 0xAE99FB955581844A 0x83CB5052 b1207
	static BOOL SET_PED_TO_RAGDOLL_WITH_FALL(Ped ped, int time, int p2, int ragdollType, float x, float y, float z, float p7, float p8, float p9, float p10, float p11, float p12, float p13) { return invoke<BOOL>(0x02525500, ped, time, p2, ragdollType, x, y, z, p7, p8, p9, p10, p11, p12, p13); } // 0xD76632D99E4966C8 0xFA12E286 b1207
	static void SET_PED_RAGDOLL_ON_COLLISION(Any p0, Any p1, Any p2) { invoke<Void>(0x025255F0, p0, p1, p2); } // 0xF0A4F1BBF4FA7497 0x2654A0F4 b1207
	static void _SET_PED_TO_DISABLE_RAGDOLL(Ped ped, BOOL toggle) { invoke<Void>(0x025256C0, ped, toggle); } // 0x221F4D9912B7FE86 b1207
	static BOOL IS_PED_RAGDOLL(Ped ped) { return invoke<BOOL>(0x02525790, ped); } // 0x47E4E977581C5B55 0xC833BBE1 b1207
	static BOOL IS_PED_RUNNING_RAGDOLL_TASK(Ped ped) { return invoke<BOOL>(0x02525880, ped); } // 0xE3B6097CC25AA69E 0x44A153F2 b1207
	static void SET_PED_RAGDOLL_FORCE_FALL(Ped ped) { invoke<Void>(0x02525930, ped); } // 0x01F6594B923B9251 0x20A5BDE0 b1207
	static void _0x8CB2553C559102C1(Any p0, Any p1, Any p2) { invoke<Void>(0x025259E0, p0, p1, p2); } // 0x8CB2553C559102C1 b1207
	static void _0xFD3C31A2E45671E7(Any p0, Any p1) { invoke<Void>(0x02525B20, p0, p1); } // 0xFD3C31A2E45671E7 b1207
	static void RESET_PED_RAGDOLL_TIMER(Ped ped) { invoke<Void>(0x02525BF0, ped); } // 0x9FA4664CF62E47E8 0xF2865370 b1207
	static void SET_PED_CAN_RAGDOLL(Ped ped, BOOL toggle) { invoke<Void>(0x02525CE0, ped, toggle); } // 0xB128377056A54E2A 0xCF1384C4 b1207
	static Any _0x3AEC4A410ECAF30D(Any p0) { return invoke<Any>(0x02525DB0, p0); } // 0x3AEC4A410ECAF30D b1207
	static BOOL IS_PED_RUNNING_MOBILE_PHONE_TASK(Ped ped) { return invoke<BOOL>(0x02525EA0, ped); } // 0x2AFE52F782F25775 0xFB2AFED1 b1207
	static void SET_RAGDOLL_BLOCKING_FLAGS(Ped ped, int flags) { invoke<Void>(0x02525F40, ped, flags); } // 0x26695EC767728D84 0x9C8F830D b1207
	static void CLEAR_RAGDOLL_BLOCKING_FLAGS(Ped ped, int flags) { invoke<Void>(0x02525F50, ped, flags); } // 0xD86D101FCFD00A4B 0x77CBA290 b1207
	static void _0x9F933E0985E12C51(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02526130, p0, p1, p2, p3); } // 0x9F933E0985E12C51 b1207
	static void _0x88B2026A3B0BE33D(Any p0, Any p1) { invoke<Void>(0x02526260, p0, p1); } // 0x88B2026A3B0BE33D b1207
	static void SET_PED_DEFENSIVE_AREA_VOLUME(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x02526360, p0, p1, p2, p3, p4); } // 0xFC3DB99C8144CD81 b1207
	static void SET_PED_SPHERE_DEFENSIVE_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x02526450, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x9D3151A373974804 0xBD96D8E8 b1207
	static void _0x1854217C640B39EC(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x02526540, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x1854217C640B39EC b1207
	static void _0xEB2BFE5D009F0331(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { invoke<Void>(0x025266B0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0xEB2BFE5D009F0331 b1232
	static void SET_PED_DEFENSIVE_AREA_DIRECTION(Ped ped, float p1, float p2, float p3, BOOL p4) { invoke<Void>(0x02526A40, ped, p1, p2, p3, p4); } // 0x413C6C763A4AFFAD 0xB66B0C9A b1207
	static void REMOVE_PED_DEFENSIVE_AREA(Ped ped, BOOL toggle) { invoke<Void>(0x02526CB0, ped, toggle); } // 0x74D4E028107450A9 0x34AAAFA5 b1207
	static Vector3 GET_PED_DEFENSIVE_AREA_POSITION(Ped ped, BOOL p1) { return invoke<Vector3>(0x02526EA0, ped, p1); } // 0x3C06B8786DD94CD1 0xCB65198D b1207
	static BOOL IS_PED_DEFENSIVE_AREA_ACTIVE(Ped ped, BOOL p1) { return invoke<BOOL>(0x02526FF0, ped, p1); } // 0xBA63D9FE45412247 0x6D88BCD3 b1207
	static Any _0xEF2E6F870783369B(Any p0, Any p1) { return invoke<Any>(0x02527110, p0, p1); } // 0xEF2E6F870783369B b1207
	static void _0x4EC4EA2F72B36358(Any p0, Any p1) { invoke<Void>(0x02527240, p0, p1); } // 0x4EC4EA2F72B36358 b1207
	static void _0xCF0B19806473D324(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02527340, p0, p1, p2, p3); } // 0xCF0B19806473D324 b1207
	static void _0xB4B7C92FCE7347B7(Any p0) { invoke<Void>(0x02527450, p0); } // 0xB4B7C92FCE7347B7 b1207
	static void REVIVE_INJURED_PED(Ped ped) { invoke<Void>(0x02527540, ped); } // 0x8D8ACD8388CD99CE 0x14D3E6E3 b1207
	static void RESURRECT_PED(Ped ped) { invoke<Void>(0x025275F0, ped); } // 0x71BC8E838B9C6035 0xA4B82097 b1207
	static void SET_PED_NAME_DEBUG(Ped ped, const char* name) { invoke<Void>(0x02527770, ped, name); } // 0x98EFA132A4117BE1 0x20D6273E b1207
	static void _0xF9ACF4A08098EA25(Ped ped, BOOL p1) { invoke<Void>(0x02527780, ped, p1); } // 0xF9ACF4A08098EA25 0x141CC936 b1207
	static Any _0x7020839C7302D8AC(Any p0) { return invoke<Any>(0x02527880, p0); } // 0x7020839C7302D8AC b1207
	static void _0xE1AADD0055D76603(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoke<Void>(0x02527980, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0xE1AADD0055D76603 b1207
	static void _0x5A1A929C8B729B4A(Any p0) { invoke<Void>(0x02527A80, p0); } // 0x5A1A929C8B729B4A b1207
	static void _0x97A38B65EBDA3D50(Any p0, Any p1) { invoke<Void>(0x02527B80, p0, p1); } // 0x97A38B65EBDA3D50 b1207
	static Any _0x06A10B4D7F50B0C3(Any p0) { return invoke<Any>(0x02527C70, p0); } // 0x06A10B4D7F50B0C3 b1207
	static Any _0x88A5564B19C15391(Any p0) { return invoke<Any>(0x02527D60, p0); } // 0x88A5564B19C15391 b1207
	static Any _0x354CA4DDDEEC397A(Any p0) { return invoke<Any>(0x02527E20, p0); } // 0x354CA4DDDEEC397A b1207
	static void _0xFEA6126C34DF2532(Ped ped, BOOL p1) { invoke<Void>(0x02527ED0, ped, p1); } // 0xFEA6126C34DF2532 b1207
	static void _0xA967D6A8ED2D713B(Any p0, Any p1) { invoke<Void>(0x02528030, p0, p1); } // 0xA967D6A8ED2D713B b1207
	static void APPLY_PED_BLOOD_SPECIFIC(Ped ped, Any p1, float p2, float p3, float p4, float p5, Any p6, float p7, Any* p8) { invoke<Void>(0x02528130, ped, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xEF0D582CBF2D9B0F 0xFC13CE80 b1207
	static void _0x58D32261AE0F0843(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0x025281C0, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x58D32261AE0F0843 b1207
	static void _0x735662994E60A710(Any p0, Any p1) { invoke<Void>(0x02528320, p0, p1); } // 0x735662994E60A710 b1207
	static void _0x91BAB9E064F036CD(Any p0, Any p1) { invoke<Void>(0x025283F0, p0, p1); } // 0x91BAB9E064F036CD b1207
	static void _0x897934E868EDDD6C(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x02528590, p0, p1, p2, p3, p4); } // 0x897934E868EDDD6C b1207
	static void _SET_PED_WOUND_EFFECT(Ped ped, int p1, int boneId, float moveWoundLeftRight, float bloodFountainPressure, float yaw, float bloodFountainDirection, float bloodFountainPulse, float p8, float p9) { invoke<Void>(0x02528820, ped, p1, boneId, moveWoundLeftRight, bloodFountainPressure, yaw, bloodFountainDirection, bloodFountainPulse, p8, p9); } // 0xFFD54D9FE71B966A b1207
	static void _REMOVE_PED_WOUND_EFFECT(Ped ped, float p1) { invoke<Void>(0x02528BA0, ped, p1); } // 0x66B1CB778D911F49 b1207
	static void APPLY_PED_DAMAGE_PACK(Ped ped, const char* damagePack, float damage, float mult) { invoke<Void>(0x02528EB0, ped, damagePack, damage, mult); } // 0x46DF918788CB093F 0x208D0CB8 b1207
	static void CLEAR_PED_BLOOD_DAMAGE(Ped ped) { invoke<Void>(0x02528FD0, ped); } // 0x8FE22675A5A45817 0xF7ADC960 b1207
	static void CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Ped ped, int p1) { invoke<Void>(0x02529060, ped, p1); } // 0x56E3B78C5408D9F4 0xF210BE69 b1207
	static void CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Ped ped, int p1, const char* p2) { invoke<Void>(0x025291A0, ped, p1, p2); } // 0x523C79AEEFCC4A2A 0x70AA5B7D b1207
	static void _CLEAR_PED_BLOOD_DAMAGE_FACIAL(Ped ped, int p1) { invoke<Void>(0x02529370, ped, p1); } // 0x7F5D88333EE8A86F b1207
	static void _0x34C11114887150FD(Any p0, Any p1) { invoke<Void>(0x025294B0, p0, p1); } // 0x34C11114887150FD b1207
	static void _0xD8544F6260F5F01E(Ped ped, int p1) { invoke<Void>(0x025295F0, ped, p1); } // 0xD8544F6260F5F01E b1232
	static void _0xEB8886E1065654CD(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02529730, p0, p1, p2, p3); } // 0xEB8886E1065654CD b1207
	static void FADE_AND_DESTROY_PED(Ped* ped) { invoke<Void>(0x02529900, ped); } // 0x7043D0681285BA2D b1207
	static BOOL _IS_PED_QUEUED_FOR_DELETION(Ped ped) { return invoke<BOOL>(0x02529910, ped); } // 0x8D9BFCE3352DE47F b1207
	static void CLEAR_PED_WETNESS(Ped ped) { invoke<Void>(0x02529A10, ped); } // 0x9C720776DAA43E7E 0x629F15BD b1207
	static void SET_PED_WETNESS_HEIGHT(Ped ped, float height) { invoke<Void>(0x02529B90, ped, height); } // 0x44CB6447D2571AA0 0x7B33289A b1207
	static void _0xF9CFF5BB70E8A2CB(Any p0, Any p1) { invoke<Void>(0x02529CA0, p0, p1); } // 0xF9CFF5BB70E8A2CB b1207
	static void SET_PED_WETNESS_ENABLED_THIS_FRAME(Ped ped) { invoke<Void>(0x02529DE0, ped); } // 0xB5485E4907B53019 0xBDE749F7 b1207
	static void _0xA7A806677F8DE138(Any p0) { invoke<Void>(0x02529EE0, p0); } // 0xA7A806677F8DE138 b1207
	static void _0xA064BBABB064446F(Any p0) { invoke<Void>(0x0252A020, p0); } // 0xA064BBABB064446F b1207
	static void CLEAR_PED_ENV_DIRT(Ped ped) { invoke<Void>(0x0252A200, ped); } // 0x6585D955A68452A5 0xA993915F b1207
	static void SET_PED_SWEAT(Ped ped, float sweat) { invoke<Void>(0x0252A350, ped, sweat); } // 0x27B0405F59637D1F 0x76A1DB9F b1207
	static void CLEAR_PED_DECORATIONS(Ped ped) { invoke<Void>(0x0252A470, ped); } // 0x0E5173C163976E38 0xD4496BF3 b1207
	static BOOL WAS_PED_SKELETON_UPDATED(Ped ped) { return invoke<BOOL>(0x0252A500, ped); } // 0x11B499C1E0FF8559 0xF7E2FBAD b1207
	static Vector3 GET_PED_BONE_COORDS(Ped ped, int boneId, float offsetX, float offsetY, float offsetZ) { return invoke<Vector3>(0x0252A5A0, ped, boneId, offsetX, offsetY, offsetZ); } // 0x17C07FC640E86B4E 0x4579CAB1 b1207
	static int ADD_SCENARIO_BLOCKING_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, int blockingFlags) { return invoke<int>(0x0252A730, x1, y1, z1, x2, y2, z2, p6, blockingFlags); } // 0x1B5C85C612E5256E 0xA38C0234 b1207
	static void REMOVE_SCENARIO_BLOCKING_AREAS() { invoke<Void>(0x0252A8B0); } // 0xD37401D78A929A49 0x4DDF845F b1207
	static void REMOVE_SCENARIO_BLOCKING_AREA(Any p0, BOOL p1) { invoke<Void>(0x0252AAB0, p0, p1); } // 0x31D16B74C6E29D66 0x4483EF06 b1207
	static Any _0x4C39C95AE5DB1329(Volume volume, Any p1, Any p2) { return invoke<Any>(0x0252AAD0, volume, p1, p2); } // 0x4C39C95AE5DB1329 b1207
	static Any _0x6F46F8ACB44C4FC1(Any p0) { return invoke<Any>(0x0252AB00, p0); } // 0x6F46F8ACB44C4FC1 b1207
	static Any _0x91A5F9CBEBB9D936(Any p0) { return invoke<Any>(0x0252AC60, p0); } // 0x91A5F9CBEBB9D936 b1207
	static BOOL IS_PED_USING_SCENARIO_HASH(Ped ped, Hash scenarioHash) { return invoke<BOOL>(0x0252ADA0, ped, scenarioHash); } // 0x34D6AC1157C8226C b1207
	static BOOL IS_PED_USING_ANY_SCENARIO(Ped ped) { return invoke<BOOL>(0x0252AE60, ped); } // 0x57AB4A3080F85143 0x195EF5B7 b1207
	static BOOL IS_PED_USING_THIS_SCENARIO(Ped ped, int scenario) { return invoke<BOOL>(0x0252AF80, ped, scenario); } // 0x9C54041BB66BCF9E b1207
	static Any _0xAB643407D0B26F07(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x0252B130, p0, p1, p2, p3, p4); } // 0xAB643407D0B26F07 b1207
	static Any _0x1148F706CF4EBDDA(Any p0, Any p1, Any p2) { return invoke<Any>(0x0252B210, p0, p1, p2); } // 0x1148F706CF4EBDDA b1207
	static BOOL SET_PED_PANIC_EXIT_SCENARIO(Ped ped, float x, float y, float z) { return invoke<BOOL>(0x0252B2D0, ped, x, y, z); } // 0xFE07FF6495D52E2A 0x59DE73AC b1207
	static void _SET_PED_SCARED_WHEN_USING_SCENARIO(Ped ped, BOOL toggle) { invoke<Void>(0x0252B450, ped, toggle); } // 0x9A77DFD295E29B09 0xC08FE5F6 b1207
	static void _0xD8CEEED54C672B5D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x0252B6A0, p0, p1, p2, p3, p4, p5, p6); } // 0xD8CEEED54C672B5D b1207
	static BOOL _SET_PED_SHOULD_PLAY_DIRECTED_SCENARIO_EXIT(Ped ped, float x, float y, float z) { return invoke<BOOL>(0x0252B7F0, ped, x, y, z); } // 0xEC6935EBE0847B90 0x761F8F48 b1207
	static void SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(Ped ped) { invoke<Void>(0x0252B990, ped); } // 0xA3A9299C4F2ADB98 0x033F43FA b1207
	static void SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Ped ped) { invoke<Void>(0x0252BA90, ped); } // 0xF1C03A5352243A30 0x4C684C81 b1207
	static BOOL SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(Ped ped, float x, float y, float z, int lookIntensity) { return invoke<BOOL>(0x0252BBA0, ped, x, y, z, lookIntensity); } // 0xEEED8FAFEC331A70 0x7B4C3E6F b1207
	static BOOL SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(Ped ped, float x, float y, float z, int lookIntensity) { return invoke<BOOL>(0x0252BD80, ped, x, y, z, lookIntensity); } // 0x802092B07E3B1EEA b1207
	static BOOL SET_PED_SHOULD_PLAY_EMOTIONAL_SCENARIO_EXIT(Ped ped, float x, float y, float z, int lookIntensity, BOOL p5) { return invoke<BOOL>(0x0252BF60, ped, x, y, z, lookIntensity, p5); } // 0x62FDAD5E01D2DD47 b1207
	static BOOL SET_PED_SHOULD_PLAY_QUICK_SCENARIO_EXIT(Ped ped, float x, float y, float z, int lookIntensity, BOOL p5) { return invoke<BOOL>(0x0252C160, ped, x, y, z, lookIntensity, p5); } // 0x463803429297117C b1207
	static Any _0xF9331B3A314EB49D(Any p0) { return invoke<Any>(0x0252C350, p0); } // 0xF9331B3A314EB49D b1207
	static void _0xE735A7DA22E88359(Any p0) { invoke<Void>(0x0252C4D0, p0); } // 0xE735A7DA22E88359 b1207
	static Any _0x82CB0F3F0C7785E5(Any p0) { return invoke<Any>(0x0252C620, p0); } // 0x82CB0F3F0C7785E5 b1207
	static void _0xCA95C156C14B2054(Any p0, Any p1) { invoke<Void>(0x0252C790, p0, p1); } // 0xCA95C156C14B2054 b1207
	static void SET_FACIAL_IDLE_ANIM_OVERRIDE(Ped ped, const char* animName, const char* animDict) { invoke<Void>(0x0252C8A0, ped, animName, animDict); } // 0xFFC24B988B938B38 0x9BA19C13 b1207
	static void CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Ped ped) { invoke<Void>(0x0252C8C0, ped); } // 0x726256CC1EEB182F 0x5244F4E2 b1207
	static void _REQUEST_PED_FACIAL_MOOD_THIS_FRAME(Ped ped, Hash mood, int p2) { invoke<Void>(0x0252C8D0, ped, mood, p2); } // 0x8B3B71C80A29A4BB b1207
	static void _0xD2F0FE8805D91647(Any p0, Any p1) { invoke<Void>(0x0252C9F0, p0, p1); } // 0xD2F0FE8805D91647 b1207
	static void SET_PED_CAN_PLAY_GESTURE_ANIMS(Any p0, Any p1, Any p2) { invoke<Void>(0x0252CB00, p0, p1, p2); } // 0xBAF20C5432058024 0xE131E3B3 b1207
	static void _0x7EDB3C766B0D073F(Any p0) { invoke<Void>(0x0252CB20, p0); } // 0x7EDB3C766B0D073F b1232
	static void SET_PED_CAN_PLAY_AMBIENT_ANIMS(Ped ped, BOOL toggle) { invoke<Void>(0x0252CBF0, ped, toggle); } // 0x6373D1349925A70E 0xF8053081 b1207
	static void SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Ped ped, BOOL toggle) { invoke<Void>(0x0252CD00, ped, toggle); } // 0x0EB0585D15254740 0x5720A5DD b1207
	static void _0x4F63433CE3C08230(Any p0, Any p1) { invoke<Void>(0x0252CE00, p0, p1); } // 0x4F63433CE3C08230 b1311
	static void SET_PED_CAN_ARM_IK(Ped ped, BOOL toggle) { invoke<Void>(0x0252CF00, ped, toggle); } // 0x6C3B4D6D13B4C841 0x343B4DE0 b1207
	static void _0xEE9DF765990E8D1D(Ped ped, BOOL toggle) { invoke<Void>(0x0252D090, ped, toggle); } // 0xEE9DF765990E8D1D b1207
	static void SET_PED_CAN_HEAD_IK(Ped ped, BOOL toggle) { invoke<Void>(0x0252D220, ped, toggle); } // 0xC11C18092C5530DC 0xD3B04476 b1207
	static void SET_PED_CAN_LEG_IK(Ped ped, BOOL toggle) { invoke<Void>(0x0252D3B0, ped, toggle); } // 0x73518ECE2485412B 0x9955BC6F b1207
	static void SET_PED_CAN_TORSO_IK(Ped ped, BOOL toggle) { invoke<Void>(0x0252D550, ped, toggle); } // 0xF2B7106D37947CE0 0x8E5D4EAB b1207
	static void SET_PED_CAN_TORSO_REACT_IK(Ped ped, BOOL toggle) { invoke<Void>(0x0252D6E0, ped, toggle); } // 0xF5846EDB26A98A24 0x7B0040A8 b1207
	static void _0x6647C5F6F5792496(Ped ped, BOOL p1) { invoke<Void>(0x0252D880, ped, p1); } // 0x6647C5F6F5792496 0x0FDA62DE b1207
	static void SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Ped ped, BOOL toggle) { invoke<Void>(0x0252DA10, ped, toggle); } // 0xEC4686EC06434678 0x584C5178 b1207
	static BOOL IS_PED_HEADTRACKING_PED(Ped ped1, Ped ped2) { return invoke<BOOL>(0x0252DB20, ped1, ped2); } // 0x5CD3CB88A7F8850D 0x2A5DF721 b1207
	static BOOL IS_PED_HEADTRACKING_ENTITY(Ped ped, Entity entity) { return invoke<BOOL>(0x0252DB50, ped, entity); } // 0x813A0A7C9D2E831F 0x233C9ACF b1207
	static void _DISABLE_AMBIENT_LOOK_AT_REQUESTS(Any p0, Any p1) { invoke<Void>(0x0252DD60, p0, p1); } // 0x80038740C96AD17F b1207
	static void _DISABLE_ALL_LOOK_AT_REQUESTS(Ped ped, int p1) { invoke<Void>(0x0252DE70, ped, p1); } // 0xE1965A380342BE1F b1355
	static void _0xCD9E5F94A2F38683(Any p0, Any p1) { invoke<Void>(0x0252DF80, p0, p1); } // 0xCD9E5F94A2F38683 b1207
	static void SET_PED_CLOTH_PACKAGE_INDEX(Any p0, Any p1) { invoke<Void>(0x0252E190, p0, p1); } // 0x78C4E9961DB3EB5B 0xFC942D7C b1207
	static void _0x1D4636C90BBEFACB(Any p0, Any p1) { invoke<Void>(0x0252E2F0, p0, p1); } // 0x1D4636C90BBEFACB b1207
	static void _0xEF371232BC6053E1(Ped ped) { invoke<Void>(0x0252E450, ped); } // 0xEF371232BC6053E1 b1207
	static void _0x86F0B6730C32AC14(Ped ped, Any p1) { invoke<Void>(0x0252E4F0, ped, p1); } // 0x86F0B6730C32AC14 b1207
	static void _0x8101BA1C0B462412(Ped ped, int ropeId) { invoke<Void>(0x0252E5E0, ped, ropeId); } // 0x8101BA1C0B462412 b1207
	static void SET_PED_CONFIG_FLAG(Ped ped, int flagId, BOOL value) { invoke<Void>(0x0252E5F0, ped, flagId, value); } // 0x1913FE4CBF41C463 0x9CFBE10D b1207
	static void SET_PED_RESET_FLAG(Ped ped, int flagId, BOOL doReset) { invoke<Void>(0x0252E610, ped, flagId, doReset); } // 0xC1E8A365BF3B29F2 0xCFF6FF66 b1207
	static BOOL GET_PED_CONFIG_FLAG(Ped ped, int flagId, BOOL p2) { return invoke<BOOL>(0x0252E630, ped, flagId, p2); } // 0x7EE53118C892B513 0xABE98267 b1207
	static BOOL GET_PED_RESET_FLAG(Ped ped, int flagId) { return invoke<BOOL>(0x0252E660, ped, flagId); } // 0xAF9E59B1B1FBF2A0 0x2FC10D11 b1207
	static void _0xC6981AFF6D2A71C2(Any p0) { invoke<Void>(0x0252E770, p0); } // 0xC6981AFF6D2A71C2 b1207
	static void _0xE0FE107AB174D64A(Any p0, Any p1) { invoke<Void>(0x0252E850, p0, p1); } // 0xE0FE107AB174D64A b1207
	static void SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Ped ped, int index) { invoke<Void>(0x0252E9D0, ped, index); } // 0x0BDDB8D9EC6BCF3C 0x2AB3670B b1207
	static BOOL IS_PED_EVASIVE_DIVING(Ped ped, Entity* evadingEntity) { return invoke<BOOL>(0x0252EB40, ped, evadingEntity); } // 0x414641C26E105898 0xD82829DC b1207
	static Any _SHOOT_TRIGGER_AT_COORDS(Ped ped, float x, float y, float z, int p4, float p5, int p6, float p7) { return invoke<Any>(0x0252ECA0, ped, x, y, z, p4, p5, p6, p7); } // 0x4C57F27D1554E6B0 b1207
	static BOOL _IS_THIS_MODEL_A_HORSE(Hash model) { return invoke<BOOL>(0x0252ED80, model); } // 0x772A1969F649E902 b1207
	static void SET_PED_MODEL_IS_SUPPRESSED(Ped ped, BOOL toggle) { invoke<Void>(0x0252EE70, ped, toggle); } // 0xE163A4BCE4DE6F11 0x7820CA43 b1207
	static BOOL _IS_PED_MODEL_SUPPRESSED(Hash model) { return invoke<BOOL>(0x0252EFE0, model); } // 0xAA9F048DCF69B6DC b1207
	static void _0x7ABBD9E449E0DB00(Any p0, Any p1) { invoke<Void>(0x0252F0F0, p0, p1); } // 0x7ABBD9E449E0DB00 b1207
	static void _0xADD31A5C7A5FAA73(Any p0, Any p1) { invoke<Void>(0x0252F4D0, p0, p1); } // 0xADD31A5C7A5FAA73 b1207
	static void SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Ped ped, BOOL toggle) { invoke<Void>(0x0252F5E0, ped, toggle); } // 0xDF993EE5E90ABA25 0xE9BD733A b1207
	static void _0xE6CB36F43A95D75F(Any p0) { invoke<Void>(0x0252F6E0, p0); } // 0xE6CB36F43A95D75F b1207
	static void SET_PED_LEG_IK_MODE(Ped ped, int mode) { invoke<Void>(0x0252F6F0, ped, mode); } // 0xC396F5B86FF9FEBD 0xFDDB042E b1207
	static Any _0x078076AB50FB117F(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x0252F890, p0, p1, p2, p3, p4, p5); } // 0x078076AB50FB117F b1207
	static void _0xFD6943B6DF77E449(Ped ped, BOOL toggle) { invoke<Void>(0x0252F960, ped, toggle); } // 0xFD6943B6DF77E449 b1207
	static void SET_PED_COMBAT_MOVEMENT(Ped ped, int combatMovement) { invoke<Void>(0x0252FAA0, ped, combatMovement); } // 0x4D9CA1009AFBD057 0x12E62F9E b1207
	static int GET_PED_COMBAT_MOVEMENT(Ped ped) { return invoke<int>(0x0252FB90, ped); } // 0xDEA92412FCAEB3F5 0xF3E7730E b1207
	static void _0x815C0074A1BC0D93(Any p0, Any p1) { invoke<Void>(0x0252FCB0, p0, p1); } // 0x815C0074A1BC0D93 b1207
	static Any _0xFFDE295662405B25(Any p0) { return invoke<Any>(0x0252FDA0, p0); } // 0xFFDE295662405B25 b1207
	static void SET_PED_COMBAT_ABILITY(Ped ped, int abilityLevel) { invoke<Void>(0x0252FE80, ped, abilityLevel); } // 0xC7622C0D36B2FDA8 0x6C23D329 b1207
	static void SET_PED_COMBAT_RANGE(Ped ped, int range) { invoke<Void>(0x0252FF70, ped, range); } // 0x3C606747B23E497B 0x8818A959 b1207
	static void SET_PED_COMBAT_ATTRIBUTES(Ped ped, int attributeIndex, BOOL enabled) { invoke<Void>(0x02530060, ped, attributeIndex, enabled); } // 0x9F7794730795E019 0x81D64248 b1207
	static Any _0xCC2B20596E29E4E3(Any p0, Any p1) { return invoke<Any>(0x025301D0, p0, p1); } // 0xCC2B20596E29E4E3 b1207
	static void _0xBD75500141E4725C(Ped ped, Hash p1) { invoke<Void>(0x02530330, ped, p1); } // 0xBD75500141E4725C b1207
	static void SET_PED_TARGET_LOSS_RESPONSE(Ped ped, int responseType) { invoke<Void>(0x025303F0, ped, responseType); } // 0x0703B9079823DA4A 0xCFA613FF b1207
	static void _0x0A4618FFD517E24D(Any p0, Any p1) { invoke<Void>(0x025304E0, p0, p1); } // 0x0A4618FFD517E24D b1207
	static void _0x712B2C2B2471B493(Any p0, Any p1) { invoke<Void>(0x025305D0, p0, p1); } // 0x712B2C2B2471B493 b1207
	static void _0x00B380FF2DF6AB7A(Any p0, Any p1) { invoke<Void>(0x025306C0, p0, p1); } // 0x00B380FF2DF6AB7A b1207
	static void _SET_PED_COMBAT_STYLE(Ped ped, Hash combatStyleHash, int p2, float duration) { invoke<Void>(0x025307B0, ped, combatStyleHash, p2, duration); } // 0x8ACC0506743A8A5C b1207
	static void _CLEAR_PED_COMBAT_STYLE(Ped ped, int p1) { invoke<Void>(0x02530950, ped, p1); } // 0x78815FC52832B690 b1207
	static void _SET_PED_COMBAT_STYLE_MOD(Ped ped, Hash combatStyleModHash, float duration) { invoke<Void>(0x02530AF0, ped, combatStyleModHash, duration); } // 0x8B1E8E35A6E814EA b1207
	static void _0x1FA132CBCD7CB239(Any p0, Any p1) { invoke<Void>(0x02530C70, p0, p1); } // 0x1FA132CBCD7CB239 b1207
	static Any _0x5BF0B9D9A8E227A0(Any p0) { return invoke<Any>(0x02530D60, p0); } // 0x5BF0B9D9A8E227A0 b1207
	static void _0x642720D8D69328B6(Any p0, Any p1) { invoke<Void>(0x02530E80, p0, p1); } // 0x642720D8D69328B6 b1207
	static BOOL IS_PED_PERFORMING_MELEE_ACTION(Ped ped, int p1, Any p2) { return invoke<BOOL>(0x02530FE0, ped, p1, p2); } // 0xDCCA191DF9980FD7 0x139C0875 b1207
	static Any _0x99DF2639DA76C1DC(Any p0, Any p1, Any p2) { return invoke<Any>(0x025310A0, p0, p1, p2); } // 0x99DF2639DA76C1DC b1232
	static float _GET_PED_MELEE_ACTION_PHASE(Ped ped) { return invoke<float>(0x025310D0, ped); } // 0x6127F25ED21C533C b1207
	static BOOL IS_PED_BEING_STEALTH_KILLED(Ped ped) { return invoke<BOOL>(0x025311F0, ped); } // 0x863B23EFDE9C5DF2 0xD044C8AF b1207
	static Ped GET_MELEE_TARGET_FOR_PED(Ped ped) { return invoke<Ped>(0x025312A0, ped); } // 0x18A3E9EE1297FD39 0xAFEC26A4 b1207
	static void _0xDEDBED3020DA49DC(Any p0) { invoke<Void>(0x02531350, p0); } // 0xDEDBED3020DA49DC b1207
	static void _0xA405BF9F01960C16(Any p0) { invoke<Void>(0x02531400, p0); } // 0xA405BF9F01960C16 b1207
	static Hash _GET_PED_BRAWLING_STYLE(Ped ped) { return invoke<Hash>(0x025314B0, ped); } // 0xEC6B59BE445FEC51 b1207
	static void _SET_PED_BRAWLING_STYLE(Ped ped, Hash brawlingStyle) { invoke<Void>(0x025315A0, ped, brawlingStyle); } // 0x8BA83CC4288CD56D b1207
	static void _0x9D8DFE2DE9CB4DFC(Any p0) { invoke<Void>(0x02531690, p0); } // 0x9D8DFE2DE9CB4DFC b1207
	static Any _0xC48AF420371C7407(Any p0, Any p1) { return invoke<Any>(0x02531790, p0, p1); } // 0xC48AF420371C7407 b1207
	static Any _0x5EFA8A3D8A60D662(Any p0, Any p1) { return invoke<Any>(0x02531860, p0, p1); } // 0x5EFA8A3D8A60D662 b1207
	static Any _0x242EDF85D4E87B65(Any p0) { return invoke<Any>(0x025319D0, p0); } // 0x242EDF85D4E87B65 b1207
	static void _SET_PED_COMBAT_BEHAVIOUR(Ped ped, Hash behaviour) { invoke<Void>(0x02531B20, ped, behaviour); } // 0x9238A3D970BBB0A9 b1207
	static void _0x9A4AC116CC1EEE14(Any p0) { invoke<Void>(0x02531C80, p0); } // 0x9A4AC116CC1EEE14 b1207
	static void _0xE20027B414BFE6C7(Any p0, Any p1) { invoke<Void>(0x02531DE0, p0, p1); } // 0xE20027B414BFE6C7 b1207
	static void _0x6DBF2D78709AD70B(Any p0, Any p1) { invoke<Void>(0x02531FD0, p0, p1); } // 0x6DBF2D78709AD70B b1207
	static void _SET_PED_ACTION_DISABLE_FLAG(Ped ped, int actionDisableFlag) { invoke<Void>(0x02532240, ped, actionDisableFlag); } // 0xB8DE69D9473B7593 b1207
	static void _CLEAR_PED_ACTION_DISABLE_FLAG(Ped ped, int actionDisableFlag) { invoke<Void>(0x02532330, ped, actionDisableFlag); } // 0x949B2F9ED2917F5D b1207
	static BOOL _IS_PED_ACTION_DISABLE_FLAG_ENABLED(Ped ped, int actionDisableFlag) { return invoke<BOOL>(0x02532440, ped, actionDisableFlag); } // 0xB346C85D49CC998E b1207
	static void _SET_PED_TARGET_ACTION_DISABLE_FLAG(Ped ped, int actionDisableFlag) { invoke<Void>(0x02532550, ped, actionDisableFlag); } // 0xC163DAC52AC975D3 b1207
	static void _CLEAR_PED_TARGET_ACTION_DISABLE_FLAG(Ped ped, int actionDisableFlag) { invoke<Void>(0x02532660, ped, actionDisableFlag); } // 0xBBF6D1D07C02D00A b1207
	static BOOL _IS_PED_TARGET_ACTION_DISABLE_FLAG_ENABLED(Ped ped, int actionDisableFlag) { return invoke<BOOL>(0x02532770, ped, actionDisableFlag); } // 0x02AA2096FE00F3E1 b1207
	static void _0x57F35552E771BE9D(Any p0, Any p1) { invoke<Void>(0x02532880, p0, p1); } // 0x57F35552E771BE9D b1207
	static void _0x7C10221CE718AA72(Any p0, Any p1) { invoke<Void>(0x02532990, p0, p1); } // 0x7C10221CE718AA72 b1207
	static Any _0x0D3B1568917EBDA0(Any p0, Any p1) { return invoke<Any>(0x02532AA0, p0, p1); } // 0x0D3B1568917EBDA0 b1207
	static void _0x29F3539189D3E277(Any p0, Any p1) { invoke<Void>(0x02532BB0, p0, p1); } // 0x29F3539189D3E277 b1207
	static void _0xE9E06EA514A69061(Any p0, Any p1) { invoke<Void>(0x02532CF0, p0, p1); } // 0xE9E06EA514A69061 b1207
	static void _0x4DB9D03AC4E1FA84(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02532E20, p0, p1, p2, p3); } // 0x4DB9D03AC4E1FA84 b1207
	static float _GET_PED_REMAINING_REVIVAL_TIME(Ped ped, BOOL normalized) { return invoke<float>(0x02532F00, ped, normalized); } // 0xEBE89623EB861271 b1207
	static void SET_PAUSE_PED_WRITHE_BLEEDOUT(Ped ped, BOOL toggle) { invoke<Void>(0x025330D0, ped, toggle); } // 0x925A160133003AC6 b1207
	static Any _0x12EB4E31F092C9B3(Any p0) { return invoke<Any>(0x02533250, p0); } // 0x12EB4E31F092C9B3 b1207
	static BOOL GET_PED_IS_GRAPPLING(Ped ped) { return invoke<BOOL>(0x025333C0, ped); } // 0x0E99E3BF11BB6367 b1207
	static BOOL GET_PED_IS_BEING_GRAPPLED(Ped ped) { return invoke<BOOL>(0x02533500, ped); } // 0x3BDFCF25B58B0415 b1207
	static Ped _GET_PED_GRAPPLER(Ped ped) { return invoke<Ped>(0x02533630, ped); } // 0xD0B7AEB56229D317 b1207
	static int GET_PED_GRAPPLE_STATE(Ped ped) { return invoke<int>(0x025336E0, ped); } // 0x2311F15D971AA680 b1207
	static Hash _GET_PED_GRAPPLE_STYLE(Ped ped) { return invoke<Hash>(0x02533790, ped); } // 0x753B15AD0FD6F3E3 b1207
	static Any _SET_PED_GRAPPLE_STYLE(Ped ped, Hash style) { return invoke<Any>(0x02533840, ped, style); } // 0x630E7B01F091A197 b1207
	static void _0x604190F0CF0DF158(Any p0, Any p1) { invoke<Void>(0x02533970, p0, p1); } // 0x604190F0CF0DF158 b1207
	static void _SET_PED_GRAPPLE_FLAG(Ped ped, int flag, BOOL enable) { invoke<Void>(0x02533A70, ped, flag, enable); } // 0x789DABD18E9024DB b1207
	static void _CLEAR_PED_GRAPPLE_FLAG(Ped ped, int flag) { invoke<Void>(0x02533B90, ped, flag); } // 0xEAE3B5B019C8D23F b1207
	static int _GET_PED_GRAPPLE_FLAG(Ped ped) { return invoke<int>(0x02533C80, ped); } // 0xF3C873ED0C595109 b1207
	static void _0x8301D87B1B89E219(Any p0, Any p1) { invoke<Void>(0x02533D70, p0, p1); } // 0x8301D87B1B89E219 b1207
	static Any _SET_PED_GRAPPLE_EFFECT_MULTIPLIER(Ped ped, float multiplier) { return invoke<Any>(0x02533F10, ped, multiplier); } // 0x99A6E246C315BF60 b1207
	static void _0x56E9C26CD29D1ED6(Any p0, Any p1) { invoke<Void>(0x02534050, p0, p1); } // 0x56E9C26CD29D1ED6 b1207
	static void SET_PED_FLEE_ATTRIBUTES(Ped ped, int attributeFlags, BOOL enable) { invoke<Void>(0x025341D0, ped, attributeFlags, enable); } // 0x70A2D1137C8ED7C9 0xA717A875 b1207
	static BOOL _IS_PED_COWERING(Ped ped) { return invoke<BOOL>(0x025342F0, ped); } // 0xB086C8C0F5701D14 b1207
	static BOOL IS_ANY_PED_NEAR_POINT(float x, float y, float z, float radius) { return invoke<BOOL>(0x02534390, x, y, z, radius); } // 0x083961498679DC9F 0xFBD9B050 b1207
	static void FORCE_PED_AI_AND_ANIMATION_UPDATE(Ped ped, BOOL p1, BOOL p2) { invoke<Void>(0x02534470, ped, p1, p2); } // 0x2208438012482A1A 0x187B9070 b1207
	static void _0xC2722B252C79E641(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02534550, p0, p1, p2, p3); } // 0xC2722B252C79E641 b1232
	static Any _0xC488B8C0E52560D8(Any p0) { return invoke<Any>(0x02534690, p0); } // 0xC488B8C0E52560D8 b1207
	static Any _0x2DC0E8DCBD3546E9(Any p0) { return invoke<Any>(0x02534810, p0); } // 0x2DC0E8DCBD3546E9 b1207
	static void _0x6D07B371E9439019(Any p0) { invoke<Void>(0x02534980, p0); } // 0x6D07B371E9439019 b1207
	static void _0xD65FDC686A031C83(Any p0, Any p1, Any p2) { invoke<Void>(0x02534B80, p0, p1, p2); } // 0xD65FDC686A031C83 b1207
	static Any _0x68821369A2CEADD5(Any p0, Any p1) { return invoke<Any>(0x02534C80, p0, p1); } // 0x68821369A2CEADD5 b1207
	static BOOL IS_PED_HEADING_TOWARDS_POSITION(Ped ped, float x, float y, float z, float p4) { return invoke<BOOL>(0x02534DC0, ped, x, y, z, p4); } // 0xFCF37A457CB96DC0 0x45037B9B b1207
	static void _0x600BBDD29820370C(Ped ped) { invoke<Void>(0x02534E80, ped); } // 0x600BBDD29820370C b1207
	static void REQUEST_PED_VISIBILITY_TRACKING(Ped ped) { invoke<Void>(0x02534F10, ped); } // 0x7D7A2E43E74E2EB8 0x840D24D3 b1207
	static void RELEASE_PED_VISIBILITY_TRACKING(Ped ped) { invoke<Void>(0x02534FB0, ped); } // 0x3088634CF8C819CF b1207
	static void REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(Ped ped, BOOL p1) { invoke<Void>(0x02535050, ped, p1); } // 0x2BC338A7B21F4608 0x31C31DAA b1207
	static void _0x75BA1CB3B7D40CAF(Ped ped, BOOL p1) { invoke<Void>(0x02535180, ped, p1); } // 0x75BA1CB3B7D40CAF 0x9194DB71 b1207
	static int _GET_TRACKED_PED_VISIBILITY(Ped ped) { return invoke<int>(0x02535270, ped); } // 0x511F1A683387C7E2 0x5B1B70AA b1207
	static BOOL IS_TRACKED_PED_VISIBLE(Ped ped) { return invoke<BOOL>(0x025353B0, ped); } // 0x91C8E617F64188AC 0x33248CC1 b1207
	static BOOL _IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(Ped ped, float percent) { return invoke<BOOL>(0x025354B0, ped, percent); } // 0x164CECC59E70DF86 b1207
	static BOOL _IS_PED_VISIBILITY_TRACKED(Ped ped) { return invoke<BOOL>(0x025355C0, ped); } // 0x5102307CE88798EB b1207
	static BOOL CAN_PED_BE_MOUNTED(Ped ped) { return invoke<BOOL>(0x02535680, ped); } // 0x2D64376CF437363E b1207
	static Any _0x118D476A6F1A13F1(Any p0) { return invoke<Any>(0x02535770, p0); } // 0x118D476A6F1A13F1 b1207
	static BOOL IS_EVENT_IN_QUEUE(Ped ped, Hash eventType) { return invoke<BOOL>(0x02535850, ped, eventType); } // 0xC8D523BF5BBD3808 b1207
	static int CAN_PED_SEE_ENTITY(Ped ped, Entity targetEntity, BOOL p2, BOOL p3) { return invoke<int>(0x025359F0, ped, targetEntity, p2, p3); } // 0x7F9B9791D4CB71F6 b1207
	static int CAN_PED_SEE_PED_CACHED(Ped ped, Ped targetPed, BOOL p2) { return invoke<int>(0x02535A30, ped, targetPed, p2); } // 0x9D9473CB82D83A30 b1207
	static Any _0x0EA9EACBA3B01601(Any p0, Any p1, Any p2) { return invoke<Any>(0x02535A60, p0, p1, p2); } // 0x0EA9EACBA3B01601 b1207
	static int GET_PED_BONE_INDEX(Ped ped, int boneId) { return invoke<int>(0x02535C90, ped, boneId); } // 0x3F428D08BE5AAE31 0x259C6BA2 b1207
	static Any _0xC5303F460A40D21D(Any p0, Any p1) { return invoke<Any>(0x02535E40, p0, p1); } // 0xC5303F460A40D21D b1207
	static void _0xE29D8CD66553DBAA(Any p0) { invoke<Void>(0x02536000, p0); } // 0xE29D8CD66553DBAA b1207
	static void _0xB06F5F1DEF417216(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02536160, p0, p1, p2, p3); } // 0xB06F5F1DEF417216 b1207
	static void _0xFC23348F0F4E245F(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x025362C0, p0, p1, p2, p3); } // 0xFC23348F0F4E245F b1207
	static void _0x9184788BFF1EDAD7(Any p0, Any p1) { invoke<Void>(0x02536420, p0, p1); } // 0x9184788BFF1EDAD7 b1207
	static void _0xE3144B932DFDFF65(Ped ped, float p1, int p2, BOOL p3, BOOL p4) { invoke<Void>(0x02536550, ped, p1, p2, p3, p4); } // 0xE3144B932DFDFF65 b1207
	static Any _0x0105FEE8F9091255(Any p0, Any p1) { return invoke<Any>(0x02536630, p0, p1); } // 0x0105FEE8F9091255 b1207
	static void _0xD049920CD29F6CC8(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x02536740, p0, p1, p2, p3, p4); } // 0xD049920CD29F6CC8 b1207
	static Any _0xBB3E5370EBB6BE28(Any p0, Any p1) { return invoke<Any>(0x02536820, p0, p1); } // 0xBB3E5370EBB6BE28 b1207
	static void _0x2FA568BFA725F8D6(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02536930, p0, p1, p2, p3); } // 0x2FA568BFA725F8D6 b1207
	static Any _0x56E4BAD93D33453C(Any p0, Any p1) { return invoke<Any>(0x02536AA0, p0, p1); } // 0x56E4BAD93D33453C b1207
	static void _0x75A082563B4452E5(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02536BB0, p0, p1, p2, p3); } // 0x75A082563B4452E5 b1207
	static void _0x16802C32B2FCA06B(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02536D20, p0, p1, p2, p3); } // 0x16802C32B2FCA06B b1207
	static void _0x8BA0C65AC15A7D33(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02536E90, p0, p1, p2, p3); } // 0x8BA0C65AC15A7D33 b1207
	static void _0x0FFDF937E5C11382(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x02536FF0, p0, p1, p2, p3, p4, p5); } // 0x0FFDF937E5C11382 b1207
	static void _0x5FCF25D584065BFD(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x025371E0, p0, p1, p2, p3); } // 0x5FCF25D584065BFD b1207
	static void _0xA2116C1E4ED85C24(Ped ped, BOOL inverted) { invoke<Void>(0x02537360, ped, inverted); } // 0xA2116C1E4ED85C24 b1207
	static BOOL FORCE_PED_MOTION_STATE(Ped ped, Hash motionStateHash, BOOL p2, int p3, BOOL p4) { return invoke<BOOL>(0x02537460, ped, motionStateHash, p2, p3, p4); } // 0xF28965D04F570DCA 0x164DDEFF b1207
	static void _0x75D3333409CD33CE(Any p0, Any p1, Any p2) { invoke<Void>(0x02537550, p0, p1, p2); } // 0x75D3333409CD33CE b1207
	static BOOL _GET_PED_CURRENT_MOVEMENT_SPEED(Ped ped, float* speedX, float* speedY) { return invoke<BOOL>(0x025376C0, ped, speedX, speedY); } // 0xF60165E1D2C5370B b1207
	static void SET_PED_MAX_MOVE_BLEND_RATIO(Ped ped, float value) { invoke<Void>(0x025378B0, ped, value); } // 0x433083750C5E064A 0xEAD0269A b1207
	static void SET_PED_MIN_MOVE_BLEND_RATIO(Ped ped, float value) { invoke<Void>(0x025379E0, ped, value); } // 0x01A898D26E2333DD 0x383EC364 b1207
	static void _0xBC1DC48270468444(Any p0) { invoke<Void>(0x02537B30, p0); } // 0xBC1DC48270468444 b1207
	static Any _0x46BF2A810679D6E6(Any p0, Any p1) { return invoke<Any>(0x02537B40, p0, p1); } // 0x46BF2A810679D6E6 b1207
	static Any _0xCA95924C893A0C91(Any p0, Any p1) { return invoke<Any>(0x02537CB0, p0, p1); } // 0xCA95924C893A0C91 b1207
	static void _0xBAE08F00021BFFB2(Ped mount, BOOL p1) { invoke<Void>(0x02537D90, mount, p1); } // 0xBAE08F00021BFFB2 b1207
	static void _0x413697EC260AABBF(Any p0, Any p1, Any p2) { invoke<Void>(0x02537E60, p0, p1, p2); } // 0x413697EC260AABBF b1207
	static void _0xCAC43D060099EA72(Any p0) { invoke<Void>(0x02537FC0, p0); } // 0xCAC43D060099EA72 b1207
	static void _0xC9151483CC06A414(Any p0) { invoke<Void>(0x025380D0, p0); } // 0xC9151483CC06A414 b1207
	static void _0xAD3330E3C3E98007(Any p0, Any p1) { invoke<Void>(0x025380E0, p0, p1); } // 0xAD3330E3C3E98007 b1207
	static Any _0xB8E2D655E1D5BD39(Any p0) { return invoke<Any>(0x025381E0, p0); } // 0xB8E2D655E1D5BD39 b1207
	static Any _0x7BB810E8B343AC7B(Any p0) { return invoke<Any>(0x02538210, p0); } // 0x7BB810E8B343AC7B b1207
	static void SET_PED_MOVE_RATE_OVERRIDE(Ped ped, float value) { invoke<Void>(0x02538240, ped, value); } // 0x085BF80FA50A39D1 0x900008C6 b1207
	static int GET_PED_NEARBY_VEHICLES(Ped ped, Any* sizeAndVehs) { return invoke<int>(0x02538380, ped, sizeAndVehs); } // 0xCFF869CBFA210D82 0xCB716F68 b1207
	static int GET_PED_NEARBY_PEDS(Ped ped, Any* sizeAndPeds, int ignoredPedType, int p3) { return invoke<int>(0x025383B0, ped, sizeAndPeds, ignoredPedType, p3); } // 0x23F8F5FC7E8C4A6B 0x4D3325F4 b1207
	static BOOL IS_PED_READY_TO_RENDER(Ped ped) { return invoke<BOOL>(0x025383E0, ped); } // 0xA0BC8FAED8CFEB3C b1207
	static void _0x6A489892E813951A(Any p0) { invoke<Void>(0x02538540, p0); } // 0x6A489892E813951A b1207
	static BOOL IS_PED_USING_ACTION_MODE(Ped ped) { return invoke<BOOL>(0x02538680, ped); } // 0x00E73468D085F745 0x5AE7EDA2 b1207
	static Any _0xEBB208D6AE712C03(Any p0) { return invoke<Any>(0x02538820, p0); } // 0xEBB208D6AE712C03 b1207
	static void SET_PED_USING_ACTION_MODE(Ped ped, BOOL bActionModeEnabled, int p2, const char* action) { invoke<Void>(0x025389C0, ped, bActionModeEnabled, p2, action); } // 0xD75ACCF5E0FB5367 0x8802F696 b1207
	static void SET_PED_CAPSULE(Ped ped, float value) { invoke<Void>(0x025389E0, ped, value); } // 0x364DF566EC833DE2 0xB153E1B9 b1207
	static Ped _GET_RIDER_OF_MOUNT(Ped mount, BOOL p1) { return invoke<Ped>(0x02538AD0, mount, p1); } // 0xB676EFDA03DADA52 b1207
	static void SPAWNPOINTS_START_SEARCH(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0x02538B00, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x2DF9038C90AD5264 0x909A1D76 b1207
	static void SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoke<Void>(0x02538C20, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0xB2AFF10216DEFA2F 0x4AAD0ECB b1207
	static void _SPAWNPOINTS_START_SEARCH_WITH_VOLUME(Volume volume, int flags, float p2, int duration, float p4) { invoke<Void>(0x02538E20, volume, flags, p2, duration, p4); } // 0x83ED1FC9DF3411F5 b1311
	static void SPAWNPOINTS_CANCEL_SEARCH() { invoke<Void>(0x02539020); } // 0xFEE4A5459472A9F8 0x492C9E46 b1207
	static BOOL SPAWNPOINTS_IS_SEARCH_ACTIVE() { return invoke<BOOL>(0x02539040); } // 0x3C67506996001F5E 0x814A28F4 b1207
	static BOOL SPAWNPOINTS_IS_SEARCH_COMPLETE() { return invoke<BOOL>(0x02539060); } // 0xA586FBEB32A53DBB 0x0B60D2BA b1207
	static BOOL SPAWNPOINTS_IS_SEARCH_FAILED() { return invoke<BOOL>(0x02539080); } // 0xF445DE8DA80A1792 0x6B83ABDF b1207
	static int SPAWNPOINTS_GET_NUM_SEARCH_RESULTS() { return invoke<int>(0x025390A0); } // 0xA635C11B8C44AFC2 0xF46B4DC8 b1207
	static void SPAWNPOINTS_GET_SEARCH_RESULT(int randomInt, float* x, Any* y, float* z) { invoke<Void>(0x025390C0, randomInt, x, y, z); } // 0x280C7E3AC7F56E90 0x36A4AC65 b1207
	static void SPAWNPOINTS_GET_SEARCH_RESULT_FLAGS(Any p0, Any* p1) { invoke<Void>(0x02539110, p0, p1); } // 0xB782F8238512BAD5 0xBA699DDF b1207
	static void SET_IK_TARGET(Ped ped, int ikIndex, Entity entityLookAt, int boneLookAt, float offsetX, float offsetY, float offsetZ, Any p7, int blendInDuration, int blendOutDuration) { invoke<Void>(0x02539150, ped, ikIndex, entityLookAt, boneLookAt, offsetX, offsetY, offsetZ, p7, blendInDuration, blendOutDuration); } // 0xC32779C16FCEECD9 0x6FE5218C b1207
	static void _REQUEST_PED_EMOTIONAL_PRESET(Ped ped, const char* name) { invoke<Void>(0x02539190, ped, name); } // 0x5C3C55EAAD19915F b1207
	static BOOL _HAS_PED_EMOTIONAL_PRESET_LOADED(Ped ped, const char* name) { return invoke<BOOL>(0x025391A0, ped, name); } // 0xDE3904B22695D9F9 b1207
	static void _REMOVE_PED_EMOTIONAL_PRESET(Ped ped, const char* name) { invoke<Void>(0x02539370, ped, name); } // 0xFC3BAB1801A8255A b1207
	static void _REQUEST_MOTION_TYPE_ASSET(Hash nameHash, Ped ped) { invoke<Void>(0x02539380, nameHash, ped); } // 0xF7EA250B9A919E03 b1207
	static BOOL HAS_MOTION_TYPE_ASSET_LOADED(Hash nameHash, Ped ped) { return invoke<BOOL>(0x02539460, nameHash, ped); } // 0x854BC9B1A1CCD034 b1207
	static void _REMOVE_MOTION_TYPE_ASSET(Hash nameHash, Ped ped) { invoke<Void>(0x02539520, nameHash, ped); } // 0xDE7B2B4144906CDF b1207
	static Any _0x290B2E6CCDE532E1(Any p0) { return invoke<Any>(0x02539630, p0); } // 0x290B2E6CCDE532E1 b1207
	static Any _0x0EEF7A81C17679DB(Any p0) { return invoke<Any>(0x02539740, p0); } // 0x0EEF7A81C17679DB b1207
	static void SET_PED_LOD_MULTIPLIER(Ped ped, float multiplier) { invoke<Void>(0x02539860, ped, multiplier); } // 0xDC2C5C242AAC342B 0x1D2B5C70 b1207
	static Any _0x1B710E6F4AB69341(Any p0) { return invoke<Any>(0x02539960, p0); } // 0x1B710E6F4AB69341 b1355
	static Any _0xA218D2BBCAA7388C(Any p0, Any p1) { return invoke<Any>(0x02539A50, p0, p1); } // 0xA218D2BBCAA7388C b1207
	static BOOL IS_ANY_HOSTILE_PED_NEAR_POINT(Ped ped, float x, float y, float z, float radius) { return invoke<BOOL>(0x02539B10, ped, x, y, z, radius); } // 0x68772DB2B2526F9F 0x1A464167 b1311
	static void _0xCBDE59C48F2B06F5(Any p0, Any p1, Any p2) { invoke<Void>(0x02539B40, p0, p1, p2); } // 0xCBDE59C48F2B06F5 b1207
	static void _0x6A190B94C2541A99(Any p0) { invoke<Void>(0x02539C80, p0); } // 0x6A190B94C2541A99 b1207
	static BOOL IS_TARGET_PED_IN_PERCEPTION_AREA(Ped ped, Ped targetPed, float p2, float customDistance, float p4, float p5) { return invoke<BOOL>(0x02539E00, ped, targetPed, p2, customDistance, p4, p5); } // 0x06087579E7AA85A9 0xD0567D41 b1207
	static void SET_POP_CONTROL_SPHERE_THIS_FRAME(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x02539EE0, p0, p1, p2, p3, p4); } // 0xD8C3BE3EE94CAF2D 0x4BBE5E2C b1207
	static BOOL IS_PED_HOGTIED(Ped ped) { return invoke<BOOL>(0x02539F10, ped); } // 0x3AA24CCC0D451379 b1207
	static BOOL IS_PED_BEING_HOGTIED(Ped ped) { return invoke<BOOL>(0x0253A010, ped); } // 0xD453BB601D4A606E b1207
	static Any _0x3D9F958834AB9C30(Any p0) { return invoke<Any>(0x0253A170, p0); } // 0x3D9F958834AB9C30 b1207
	static Any _0x913D04A5176F84C9(Any p0) { return invoke<Any>(0x0253A270, p0); } // 0x913D04A5176F84C9 b1207
	static BOOL IS_PED_HOGTYING(Ped ped) { return invoke<BOOL>(0x0253A430, ped); } // 0x42429C674B61238B b1207
	static BOOL _GET_PED_LASSO_HOGTIE_FLAG(Ped ped, int flagId) { return invoke<BOOL>(0x0253A590, ped, flagId); } // 0x2C76FA0E01681F8D b1207
	static void SET_PED_LASSO_HOGTIE_FLAG(Ped ped, int flagId, BOOL value) { invoke<Void>(0x0253A6A0, ped, flagId, value); } // 0xAE6004120C18DF97 b1207
	static Any _0x4642182A298187D0(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x0253A7C0, p0, p1, p2, p3, p4); } // 0x4642182A298187D0 b1207
	static void _0x6B67320E0D57856A(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x0253A880, p0, p1, p2, p3); } // 0x6B67320E0D57856A b1207
	static Entity _GET_FIRST_ENTITY_PED_IS_CARRYING(Ped ped) { return invoke<Entity>(0x0253A940, ped); } // 0xD806CD2A4F2C2996 b1207
	static void _0xAA6C49AE90A32299(Any p0, Any p1) { invoke<Void>(0x0253AAB0, p0, p1); } // 0xAA6C49AE90A32299 b1207
	static Ped _GET_CARRIER_AS_PED(Entity entity) { return invoke<Ped>(0x0253AB90, entity); } // 0x09B83E68DE004CD4 b1207
	static Ped _GET_CARRIER_AS_MOUNT(Entity entity) { return invoke<Ped>(0x0253AC90, entity); } // 0xA033D7E4BBF9844D b1207
	static Ped _GET_CARRIER_AS_HUMAN(Entity entity) { return invoke<Ped>(0x0253ADC0, entity); } // 0x79443D56C8DF45EE b1207
	static Any GET_CARRIED_ATTACHED_INFO_FOR_SLOT(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x0253AF00, p0, p1, p2, p3); } // 0x608BC6A6AACD5036 b1207
	static void DETACH_CARRIABLE_ENTITY(Entity entity, BOOL p1, BOOL p2) { invoke<Void>(0x0253AF30, entity, p1, p2); } // 0xED00D72F81CF7278 b1207
	static void FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Ped ped, ItemSet itemset) { invoke<Void>(0x0253B000, ped, itemset); } // 0xB5ACE8B23A438EC0 b1207
	static BOOL IS_PED_CARRYING_SOMETHING(Ped ped) { return invoke<BOOL>(0x0253B2B0, ped); } // 0xA911EE21EDF69DAF b1207
	static Any _0xB65927F861E7AE39(Any p0, Any p1) { return invoke<Any>(0x0253B420, p0, p1); } // 0xB65927F861E7AE39 b1207
	static Any _0xA1FBAC56D38563E2(Any p0) { return invoke<Any>(0x0253B4F0, p0); } // 0xA1FBAC56D38563E2 b1207
	static Any _0x6F43C351A5D51E2F(Any p0, Any p1) { return invoke<Any>(0x0253B520, p0, p1); } // 0x6F43C351A5D51E2F b1207
	static BOOL IS_PED_LASSOED(Ped ped) { return invoke<BOOL>(0x0253B680, ped); } // 0x9682F850056C9ADE b1207
	static Entity _GET_LASSOER_OF_PED(Ped ped) { return invoke<Entity>(0x0253B770, ped); } // 0x833F0053340EF413 b1207
	static Entity _GET_LASSO_TARGET(Ped ped) { return invoke<Entity>(0x0253B860, ped); } // 0xB65A4DAB460A19BD b1207
	static Ped _GET_LASSOED_LASSOER(Ped ped) { return invoke<Ped>(0x0253B920, ped); } // 0x0C31C51168E80365 b1207
	static void SET_LOOTING_FLAG(Ped ped, int lootFlag, BOOL enabled) { invoke<Void>(0x0253B9E0, ped, lootFlag, enabled); } // 0x6569F31A01B4C097 b1207
	static BOOL _GET_LOOTING_FLAG(Ped ped, int lootFlag) { return invoke<BOOL>(0x0253BA00, ped, lootFlag); } // 0xE4C11F104620DDCE b1207
	static Any _0x5463C962BC7777C3(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x0253BB10, p0, p1, p2, p3, p4); } // 0x5463C962BC7777C3 b1207
	static int GET_PED_LOOT_STATUS_MP(Ped ped) { return invoke<int>(0x0253BBD0, ped); } // 0xC737697C41628340 b1311
	static Any _0x4B19F171450E0D4F(Any p0) { return invoke<Any>(0x0253BCC0, p0); } // 0x4B19F171450E0D4F b1207
	static Any _0x758F081DB204DDDE(Any p0) { return invoke<Any>(0x0253BCE0, p0); } // 0x758F081DB204DDDE b1207
	static Entity GET_LOOTING_PICKUP_TARGET_ENTITY(Ped ped) { return invoke<Entity>(0x0253BD10, ped); } // 0x14169FA823679E41 b1207
	static Any _0x7B5C293238EE4F20(Any p0) { return invoke<Any>(0x0253BD30, p0); } // 0x7B5C293238EE4F20 b1207
	static void _0xAE6B68A83ABBE7C0(Any p0) { invoke<Void>(0x0253BE30, p0); } // 0xAE6B68A83ABBE7C0 b1207
	static Any _0xA4B6432E3880F2F9(Any p0) { return invoke<Any>(0x0253BE40, p0); } // 0xA4B6432E3880F2F9 b1311
	static Any _0xE37287EE358939C3(Any p0) { return invoke<Any>(0x0253BFB0, p0); } // 0xE37287EE358939C3 b1311
	static Any _0x011A42FD923D41CA(Any p0) { return invoke<Any>(0x0253C0C0, p0); } // 0x011A42FD923D41CA b1311
	static BOOL IS_PED_INCAPACITATED(Ped ped) { return invoke<BOOL>(0x0253C230, ped); } // 0xB655DB7582AEC805 b1207
	static void _SET_PED_INCAPACITATION_MODIFIERS(Ped ped, BOOL canBeIncapacitated, int threshold, int bleedoutTime, int p4) { invoke<Void>(0x0253C320, ped, canBeIncapacitated, threshold, bleedoutTime, p4); } // 0x39ED303390DDEAC7 b1207
	static BOOL _GET_PED_CAN_BE_INCAPACITATED_THIS_FRAME(Ped ped) { return invoke<BOOL>(0x0253C400, ped); } // 0x7A4E00364B5D727B b1207
	static void SET_PED_CAN_BE_INCAPACITATED(Ped ped, BOOL toggle) { invoke<Void>(0x0253C6F0, ped, toggle); } // 0x5240864E847C691C b1207
	static Any _0x89BFDF6D53145545(Any p0) { return invoke<Any>(0x0253C8C0, p0); } // 0x89BFDF6D53145545 b1207
	static void _SET_PED_INCAPACITATION_TOTAL_BLEED_OUT_DURATION(Ped ped, float duration) { invoke<Void>(0x0253C9C0, ped, duration); } // 0x2890418B39BC8FFF b1207
	static void _RESET_PED_INCAPACITATION_BLEED_OUT_DURATION(Ped ped) { invoke<Void>(0x0253CC60, ped); } // 0x4B9668DB91DC39B8 b1207
	static void _SET_PED_INCAPACITATION_FLAGS(Ped ped, int flags) { invoke<Void>(0x0253CDB0, ped, flags); } // 0xD67B6F3BCF81BA47 b1207
	static void _0x92A1B55A59720395(Any p0, Any p1) { invoke<Void>(0x0253CF10, p0, p1); } // 0x92A1B55A59720395 b1207
	static void _INCAPACITATED_REVIVE(Ped ped, Ped ped2) { invoke<Void>(0x0253D070, ped, ped2); } // 0xF6262491C7704A63 b1207
	static Any _0x88D9D76D78065487(Any p0) { return invoke<Any>(0x0253D1F0, p0); } // 0x88D9D76D78065487 b1207
	static void _SET_PED_KNOCKED_BY_ONE_HIT(Ped ped, float p1) { invoke<Void>(0x0253D350, ped, p1); } // 0x5BCF0B79D4F5DBA3 b1207
	static void _0x2E5B5D1F1453E08E(Any p0, Any p1) { invoke<Void>(0x0253D480, p0, p1); } // 0x2E5B5D1F1453E08E b1207
	static void _0x29924EB8EE9DB926(Ped ped, float p1) { invoke<Void>(0x0253D5E0, ped, p1); } // 0x29924EB8EE9DB926 b1207
	static void _0xB285AD0EC870B2DF(Any p0, Any p1) { invoke<Void>(0x0253D710, p0, p1); } // 0xB285AD0EC870B2DF b1207
	static Any _0xCB86D3E3E3708901(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x0253D7E0, p0, p1, p2, p3, p4); } // 0xCB86D3E3E3708901 b1207
	static void _0x633F83B301C87994(Any p0, Any p1) { invoke<Void>(0x0253D8E0, p0, p1); } // 0x633F83B301C87994 b1207
	static Any _0x5203038FF8BAE577(Any p0, Any p1, Any p2) { return invoke<Any>(0x0253D9E0, p0, p1, p2); } // 0x5203038FF8BAE577 b1207
	static Any _0x7F090958AE95B61B(Any p0, Any p1) { return invoke<Any>(0x0253DB10, p0, p1); } // 0x7F090958AE95B61B b1207
	static void _0xC494C76A34266E82(Any p0, Any p1) { invoke<Void>(0x0253DC30, p0, p1); } // 0xC494C76A34266E82 b1207
	static Any _0xC3995D396F1D97B6(Any p0, Any p1, Any p2) { return invoke<Any>(0x0253DD40, p0, p1, p2); } // 0xC3995D396F1D97B6 b1207
	static void _0x15F4732C357B1D6D(Any p0, Any p1, Any p2) { invoke<Void>(0x0253DE70, p0, p1, p2); } // 0x15F4732C357B1D6D b1207
	static BOOL _0x947E43F544B6AB34(Ped ped, Player player, int flag, int p3) { return invoke<BOOL>(0x0253DFA0, ped, player, flag, p3); } // 0x947E43F544B6AB34 b1207
	static Any _0x32417CB860A3BDC4(Any p0, Any p1) { return invoke<Any>(0x0253E0E0, p0, p1); } // 0x32417CB860A3BDC4 b1207
	static void _0xE737D5F14304A2EC(Any p0, Any p1, Any p2) { invoke<Void>(0x0253E1E0, p0, p1, p2); } // 0xE737D5F14304A2EC b1207
	static void _0xEBD49472BCCF7642(Any p0, Any p1) { invoke<Void>(0x0253E330, p0, p1); } // 0xEBD49472BCCF7642 b1207
	static void _0x19173C3F15367B54(Any p0, Any p1, Any p2) { invoke<Void>(0x0253E440, p0, p1, p2); } // 0x19173C3F15367B54 b1207
	static void _0x5708EDD71B50C008(Any p0, Any p1, Any p2) { invoke<Void>(0x0253E660, p0, p1, p2); } // 0x5708EDD71B50C008 b1207
	static void _0xB9BDFAE609DFB7C5(Any p0, Any p1, Any p2) { invoke<Void>(0x0253E880, p0, p1, p2); } // 0xB9BDFAE609DFB7C5 b1207
	static Any _0xF7327ACC7A89AEF1(Any p0, Any p1, Any p2) { return invoke<Any>(0x0253EAA0, p0, p1, p2); } // 0xF7327ACC7A89AEF1 b1207
	static Any _0x7CC2186C32D3540A(Any p0, Any p1) { return invoke<Any>(0x0253EBD0, p0, p1); } // 0x7CC2186C32D3540A b1207
	static BOOL _0x1E017404784AA6A3(Ped ped, Hash p1) { return invoke<BOOL>(0x0253ED20, ped, p1); } // 0x1E017404784AA6A3 b1207
	static void _0x2B4CE170DE09F346(Any p0, Any p1) { invoke<Void>(0x0253F010, p0, p1); } // 0x2B4CE170DE09F346 b1207
	static Any _0x7C8AA850617651D9(Any p0, Any p1) { return invoke<Any>(0x0253F300, p0, p1); } // 0x7C8AA850617651D9 b1207
	static float _GET_PED_MOTIVATION(Ped ped, int motivationState, Ped targetPed) { return invoke<float>(0x0253F580, ped, motivationState, targetPed); } // 0x42688E94E96FD9B4 b1207
	static void _SET_PED_MOTIVATION(Ped ped, int motivationState, float threshold, Ped targetPed) { invoke<Void>(0x0253F640, ped, motivationState, threshold, targetPed); } // 0x06D26A96CA1BCA75 b1207
	static void _0x23BDE06596A22CEC(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x0253F710, p0, p1, p2, p3); } // 0x23BDE06596A22CEC b1207
	static void _0xCDFB8C04D4C95D9B(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x0253F7E0, p0, p1, p2, p3); } // 0xCDFB8C04D4C95D9B b1207
	static BOOL _GET_IS_PED_MOTIVATION_STATE_ENABLED(Ped ped, int motivationState) { return invoke<BOOL>(0x0253F8B0, ped, motivationState); } // 0x33FA048675821DA7 b1207
	static void _SET_PED_MOTIVATION_STATE_OVERRIDE(Ped ped, int motivationState, BOOL enabled) { invoke<Void>(0x0253F9C0, ped, motivationState, enabled); } // 0x2EB75FB86C41F026 b1207
	static void _SET_PED_MOTIVATION_MODIFIER(Ped ped, int motivationState, float modifier) { invoke<Void>(0x0253FB10, ped, motivationState, modifier); } // 0xA1EB5D029E0191D3 b1207
	static void _0xFD8E853F0BC2E942(Any p0, Any p1) { invoke<Void>(0x0253FC70, p0, p1); } // 0xFD8E853F0BC2E942 b1207
	static void _SET_PED_SCENT(Ped ped, float scent) { invoke<Void>(0x0253FD70, ped, scent); } // 0x01B21B81865E2A1F b1207
	static void _SET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Ped ped, float p1) { invoke<Void>(0x0253FE70, ped, p1); } // 0x05CE6AF4DF071D23 b1207
	static void _RESET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Ped ped) { invoke<Void>(0x0253FF90, ped); } // 0x801917E7D7BCE418 b1207
	static void _0xC6C4E15CF7D52FEA(Any p0, Any p1) { invoke<Void>(0x02540080, p0, p1); } // 0xC6C4E15CF7D52FEA b1207
	static void _0xD05AD61F242C626B(Any p0, Any p1) { invoke<Void>(0x02540170, p0, p1); } // 0xD05AD61F242C626B b1207
	static void _0x0F967019CC853BCC(Any p0, Any p1) { invoke<Void>(0x02540260, p0, p1); } // 0x0F967019CC853BCC b1207
	static BOOL _IS_PED_DRAGGING(Ped ped) { return invoke<BOOL>(0x02540400, ped); } // 0x226CF9B159E38F42 b1207
	static BOOL IS_PED_BEING_DRAGGED(Ped ped) { return invoke<BOOL>(0x025404F0, ped); } // 0xEF3A8772F085B4AA b1207
	static void _0x070A3841406C43D5(Any p0, Any p1) { invoke<Void>(0x02540630, p0, p1); } // 0x070A3841406C43D5 b1207
	static BOOL _ADD_PED_STAY_OUT_VOLUME(Ped ped, Volume volume) { return invoke<BOOL>(0x02540720, ped, volume); } // 0xE9B168527B337BF0 b1207
	static BOOL _REMOVE_PED_STAY_OUT_VOLUME(Ped ped, Volume volume) { return invoke<BOOL>(0x025408A0, ped, volume); } // 0x0CAB404CD2DB41F5 b1207
	static void _0x9E66708B2B41F14A(Any p0, Any p1) { invoke<Void>(0x02540A20, p0, p1); } // 0x9E66708B2B41F14A b1207
	static void _0xF634E2892220EF34(Any p0, Any p1) { invoke<Void>(0x02540B20, p0, p1); } // 0xF634E2892220EF34 b1207
	static void _0xAAC0EE3B4999ABB5(Any p0, Any p1) { invoke<Void>(0x02540BF0, p0, p1); } // 0xAAC0EE3B4999ABB5 b1207
	static Entity GET_PED_MOTION_FOCUS_ENTITY(Ped ped) { return invoke<Entity>(0x02540D80, ped); } // 0x243E1B4607040057 b1207
	static void _SET_PED_FACE_FEATURE(Ped ped, int index, float value) { invoke<Void>(0x02540E90, ped, index, value); } // 0x5653AB26C82938CF b1207
	static Any _GET_PED_FACE_FEATURE(Ped ped, int index) { return invoke<Any>(0x02540F60, ped, index); } // 0xFD1BA1EEF7985BB8 b1207
	static void _0x5BB04BC74A474B47(Any p0, Any p1) { invoke<Void>(0x02541170, p0, p1); } // 0x5BB04BC74A474B47 b1207
	static void _0x9078FB0557364099(Any p0) { invoke<Void>(0x02541260, p0); } // 0x9078FB0557364099 b1207
	static BOOL IS_PED_FALLING_OVER(Ped ped) { return invoke<BOOL>(0x02541350, ped); } // 0x3E592D0486DEC0F6 b1207
	static Any _0x29FCE825613FEFCA(Any p0, Any p1) { return invoke<Any>(0x02541410, p0, p1); } // 0x29FCE825613FEFCA b1207
	static Any _0x65C75FDCCAC86464(Any p0) { return invoke<Any>(0x02541540, p0); } // 0x65C75FDCCAC86464 b1355
	static void _0x0D497AA69059FE40(Any p0, Any p1) { invoke<Void>(0x02541670, p0, p1); } // 0x0D497AA69059FE40 b1207
	static void _0xD7D2F45C56A4F4DF(Any p0, Any p1, Any p2) { invoke<Void>(0x02541760, p0, p1, p2); } // 0xD7D2F45C56A4F4DF b1207
	static void _SET_PED_CULL_RANGE(Ped ped, float p1, float p2) { invoke<Void>(0x02541890, ped, p1, p2); } // 0x8AC1D721B2097B6E b1207
	static void _0x1D23D3F70606D788(Any p0, Any p1) { invoke<Void>(0x025419C0, p0, p1); } // 0x1D23D3F70606D788 b1207
	static int _GET_META_PED_TYPE(Ped ped) { return invoke<int>(0x02541AE0, ped); } // 0xEC9A1261BF0CE510 b1207
	static BOOL _IS_METAPED_USING_COMPONENT(Ped ped, Hash component) { return invoke<BOOL>(0x02541C40, ped, component); } // 0xFB4891BD7578CDC1 b1207
	static Any _0xBD0E4F52F6D95242(Any p0) { return invoke<Any>(0x02541D00, p0); } // 0xBD0E4F52F6D95242 b1207
	static BOOL _IS_PED_CHILD(Ped ped) { return invoke<BOOL>(0x02541DC0, ped); } // 0x137772000DAF42C5 b1207
	static void _0xFFA1594703ED27CA(Any p0, Any p1) { invoke<Void>(0x02541EB0, p0, p1); } // 0xFFA1594703ED27CA b1207
	static void _SET_META_PED_TAG(Ped ped, Hash drawable, Hash albedo, Hash normal, Hash material, Hash palette, int tint0, int tint1, int tint2) { invoke<Void>(0x02541FA0, ped, drawable, albedo, normal, material, palette, tint0, tint1, tint2); } // 0xBC6DF00D7A4A6819 b1207
	static void REMOVE_TAG_FROM_META_PED(Ped ped, Hash component, int p2) { invoke<Void>(0x025420C0, ped, component, p2); } // 0xD710A5007C2AC539 b1207
	static void _0xA2B8E47442C76CEC(Any p0, Any p1) { invoke<Void>(0x025421A0, p0, p1); } // 0xA2B8E47442C76CEC b1207
	static int _GET_NUM_COMPONENT_CATEGORIES_IN_PED(Ped ped) { return invoke<int>(0x02542290, ped); } // 0xA622E66EEE92A08D b1207
	static Hash _GET_PED_COMPONENT_CATEGORY_BY_INDEX(Ped ped, int index) { return invoke<Hash>(0x02542370, ped, index); } // 0xCCB97B51893C662F b1207
	static int _GET_NUM_COMPONENTS_IN_PED(Ped ped) { return invoke<int>(0x02542470, ped); } // 0x90403E8107B60E81 b1207
	static Any _0x9B90842304C938A7(Any p0, Any p1, Any p2) { return invoke<Any>(0x02542570, p0, p1, p2); } // 0x9B90842304C938A7 b1207
	static void _UPDATE_PED_VARIATION(Ped ped, BOOL p1, BOOL p2, BOOL p3, BOOL p4, BOOL p5) { invoke<Void>(0x025426D0, ped, p1, p2, p3, p4, p5); } // 0xCC8CA3E88256E58F b1207
	static void _0xCB1A3864C524F784(Any p0, Any p1) { invoke<Void>(0x025427D0, p0, p1); } // 0xCB1A3864C524F784 b1207
	static void _0xFA0D206B489A6846(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x025428A0, p0, p1, p2, p3, p4); } // 0xFA0D206B489A6846 b1207
	static Any _0xA4AC05B1A364EBC5(Any p0, Any p1, Any p2) { return invoke<Any>(0x02542A70, p0, p1, p2); } // 0xA4AC05B1A364EBC5 b1207
	static void _0x1298B3D8E4C2409F(Any p0) { invoke<Void>(0x02542B60, p0); } // 0x1298B3D8E4C2409F b1207
	static Any _0xA274F51EF7E34B95(Any p0, Any p1) { return invoke<Any>(0x02542B80, p0, p1); } // 0xA274F51EF7E34B95 b1207
	static Any _0xC2EF407645BEECDC(Any p0) { return invoke<Any>(0x02542C50, p0); } // 0xC2EF407645BEECDC b1207
	static void _SET_PED_BODY_COMPONENT(Ped ped, Hash hash) { invoke<Void>(0x02542C80, ped, hash); } // 0x1902C4CFCC5BE57C b1207
	static void _0xFA742B82D093D848(Any p0, Any p1, Any p2) { invoke<Void>(0x02542E50, p0, p1, p2); } // 0xFA742B82D093D848 b1207
	static Hash _GET_PED_META_OUTFIT_HASH(Ped ped) { return invoke<Hash>(0x02543020, ped); } // 0x30569F348D126A5A b1207
	static void _0xA2F8B3B5FEDFC100(Any p0, Any p1) { invoke<Void>(0x02543130, p0, p1); } // 0xA2F8B3B5FEDFC100 b1207
	static void _0x66FF395445A88A6E(Any p0, Any p1, Any p2) { invoke<Void>(0x025432F0, p0, p1, p2); } // 0x66FF395445A88A6E b1207
	static BOOL _DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(Hash outfit, Hash model) { return invoke<BOOL>(0x025433D0, outfit, model); } // 0xC0E880B7A441164D b1207
	static Any _0x4FF3C2B4E6A196C1(Any p0, Any p1, Any p2) { return invoke<Any>(0x025434C0, p0, p1, p2); } // 0x4FF3C2B4E6A196C1 b1207
	static Any _0x62FDF4E678E40CC6(Entity entity, Any p1) { return invoke<Any>(0x02543620, entity, p1); } // 0x62FDF4E678E40CC6 b1207
	static void _0x0BFA1BD465CDFEFD(Any p0) { invoke<Void>(0x025436F0, p0); } // 0x0BFA1BD465CDFEFD b1207
	static void _0x370A973252741AC4(Any p0, Any p1) { invoke<Void>(0x025437A0, p0, p1); } // 0x370A973252741AC4 b1207
	static void _SET_RANDOM_OUTFIT_VARIATION(Ped ped, BOOL p1) { invoke<Void>(0x02543870, ped, p1); } // 0x283978A15512B2FE b1207
	static int GET_NUM_META_PED_OUTFITS(Ped ped) { return invoke<int>(0x02543960, ped); } // 0x10C70A515BC03707 b1207
	static void _SET_PED_OUTFIT_PRESET(Ped ped, int presetId, BOOL p2) { invoke<Void>(0x02543AA0, ped, presetId, p2); } // 0x77FF8D35EEC6BBC4 b1207
	static void _SET_PED_OUTFIT_EXTRA(Ped ped, int component, Any p2, Any p3) { invoke<Void>(0x02543B70, ped, component, p2, p3); } // 0xA5BAE410B03E7371 b1207
	static BOOL _IS_META_PED_OUTFIT_SADDLE_EQUIPPED(Ped ped, Hash outfit) { return invoke<BOOL>(0x02543C50, ped, outfit); } // 0x98082246107A6ACF b1207
	static void _0x851966E1E35AF491(Any p0, Any p1) { invoke<Void>(0x02543D10, p0, p1); } // 0x851966E1E35AF491 b1207
	static void _0x4EFC1F8FF1AD94DE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x02543E30, p0, p1, p2, p3, p4, p5); } // 0x4EFC1F8FF1AD94DE b1207
	static int _REQUEST_METAPED_PED(Hash model, int p1) { return invoke<int>(0x02543F20, model, p1); } // 0xF97C34C33487D569 b1207
	static BOOL _HAS_METAPED_PED_REQUEST_LOADED(int requestId) { return invoke<BOOL>(0x02543FC0, requestId); } // 0xC0940AC858C1E126 b1207
	static BOOL _IS_METAPED_PED_REQUEST_VALID(int requestId) { return invoke<BOOL>(0x02543FF0, requestId); } // 0x43E4DA469541A9C9 b1207
	static Ped _CREATE_METAPED_PED(int requestId, float x, float y, float z, float heading, BOOL p5, BOOL p6, BOOL p7, BOOL p8, BOOL p9) { return invoke<Ped>(0x02544030, requestId, x, y, z, heading, p5, p6, p7, p8, p9); } // 0x0BCD4091C8EABA42 b1207
	static void _RELEASE_METAPED_PED_REQUEST(int requestId) { invoke<Void>(0x025440A0, requestId); } // 0x3972F78A78B5D9DF b1207
	static int _REQUEST_METAPED_OUTFIT(Hash model, Hash outfit) { return invoke<int>(0x025440F0, model, outfit); } // 0x13154A76CE0CF9AB b1207
	static Any _0x27E8A84C12B0B7D1(Any p0, Any p1, Any p2) { return invoke<Any>(0x02544190, p0, p1, p2); } // 0x27E8A84C12B0B7D1 b1207
	static Any _0x273915CE30780986(Any p0, Any p1) { return invoke<Any>(0x025442C0, p0, p1); } // 0x273915CE30780986 b1207
	static void _RELEASE_METAPED_OUTFIT_REQUEST(int requestId) { invoke<Void>(0x02544370, requestId); } // 0x4592B8B9B0EF5F48 b1207
	static int _0x3FCBB5FCFD968698(Hash drawable, Hash albedo, Hash normal, Hash material, Any p4) { return invoke<int>(0x025443C0, drawable, albedo, normal, material, p4); } // 0x3FCBB5FCFD968698 b1207
	static int _REQUEST_METAPED_ASSET_BUNDLE(Hash asset, int p1) { return invoke<int>(0x02544440, asset, p1); } // 0x91FE941F9FCFB702 b1207
	static Any _0xF6D9E1F3560CBF8E(int metaPedType, Any p1, int p2, int p3, int p4) { return invoke<Any>(0x02544470, metaPedType, p1, p2, p3, p4); } // 0xF6D9E1F3560CBF8E b1207
	static void _RELEASE_METAPED_ASSET_REQUEST(int requestId) { invoke<Void>(0x025444F0, requestId); } // 0x13E7320C762F0477 b1207
	static BOOL _HAS_METAPED_ASSET_LOADED(int requestId) { return invoke<BOOL>(0x02544560, requestId); } // 0xB0B2C6D170B0E8E5 b1207
	static BOOL _IS_METAPED_ASSET_VALID(int requestId) { return invoke<BOOL>(0x025445B0, requestId); } // 0x93FFD92F05EC32FD b1207
	static Entity _CREATE_METAPED_ASSET(Hash asset, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, BOOL p7, BOOL p8, BOOL p9) { return invoke<Entity>(0x025445D0, asset, posX, posY, posZ, rotX, rotY, rotZ, p7, p8, p9); } // 0x9641A9A20310F6B8 b1207
	static BOOL _HAS_METAPED_OUTFIT_LOADED(int requestId) { return invoke<BOOL>(0x02544840, requestId); } // 0x610438375E5D1801 b1207
	static BOOL _IS_METAPED_OUTFIT_REQUEST_VALID(int requestId) { return invoke<BOOL>(0x025448A0, requestId); } // 0xB25E57FC8E37114D b1207
	static Ped _CREATE_METAPED_OUTFIT_PED(int requestId, float x, float y, float z, float heading, BOOL p5, BOOL p6, BOOL p7, BOOL p8) { return invoke<Ped>(0x025448F0, requestId, x, y, z, heading, p5, p6, p7, p8); } // 0xEAF682A14F8E5F53 b1207
	static BOOL _APPLY_PED_METAPED_OUTFIT(int requestId, Ped ped, BOOL p2, BOOL p3) { return invoke<BOOL>(0x02544950, requestId, ped, p2, p3); } // 0x74F512E29CB717E2 b1207
	static void _SET_METAPED_WEARINESS(Ped ped, float weariness) { invoke<Void>(0x02544AA0, ped, weariness); } // 0x314C5465195F3B30 b1207
	static void _0xF47D54B986F0A346(Any p0, Any p1) { invoke<Void>(0x02544B80, p0, p1); } // 0xF47D54B986F0A346 b1232
	static void _0x3EFED081B4834BA1(Any p0) { invoke<Void>(0x02544CF0, p0); } // 0x3EFED081B4834BA1 b1232
	static void _0x0FB1BA7FF73B41E1(Any p0, Any p1, Any p2) { invoke<Void>(0x02544DF0, p0, p1, p2); } // 0x0FB1BA7FF73B41E1 b1207
	static Any _0xB292203008EBBAAC(Any p0) { return invoke<Any>(0x02544ED0, p0); } // 0xB292203008EBBAAC b1207
	static Any _0xD4D403EA031F351C(Any p0) { return invoke<Any>(0x02545020, p0); } // 0xD4D403EA031F351C b1207
	static int _GET_PELT_FROM_HORSE(Ped horse, int index) { return invoke<int>(0x02545120, horse, index); } // 0x0CEEB6F4780B1F2F b1207
	static void _SET_PELT_FOR_HORSE(Ped horse, int peltId) { invoke<Void>(0x02545220, horse, peltId); } // 0xA73F50E8796150D5 b1207
	static void _0xC412AA1C73111FE0(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x02545230, p0, p1, p2, p3, p4); } // 0xC412AA1C73111FE0 b1207
	static void _CLEAR_PELT_FROM_HORSE(Ped horse, int peltId) { invoke<Void>(0x02545250, horse, peltId); } // 0x627F7F3A0C4C51FF b1207
	static void _0x13A210949FCBD92B(Any p0, Any p1) { invoke<Void>(0x02545350, p0, p1); } // 0x13A210949FCBD92B b1207
	static void _0xD049FDAF089FDDB0(Any p0, Any p1, Any p2) { invoke<Void>(0x02545430, p0, p1, p2); } // 0xD049FDAF089FDDB0 b1207
	static void _0xDD9540E7B1C9714F(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x02545520, p0, p1, p2, p3, p4); } // 0xDD9540E7B1C9714F b1207
	static void _0x55546004A244302A(Any p0, Any p1) { invoke<Void>(0x02545540, p0, p1); } // 0x55546004A244302A b1207
	static void _SET_HEALTH_RECHARGE_MULTIPLIER(Ped ped, int multiplier) { invoke<Void>(0x02545630, ped, multiplier); } // 0xDE1B1907A83A1550 b1207
	static float _GET_HEALTH_RECHARGE_MULTIPLIER(Ped ped) { return invoke<float>(0x02545720, ped); } // 0x95B8E397B8F4360F b1207
	static void _SET_STAMINA_DEPLETION_MULTIPLIER(Ped ped, int multiplier) { invoke<Void>(0x02545810, ped, multiplier); } // 0xEF5A3D2285D8924B b1207
	static float _GET_STAMINA_DEPLETION_MULTIPLIER(Ped ped) { return invoke<float>(0x02545920, ped); } // 0x825F6DD559A0895B b1207
	static void _SET_STAMINA_RECHARGE_MULTIPLIER(Ped ped, int multiplier) { invoke<Void>(0x02545A10, ped, multiplier); } // 0x345C9F993A8AB4A4 b1207
	static float _GET_STAMINA_RECHARGE_MULTIPLIER(Ped ped) { return invoke<float>(0x02545B20, ped); } // 0xE7687EB2F634ABF0 b1207
	static BOOL _CHANGE_PED_STAMINA(Ped ped, float amount) { return invoke<BOOL>(0x02545C10, ped, amount); } // 0xC3D4B754C0E86B9E b1207
	static float _GET_PED_STAMINA(Ped ped) { return invoke<float>(0x02545D20, ped); } // 0x775A1CA7893AA8B5 b1207
	static float _GET_PED_STAMINA_NORMALIZED(Ped ped) { return invoke<float>(0x02545EB0, ped); } // 0x22F2A386D43048A9 b1207
	static float _GET_PED_MAX_STAMINA(Ped ped) { return invoke<float>(0x02545EE0, ped); } // 0xCB42AFE2B613EE55 b1207
	static void _0x36513AFFC703C60D(Any p0) { invoke<Void>(0x02546070, p0); } // 0x36513AFFC703C60D b1207
	static void _RESTORE_PED_STAMINA(Ped ped, float stamina) { invoke<Void>(0x02546160, ped, stamina); } // 0x675680D089BFA21F b1207
	static Any _0xFC3B580C4380B5B7(Any p0) { return invoke<Any>(0x02546290, p0); } // 0xFC3B580C4380B5B7 b1207
	static void _0xEA8763E505AFD49A(Any p0, Any p1, Any p2) { invoke<Void>(0x02546390, p0, p1, p2); } // 0xEA8763E505AFD49A b1207
	static void _0xE4EF4382E22C780C(Any p0) { invoke<Void>(0x025464B0, p0); } // 0xE4EF4382E22C780C b1207
	static void _0xD61FCF9FCFD515B7(Any p0, Any p1, Any p2) { invoke<Void>(0x025465A0, p0, p1, p2); } // 0xD61FCF9FCFD515B7 b1207
	static void _0x8D9DB115FBA8E23D(Any p0) { invoke<Void>(0x025466C0, p0); } // 0x8D9DB115FBA8E23D b1207
	static Any _0x16F2C8C084AB2092(Any p0) { return invoke<Any>(0x025467B0, p0); } // 0x16F2C8C084AB2092 b1207
	static Any _0xD97BC27AC039F681(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x025468B0, p0, p1, p2, p3); } // 0xD97BC27AC039F681 b1311
	static Any _0xF6A8C4B4A11AE89C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x02546A50, p0, p1, p2, p3, p4, p5); } // 0xF6A8C4B4A11AE89C b1207
	static void _0xE4C95E0AE31C6512(Any p0, Any p1) { invoke<Void>(0x02546D10, p0, p1); } // 0xE4C95E0AE31C6512 b1207
	static Object _GET_PED_LAST_DROPPED_HAT(Ped ped) { return invoke<Object>(0x02546DE0, ped); } // 0x1F714E7A9DADFC42 b1207
	static void _0x5D4CD22A8C82A81A(Ped ped, BOOL p1) { invoke<Void>(0x02546F00, ped, p1); } // 0x5D4CD22A8C82A81A b1207
	static void _0xBF567DF2BEF211A6(Any p0, Any p1) { invoke<Void>(0x02546F20, p0, p1); } // 0xBF567DF2BEF211A6 b1207
	static Any _0x4F5EBE70081E5A20(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<Any>(0x02547010, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x4F5EBE70081E5A20 b1207
	static void _0x87247BC60B60BED8(Any p0) { invoke<Void>(0x025470C0, p0); } // 0x87247BC60B60BED8 b1207
	static BOOL _IS_PED_INTIMIDATED(Ped ped) { return invoke<BOOL>(0x025471A0, ped); } // 0x57779B55B83E2BEA b1207
	static Any _0x7EE3A8660F38797E(Any p0) { return invoke<Any>(0x025472D0, p0); } // 0x7EE3A8660F38797E b1207
	static Any _0xA180FBD502A03125(Any p0, Any p1, Any p2) { return invoke<Any>(0x025473F0, p0, p1, p2); } // 0xA180FBD502A03125 b1207
	static int _REQUEST_TEXTURE(Hash albedoHash, Hash normalHash, Hash materialHash) { return invoke<int>(0x02547530, albedoHash, normalHash, materialHash); } // 0xC5E7204F322E49EB b1207
	static void _OVERRIDE_TEXTURE_ON_PED(Ped ped, Hash componentHash, int textureId) { invoke<Void>(0x025475A0, ped, componentHash, textureId); } // 0x0B46E25761519058 b1207
	static void _RELEASE_TEXTURE(int textureId) { invoke<Void>(0x025476E0, textureId); } // 0x6BEFAA907B076859 b1207
	static void _UPDATE_PED_TEXTURE(int textureId) { invoke<Void>(0x02547730, textureId); } // 0x92DAABA2C1C10B0E b1207
	static void _RESET_PED_TEXTURE(int textureId) { invoke<Void>(0x02547780, textureId); } // 0x8472A1789478F82F b1207
	static BOOL _IS_TEXTURE_VALID(int textureId) { return invoke<BOOL>(0x02547790, textureId); } // 0x31DC8D3F216D8509 b1207
	static int _ADD_TEXTURE_LAYER(int textureId, Hash albedoHash, Hash normalHash, Hash materialHash, int blendType, float texAlpha, int sheetGridIndex) { return invoke<int>(0x02547800, textureId, albedoHash, normalHash, materialHash, blendType, texAlpha, sheetGridIndex); } // 0x86BB5FF45F193A02 b1207
	static void _REMOVE_PED_OVERLAY(int textureId, int overlayId) { invoke<Void>(0x025478A0, textureId, overlayId); } // 0x96C349DE04C49011 b1207
	static void _SET_TEXTURE_LAYER_SHEET_GRID_INDEX(int textureId, int layerId, int sheetGridIndex) { invoke<Void>(0x02547900, textureId, layerId, sheetGridIndex); } // 0x3329AAE2882FC8E4 b1207
	static void _SET_TEXTURE_LAYER_ALPHA(int textureId, int layerId, float texAlpha) { invoke<Void>(0x02547980, textureId, layerId, texAlpha); } // 0x6C76BC24F8BB709A b1207
	static void _SET_TEXTURE_LAYER_ROUGHNESS(int textureId, int layerId, float texRough) { invoke<Void>(0x02547A00, textureId, layerId, texRough); } // 0x057C4F092E2298BE b1207
	static void _SET_TEXTURE_LAYER_PALLETE(int textureId, int layerId, Hash paletteHash) { invoke<Void>(0x02547A80, textureId, layerId, paletteHash); } // 0x1ED8588524AC9BE1 b1207
	static void _SET_TEXTURE_LAYER_TINT(int textureId, int layerId, int tint0, int tint1, int tint2) { invoke<Void>(0x02547C40, textureId, layerId, tint0, tint1, tint2); } // 0x2DF59FFE6FFD6044 b1207
	static void _SET_TEXTURE_LAYER_MOD(int textureId, int layerId, Hash modTextureHash, float modAlpha, int modChannel) { invoke<Void>(0x02547CD0, textureId, layerId, modTextureHash, modAlpha, modChannel); } // 0xF2EA041F1146D75B b1207
	static void _SET_TEXTURE_LAYER_TEXTURE_MAP(int textureId, int layerId, Hash albedoHash, Hash normalHash, Hash materialHash) { invoke<Void>(0x02547D50, textureId, layerId, albedoHash, normalHash, materialHash); } // 0x253A63B5BADBC398 b1207
	static void _RESET_PED_TEXTURE_2(int textureId) { invoke<Void>(0x02547DF0, textureId); } // 0xB63B9178D0F58D82 b1207
	static void _0xC991EF46FE323867(Ped ped, Any p1) { invoke<Void>(0x02547E80, ped, p1); } // 0xC991EF46FE323867 b1207
	static void _0x1F8215D0E446F593(Any p0, Any p1, Any p2) { invoke<Void>(0x02547F10, p0, p1, p2); } // 0x1F8215D0E446F593 b1207
	static BOOL IS_LOCATION_SPAWN_SAFE(Ped ped, float p1) { return invoke<BOOL>(0x02548020, ped, p1); } // 0xFB1E7998B8595825 b1207
	static void _0x53BA7D96B9A421D9(Any p0, Any p1) { invoke<Void>(0x02548290, p0, p1); } // 0x53BA7D96B9A421D9 b1207
	static void _0x96C7B659854DE629(Any p0, Any p1) { invoke<Void>(0x02548410, p0, p1); } // 0x96C7B659854DE629 b1207
	static void SET_HORSE_AVOIDANCE_LEVEL(Ped horse, int avoidanceLevel) { invoke<Void>(0x025485D0, horse, avoidanceLevel); } // 0xDDCF6FEA5D7ACC17 b1207
	static void RESET_HORSE_AVOIDANCE_LEVEL_TO_DEFAULT(Ped horse) { invoke<Void>(0x025486F0, horse); } // 0x2A5AFD2B8381A6E1 b1207
	static Any _SET_PED_USE_HORSE_MAP_COLLISION(Ped ped, BOOL toggle) { return invoke<Any>(0x025487E0, ped, toggle); } // 0xEB72453B6F5B45B0 b1232
	static void _0x5B73975B4F12F7F3(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x025488B0, p0, p1, p2, p3, p4); } // 0x5B73975B4F12F7F3 b1207
	static BOOL GET_META_PED_ASSET_GUIDS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0x02548980, p0, p1, p2, p3, p4, p5); } // 0xA9C28516A6DC9D56 b1207
	static BOOL GET_META_PED_ASSET_TINT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0x02548BB0, p0, p1, p2, p3, p4, p5); } // 0xE7998FEC53A33BBE b1207
	static void _SET_PED_BLACKBOARD_INT(Ped ped, const char* variableName, int value, int removeTimer) { invoke<Void>(0x02548DB0, ped, variableName, value, removeTimer); } // 0x5F53010C4C3F6BAF b1207
	static void _SET_PED_BLACKBOARD_BOOL(Ped ped, const char* variableName, BOOL value, int removeTimer) { invoke<Void>(0x02548DD0, ped, variableName, value, removeTimer); } // 0xCB9401F918CB0F75 b1207
	static void _SET_PED_BLACKBOARD_FLOAT(Ped ped, const char* variableName, float value, int removeTimer) { invoke<Void>(0x02548DF0, ped, variableName, value, removeTimer); } // 0x437C08DB4FEBE2BD b1207
	static void _SET_PED_BLACKBOARD_HASH(Ped ped, const char* variableName, const char* value, int removeTimer) { invoke<Void>(0x02548E10, ped, variableName, value, removeTimer); } // 0xA762C9D6CF165E0D b1207
	static void _REMOVE_PED_BLACKBOARD_INT(Ped ped, const char* variableName) { invoke<Void>(0x02548E30, ped, variableName); } // 0x81B75428A7813E67 b1207
	static void _REMOVE_PED_BLACKBOARD_BOOL(Ped ped, const char* variableName) { invoke<Void>(0x02548E40, ped, variableName); } // 0xA6F67BEC53379A32 b1207
	static void _REMOVE_PED_BLACKBOARD_FLOAT(Ped ped, const char* variableName) { invoke<Void>(0x02548E50, ped, variableName); } // 0x411189E51B8020BA b1207
	static void _REMOVE_PED_BLACKBOARD_HASH(Ped ped, const char* variableName) { invoke<Void>(0x02548E60, ped, variableName); } // 0x0E17378642156790 b1207
	static BOOL _GET_PED_BLACKBOARD_BOOL(Ped ped, const char* variableName) { return invoke<BOOL>(0x02548E70, ped, variableName); } // 0x498F2E77982D6945 b1207
	static float _GET_PED_BLACKBOARD_FLOAT(Ped ped, const char* variableName) { return invoke<float>(0x02548EA0, ped, variableName); } // 0x56E58D4D118FB45E b1207
	static Hash _GET_PED_BLACKBOARD_HASH(Ped ped, const char* variableName) { return invoke<Hash>(0x02548ED0, ped, variableName); } // 0xBF5E791BBBF90A3C b1207
	static int GET_PED_BLACKBOARD_SCRIPT_INT(Ped ped, const char* variableName) { return invoke<int>(0x02548F00, ped, variableName); } // 0xB71B91B398F8F067 b1207
	static BOOL GET_PED_BLACKBOARD_SCRIPT_BOOL(Ped ped, const char* variableName) { return invoke<BOOL>(0x02548F30, ped, variableName); } // 0x4912DFE492DB98CD b1207
	static float GET_PED_BLACKBOARD_SCRIPT_FLOAT(Ped ped, const char* variableName) { return invoke<float>(0x02548F60, ped, variableName); } // 0xA29FD00D45311EB7 b1207
	static void _0x7FF72DE061DF55E2(Any p0, Any p1, Any p2) { invoke<Void>(0x02548F90, p0, p1, p2); } // 0x7FF72DE061DF55E2 b1207
	static Any _0xA31D350D66FA1855(Any p0) { return invoke<Any>(0x02549060, p0); } // 0xA31D350D66FA1855 b1207
	static BOOL _IS_USING_SLIPSTREAM(Ped ped) { return invoke<BOOL>(0x02549160, ped); } // 0xAF61B3CD8C3B82C3 b1207
	static void _0xEEDC9B29314B2733(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0x02549250, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xEEDC9B29314B2733 b1207
	static void _0x5C90E20C25E6D83C(Any p0) { invoke<Void>(0x02549400, p0); } // 0x5C90E20C25E6D83C b1207
	static void _0x10F96086123B939F(Any p0, Any p1, Any p2) { invoke<Void>(0x025494F0, p0, p1, p2); } // 0x10F96086123B939F b1207
	static void _0x3FDBB99EFD8CE4AF(Any p0, Any p1, Any p2) { invoke<Void>(0x02549510, p0, p1, p2); } // 0x3FDBB99EFD8CE4AF b1207
	static void _0x7E8F9949B7AABBF0(Any p0, Any p1, Any p2) { invoke<Void>(0x02549730, p0, p1, p2); } // 0x7E8F9949B7AABBF0 b1207
	static Any _0x5DA36CCCB63C0895(Any p0, Any p1, Any p2) { return invoke<Any>(0x02549950, p0, p1, p2); } // 0x5DA36CCCB63C0895 b1207
	static void _0x56076667E7C2DCD6(Any p0, Any p1) { invoke<Void>(0x02549A80, p0, p1); } // 0x56076667E7C2DCD6 b1311
	static void _APPLY_SHOP_ITEM_TO_PED(Ped ped, Hash componentHash, BOOL immediately, BOOL isMp, BOOL p4) { invoke<Void>(0x02549BD0, ped, componentHash, immediately, isMp, p4); } // 0xD3A7B003ED343FD9 b1207
	static void _0x0D7FFA1B2F69ED82(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02549D00, p0, p1, p2, p3); } // 0x0D7FFA1B2F69ED82 b1355
	static void REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(Ped ped, Hash componentCategory, int p2, BOOL p3) { invoke<Void>(0x02549E90, ped, componentCategory, p2, p3); } // 0xDF631E4BCE1B1FC4 b1207
	static void _UPDATE_SHOP_ITEM_WEARABLE_STATE(Ped ped, Hash componentHash, Hash wearableState, int p3, BOOL p4, int p5) { invoke<Void>(0x0254A020, ped, componentHash, wearableState, p3, p4, p5); } // 0x66B957AAC2EAAEAB b1207
	static Hash _GET_PED_COMPONENT_AT_INDEX(Ped ped, int index, BOOL p2, Any* argStruct, Any* argStruct2) { return invoke<Hash>(0x0254A1D0, ped, index, p2, argStruct, argStruct2); } // 0x77BA37622E22023B b1207
	static Any _0xFFCC2DB2D9953401(Any p0, Any p1, Any p2) { return invoke<Any>(0x0254A3D0, p0, p1, p2); } // 0xFFCC2DB2D9953401 b1207
	static Any _0x6243635AF2F1B826(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x0254A420, p0, p1, p2, p3); } // 0x6243635AF2F1B826 b1207
	static Hash _GET_PED_COMPONENT_CATEGORY(Hash componentHash, int metapedType, BOOL isMP) { return invoke<Hash>(0x0254A4E0, componentHash, metapedType, isMP); } // 0x5FF9A878C3D115B8 b1207
	static Any _0x31B2E7F2E3C58B89(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x0254A530, p0, p1, p2, p3); } // 0x31B2E7F2E3C58B89 b1207
	static Any _0x63342C50EC115CE8(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { return invoke<Any>(0x0254A640, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0x63342C50EC115CE8 b1207
	static Any _0xAAB86462966168CE(Ped ped, Any p1) { return invoke<Any>(0x0254A6A0, ped, p1); } // 0xAAB86462966168CE b1207
	static Any _0x7E02E4218D916B94(Any p0, Any p1, Any p2) { return invoke<Any>(0x0254A770, p0, p1, p2); } // 0x7E02E4218D916B94 b1207
	static void _0x59BD177A1A48600A(Any p0, Any p1) { invoke<Void>(0x0254A8A0, p0, p1); } // 0x59BD177A1A48600A b1207
	static void _0xD103F6DBB5442BE8(Any p0, Any p1) { invoke<Void>(0x0254A970, p0, p1); } // 0xD103F6DBB5442BE8 b1207
	static void _SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(Ped ped, Hash gxtEntryHash) { invoke<Void>(0x0254AA70, ped, gxtEntryHash); } // 0xFCA8FB9E15FA80D3 b1207
	static void _SET_PED_PROMPT_NAME(Ped ped, const char* name) { invoke<Void>(0x0254AB70, ped, name); } // 0x4A48B6E03BABB4AC b1207
	static void _0xC2745D9261664901(Any p0, Any p1) { invoke<Void>(0x0254AB80, p0, p1); } // 0xC2745D9261664901 b1207
	static void _0x19B14E04B009E28B(Any p0, Any p1) { invoke<Void>(0x0254AC70, p0, p1); } // 0x19B14E04B009E28B b1207
	static void _0xF917F92BF22ECBAB(Any p0) { invoke<Void>(0x0254AC80, p0); } // 0xF917F92BF22ECBAB b1207
	static void _0x49DADFC4CD808B0A(Any p0, Any p1, Any p2) { invoke<Void>(0x0254AD70, p0, p1, p2); } // 0x49DADFC4CD808B0A b1207
	static Any _0xBA208A8D6399A3AC(Any p0, Any p1) { return invoke<Any>(0x0254AF20, p0, p1); } // 0xBA208A8D6399A3AC b1207
	static void _0x704C908E9C405136(Ped ped) { invoke<Void>(0x0254B030, ped); } // 0x704C908E9C405136 b1207
	static void _0x7406C71F4AC2FFCC(Any p0) { invoke<Void>(0x0254B0E0, p0); } // 0x7406C71F4AC2FFCC b1207
	static void _0x28508173C6A7CC18(Any p0) { invoke<Void>(0x0254B0F0, p0); } // 0x28508173C6A7CC18 b1311
	static Any _0x52250B92EA70BE3D(Any p0) { return invoke<Any>(0x0254B100, p0); } // 0x52250B92EA70BE3D b1207
	static void _SET_PED_QUALITY(Ped ped, int quality) { invoke<Void>(0x0254B1F0, ped, quality); } // 0xCE6B874286D640BB b1207
	static int _GET_PED_QUALITY(Ped ped) { return invoke<int>(0x0254B360, ped); } // 0x7BCC6087D130312A b1207
	static void _0xCE7A6C1D5CDE1F9D(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x0254B450, p0, p1, p2, p3); } // 0xCE7A6C1D5CDE1F9D b1207
	static void _0x604E1010E3162E86(Any p0, Any p1, Any p2) { invoke<Void>(0x0254B470, p0, p1, p2); } // 0x604E1010E3162E86 b1207
	static void _0xE8ABE3B73FC7FE17(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x0254B490, p0, p1, p2, p3); } // 0xE8ABE3B73FC7FE17 b1207
	static void _REMOVE_PED_PROP(Ped ped, const char* p1) { invoke<Void>(0x0254B4B0, ped, p1); } // 0x3A50753042B6891B b1207
	static void _SET_TOTAL_PED_DAMAGE_FALLOFF_BONUS(Ped ped, float bonus) { invoke<Void>(0x0254B5F0, ped, bonus); } // 0x932786CE3C76477C b1207
	static Any _0x095C2277FED731DB(Any p0) { return invoke<Any>(0x0254B710, p0); } // 0x095C2277FED731DB b1207
	static void _0x09171A6F8FDE5DC1(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x0254B800, p0, p1, p2, p3, p4); } // 0x09171A6F8FDE5DC1 b1207
	static void _0x09E378C52B1433B5(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x0254B820, p0, p1, p2, p3, p4); } // 0x09E378C52B1433B5 b1207
	static Any _0x6507AC3BD7C99009(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x0254B840, p0, p1, p2, p3); } // 0x6507AC3BD7C99009 b1207
	static Any _0x2942457417A5FD24(Any p0) { return invoke<Any>(0x0254B890, p0); } // 0x2942457417A5FD24 b1207
	static void _SET_PED_TRAIL_EFFECT(Ped ped, BOOL p1, float duration) { invoke<Void>(0x0254BB50, ped, p1, duration); } // 0xA5950E16B8F31052 b1207
	static BOOL _0xEBAAC9A750E7563B(Ped ped) { return invoke<BOOL>(0x0254BB70, ped); } // 0xEBAAC9A750E7563B b1207
	static void _0x992187D975635DF5(Any p0, Any p1) { invoke<Void>(0x0254BC60, p0, p1); } // 0x992187D975635DF5 b1311
	static void _0x0B787A37EEDD226F(Any p0, Any p1) { invoke<Void>(0x0254BD50, p0, p1); } // 0x0B787A37EEDD226F b1311
}

namespace PERSCHAR
{
	static void _0x63AA2B8EB087886A(Any p0, Any p1) { invoke<Void>(0x02554690, p0, p1); } // 0x63AA2B8EB087886A b1207
	static Any _0xA00DF706C60173D1(Any p0) { return invoke<Any>(0x025546F0, p0); } // 0xA00DF706C60173D1 b1207
	static void _0x8BC555034A5A5E8C(Any p0, Any p1) { invoke<Void>(0x02554750, p0, p1); } // 0x8BC555034A5A5E8C b1207
	static void _0x70605812ABC9FF0F(Any p0, Any p1) { invoke<Void>(0x025548A0, p0, p1); } // 0x70605812ABC9FF0F b1207
	static Any _0xDC9655D47DEC0353(Any p0) { return invoke<Any>(0x025549B0, p0); } // 0xDC9655D47DEC0353 b1207
	static void _0x2DF89CD2ED1D0BDE(Any p0, Any p1) { invoke<Void>(0x02554A10, p0, p1); } // 0x2DF89CD2ED1D0BDE b1207
	static void _0x535A66AAD2BF68F9(Any p0, Any p1) { invoke<Void>(0x02554AA0, p0, p1); } // 0x535A66AAD2BF68F9 b1207
	static Any _0xCEB40B678E403759(Any p0) { return invoke<Any>(0x02554B30, p0); } // 0xCEB40B678E403759 b1207
	static void _0x187D65F3AEC5D679(Any p0, Any p1) { invoke<Void>(0x02554C10, p0, p1); } // 0x187D65F3AEC5D679 b1207
	static void _0x8B44273A92CD406C(Any p0) { invoke<Void>(0x02554CD0, p0); } // 0x8B44273A92CD406C b1207
	static void _0xE0E65E0D261F7507(Any p0) { invoke<Void>(0x02554D60, p0); } // 0xE0E65E0D261F7507 b1207
	static Any _0x112DDF56300BC6E5(Any p0) { return invoke<Any>(0x02554D70, p0); } // 0x112DDF56300BC6E5 b1207
	static PersChar _CREATE_PERSISTENT_CHARACTER(Hash hash) { return invoke<PersChar>(0x02554E40, hash); } // 0x4F76E3676583D951 b1207
	static BOOL _IS_PERSISTENT_CHARACTER_VALID(PersChar persChar) { return invoke<BOOL>(0x02554E60, persChar); } // 0x800DF3FC913355F3 b1207
	static void _DELETE_PERSCHAR(PersChar persChar) { invoke<Void>(0x02554F00, persChar); } // 0xFC77C5B44D5FF7C0 b1207
	static Vector3 _0x5EE6FCCC9C832CA2(Any p0) { return invoke<Vector3>(0x02554F40, p0); } // 0x5EE6FCCC9C832CA2 b1207
	static void _0x59C7AD6FEA2AC449(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02555010, p0, p1, p2, p3); } // 0x59C7AD6FEA2AC449 b1207
	static void _0xBB68908CD11AEBDC(Any p0) { invoke<Void>(0x02555250, p0); } // 0xBB68908CD11AEBDC b1207
	static Vector3 _0x94995829ED15A598(Any p0) { return invoke<Vector3>(0x02555310, p0); } // 0x94995829ED15A598 b1207
	static Ped _GET_PESCHAR_PED_INDEX(PersChar persChar) { return invoke<Ped>(0x025553F0, persChar); } // 0x31C70A716CAE1FEE b1207
	static Any _0x32A1E3B83D501096(Any p0) { return invoke<Any>(0x025554B0, p0); } // 0x32A1E3B83D501096 b1207
	static Any _0xF8DE7154F7D1458F(Any p0) { return invoke<Any>(0x025555F0, p0); } // 0xF8DE7154F7D1458F b1207
	static void _0x669C25840C6F7AE2(Any p0, Any p1) { invoke<Void>(0x025556B0, p0, p1); } // 0x669C25840C6F7AE2 b1207
	static void _0x631CD2D77FDC0316(Any p0) { invoke<Void>(0x025557D0, p0); } // 0x631CD2D77FDC0316 b1207
	static void _0x0B3A99AB6713AA52(Any p0) { invoke<Void>(0x025557E0, p0); } // 0x0B3A99AB6713AA52 b1207
	static BOOL _IS_PERSISTENT_CHARACTER_DEAD(PersChar persChar) { return invoke<BOOL>(0x02555900, persChar); } // 0xEB98B38CA60742D7 b1207
	static Any _0x49A8C2CD97815215(Any p0) { return invoke<Any>(0x025559B0, p0); } // 0x49A8C2CD97815215 b1207
	static void _0xD4B614179BCD0654(Any p0) { invoke<Void>(0x02555A90, p0); } // 0xD4B614179BCD0654 b1207
	static void _0x406808610220405B(Any p0) { invoke<Void>(0x02555B30, p0); } // 0x406808610220405B b1207
	static void _0xA2B18FF8D39F6D87(Any p0) { invoke<Void>(0x02555BE0, p0); } // 0xA2B18FF8D39F6D87 b1207
	static Any _0xE4C51A8A3BD1664C(Any p0) { return invoke<Any>(0x02555C80, p0); } // 0xE4C51A8A3BD1664C b1207
	static void _0x8AE4EFA464DAE42D(Any p0, Any p1) { invoke<Void>(0x02555D50, p0, p1); } // 0x8AE4EFA464DAE42D b1207
	static void _0xA4DCB3F0DD7488BD(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x02555E40, p0, p1, p2, p3, p4); } // 0xA4DCB3F0DD7488BD b1207
	static void _0xD95D777F828B2BBB(Any p0) { invoke<Void>(0x02555F20, p0); } // 0xD95D777F828B2BBB b1207
	static void _0x92690B0822493CE0() { invoke<Void>(0x02555FF0); } // 0x92690B0822493CE0 b1207
	static void _0xEFC5C6670E0B99BA() { invoke<Void>(0x02556070); } // 0xEFC5C6670E0B99BA b1207
	static void _0x2E957AA81F2C61C9() { invoke<Void>(0x02556080); } // 0x2E957AA81F2C61C9 b1207
	static void _0xB173599D61FAEB31() { invoke<Void>(0x02556090); } // 0xB173599D61FAEB31 b1207
	static Any _0x08FC896D2CB31FCC(Any p0, Any p1) { return invoke<Any>(0x025560F0, p0, p1); } // 0x08FC896D2CB31FCC b1207
	static Any _0x0CADC3A977997472(Any p0, Any p1) { return invoke<Any>(0x02556240, p0, p1); } // 0x0CADC3A977997472 b1207
	static void _0x7B204F88F6C3D287(Any p0) { invoke<Void>(0x02556270, p0); } // 0x7B204F88F6C3D287 b1207
	static void _0xFCC6DB8DBE709BC8(Any p0) { invoke<Void>(0x02556360, p0); } // 0xFCC6DB8DBE709BC8 b1207
	static void _0xA8C406C2A56EDC16(Any p0) { invoke<Void>(0x02556400, p0); } // 0xA8C406C2A56EDC16 b1207
	static void _0x4F81EAD1DE8FA19B(Any p0) { invoke<Void>(0x025564A0, p0); } // 0x4F81EAD1DE8FA19B b1207
	static void _0x6759BEE6762E140B(Any p0) { invoke<Void>(0x02556550, p0); } // 0x6759BEE6762E140B b1207
	static void _0xB65E7F733956CF25(Any p0) { invoke<Void>(0x025565F0, p0); } // 0xB65E7F733956CF25 b1207
	static Any _0x4AFC7288C77238B3(Any p0) { return invoke<Any>(0x02556690, p0); } // 0x4AFC7288C77238B3 b1207
	static Any _0xA8120EBEAF290C7A(Any p0) { return invoke<Any>(0x02556770, p0); } // 0xA8120EBEAF290C7A b1207
	static Any _0x69786495C92A3044(Any p0) { return invoke<Any>(0x02556830, p0); } // 0x69786495C92A3044 b1207
	static Any _0xEC254C2C9B0F08F1(Any p0, Any p1) { return invoke<Any>(0x025568F0, p0, p1); } // 0xEC254C2C9B0F08F1 b1207
	static Any _0x9C7F95946E304778(Any p0, Any p1) { return invoke<Any>(0x025569D0, p0, p1); } // 0x9C7F95946E304778 b1207
}

namespace PERSISTENCE
{
	static void _0x7A1BD123E5CDB6E5() { invoke<Void>(0x02559C90); } // 0x7A1BD123E5CDB6E5 b1207
	static void PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA(float x, float y, float z, float radius) { invoke<Void>(0x02559CC0, x, y, z, radius); } // 0x9D16896F0DBE78A2 b1207
	static void _0x065887B694359799(Any p0) { invoke<Void>(0x02559D30, p0); } // 0x065887B694359799 b1207
	static void _0xFC9806DA9A460093(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x02559DE0, p0, p1, p2, p3, p4, p5); } // 0xFC9806DA9A460093 b1207
	static void _0xB03140014ACA6C40(Any p0, Any p1) { invoke<Void>(0x02559E70, p0, p1); } // 0xB03140014ACA6C40 b1207
	static void _0xE225CEF1901F6108(Any p0, Any p1) { invoke<Void>(0x02559E80, p0, p1); } // 0xE225CEF1901F6108 b1207
	static void _0x8DE104BEC243A73B(Any p0) { invoke<Void>(0x02559F50, p0); } // 0x8DE104BEC243A73B b1207
	static void _0xEFB5F34CC0953B27(Any p0) { invoke<Void>(0x02559F70, p0); } // 0xEFB5F34CC0953B27 b1207
	static Any _0xBA2C49EA6A8D24FF(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0x0255A010, p0, p1, p2, p3, p4, p5, p6); } // 0xBA2C49EA6A8D24FF b1207
	static Any _0x2E545965DF98D476(Any p0) { return invoke<Any>(0x0255A050, p0); } // 0x2E545965DF98D476 b1207
	static void _0xF5622FA6ACFCA7DB(Any p0, Any p1) { invoke<Void>(0x0255A1A0, p0, p1); } // 0xF5622FA6ACFCA7DB b1207
	static void _0x3CA5E58C9731A16B(Any p0, Any p1) { invoke<Void>(0x0255A270, p0, p1); } // 0x3CA5E58C9731A16B b1207
	static void _0xDC0A1F0ECEC9F0C0(Any p0, Any p1) { invoke<Void>(0x0255A340, p0, p1); } // 0xDC0A1F0ECEC9F0C0 b1207
	static Any _0x5A79220F6D38D7C3(Any p0) { return invoke<Any>(0x0255A410, p0); } // 0x5A79220F6D38D7C3 b1207
	static Any _0xCFDA2518F322D836(Any p0) { return invoke<Any>(0x0255A500, p0); } // 0xCFDA2518F322D836 b1207
	static Any _0x1F56FB3FDB4EAF65(Any p0) { return invoke<Any>(0x0255A600, p0); } // 0x1F56FB3FDB4EAF65 b1207
	static void _0x291CC21D1FB6790E(Any p0) { invoke<Void>(0x0255A650, p0); } // 0x291CC21D1FB6790E b1207
	static void PERSISTENCE_ADD_SCENARIO_LOOTED(int scenario) { invoke<Void>(0x0255A6F0, scenario); } // 0x8245C1F3262F4AC2 b1207
	static BOOL _PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED(int scenario) { return invoke<BOOL>(0x0255A7C0, scenario); } // 0xFB7CF1DE938A3E22 b1207
	static Any _0xB6E1A185C2B9319A(Any p0, Any p1, Any p2) { return invoke<Any>(0x0255A8A0, p0, p1, p2); } // 0xB6E1A185C2B9319A b1207
	static Any _0x188313616D184213(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x0255A8F0, p0, p1, p2, p3); } // 0x188313616D184213 b1207
	static void _0x66DAA3A9274E8E82() { invoke<Void>(0x0255A940); } // 0x66DAA3A9274E8E82 b1232
}

namespace PHYSICS
{
	static int ADD_ROPE(float x, float y, float z, float rotX, float rotY, float rotZ, float length, int ropeType, float maxLength, float minLength, float p10, BOOL p11, BOOL p12, BOOL rigid, float p14, BOOL breakWhenShot, Any* unkPtr, BOOL p17) { return invoke<int>(0x02569BF0, x, y, z, rotX, rotY, rotZ, length, ropeType, maxLength, minLength, p10, p11, p12, rigid, p14, breakWhenShot, unkPtr, p17); } // 0xE832D760399EB220 0xA592EC74 b1207
	static int _ADD_ROPE_2(float x, float y, float z, float rotX, float rotY, float rotZ, float length, int ropeType, BOOL isNetworked, int p9, float p10) { return invoke<int>(0x02569C80, x, y, z, rotX, rotY, rotZ, length, ropeType, isNetworked, p9, p10); } // 0xE9C59F6809373A99 b1207
	static void DELETE_ROPE(int* ropeId) { invoke<Void>(0x02569CC0, ropeId); } // 0x52B4829281364649 0x748D72AF b1207
	static void _0x6076213101A47B3B(Any p0) { invoke<Void>(0x02569CD0, p0); } // 0x6076213101A47B3B b1207
	static void DELETE_CHILD_ROPE(int ropeId) { invoke<Void>(0x02569D10, ropeId); } // 0xAA5D6B1888E4DB20 0xB19B4706 b1207
	static void _0x4CFA2B7FAE115ECB(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x02569D70, p0, p1, p2, p3, p4, p5, p6); } // 0x4CFA2B7FAE115ECB b1207
	static BOOL DOES_ROPE_EXIST(int ropeId) { return invoke<BOOL>(0x02569DA0, ropeId); } // 0xFD5448BE3111ED96 0x66E4A3AC b1207
	static Any _0x79C2BEC82CFD7F7F(Any p0) { return invoke<Any>(0x02569E00, p0); } // 0x79C2BEC82CFD7F7F b1207
	static void _0x7A54D82227A139DB(int* ropeId, Any p1) { invoke<Void>(0x02569E50, ropeId, p1); } // 0x7A54D82227A139DB b1207
	static void ROPE_DRAW_SHADOW_ENABLED(int* ropeId, BOOL toggle) { invoke<Void>(0x02569EC0, ropeId, toggle); } // 0xF159A63806BB5BA8 0x51523B8C b1207
	static int GET_ROPE_VERTEX_COUNT(int ropeId) { return invoke<int>(0x02569F30, ropeId); } // 0x3655F544CD30F0B5 0x5131CD2C b1207
	static void _0xE54BF2CE6C7D23A9(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x02569F90, p0, p1, p2, p3, p4); } // 0xE54BF2CE6C7D23A9 b1207
	static void _0x9C24846D0A4A2776(Any p0) { invoke<Void>(0x0256A030, p0); } // 0x9C24846D0A4A2776 b1207
	static void _0x0CB16D05E03FB525(Any p0) { invoke<Void>(0x0256A070, p0); } // 0x0CB16D05E03FB525 b1207
	static void _0xF27F1A8DE4F50A1B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x0256A0B0, p0, p1, p2, p3, p4, p5, p6); } // 0xF27F1A8DE4F50A1B b1207
	static void _0x21D0890D88DFB0B0(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoke<Void>(0x0256A140, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x21D0890D88DFB0B0 b1207
	static void ATTACH_ENTITIES_TO_ROPE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16, Any p17, Any p18, Any p19, Any p20) { invoke<Void>(0x0256A340, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20); } // 0x3D95EC8B6D940AC3 0x7508668F b1207
	static void _ATTACH_ENTITIES_TO_ROPE_2(int ropeId, Entity entity1, Entity entity2, float ent1X, float ent1Y, float ent1Z, float ent2X, float ent2Y, float ent2Z, const char* boneName1, const char* boneName2) { invoke<Void>(0x0256A3F0, ropeId, entity1, entity2, ent1X, ent1Y, ent1Z, ent2X, ent2Y, ent2Z, boneName1, boneName2); } // 0x462FF2A432733A44 b1207
	static void _0xE9CD9A67834985A7(int ropeId, Entity entity1, Entity entity2, float p3, float p4, float p5, float p6, float p7, float p8, Any p9, Any p10) { invoke<Void>(0x0256A430, ropeId, entity1, entity2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0xE9CD9A67834985A7 b1207
	static void _0x69C810B72291D831(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x0256A470, p0, p1, p2, p3, p4, p5, p6); } // 0x69C810B72291D831 b1207
	static void _0xB7469CB9AC3C0FD4(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x0256A550, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xB7469CB9AC3C0FD4 b1207
	static void _0xC64E7A62632AD2FE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x0256A570, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xC64E7A62632AD2FE b1207
	static Any _0x9B4F7E3E4F9C77B3(Any p0, Any p1) { return invoke<Any>(0x0256A5A0, p0, p1); } // 0x9B4F7E3E4F9C77B3 b1207
	static void DETACH_ROPE_FROM_ENTITY(int ropeId, Entity entity) { invoke<Void>(0x0256A6E0, ropeId, entity); } // 0xBCF3026912A8647D 0x3E720BEE b1207
	static void _0x06AADE17334F7A40(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x0256A6F0, p0, p1, p2, p3); } // 0x06AADE17334F7A40 b1207
	static void _0x0348469DAA17576C(Any p0) { invoke<Void>(0x0256A700, p0); } // 0x0348469DAA17576C b1207
	static void _0x6EA0E93CFFA472CC(Any p0) { invoke<Void>(0x0256A710, p0); } // 0x6EA0E93CFFA472CC b1207
	static void _0xBDDA142759307528(Any p0) { invoke<Void>(0x0256A720, p0); } // 0xBDDA142759307528 b1207
	static void _0x32F4DBFDFCCCC735(Any p0, Any p1, Any p2) { invoke<Void>(0x0256A730, p0, p1, p2); } // 0x32F4DBFDFCCCC735 b1207
	static void _0xF8CA39D5C0D1D9A1(Any p0, Any p1) { invoke<Void>(0x0256A750, p0, p1); } // 0xF8CA39D5C0D1D9A1 b1207
	static void _0xEAF529446488EB18(Any p0) { invoke<Void>(0x0256A770, p0); } // 0xEAF529446488EB18 b1207
	static void _0x31160EC47E7C9549(Any p0, Any p1) { invoke<Void>(0x0256A830, p0, p1); } // 0x31160EC47E7C9549 b1207
	static void _0x5E981C764DF33117(Any p0, Any p1) { invoke<Void>(0x0256A900, p0, p1); } // 0x5E981C764DF33117 b1207
	static void ROPE_SET_UPDATE_ORDER(int ropeId, Any p1) { invoke<Void>(0x0256AA90, ropeId, p1); } // 0xDC57A637A20006ED 0x80DB77A7 b1207
	static void _0xFB9153A54AC713E8(Any p0, Any p1) { invoke<Void>(0x0256AAF0, p0, p1); } // 0xFB9153A54AC713E8 b1207
	static void _0xD699E688B49C0FD2(int ropeId, float p1, Any p2, Any p3, Any p4) { invoke<Void>(0x0256AB60, ropeId, p1, p2, p3, p4); } // 0xD699E688B49C0FD2 b1207
	static void _0xBB3E9B073E66C3C9(int ropeId, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x0256ABD0, ropeId, p1, p2, p3, p4); } // 0xBB3E9B073E66C3C9 b1207
	static void _0x522FA3F490E2F7AC(int ropeId, Any p1, Any p2) { invoke<Void>(0x0256ADC0, ropeId, p1, p2); } // 0x522FA3F490E2F7AC b1207
	static void _0x3900491C0D61ED4B(Any p0, Any p1) { invoke<Void>(0x0256AE80, p0, p1); } // 0x3900491C0D61ED4B b1207
	static void _0xC89E7410A93AC19A(int ropeId, float p1) { invoke<Void>(0x0256AF00, ropeId, p1); } // 0xC89E7410A93AC19A b1207
	static void _0x1D97DA8ACB5D2582(int ropeId, int p1) { invoke<Void>(0x0256AF60, ropeId, p1); } // 0x1D97DA8ACB5D2582 b1207
	static void _0x3C6490D940FF5D0B(int ropeId, Any p1, const char* p2, float length, BOOL p4) { invoke<Void>(0x0256AFC0, ropeId, p1, p2, length, p4); } // 0x3C6490D940FF5D0B b1207
	static Vector3 GET_ROPE_LAST_VERTEX_COORD(int ropeId) { return invoke<Vector3>(0x0256AFF0, ropeId); } // 0x21BB0FBD3E217C2D 0x91F6848B b1207
	static Vector3 GET_ROPE_VERTEX_COORD(int ropeId, int vertex) { return invoke<Vector3>(0x0256B070, ropeId, vertex); } // 0xEA61CA8E80F09E4D 0x84374452 b1207
	static void START_ROPE_WINDING(int ropeId) { invoke<Void>(0x0256B0E0, ropeId); } // 0x1461C72C889E343E 0x5187BED3 b1207
	static void STOP_ROPE_WINDING(int ropeId) { invoke<Void>(0x0256B160, ropeId); } // 0xCB2D4AB84A19AA7C 0x46826B53 b1207
	static void START_ROPE_UNWINDING_FRONT(int ropeId) { invoke<Void>(0x0256B1C0, ropeId); } // 0x538D1179EC1AA9A9 0xFC0DB4C3 b1207
	static void STOP_ROPE_UNWINDING_FRONT(int ropeId) { invoke<Void>(0x0256B220, ropeId); } // 0xFFF3A50779EFBBB3 0x2EEDB18F b1207
	static void _0x00F611A794A3C36E(Any p0) { invoke<Void>(0x0256B280, p0); } // 0x00F611A794A3C36E b1207
	static void _0x10DAA76CB8A201A1(Any p0) { invoke<Void>(0x0256B2E0, p0); } // 0x10DAA76CB8A201A1 b1207
	static void _0x461FCBDEB4D06717(Any p0, Any p1) { invoke<Void>(0x0256B340, p0, p1); } // 0x461FCBDEB4D06717 b1207
	static void _0x423C6B1F3786D28B(Any p0, Any p1) { invoke<Void>(0x0256B3A0, p0, p1); } // 0x423C6B1F3786D28B b1207
	static void _0x76BAD9D538BCA1AA(int ropeId, float p1) { invoke<Void>(0x0256B410, ropeId, p1); } // 0x76BAD9D538BCA1AA b1207
	static void _0xB40EA9E0D2E2F7F3(int ropeId, float p1) { invoke<Void>(0x0256B4C0, ropeId, p1); } // 0xB40EA9E0D2E2F7F3 b1207
	static Any _0x3D69537039F8D824(Any p0) { return invoke<Any>(0x0256B570, p0); } // 0x3D69537039F8D824 b1207
	static void _0x751DF00EEFF122E3(Any p0) { invoke<Void>(0x0256B5D0, p0); } // 0x751DF00EEFF122E3 b1207
	static void ROPE_FORCE_LENGTH(int ropeId, float length) { invoke<Void>(0x0256B660, ropeId, length); } // 0xD009F759A723DB1B 0xABF3130F b1207
	static void _0x8D59079C37C21D78(int ropeId, float p1) { invoke<Void>(0x0256B6C0, ropeId, p1); } // 0x8D59079C37C21D78 b1207
	static void _0x814D453FCFDF119F(Any p0, Any p1, Any p2) { invoke<Void>(0x0256B7A0, p0, p1, p2); } // 0x814D453FCFDF119F b1207
	static void _0x1FC92BDBA1106BD2(Any p0, Any p1) { invoke<Void>(0x0256B810, p0, p1); } // 0x1FC92BDBA1106BD2 b1207
	static void _0xDEDE679ED29DD4E7(int ropeId, Any p1) { invoke<Void>(0x0256B870, ropeId, p1); } // 0xDEDE679ED29DD4E7 b1207
	static void _0xF1EA2A881EB7F2CD(int ropeId, Any p1) { invoke<Void>(0x0256B8E0, ropeId, p1); } // 0xF1EA2A881EB7F2CD b1207
	static void _0x5A989B7EE3672A56(Any p0, Any p1) { invoke<Void>(0x0256B950, p0, p1); } // 0x5A989B7EE3672A56 b1207
	static void _0x483D4E917B0D35A9(Any p0, Any p1) { invoke<Void>(0x0256B9C0, p0, p1); } // 0x483D4E917B0D35A9 b1207
	static Any _0xEE360CFC80C8B2BC(Any p0) { return invoke<Any>(0x0256BA30, p0); } // 0xEE360CFC80C8B2BC b1311
	static void SET_DAMPING(Entity entity, int vertex, float value) { invoke<Void>(0x0256BB40, entity, vertex, value); } // 0xEEA3B200A6FEB65B 0xCFB37773 b1207
	static void ACTIVATE_PHYSICS(Entity entity) { invoke<Void>(0x0256BC70, entity); } // 0x710311ADF0E20730 0x031711B8 b1207
	static void BREAK_ENTITY_GLASS(Entity entity, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, Any p9, BOOL p10) { invoke<Void>(0x0256BD50, entity, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x2E648D16F6E308F3 0xD0E0402F b1207
	static void _0x8EEDFD8921389928(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0x0256BEA0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x8EEDFD8921389928 b1207
	static void SET_DISABLE_BREAKING(Object object, BOOL toggle) { invoke<Void>(0x0256BED0, object, toggle); } // 0x5CEC1A84620E7D5B 0xEE77C326 b1207
	static void SET_DISABLE_FRAG_DAMAGE(Object object, BOOL toggle) { invoke<Void>(0x0256BEF0, object, toggle); } // 0x01BA3AED21C16CFB 0x97269DC8 b1207
	static void _0x5BD7457221CC5FF4(Any p0, Any p1) { invoke<Void>(0x0256BF10, p0, p1); } // 0x5BD7457221CC5FF4 b1207
}

namespace PLAYER
{
	static Ped GET_PLAYER_PED(Player player) { return invoke<Ped>(0x025B57A0, player); } // 0x275F255ED201B937 0x6E31E993 b1207
	static Ped _GET_PLAYER_PED_2(Player player) { return invoke<Ped>(0x025B5860, player); } // 0x5EBE38A20BC51C27 b1207
	static void _0x325434C68358D282(BOOL toggle) { invoke<Void>(0x025B58B0, toggle); } // 0x325434C68358D282 b1207
	static Ped GET_PLAYER_PED_SCRIPT_INDEX(Player player) { return invoke<Ped>(0x025B5950, player); } // 0x5C880F9056D784C8 0x6AC64990 b1207
	static void SET_PLAYER_MODEL(Player player, Hash modelHash, BOOL p2) { invoke<Void>(0x025B59C0, player, modelHash, p2); } // 0xED40380076A31506 0x774A4C54 b1207
	static BOOL _NETWORK_HAS_PLAYER_VALID_PED(Player player) { return invoke<BOOL>(0x025B59E0, player); } // 0x0760D6F70EBCC05C b1207
	static int GET_PLAYER_TEAM(Player player) { return invoke<int>(0x025B5A50, player); } // 0xB464EB6A40C7975B 0x9873E404 b1207
	static void SET_PLAYER_TEAM(Player player, int team, BOOL bRestrictToThisScript) { invoke<Void>(0x025B5AE0, player, team, bRestrictToThisScript); } // 0xE8DD8536F01DE600 0x725ADCF2 b1207
	static const char* GET_PLAYER_NAME(Player player) { return invoke<const char*>(0x025B5B00, player); } // 0x7124FD9AC0E01BA0 0x406B4B20 b1207
	static const char* _FORMAT_PLAYER_NAME_STRING(const char* string) { return invoke<const char*>(0x025B5BC0, string); } // 0x5B6193813E03E4E9 b1207
	static float GET_WANTED_LEVEL_RADIUS(int p0) { return invoke<float>(0x025B5C30, p0); } // 0x80B00EB26D9521C7 0x1CF7D7DA b1207
	static int GET_WANTED_LEVEL_THRESHOLD(int wantedLevel) { return invoke<int>(0x025B5C80, wantedLevel); } // 0x1B1A3B358F7D8F07 0xD9783F6B b1207
	static void SET_PLAYER_WANTED_LEVEL(Player player, int wantedLevel, BOOL disableNoMission) { invoke<Void>(0x025B5CD0, player, wantedLevel, disableNoMission); } // 0x384D4765395E006C 0xB7A0914B b1207
	static BOOL IS_PLAYER_WANTED_LEVEL_GREATER(Player player, int wantedLevel) { return invoke<BOOL>(0x025B5CE0, player, wantedLevel); } // 0xE1C0AD4C24324C36 0x589A2661 b1207
	static void CLEAR_PLAYER_WANTED_LEVEL(Player player) { invoke<Void>(0x025B5DA0, player); } // 0x4E4B996C928C7AA6 0x54EA5BCC b1207
	static BOOL IS_PLAYER_DEAD(Player player) { return invoke<BOOL>(0x025B5DB0, player); } // 0x2E9C3FCB6798F397 0x140CA5A8 b1207
	static void SET_PLAYER_CONTROL(Player player, BOOL toggle, int flags, BOOL bPreventHeadingChange) { invoke<Void>(0x025B5E20, player, toggle, flags, bPreventHeadingChange); } // 0x4D51E59243281D80 0xD17AFCD8 b1207
	static int GET_PLAYER_WANTED_LEVEL(Player player) { return invoke<int>(0x025B5E50, player); } // 0xABC532F9098BFD9D 0xBDCDD163 b1207
	static void SET_MAX_WANTED_LEVEL(int maxWantedLevel) { invoke<Void>(0x025B5F20, maxWantedLevel); } // 0x28A4BD2CEE236E19 0x665A06F5 b1207
	static void _SET_MAX_WANTED_LEVEL_2(int maxWantedLevel) { invoke<Void>(0x025B5FF0, maxWantedLevel); } // 0xEA6DE0CD15AECBE2 b1207
	static void SET_POLICE_RADAR_BLIPS(BOOL toggle) { invoke<Void>(0x025B6140, toggle); } // 0x6FD7DD6B63F2820E 0x8E114B10 b1207
	static BOOL IS_PLAYER_PLAYING(Player player) { return invoke<BOOL>(0x025B6160, player); } // 0xBFFB35986CAAE58C 0xE15D777F b1207
	static void SET_EVERYONE_IGNORE_PLAYER(Player player, BOOL toggle) { invoke<Void>(0x025B6240, player, toggle); } // 0x34630A768925B852 0xC915285E b1207
	static BOOL GET_IS_PLAYER_UI_PROMPT_ACTIVE(Player player, int p1) { return invoke<BOOL>(0x025B6320, player, p1); } // 0x51BEA356B1C60225 b1207
	static void _MODIFY_PLAYER_UI_PROMPT(Player player, int promptType, int promptMode, BOOL enabled) { invoke<Void>(0x025B63F0, player, promptType, promptMode, enabled); } // 0x0751D461F06E41CE b1207
	static BOOL _GET_PLAYER_UI_PROMPT_IS_DISABLED(Player player, int promptType, int promptMode) { return invoke<BOOL>(0x025B6530, player, promptType, promptMode); } // 0x6614F9039BD31931 b1207
	static void _0xA3DB37EDF9A74635(Player player, Ped ped, Any p2, Any p3, Any p4) { invoke<Void>(0x025B6680, player, ped, p2, p3, p4); } // 0xA3DB37EDF9A74635 b1207
	static BOOL _0xEA8F168A76A0B9BC(Player player, Ped ped, Any p2, Any p3) { return invoke<BOOL>(0x025B66A0, player, ped, p2, p3); } // 0xEA8F168A76A0B9BC b1207
	static void _0x93624B36E8851B42(Player player) { invoke<Void>(0x025B66D0, player); } // 0x93624B36E8851B42 b1207
	static void _0x9073EC5456651A90(Any p0, Any p1) { invoke<Void>(0x025B67E0, p0, p1); } // 0x9073EC5456651A90 b1207
	static void _0x2E67707BEC52CA4B(Any p0) { invoke<Void>(0x025B6940, p0); } // 0x2E67707BEC52CA4B b1207
	static void SET_ALL_RANDOM_PEDS_FLEE(Player player, BOOL toggle) { invoke<Void>(0x025B69E0, player, toggle); } // 0xE705309B8C6445A4 0x49EAE968 b1207
	static void SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(Player player) { invoke<Void>(0x025B6AA0, player); } // 0xD5C198A62F1DEB0A 0xBF974891 b1207
	static void _0x16752DAA7E6D3F72(Player player) { invoke<Void>(0x025B6B40, player); } // 0x16752DAA7E6D3F72 0x02DF7AF4 b1207
	static void _0x1D256EED194F5B58(Any p0) { invoke<Void>(0x025B6BE0, p0); } // 0x1D256EED194F5B58 b1207
	static Any _0x5B7B97E99F84138B(Any p0) { return invoke<Any>(0x025B6C80, p0); } // 0x5B7B97E99F84138B b1207
	static void _0x8674D138391FFB1B(Any p0, Any p1) { invoke<Void>(0x025B6D90, p0, p1); } // 0x8674D138391FFB1B b1207
	static Any _0xA82964B9D8D6A983() { return invoke<Any>(0x025B6E60); } // 0xA82964B9D8D6A983 b1207
	static void SET_WANTED_LEVEL_MULTIPLIER(float multiplier) { invoke<Void>(0x025B6EC0, multiplier); } // 0xD7FA719CB54866C2 0x1359292F b1207
	static void RESET_WANTED_LEVEL_DIFFICULTY(Player player) { invoke<Void>(0x025B6F10, player); } // 0x062D14F18E8B0CAE 0xA64C378D b1207
	static void _0xD0B0B044112BF424(Player player) { invoke<Void>(0x025B6FB0, player); } // 0xD0B0B044112BF424 0x6B34A160 b1207
	static void _0x96722257E5381E00(Player player) { invoke<Void>(0x025B7070, player); } // 0x96722257E5381E00 0x3A7E5FB6 b1207
	static void REPORT_POLICE_SPOTTED_PLAYER(Player player) { invoke<Void>(0x025B7130, player); } // 0xCBCCF73FFA69CC6B 0xD15C4B1C b1207
	static void _0xD2DFC9CCA5596A11(float p0) { invoke<Void>(0x025B7240, p0); } // 0xD2DFC9CCA5596A11 0xBF6993C7 b1207
	static void _0x5CE5CACC01D0F985() { invoke<Void>(0x025B7250); } // 0x5CE5CACC01D0F985 0x47CAB814 b1207
	static BOOL CAN_PLAYER_START_MISSION(Player player) { return invoke<BOOL>(0x025B7260, player); } // 0x2DF170B1185AF777 0x39E3CB3F b1207
	static BOOL IS_PLAYER_READY_FOR_CUTSCENE(Player player) { return invoke<BOOL>(0x025B7340, player); } // 0xAA67BCB0097F2FA3 0xBB77E9CD b1207
	static BOOL IS_PLAYER_TARGETTING_ENTITY(Player player, Entity entity, BOOL p2) { return invoke<BOOL>(0x025B7370, player, entity, p2); } // 0x27F89FDC16688A7A 0xF3240B77 b1207
	static BOOL GET_PLAYER_TARGET_ENTITY(Player player, Entity* entity) { return invoke<BOOL>(0x025B7440, player, entity); } // 0xAE663DDD99C8A670 0xF6AAA2D7 b1207
	static BOOL _0x927861B2C08DBEA5(Player player) { return invoke<BOOL>(0x025B7550, player); } // 0x927861B2C08DBEA5 b1207
	static BOOL _IS_PLAYER_FREE_FOCUSING(Player player) { return invoke<BOOL>(0x025B7630, player); } // 0x1A51BFE60708E482 b1207
	static BOOL GET_PLAYER_INTERACTION_TARGET_ENTITY(Player player, Entity* outEntity, BOOL p2, BOOL p3) { return invoke<BOOL>(0x025B7760, player, outEntity, p2, p3); } // 0x3EE1F7A8C32F24E1 b1207
	static Any _0xBEA3A6E5F5F79A6F(Any p0, Any p1) { return invoke<Any>(0x025B77A0, p0, p1); } // 0xBEA3A6E5F5F79A6F b1207
	static BOOL _IS_PLAYER_IN_SCOPE(Player player) { return invoke<BOOL>(0x025B77D0, player); } // 0x04D7F33640662FA2 b1207
	static BOOL IS_PLAYER_FREE_AIMING(Player player) { return invoke<BOOL>(0x025B7860, player); } // 0x936F967D4BE1CE9D 0x1DEC67B7 b1207
	static BOOL IS_PLAYER_FREE_AIMING_AT_ENTITY(Player player, Entity entity) { return invoke<BOOL>(0x025B7920, player, entity); } // 0x8C67C11C68713D25 0x7D80EEAA b1207
	static BOOL GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(Player player, Entity* entity) { return invoke<BOOL>(0x025B7B30, player, entity); } // 0xA6817C110B830EAD 0x8866D9D0 b1207
	static void _0x3DAABE78A23694BC(Any p0, Any p1) { invoke<Void>(0x025B7C40, p0, p1); } // 0x3DAABE78A23694BC b1207
	static BOOL _0x7AE93C45EC14A166(Player player, Ped* ped) { return invoke<BOOL>(0x025B7D60, player, ped); } // 0x7AE93C45EC14A166 b1207
	static void SET_PLAYER_LOCKON_RANGE_OVERRIDE(Player player, float range) { invoke<Void>(0x025B7E60, player, range); } // 0x3A3CD06597388322 0x74D42C03 b1207
	static void SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(Player player, BOOL toggle) { invoke<Void>(0x025B7F20, player, toggle); } // 0xC7FE774412046825 0x71B305BB b1207
	static void SET_PLAYER_CAN_USE_COVER(Player player, BOOL toggle) { invoke<Void>(0x025B8000, player, toggle); } // 0x5EDA520F7A3BAF4E 0x13CAFAFA b1207
	static void _0xD1A70C1E8D1031FE(Any p0, Any p1) { invoke<Void>(0x025B80E0, p0, p1); } // 0xD1A70C1E8D1031FE b1207
	static void _0xACA45DDCEF6071C4(Player player, BOOL p1) { invoke<Void>(0x025B81C0, player, p1); } // 0xACA45DDCEF6071C4 b1207
	static void _0xA0C683284DF027C7(Player player, int p1, BOOL enable) { invoke<Void>(0x025B82A0, player, p1, enable); } // 0xA0C683284DF027C7 b1207
	static void _SET_PLAYER_CAN_MERCY_KILL(Player player, BOOL toggle) { invoke<Void>(0x025B8380, player, toggle); } // 0x39363DFD04E91496 b1311
	static void _0x4EC8BE63B8A5D4EF(Player player, int p1) { invoke<Void>(0x025B8460, player, p1); } // 0x4EC8BE63B8A5D4EF b1207
	static int GET_MAX_WANTED_LEVEL() { return invoke<int>(0x025B8520); } // 0xD04CFAD1E2B7984A 0x457F1E44 b1207
	static BOOL IS_PLAYER_TARGETTING_ANYTHING(Player player) { return invoke<BOOL>(0x025B8530, player); } // 0x4605C66E0F935F83 0x456DB50D b1207
	static void RESTORE_PLAYER_STAMINA(Player player, float p1) { invoke<Void>(0x025B8630, player, p1); } // 0xC41F4B6E23FE6A4A 0x62A93608 b1207
	static void _0x8591EE69CC3ED257(Player player, BOOL toggle) { invoke<Void>(0x025B8710, player, toggle); } // 0x8591EE69CC3ED257 b1207
	static int GET_PLAYER_GROUP(Player player) { return invoke<int>(0x025B87F0, player); } // 0x9BAB31815159ABCF 0xA5EDCDE8 b1207
	static void _0x3D9DA5C9EFD20D88(Any p0, Any p1) { invoke<Void>(0x025B88B0, p0, p1); } // 0x3D9DA5C9EFD20D88 b1207
	static void _0x2BEED53B912537D0(Any p0, Any p1, Any p2) { invoke<Void>(0x025B88C0, p0, p1, p2); } // 0x2BEED53B912537D0 b1207
	static void _0x908D4B72854C8F62(Any p0) { invoke<Void>(0x025B88E0, p0); } // 0x908D4B72854C8F62 b1207
	static Any _0xD1F6B912785BFD35(Any p0) { return invoke<Any>(0x025B8990, p0); } // 0xD1F6B912785BFD35 b1207
	static void _0xC4873B053054C04B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x025B8A50, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xC4873B053054C04B b1207
	static void _0xCA59808E51FD67C4(Any p0, Any p1) { invoke<Void>(0x025B8C90, p0, p1); } // 0xCA59808E51FD67C4 b1207
	static void _0xBA5CA1FEB5DE0DF6(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x025B8E10, p0, p1, p2, p3, p4, p5); } // 0xBA5CA1FEB5DE0DF6 b1207
	static void _0x0869D499A7848309(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x025B8E40, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x0869D499A7848309 b1207
	static Any _0xB331D8A73F9D2BDF(Any p0, Any p1) { return invoke<Any>(0x025B8E80, p0, p1); } // 0xB331D8A73F9D2BDF b1207
	static void _0xAC22AA6DF4D1C1DE(Player player, Ped ped, float p2, float p3, Any followMode, Any followPriority, Any p6) { invoke<Void>(0x025B8EB0, player, ped, p2, p3, followMode, followPriority, p6); } // 0xAC22AA6DF4D1C1DE b1207
	static void _REMOVE_PLAYER_AS_FOLLOW_TARGET(Player player, Ped ped) { invoke<Void>(0x025B8FA0, player, ped); } // 0x0C6B89876262A99D b1207
	static void _0x12E09E278C6C29B7(Any p0) { invoke<Void>(0x025B9050, p0); } // 0x12E09E278C6C29B7 b1207
	static void _0xDD33A82352C4652F(Player player, Ped ped, Any p2) { invoke<Void>(0x025B9060, player, ped, p2); } // 0xDD33A82352C4652F b1207
	static void _0x1FDA57E8908F2609(Player player, Ped ped, BOOL useSteerassist) { invoke<Void>(0x025B9080, player, ped, useSteerassist); } // 0x1FDA57E8908F2609 b1207
	static void _0x84481018E668E1B8(Player player, Ped ped, Any p2) { invoke<Void>(0x025B90A0, player, ped, p2); } // 0x84481018E668E1B8 b1207
	static Any _0x2009F8AB7A5E9D6D(Any p0) { return invoke<Any>(0x025B90C0, p0); } // 0x2009F8AB7A5E9D6D b1207
	static BOOL _IS_PLAYER_FOLLOWING_TARGET(Player player, Ped ped) { return invoke<BOOL>(0x025B91B0, player, ped); } // 0xE24C64D9ADED2EF5 b1207
	static BOOL _0xE7F8707269544B29(Player player, Ped ped) { return invoke<BOOL>(0x025B9400, player, ped); } // 0xE7F8707269544B29 b1207
	static Any _0xE631EAF35828FA67(Any p0) { return invoke<Any>(0x025B9430, p0); } // 0xE631EAF35828FA67 b1207
	static void _0x086549F3B0381CB1(Any p0, Any p1) { invoke<Void>(0x025B94F0, p0, p1); } // 0x086549F3B0381CB1 b1207
	static BOOL IS_PLAYER_CONTROL_ON(Player player) { return invoke<BOOL>(0x025B95A0, player); } // 0x7964097FCE4C244B 0x618857F2 b1207
	static BOOL IS_PLAYER_SCRIPT_CONTROL_ON(Player player) { return invoke<BOOL>(0x025B9690, player); } // 0xB78350754157C00F 0x61B00A84 b1207
	static BOOL IS_PLAYER_CLIMBING(Player player) { return invoke<BOOL>(0x025B9770, player); } // 0xB8A70C22FD48197A 0x4A9E9AE0 b1207
	static void _0xEBB6E27AC2FF32DA(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x025B9830, p0, p1, p2, p3, p4); } // 0xEBB6E27AC2FF32DA b1207
	static Any _0xB15CD2F9932C9AB5(Any p0) { return invoke<Any>(0x025B9860, p0); } // 0xB15CD2F9932C9AB5 b1207
	static Any _0x621D1B289CAF5978(Any p0) { return invoke<Any>(0x025B9920, p0); } // 0x621D1B289CAF5978 b1207
	static BOOL IS_PLAYER_BEING_ARRESTED(Player player, BOOL atArresting) { return invoke<BOOL>(0x025B9A40, player, atArresting); } // 0xC8183AE963C58374 0x7F6A60D3 b1207
	static void RESET_PLAYER_ARREST_STATE(Player player) { invoke<Void>(0x025B9B50, player); } // 0x12917931C31F1750 0x453C7CAB b1207
	static void _0xCBB54CC7FFFFAB86(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x025B9C00, p0, p1, p2, p3); } // 0xCBB54CC7FFFFAB86 b1207
	static void _0xBED386157F65942C(Any p0, Any p1) { invoke<Void>(0x025B9C20, p0, p1); } // 0xBED386157F65942C b1207
	static Any _0xDAB6A2FC56B7DE65(Any p0) { return invoke<Any>(0x025B9D40, p0); } // 0xDAB6A2FC56B7DE65 b1207
	static Any _0x0F4EAF69DA41AF43(Any p0) { return invoke<Any>(0x025B9E60, p0); } // 0x0F4EAF69DA41AF43 b1207
	static void _0x6ADF821FBF21920E(Any p0, Any p1) { invoke<Void>(0x025B9F80, p0, p1); } // 0x6ADF821FBF21920E b1207
	static void _0x8F2A81C09DA9124A(Any p0) { invoke<Void>(0x025BA010, p0); } // 0x8F2A81C09DA9124A b1207
	static Vehicle GET_PLAYERS_LAST_VEHICLE() { return invoke<Vehicle>(0x025BA090); } // 0x2F96E7720B0B19EA 0xE2757AC1 b1207
	static Player GET_PLAYER_INDEX() { return invoke<Player>(0x025BA0C0); } // 0x47E385B0D957C8D4 0x309BBDC1 b1207
	static Player INT_TO_PLAYERINDEX(int value) { return invoke<Player>(0x025BA0E0, value); } // 0x748B3A65C2604C33 0x98DD98F1 b1207
	static int INT_TO_PARTICIPANTINDEX(int value) { return invoke<int>(0x025BA0F0, value); } // 0x58FF971FC8F2702C 0x98F3B274 b1207
	static Player PLAYER_ID() { return invoke<Player>(0x025BA100); } // 0x217E9DC48139933D 0x8AEA886C b1207
	static Ped PLAYER_PED_ID() { return invoke<Ped>(0x025BA120); } // 0x096275889B8E0EE0 0xFA92E226 b1207
	static int NETWORK_PLAYER_ID_TO_INT() { return invoke<int>(0x025BA150); } // 0x8A9386F0749A17FA 0x8DD5B838 b1207
	static BOOL HAS_FORCE_CLEANUP_OCCURRED(int cleanupFlags) { return invoke<BOOL>(0x025BA170, cleanupFlags); } // 0xC11469DCA6FC3BB5 0x4B37333C b1207
	static void FORCE_CLEANUP(int cleanupFlags) { invoke<Void>(0x025BA1C0, cleanupFlags); } // 0x768C017FB878E4F4 0xFDAAEA2B b1207
	static void FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(const char* name, int cleanupFlags) { invoke<Void>(0x025BA220, name, cleanupFlags); } // 0xDAACAF8B687F2353 0x04256C73 b1207
	static void FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(int id, int cleanupFlags) { invoke<Void>(0x025BA310, id, cleanupFlags); } // 0xF4C9512A2F0A3031 0x882D3EB3 b1207
	static int GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() { return invoke<int>(0x025BA370); } // 0x84E8E29EBD4A46D2 0x39AA9FC8 b1207
	static void _0x39BED552DB46FFA9(Any p0, Any p1) { invoke<Void>(0x025BA390, p0, p1); } // 0x39BED552DB46FFA9 b1207
	static int _0x054473164C012699(Player player) { return invoke<int>(0x025BA4B0, player); } // 0x054473164C012699 b1207
	static void SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE(Player player, Vehicle vehicle) { invoke<Void>(0x025BA5A0, player, vehicle); } // 0xDA35A134038557EC 0xA454DD29 b1207
	static void _0xC71D07C96946E263(Any p0, Any p1) { invoke<Void>(0x025BA5B0, p0, p1); } // 0xC71D07C96946E263 b1207
	static void SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(Player player) { invoke<Void>(0x025BA5C0, player); } // 0xBEC463B3A11C909E 0xAF7AFCC4 b1207
	static BOOL IS_SYSTEM_UI_BEING_DISPLAYED() { return invoke<BOOL>(0x025BA680); } // 0x908258B6209E71F7 0xE495B6DA b1207
	static void _0xD48227263E3D06AE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0x025BA6B0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xD48227263E3D06AE b1232
	static void _0x3946FC742AC305CD(Player player, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x025BA6D0, player, p1, p2, p3, p4, p5, p6, p7); } // 0x3946FC742AC305CD b1207
	static void _0xA28056CD1B04B250(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoke<Void>(0x025BA6F0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0xA28056CD1B04B250 b1232
	static void _0xC67A4910425F11F1(Player player, Any p1) { invoke<Void>(0x025BA730, player, p1); } // 0xC67A4910425F11F1 b1207
	static void SET_PLAYER_INVINCIBLE(Player player, BOOL toggle) { invoke<Void>(0x025BA820, player, toggle); } // 0xFEBEEBC9CBDF4B12 0xDFB9A2A2 b1207
	static BOOL GET_PLAYER_INVINCIBLE(Player player) { return invoke<BOOL>(0x025BA840, player); } // 0x0CBBCB2CCFA7DC4E 0x680C90EE b1207
	static void SET_PLAYER_LOCKON(Player player, BOOL toggle) { invoke<Void>(0x025BA950, player, toggle); } // 0x462AA1973CBBA75E 0x0B270E0F b1207
	static void _SET_LOCKON_TO_FRIENDLY_PLAYERS(Player player, BOOL toggle) { invoke<Void>(0x025BAA20, player, toggle); } // 0x4A056257802DD3E5 b1207
	static void SET_PLAYER_TARGETING_MODE(int targetMode) { invoke<Void>(0x025BAAE0, targetMode); } // 0xD66A941F401E7302 0x61CAE253 b1207
	static void _SET_PLAYER_IN_VEHICLE_TARGETING_MODE(int targetMode) { invoke<Void>(0x025BAAF0, targetMode); } // 0x19B4F71703902238 b1207
	static Any _0x747257807B8721CE(Any p0, Any p1) { return invoke<Any>(0x025BAB00, p0, p1); } // 0x747257807B8721CE b1207
	static Any _0x8702D9150D9FBB3D(Any p0, Any p1) { return invoke<Any>(0x025BAC40, p0, p1); } // 0x8702D9150D9FBB3D b1207
	static void _0xCB0B9506BC91E441(Any p0, Any p1) { invoke<Void>(0x025BAD80, p0, p1); } // 0xCB0B9506BC91E441 b1207
	static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(Player player) { invoke<Void>(0x025BAE70, player); } // 0x270B63A641BE32F2 0x1D31CBBD b1207
	static BOOL HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(Player player) { return invoke<BOOL>(0x025BAF30, player); } // 0xDA4A4B9B96E20092 0x14F52453 b1207
	static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(Player player) { invoke<Void>(0x025BB010, player); } // 0x0361096D6CE4372C 0x7E3BFBC5 b1207
	static BOOL HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(Player player) { return invoke<BOOL>(0x025BB0D0, player); } // 0x16C8D205DD5A2E90 0xA3707DFC b1207
	static void _0xEACEBAAE0A33FB3F(Any p0) { invoke<Void>(0x025BB1A0, p0); } // 0xEACEBAAE0A33FB3F b1207
	static Any _0x72AD59F7B7FB6E24(Any p0, Any p1) { return invoke<Any>(0x025BB260, p0, p1); } // 0x72AD59F7B7FB6E24 b1207
	static Any _0x1A6E84F13C952094(Any p0, Any p1, Any p2) { return invoke<Any>(0x025BB370, p0, p1, p2); } // 0x1A6E84F13C952094 b1207
	static void _0x78B3D19AF6391A55(Any p0, Any p1) { invoke<Void>(0x025BB4D0, p0, p1); } // 0x78B3D19AF6391A55 b1207
	static void _0x1F488807BC8E0630(Any p0) { invoke<Void>(0x025BB6D0, p0); } // 0x1F488807BC8E0630 b1207
	static void SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(Player player, float multiplier) { invoke<Void>(0x025BB740, player, multiplier); } // 0x5DA6500FE849DA16 0xF20F72E5 b1207
	static void SET_SWIM_MULTIPLIER_FOR_PLAYER(Player player, float multiplier) { invoke<Void>(0x025BB830, player, multiplier); } // 0xBFCEABDE34DA5085 0xB986FF47 b1207
	static BOOL _0x73EB2EF2E92D23BF() { return invoke<BOOL>(0x025BB920); } // 0x73EB2EF2E92D23BF b1207
	static void SET_PLAYER_FORCED_AIM(Player player, BOOL toggle, Ped ped, int p3, BOOL p4) { invoke<Void>(0x025BB9C0, player, toggle, ped, p3, p4); } // 0xD5FCC166AEB2FD0F 0x94E42E2E b1207
	static void _0x310CE349E0C0EC4B(Player player, Ped ped, int p2) { invoke<Void>(0x025BB9F0, player, ped, p2); } // 0x310CE349E0C0EC4B b1207
	static void DISABLE_PLAYER_FIRING(Player player, BOOL toggle) { invoke<Void>(0x025BBA10, player, toggle); } // 0x2970929FD5F9FC89 0x30CB28CB b1207
	static void _0xEBFF94328FF7A18A(Any p0, Any p1) { invoke<Void>(0x025BBA30, p0, p1); } // 0xEBFF94328FF7A18A b1207
	static void _0xF993373285053D77(Any p0, Any p1, Any p2) { invoke<Void>(0x025BBAD0, p0, p1, p2); } // 0xF993373285053D77 b1207
	static Any _0xE956C2340A76272E(Any p0) { return invoke<Any>(0x025BBB80, p0); } // 0xE956C2340A76272E b1207
	static void _ENABLE_CUSTOM_DEADEYE_ABILITY(Player player, BOOL enable) { invoke<Void>(0x025BBC90, player, enable); } // 0x95EE1DEE1DCD9070 b1207
	static Any _0xDE6C85975F9D4894(Any p0) { return invoke<Any>(0x025BBD60, p0); } // 0xDE6C85975F9D4894 b1207
	static void _0xBBA140062B15A8AC(Player player) { invoke<Void>(0x025BBE30, player); } // 0xBBA140062B15A8AC b1207
	static void _SPECIAL_ABILITY_SET_DISABLED(Player player, BOOL disabled) { invoke<Void>(0x025BBEE0, player, disabled); } // 0xAE637BB8EF017875 b1207
	static BOOL _IS_SPECIAL_ABILITY_ACTIVE(Player player) { return invoke<BOOL>(0x025BBFB0, player); } // 0xB16223CB7DA965F0 b1207
	static void _MODIFY_INFINITE_TRAIL_VISION(Ped ped, BOOL toggle) { invoke<Void>(0x025BC080, ped, toggle); } // 0x28A13BF6B05C3D83 b1207
	static void _SPECIAL_ABILITY_SET_EAGLE_EYE_DISABLED(Ped ped) { invoke<Void>(0x025BC1A0, ped); } // 0xC0B21F235C02139C b1207
	static void _SPECIAL_ABILITY_RESTORE_BY_AMOUNT(Player player, float amount, int p2, int p3, int p4) { invoke<Void>(0x025BC2B0, player, amount, p2, p3, p4); } // 0x51345AE20F22C261 b1207
	static void _0xFA437FA0738C370C(Player player, float p1, int p2, int p3, int p4) { invoke<Void>(0x025BC3C0, player, p1, p2, p3, p4); } // 0xFA437FA0738C370C b1207
	static void _0x2498035289B5688F(Any p0, Any p1) { invoke<Void>(0x025BC570, p0, p1); } // 0x2498035289B5688F b1207
	static float _GET_PLAYER_REQUIRED_DEAD_EYE_AMOUNT(Player player) { return invoke<float>(0x025BC6D0, player); } // 0x811A748B1BE231BA b1207
	static float _SPECIAL_ABILITY_GET_AMOUNT_CACHED(Player player) { return invoke<float>(0x025BC820, player); } // 0x029884FB65821B07 b1207
	static void _SPECIAL_ABILITY_DRAIN_BY_AMOUNT(Player player, float amount, Any p2) { invoke<Void>(0x025BC970, player, amount, p2); } // 0x200114E99552462B b1207
	static void _SPECIAL_ABILITY_START_RESTORE(Player player, int p1, BOOL p2) { invoke<Void>(0x025BCAD0, player, p1, p2); } // 0x1D77B47AFA584E90 b1207
	static void _SET_SPECIAL_ABILITY_MULTIPLIER(Player player, float multiplier) { invoke<Void>(0x025BCC00, player, multiplier); } // 0x5A498FCA232F71E1 b1207
	static float _GET_PLAYER_SPECIAL_ABILITY_MULTIPLIER(Player player) { return invoke<float>(0x025BCCC0, player); } // 0xAB3773E7AA1E9DCC b1207
	static void _0x00BA333DA05ADC23(Any p0, Any p1) { invoke<Void>(0x025BCDA0, p0, p1); } // 0x00BA333DA05ADC23 b1207
	static void _0x22B3CABEDDB538B2(Player player, float p1) { invoke<Void>(0x025BCE80, player, p1); } // 0x22B3CABEDDB538B2 b1207
	static void _SET_SPECIAL_ABILITY_DURATION_COST(Player player, float durationCost) { invoke<Void>(0x025BCF50, player, durationCost); } // 0xB783F75940B23014 b1207
	static void _0xC0B1C05B313693D1(Player player, float p1) { invoke<Void>(0x025BD020, player, p1); } // 0xC0B1C05B313693D1 b1207
	static Any _0x57D9991DC1334151(Any p0) { return invoke<Any>(0x025BD0F0, p0); } // 0x57D9991DC1334151 b1207
	static Any _0x21091B4BEB6376EE(Any p0) { return invoke<Any>(0x025BD240, p0); } // 0x21091B4BEB6376EE b1207
	static void _SET_SPECIAL_ABILITY_ACTIVATION_COST(Player player, float activationCost, int p2) { invoke<Void>(0x025BD390, player, activationCost, p2); } // 0xAE4BCC79C587EBBF b1207
	static void _0x4D1699543B1C023C(Player player, float p1) { invoke<Void>(0x025BD480, player, p1); } // 0x4D1699543B1C023C b1207
	static Any _0x3A6AE4EEE30370FE(Any p0, Any p1) { return invoke<Any>(0x025BD570, p0, p1); } // 0x3A6AE4EEE30370FE b1207
	static float _GET_PLAYER_DEAD_EYE(Player player) { return invoke<float>(0x025BD750, player); } // 0xA81D24AE0AF99A5E b1207
	static float _GET_PLAYER_CACHED_DEAD_EYE_AMOUNT(Player player) { return invoke<float>(0x025BD8A0, player); } // 0xDF66A37936D5F3D9 b1207
	static float _GET_PLAYER_MAX_DEAD_EYE(Player player, Any p1) { return invoke<float>(0x025BDA20, player, p1); } // 0x592F58BC4D2A2CF3 b1207
	static float _GET_PLAYER_HEALTH(Player player) { return invoke<float>(0x025BDB70, player); } // 0x0317C947D062854E b1207
	static float _GET_PLAYER_STAMINA(Player player) { return invoke<float>(0x025BDC80, player); } // 0x0FF421E467373FCF b1207
	static void _0x768E81AE285A4B67(Player player, Hash p1) { invoke<Void>(0x025BDD90, player, p1); } // 0x768E81AE285A4B67 b1207
	static void _0x0E1DB1F8F5B561DC(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x025BDE50, p0, p1, p2, p3, p4, p5); } // 0x0E1DB1F8F5B561DC b1207
	static void _0x08E22898A6AF4905(Any p0, Any p1) { invoke<Void>(0x025BDE70, p0, p1); } // 0x08E22898A6AF4905 b1207
	static Any _0xBEFED69CE8317F91(Any p0) { return invoke<Any>(0x025BDF30, p0); } // 0xBEFED69CE8317F91 b1207
	static void _ENABLE_EAGLEEYE(Player player, BOOL enable) { invoke<Void>(0x025BE000, player, enable); } // 0xA63FCAD3A6FEC6D2 b1207
	static Any _0xE022CC1B545F1D9F(Any p0) { return invoke<Any>(0x025BE0D0, p0); } // 0xE022CC1B545F1D9F b1207
	static void _SECONDARY_SPECIAL_ABILITY_SET_ACTIVE(Player player) { invoke<Void>(0x025BE1A0, player); } // 0x1710BC33CFB83634 b1207
	static void _SECONDARY_SPECIAL_ABILITY_SET_DISABLED(Player player, BOOL disabled) { invoke<Void>(0x025BE250, player, disabled); } // 0x64FF4BF9AF59E139 b1207
	static BOOL _IS_SECONDARY_SPECIAL_ABILITY_ACTIVE(Player player) { return invoke<BOOL>(0x025BE320, player); } // 0x45AB66D02B601FA7 b1207
	static void _0x107F2A66E1C4C83A(Any p0) { invoke<Void>(0x025BE3F0, p0); } // 0x107F2A66E1C4C83A b1207
	static void START_PLAYER_TELEPORT(Player player, float x, float y, float z, float heading, BOOL p5, BOOL p6, BOOL p7, BOOL p8) { invoke<Void>(0x025BE4A0, player, x, y, z, heading, p5, p6, p7, p8); } // 0xDF8822C55EDDA65B 0xC552E06C b1207
	static void _0x2C2D287748E8E9B7(BOOL p0) { invoke<Void>(0x025BE4E0, p0); } // 0x2C2D287748E8E9B7 b1207
	static BOOL UPDATE_PLAYER_TELEPORT(Player player) { return invoke<BOOL>(0x025BE500, player); } // 0xC39DCE4672CBFBC1 b1207
	static void STOP_PLAYER_TELEPORT() { invoke<Void>(0x025BE5D0); } // 0x0858B86146601BE8 0x86AB8DBB b1207
	static BOOL IS_PLAYER_TELEPORT_ACTIVE() { return invoke<BOOL>(0x025BE5F0); } // 0x085EEAEB8783FEB5 0x3A11D118 b1207
	static float GET_PLAYER_CURRENT_STEALTH_NOISE(Player player) { return invoke<float>(0x025BE610, player); } // 0xD7ECC25E176ECBA5 0xC3B02362 b1207
	static void SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(Player player, float regenRate) { invoke<Void>(0x025BE6C0, player, regenRate); } // 0x8899C244EBCF70DE 0x45514731 b1207
	static Any _0x22CD23BB0C45E0CD(Any p0) { return invoke<Any>(0x025BE760, p0); } // 0x22CD23BB0C45E0CD b1207
	static void _SET_PLAYER_HEALTH_RECHARGE_TIME_MODIFIER(Player player, float modifier) { invoke<Void>(0x025BE830, player, modifier); } // 0x535ED4605F89AB6E b1207
	static void SET_PLAYER_STAMINA_RECHARGE_MULTIPLIER(Player player, float multiplier) { invoke<Void>(0x025BE8D0, player, multiplier); } // 0xFECA17CF3343694B b1207
	static Any _0x617D3494AD58200F(Any p0) { return invoke<Any>(0x025BE990, p0); } // 0x617D3494AD58200F b1207
	static void _SET_PLAYER_STAMINA_SPRINT_DEPLETION_MULTIPLIER(Player player, float multiplier) { invoke<Void>(0x025BEA50, player, multiplier); } // 0xBBADFB5E5E5766FB b1207
	static Any _0x68A0389E0718AC8F(Any p0) { return invoke<Any>(0x025BEB10, p0); } // 0x68A0389E0718AC8F b1207
	static void _SET_PED_ACTIVE_PLAYER_HORSE(Player player, Ped horse) { invoke<Void>(0x025BEBD0, player, horse); } // 0x8FBF9EDB378CCB8C b1207
	static Ped _GET_ACTIVE_HORSE_FOR_PLAYER(Player player) { return invoke<Ped>(0x025BEBE0, player); } // 0x46FA0AE18F4C7FA9 b1207
	static void _SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(Player player, Ped mount) { invoke<Void>(0x025BECB0, player, mount); } // 0xD2CB0FB0FDCB473D b1207
	static Ped _GET_SADDLE_HORSE_FOR_PLAYER(Player player) { return invoke<Ped>(0x025BECC0, player); } // 0xB48050D326E9A2F3 b1207
	static BOOL SET_PED_AS_TEMP_PLAYER_HORSE(Player player, Ped horse) { return invoke<BOOL>(0x025BED90, player, horse); } // 0x227B06324234FB09 b1207
	static Ped _GET_TEMP_PLAYER_HORSE(Player player) { return invoke<Ped>(0x025BEF00, player); } // 0xD3F7445CEA2E5035 b1207
	static void _0x77B0B6D17A3AC9AA(Any p0, Any p1) { invoke<Void>(0x025BEFD0, p0, p1); } // 0x77B0B6D17A3AC9AA b1207
	static void _0xDF93973251FB2CA5(Any p0, Any p1) { invoke<Void>(0x025BEFE0, p0, p1); } // 0xDF93973251FB2CA5 b1207
	static void _0x694FFA4308060CD1(Any p0, Any p1) { invoke<Void>(0x025BF0C0, p0, p1); } // 0x694FFA4308060CD1 b1207
	static void BOOST_PLAYER_HORSE_SPEED_FOR_TIME(Player player, float speedBoost, int duration) { invoke<Void>(0x025BF190, player, speedBoost, duration); } // 0x09C28F828EE674FA b1207
	static void SET_PLAYER_WEAPON_DAMAGE_MODIFIER(Player player, float modifier) { invoke<Void>(0x025BF2C0, player, modifier); } // 0x94D529F7B73D7A85 0xB02C2F39 b1207
	static void SET_PLAYER_WEAPON_DEFENSE_MODIFIER(Player player, float modifier) { invoke<Void>(0x025BF3A0, player, modifier); } // 0xD15CC2D493160BE3 0xAE446344 b1207
	static void _0x818241B3EDA84191(Any p0, Any p1) { invoke<Void>(0x025BF470, p0, p1); } // 0x818241B3EDA84191 b1207
	static void SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(Player player, float modifier) { invoke<Void>(0x025BF530, player, modifier); } // 0xE4CB5A3F18170381 0x362E69AD b1207
	static void _SET_PLAYER_EXPLOSIVE_WEAPON_DAMAGE_MODIFIER(Player player, float modifier) { invoke<Void>(0x025BF5F0, player, modifier); } // 0x2D3ACE3DE0A2B622 b1207
	static void _0x83C989D5B5B5B466(Any p0, Any p1) { invoke<Void>(0x025BF6B0, p0, p1); } // 0x83C989D5B5B5B466 b1207
	static Any _0x03B4B759A8990505(Any p0) { return invoke<Any>(0x025BF770, p0); } // 0x03B4B759A8990505 b1207
	static void _0x67659A8F248E0141(Any p0, Any p1) { invoke<Void>(0x025BF840, p0, p1); } // 0x67659A8F248E0141 b1207
	static void _SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE(Player player, float damageDecrease) { invoke<Void>(0x025BF900, player, damageDecrease); } // 0xB427911EA6DFFEF3 b1207
	static void _SET_AI_PLAYER_DEFENSE_MODIFIER_AGAINST_AI(Player player, float modifier) { invoke<Void>(0x025BF9D0, player, modifier); } // 0x914071FF93AF2692 b1207
	static float _GET_AI_PLAYER_DEFENSE_MODIFIER_AGAINST_AI(Player player) { return invoke<float>(0x025BFAA0, player); } // 0x2E78D822208E740A b1207
	static Any _0x19B2C7A6C34FAD54(Any p0, Any p1) { return invoke<Any>(0x025BFB80, p0, p1); } // 0x19B2C7A6C34FAD54 b1207
	static Any _0x9422743A5BA50E10(Any p0) { return invoke<Any>(0x025BFC50, p0); } // 0x9422743A5BA50E10 b1207
	static void _SET_PLAYER_DEFENSE_MODIFIER(Player player, float weaponDefenseMod, float meleeDefenseMod) { invoke<Void>(0x025BFD30, player, weaponDefenseMod, meleeDefenseMod); } // 0x497A6539BB0E8787 b1207
	static void _SET_PLAYER_DEFENSE_TYPE_MODIFIER(Player player, int type, float defenseModifier) { invoke<Void>(0x025BFE10, player, type, defenseModifier); } // 0x93F499CAE53FCD05 b1207
	static void SET_PLAYER_WEAPON_TYPE_DAMAGE_MODIFIER(Player player, Hash weaponHash, float damageModifier) { invoke<Void>(0x025BFEE0, player, weaponHash, damageModifier); } // 0xD04AD186CE8BB129 b1207
	static Any _0xFE0304050261442C(Any p0, Any p1) { return invoke<Any>(0x025BFFB0, p0, p1); } // 0xFE0304050261442C b1207
	static void _0x5C2E5E3CAEEB1F58(Any p0, Any p1, Any p2) { invoke<Void>(0x025C0100, p0, p1, p2); } // 0x5C2E5E3CAEEB1F58 b1207
	static void _SET_PLAYER_WEAPON_GROUP_DAMAGE_MODIFIER(Player player, Hash weaponGroup, float modifier) { invoke<Void>(0x025C0200, player, weaponGroup, modifier); } // 0xFC79DCC94D0A5897 b1207
	static void _0x59F0AFF3E0A1B019(Any p0, Any p1, Any p2) { invoke<Void>(0x025C02D0, p0, p1, p2); } // 0x59F0AFF3E0A1B019 b1207
	static void _SET_PLAYER_TRAMPLE_DAMAGE_MODIFIER(Player player, float modifier) { invoke<Void>(0x025C03D0, player, modifier); } // 0xAF341032E97FB061 b1207
	static void _SET_PLAYER_LASSO_DAMAGE_PER_SECOND(Player player, float damage) { invoke<Void>(0x025C04A0, player, damage); } // 0x43F50A7CD2482156 b1207
	static void _SET_PLAYER_TOTAL_ACCURACY_MODIFIER(Player player, float accuracy) { invoke<Void>(0x025C0580, player, accuracy); } // 0x967FF5BC0CFE6D26 b1207
	static void _SET_LOCAL_PLAYER_ACCURACY_FLOOR_MODIFIER(Player player, float accuracy) { invoke<Void>(0x025C0630, player, accuracy); } // 0x4EA69188FBCE6A7D b1207
	static void _SET_PLAYER_ACCURACY_FLOOR_MODIFIER(Player player, float accuracy) { invoke<Void>(0x025C0710, player, accuracy); } // 0xDEE80FEDFDD43C9B b1207
	static void _0x3AD212429E095EFB(Any p0, Any p1) { invoke<Void>(0x025C07F0, p0, p1); } // 0x3AD212429E095EFB b1207
	static void SET_PLAYER_NOISE_MULTIPLIER(Player player, float multiplier) { invoke<Void>(0x025C0950, player, multiplier); } // 0xB5EC6BDAEBCA454C 0x15786DD1 b1207
	static void _0x113EF458AB6CDA67(Any p0, Any p1) { invoke<Void>(0x025C0A00, p0, p1); } // 0x113EF458AB6CDA67 b1207
	static void SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(Player player, float multiplier) { invoke<Void>(0x025C0AE0, player, multiplier); } // 0x4DE44FA389DCA565 0x8D2D89C4 b1207
	static void SIMULATE_PLAYER_INPUT_GAIT(Player player, float amount, int gaitType, float speed, BOOL p4, BOOL p5) { invoke<Void>(0x025C0B90, player, amount, gaitType, speed, p4, p5); } // 0xFA0C063C422C4355 0x0D77CC34 b1207
	static void RESET_PLAYER_INPUT_GAIT(Player player) { invoke<Void>(0x025C0CC0, player); } // 0x61A2EECAB274829B 0x4A701EE1 b1207
	static void SET_PLAYER_SIMULATE_AIMING(Player player, BOOL toggle) { invoke<Void>(0x025C0D90, player, toggle); } // 0xE0447DEF81CCDFD2 0xF1E0CAFC b1207
	static void SET_PLAYER_CLOTH_PIN_FRAMES(Ped ped, int p1) { invoke<Void>(0x025C0E50, ped, p1); } // 0xD0D9317DFEEF9A66 0xF7A0F00F b1207
	static BOOL HAS_PLAYER_BEEN_SPOTTED_IN_STOLEN_VEHICLE(Player player) { return invoke<BOOL>(0x025C0F90, player); } // 0xC932F57F31EA9152 0x4A01B76A b1207
	static BOOL _0xFB6EB8785F808551(Player player, int p1, BOOL p2) { return invoke<BOOL>(0x025C1050, player, p1, p2); } // 0xFB6EB8785F808551 0x9DF75B2A b1207
	static void _SET_MOUNT_PROMPT_DISABLED(BOOL disabled) { invoke<Void>(0x025C1140, disabled); } // 0x5B9813ECF7633FE8 b1207
	static BOOL IS_PLAYER_RIDING_TRAIN(Player player) { return invoke<BOOL>(0x025C1150, player); } // 0x2FB0ACADA6A238DD 0x9765E71D b1207
	static void _0x9AFCF9FE1884BF62(Any p0, Any p1) { invoke<Void>(0x025C1210, p0, p1); } // 0x9AFCF9FE1884BF62 b1207
	static Any _0x1E8099F449ABB0BA(Any p0) { return invoke<Any>(0x025C12B0, p0); } // 0x1E8099F449ABB0BA b1207
	static int _GET_DEADEYE_ABILITY_LEVEL(Player player) { return invoke<int>(0x025C13D0, player); } // 0xCCE7C695C164C35F b1207
	static void _SET_DEADEYE_ABILITY_LEVEL(Player player, int level) { invoke<Void>(0x025C1500, player, level); } // 0xF0FE8E790BFEB5BB b1207
	static BOOL _IS_DEADEYE_ABILITY_LOCKED(Player player, int abilityType) { return invoke<BOOL>(0x025C1620, player, abilityType); } // 0x8A0643B0B4CA276B b1207
	static void _SET_DEADEYE_ABILITY_LOCKED(Player player, int abilityType, BOOL toggle) { invoke<Void>(0x025C17D0, player, abilityType, toggle); } // 0x2797B8D66DD0EBB8 b1207
	static void _SET_DEADEYE_TAGGING_ENABLED(Player player, BOOL toggle) { invoke<Void>(0x025C1930, player, toggle); } // 0x6B5DDFB967E5073D b1207
	static BOOL _GET_IS_DEADEYE_TAGGING_ENABLED(Player player) { return invoke<BOOL>(0x025C1A60, player); } // 0x32348719DCED2969 b1207
	static void _0x3C4AE8506638C7E2(Any p0, Any p1) { invoke<Void>(0x025C1B90, p0, p1); } // 0x3C4AE8506638C7E2 b1207
	static Any _0x51139D8C17B16FBC(Any p0) { return invoke<Any>(0x025C1CC0, p0); } // 0x51139D8C17B16FBC b1207
	static void _0x8F44EBB3BA8F6D44(Any p0, Any p1) { invoke<Void>(0x025C1E00, p0, p1); } // 0x8F44EBB3BA8F6D44 b1207
	static void _SET_DEADEYE_TAGGING_CONFIG(Player player, int filter) { invoke<Void>(0x025C1F30, player, filter); } // 0x83FCD6921FC8FD05 b1207
	static Any _0xE92261BD28C0878F(Any p0) { return invoke<Any>(0x025C2050, p0); } // 0xE92261BD28C0878F b1207
	static void _0x870634493CB4372C(Any p0, Any p1) { invoke<Void>(0x025C2180, p0, p1); } // 0x870634493CB4372C b1207
	static Any _0xA54000D4BFD90BDE(Any p0) { return invoke<Any>(0x025C22B0, p0); } // 0xA54000D4BFD90BDE b1207
	static void _0x6EDB5D08CB03E763(Any p0, Any p1) { invoke<Void>(0x025C23E0, p0, p1); } // 0x6EDB5D08CB03E763 b1207
	static Any _0x27AD7162D3FED01E(Any p0, Any p1) { return invoke<Any>(0x025C2580, p0, p1); } // 0x27AD7162D3FED01E b1207
	static Any _0xCCD9B77F70D31C9D(Any p0) { return invoke<Any>(0x025C2910, p0); } // 0xCCD9B77F70D31C9D b1207
	static Any _0xC93A9A45430D484E(Any p0) { return invoke<Any>(0x025C2A40, p0); } // 0xC93A9A45430D484E b1207
	static void _0x570A13A4CA2799BB(Player player, BOOL p1) { invoke<Void>(0x025C2B80, player, p1); } // 0x570A13A4CA2799BB b1207
	static void _0x3ACAC8832E77BC93(Player player, BOOL p1) { invoke<Void>(0x025C2D30, player, p1); } // 0x3ACAC8832E77BC93 b1207
	static void _0x2B12B6FC8B8772AB(Player player, int p1) { invoke<Void>(0x025C2E60, player, p1); } // 0x2B12B6FC8B8772AB b1207
	static void _0xE910932F4B30BE23(Player player) { invoke<Void>(0x025C2F80, player); } // 0xE910932F4B30BE23 b1207
	static void _0x131E294EF60160DF(Player player, float p1, float p2, float p3, float p4, Any p5) { invoke<Void>(0x025C3090, player, p1, p2, p3, p4, p5); } // 0x131E294EF60160DF b1207
	static void _0x0E9057A9DA78D0F8(Player player, int bitflag) { invoke<Void>(0x025C3250, player, bitflag); } // 0x0E9057A9DA78D0F8 b1207
	static void _0x263D69767F76059C(Player player, int p1) { invoke<Void>(0x025C3370, player, p1); } // 0x263D69767F76059C b1207
	static void _REGISTER_EAGLE_EYE_FOR_ENTITY(Player player, Entity entity, BOOL p2) { invoke<Void>(0x025C34A0, player, entity, p2); } // 0x543DFE14BE720027 b1207
	static void _0xAC67098A1E54ABB0(Any p0, Any p1, Any p2) { invoke<Void>(0x025C34C0, p0, p1, p2); } // 0xAC67098A1E54ABB0 b1207
	static void _UNREGISTER_EAGLE_EYE_FOR_ENTITY(Player player, Entity entity) { invoke<Void>(0x025C34E0, player, entity); } // 0x9DAE1380CC5C6451 b1207
	static void _0x9A957912CE2EABD1(Any p0, Any p1, Any p2) { invoke<Void>(0x025C34F0, p0, p1, p2); } // 0x9A957912CE2EABD1 b1207
	static void _0xE5D3EB37ABC1EB03(Any p0) { invoke<Void>(0x025C3510, p0); } // 0xE5D3EB37ABC1EB03 b1207
	static BOOL _IS_EAGLE_EYE_REGISTERED_FOR_ENTITY(Player player, Entity entity) { return invoke<BOOL>(0x025C3630, player, entity); } // 0x0E6846476906C9DD b1207
	static Any _0x6852288340B43239(Any p0, Any p1) { return invoke<Any>(0x025C3660, p0, p1); } // 0x6852288340B43239 b1207
	static Any _0xE50A67C33514A390(Any p0, Any p1) { return invoke<Any>(0x025C3690, p0, p1); } // 0xE50A67C33514A390 b1207
	static void _0xD288E02E364972D2(Any p0, Any p1, Any p2) { invoke<Void>(0x025C36C0, p0, p1, p2); } // 0xD288E02E364972D2 b1311
	static void _0x40AB73092C95B5F5(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x025C3990, p0, p1, p2, p3); } // 0x40AB73092C95B5F5 b1207
	static void _0x6ECFC621A168424C(Entity entity1, Entity entity2, Any p2, float p3) { invoke<Void>(0x025C3A60, entity1, entity2, p2, p3); } // 0x6ECFC621A168424C b1207
	static void _0xDC5E09D012D759C4(Entity entity1, Entity entity2, Any p2) { invoke<Void>(0x025C3BB0, entity1, entity2, p2); } // 0xDC5E09D012D759C4 b1207
	static void _0x00B156AFEBCC5AE0(Any p0) { invoke<Void>(0x025C3CD0, p0); } // 0x00B156AFEBCC5AE0 b1207
	static void _0xC58CE6824E604DEC(Any p0) { invoke<Void>(0x025C3D70, p0); } // 0xC58CE6824E604DEC b1207
	static void _0x330CA55A3647FA1C(Any p0, Any p1) { invoke<Void>(0x025C3E90, p0, p1); } // 0x330CA55A3647FA1C b1207
	static Any _0xA62BBAAE67A05BB0(Any p0) { return invoke<Any>(0x025C3FB0, p0); } // 0xA62BBAAE67A05BB0 b1207
	static void _EAGLE_EYE_SET_COLOR(Player player, BOOL p1, Any* p2) { invoke<Void>(0x025C40E0, player, p1, p2); } // 0x2C41D93F550D5E37 b1207
	static void _0x22C8B10802301381(Any p0, Any p1) { invoke<Void>(0x025C4370, p0, p1); } // 0x22C8B10802301381 b1207
	static void _EAGLE_EYE_SET_DRAIN_RATE_MODIFIER(Player player, float modifier) { invoke<Void>(0x025C43A0, player, modifier); } // 0xE0D6C2A146A5C993 b1207
	static void _0x06E1FB78B1E59CA5(Ped ped, BOOL p1) { invoke<Void>(0x025C44D0, ped, p1); } // 0x06E1FB78B1E59CA5 b1207
	static void _EAGLE_EYE_SET_PLUS_FLAG_DISABLED(Ped ped, BOOL disabled) { invoke<Void>(0x025C45F0, ped, disabled); } // 0xCE285A4413B00B7F b1207
	static Any _0x3813E11A378958A5(Any p0) { return invoke<Any>(0x025C4780, p0); } // 0x3813E11A378958A5 b1207
	static void _0x2AF423D6ECB2C485(Any p0, Any p1) { invoke<Void>(0x025C48C0, p0, p1); } // 0x2AF423D6ECB2C485 b1207
	static void _0x0F9CF06986300875(Any p0) { invoke<Void>(0x025C48D0, p0); } // 0x0F9CF06986300875 b1207
	static void _EAGLE_EYE_SET_TRACKING_UPGRADE(Player player, float p1) { invoke<Void>(0x025C4A00, player, p1); } // 0xDFC85C5199045026 b1207
	static void _EAGLE_EYE_SET_TRACKING_UPGRADE_2(Player player, float p1) { invoke<Void>(0x025C4B20, player, p1); } // 0x6FA957D1B55941C1 b1311
	static Any _0x1DA5C5B0923E1B85(Any p0) { return invoke<Any>(0x025C4C40, p0); } // 0x1DA5C5B0923E1B85 b1207
	static Any _0xAAED694CE814817F(Any p0) { return invoke<Any>(0x025C4DA0, p0); } // 0xAAED694CE814817F b1207
	static void EAGLE_EYE_SET_CUSTOM_ENTITY_TINT(Entity entity, int red, int green, int blue) { invoke<Void>(0x025C4EF0, entity, red, green, blue); } // 0x62ED71E133B6C9F1 b1207
	static void _0xBC02B3D151D3859F(Entity entity, Any p1) { invoke<Void>(0x025C50E0, entity, p1); } // 0xBC02B3D151D3859F b1207
	static void _EAGLE_EYE_SET_CUSTOM_DISTANCE(Entity entity, float distance) { invoke<Void>(0x025C5370, entity, distance); } // 0x907B16B3834C69E2 b1207
	static void _0xF21C7A3F3FFBA629(Any p0) { invoke<Void>(0x025C54C0, p0); } // 0xF21C7A3F3FFBA629 b1207
	static void _SET_PLAYER_MANAGE_BUFF_SUPER_JUMP(Player player, float p1) { invoke<Void>(0x025C55E0, player, p1); } // 0x292F0B6EDC82E3A4 b1207
	static void _SET_LOCAL_PLAYER_PERSONA_ABILITY_FLAG(int flagId, BOOL toggle) { invoke<Void>(0x025C5700, flagId, toggle); } // 0x7146CF430965927C b1207
	static void _0xE133C1EC5300F740(Any p0, Any p1, Any p2) { invoke<Void>(0x025C5760, p0, p1, p2); } // 0xE133C1EC5300F740 b1207
	static void _0xC900A465364A85D6(Player player) { invoke<Void>(0x025C5780, player); } // 0xC900A465364A85D6 b1207
	static void _0xCFB2EED4FCB7BD77(Any p0, Any p1, Any p2) { invoke<Void>(0x025C5830, p0, p1, p2); } // 0xCFB2EED4FCB7BD77 b1207
	static void _0x2BB8D58E88777499(Any p0) { invoke<Void>(0x025C5980, p0); } // 0x2BB8D58E88777499 b1207
	static void _0x00EB5A760638DB55(Any p0, Any p1, Any p2) { invoke<Void>(0x025C5AE0, p0, p1, p2); } // 0x00EB5A760638DB55 b1207
	static void _0x65887EAC535A0B0C(Any p0) { invoke<Void>(0x025C5BE0, p0); } // 0x65887EAC535A0B0C b1207
	static void _SET_WEAPON_DEGRADATION_MODIFIER(Player player, float modifier) { invoke<Void>(0x025C5D40, player, modifier); } // 0x11A7FF918EF6BC66 b1207
	static void _SET_BOW_DRAW_REDUCTION_TIME_IN_DEADEYE(Player player, float drawReductionTime) { invoke<Void>(0x025C5E70, player, drawReductionTime); } // 0xBE0C524970892D41 b1207
	static void _SET_BOW_STAMINA_DRAIN_SPEED(Player player, float staminaDrain) { invoke<Void>(0x025C5F50, player, staminaDrain); } // 0xFE7C9CF376D23342 b1207
	static void _SET_DAMAGE_CLOSE_DISTANCE_BONUS(Player player, float closeRangeLowerBound, float closeRangeUpperBound) { invoke<Void>(0x025C6010, player, closeRangeLowerBound, closeRangeUpperBound); } // 0x7761A30432C91297 b1207
	static void _SET_DAMAGE_CLOSE_DISTANCE_BONUS_TOTAL(Player player, float closeDamageBonus) { invoke<Void>(0x025C6120, player, closeDamageBonus); } // 0x5006C36652D6EC56 b1207
	static void _SET_DAMAGE_FAR_DISTANCE_BONUS(Player player, float farRangeLowerBound, float farRangeUpperBound) { invoke<Void>(0x025C6200, player, farRangeLowerBound, farRangeUpperBound); } // 0xED591CB17C8BA216 b1207
	static void _SET_DAMAGE_FAR_DISTANCE_BONUS_TOTAL(Player player, float farDamageBonus) { invoke<Void>(0x025C6310, player, farDamageBonus); } // 0x1F0E3A4434565F8F b1207
	static Any _0x6C54E69516CC56BD(Any p0) { return invoke<Any>(0x025C63F0, p0); } // 0x6C54E69516CC56BD b1207
	static void _0x3A8611BD7BDE84F7(Any p0, Any p1) { invoke<Void>(0x025C64C0, p0, p1); } // 0x3A8611BD7BDE84F7 b1207
	static void _0xC177C827CEFC0AA4(Any p0, Any p1) { invoke<Void>(0x025C6580, p0, p1); } // 0xC177C827CEFC0AA4 b1207
	static void _0xBD96185264DDAAEA(Any p0, Any p1) { invoke<Void>(0x025C6670, p0, p1); } // 0xBD96185264DDAAEA b1207
	static void _0x628E742FE1F79C4A(Any p0, Any p1) { invoke<Void>(0x025C6760, p0, p1); } // 0x628E742FE1F79C4A b1207
	static void _0xC6366A585659D15C(Any p0, Any p1) { invoke<Void>(0x025C6850, p0, p1); } // 0xC6366A585659D15C b1207
	static void _0x98CD760DE43B612E(Any p0, Any p1) { invoke<Void>(0x025C69B0, p0, p1); } // 0x98CD760DE43B612E b1207
	static void _0x216BC0D3D2E413D2(Any p0, Any p1) { invoke<Void>(0x025C6B10, p0, p1); } // 0x216BC0D3D2E413D2 b1207
	static void _0x45EF176B532CA851(Any p0, Any p1) { invoke<Void>(0x025C6C70, p0, p1); } // 0x45EF176B532CA851 b1207
	static void _0xA342495F93B7B838(Any p0, Any p1) { invoke<Void>(0x025C6DD0, p0, p1); } // 0xA342495F93B7B838 b1207
	static void _0x3BB84F812E052C90(Any p0) { invoke<Void>(0x025C6F50, p0); } // 0x3BB84F812E052C90 b1207
	static void _0x9FC5A003FB76EDBD(Any p0, Any p1) { invoke<Void>(0x025C6F60, p0, p1); } // 0x9FC5A003FB76EDBD b1207
	static void _0x0FAF95D71ED67ADE(Any p0, Any p1) { invoke<Void>(0x025C7050, p0, p1); } // 0x0FAF95D71ED67ADE b1207
	static void _0x988C9045531B9FCE(Any p0, Any p1) { invoke<Void>(0x025C7140, p0, p1); } // 0x988C9045531B9FCE b1232
	static void _0x06C3DB00B69D5435(Any p0, Any p1) { invoke<Void>(0x025C7230, p0, p1); } // 0x06C3DB00B69D5435 b1232
	static void _0xBB6EA5D59E926095(Any p0, Any p1) { invoke<Void>(0x025C7320, p0, p1); } // 0xBB6EA5D59E926095 b1207
	static Any _0xE1D356F5A66D0FFA(Any p0) { return invoke<Any>(0x025C73E0, p0); } // 0xE1D356F5A66D0FFA b1232
	static void _0x929DDD5538F3DF1F(Any p0, Any p1) { invoke<Void>(0x025C7490, p0, p1); } // 0x929DDD5538F3DF1F b1232
	static void _0xFA7DAAE3959E6C7B(Any p0, Any p1) { invoke<Void>(0x025C7500, p0, p1); } // 0xFA7DAAE3959E6C7B b1207
	static void _0x9461A8FAB0378E5B(Any p0, Any p1) { invoke<Void>(0x025C75C0, p0, p1); } // 0x9461A8FAB0378E5B b1207
	static void _0xCB61A63AA53D7D22(Any p0, Any p1) { invoke<Void>(0x025C7690, p0, p1); } // 0xCB61A63AA53D7D22 b1207
	static void _0xCFFC3ECCD7A5CCEB(Any p0, Any p1, Any p2) { invoke<Void>(0x025C7750, p0, p1, p2); } // 0xCFFC3ECCD7A5CCEB b1207
	static void _0x76F7E1BCD623A429(Any p0) { invoke<Void>(0x025C7770, p0); } // 0x76F7E1BCD623A429 b1207
	static void _0x585CE159DB46FADB(Any p0, Any p1) { invoke<Void>(0x025C7860, p0, p1); } // 0x585CE159DB46FADB b1207
	static void _SET_PLAYER_RESET_FLAG(Player player, int playerResetFlag, BOOL p2) { invoke<Void>(0x025C7910, player, playerResetFlag, p2); } // 0x9F9A829C6751F3C7 b1207
	static Any _0xFE691E89C08937B6(Any p0, Any p1) { return invoke<Any>(0x025C7A60, p0, p1); } // 0xFE691E89C08937B6 b1207
	static Ped GET_MOUNT_OWNED_BY_PLAYER(Player player) { return invoke<Ped>(0x025C7B50, player); } // 0xF49F14462F0AE27C b1207
	static Player _GET_PLAYER_OWNER_OF_MOUNT(Ped mount) { return invoke<Player>(0x025C7C30, mount); } // 0xAD03B03737CE6810 b1207
	static void _SET_PLAYER_OWNS_MOUNT(Player player, Ped mount) { invoke<Void>(0x025C7C50, player, mount); } // 0xE6D4E435B56D5BD0 b1207
	static Vehicle _GET_VEHICLE_OWNED_BY_PLAYER(Player player) { return invoke<Vehicle>(0x025C7C60, player); } // 0xB9050A97594C8832 b1207
	static Player _GET_PLAYER_OWNER_OF_VEHICLE(Vehicle vehicle) { return invoke<Player>(0x025C7D30, vehicle); } // 0x7C803BDC8343228D b1207
	static void _SET_PLAYER_OWNS_VEHICLE(Player player, Vehicle vehicle) { invoke<Void>(0x025C7D50, player, vehicle); } // 0xD0E02AA618020D17 b1207
	static Vehicle _GET_PLAYER_HUNTING_WAGON(Player player) { return invoke<Vehicle>(0x025C7D60, player); } // 0x5CA6BBD4A7D8145E b1207
	static void _SET_PLAYER_HUNTING_WAGON(Player player, Vehicle wagon) { invoke<Void>(0x025C7E50, player, wagon); } // 0x6A4404BDFA62CE2C b1207
	static void _0x9044835BE9D9DBFE(Any p0, Any p1) { invoke<Void>(0x025C7E60, p0, p1); } // 0x9044835BE9D9DBFE b1207
	static Any GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(Any p0, Any p1) { return invoke<Any>(0x025C7F20, p0, p1); } // 0x0139637A3BFF8B6D b1207
	static Hash _GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME(Hash p0, BOOL model, BOOL outfit) { return invoke<Hash>(0x025C8000, p0, model, outfit); } // 0x8E84119A23C16623 b1207
	static Hash GET_TARGET_CHARACTER_NAME_SCRIPT_OVERRIDE_HASH(Ped ped) { return invoke<Hash>(0x025C8120, ped); } // 0x0335106F3ACABBED b1207
	static const char* GET_TARGET_CHARACTER_NAME_SCRIPT_OVERRIDE_RAW_STRING(Ped ped) { return invoke<const char*>(0x025C8220, ped); } // 0x755E08680F21EF30 b1207
	static Hash GET_TARGET_CHARACTER_NAME_FOR_LOCAL_PLAYER(Ped ped) { return invoke<Hash>(0x025C8340, ped); } // 0x36E3D8B5A6552FE8 b1207
	static Any _0xDA9D7BE231FE865F(Any p0, Any p1, Any p2) { return invoke<Any>(0x025C8460, p0, p1, p2); } // 0xDA9D7BE231FE865F b1207
	static void _0x946D46CD6DFB9742(Any p0, Any p1, Any p2) { invoke<Void>(0x025C8490, p0, p1, p2); } // 0x946D46CD6DFB9742 b1207
	static Any _0x0772F87D7B07719A(Any p0, Any p1, Any p2) { return invoke<Any>(0x025C85B0, p0, p1, p2); } // 0x0772F87D7B07719A b1207
	static void _0xCDDD4B74660E2335(Any p0, Any p1, Any p2) { invoke<Void>(0x025C8670, p0, p1, p2); } // 0xCDDD4B74660E2335 b1207
	static void _0x77E83C315A3B31CA(Any p0) { invoke<Void>(0x025C87B0, p0); } // 0x77E83C315A3B31CA b1207
	static void _0x7C32191D9FB2BDEA(Hash discoveryHash) { invoke<Void>(0x025C8830, discoveryHash); } // 0x7C32191D9FB2BDEA b1207
	static BOOL GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_MP(Hash discoveryHash) { return invoke<BOOL>(0x025C88D0, discoveryHash); } // 0x354F689C4FFAAB37 b1207
	static void _MODIFY_PLAYER_DISCOVERED_CHARACTER_NAME_MP_SET_UNDISCOVERED(Hash discoveryHash) { invoke<Void>(0x025C8980, discoveryHash); } // 0xFB0E622B401884D3 b1207
	static void _0xDC68829BB3F37023(Any p0, Any p1) { invoke<Void>(0x025C8A20, p0, p1); } // 0xDC68829BB3F37023 b1207
	static void _0x4DBC4873707E8FD6(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x025C8AF0, p0, p1, p2, p3); } // 0x4DBC4873707E8FD6 b1207
	static void _0xCEDC16930526F728(Any p0) { invoke<Void>(0x025C8C10, p0); } // 0xCEDC16930526F728 b1207
	static void _0x14E57F88BA0A07FC(Any p0) { invoke<Void>(0x025C8CE0, p0); } // 0x14E57F88BA0A07FC b1207
	static Any _0x2E1ABE627C95ED9B() { return invoke<Any>(0x025C8CF0); } // 0x2E1ABE627C95ED9B b1207
	static void _0x497A18F8F88AA9D8() { invoke<Void>(0x025C8E80); } // 0x497A18F8F88AA9D8 b1207
	static void _0x4F0D2256AAE94EDA(Any p0) { invoke<Void>(0x025C8EF0, p0); } // 0x4F0D2256AAE94EDA b1207
	static void _0x5F8E0303C229C84B(Player player, const char* p1) { invoke<Void>(0x025C8F10, player, p1); } // 0x5F8E0303C229C84B b1207
	static Any _0x0B7803F6F7BB43E0() { return invoke<Any>(0x025C8FD0); } // 0x0B7803F6F7BB43E0 b1207
	static Any _0xC74EB3F2EC169F6B(Any p0) { return invoke<Any>(0x025C8FE0, p0); } // 0xC74EB3F2EC169F6B b1232
	static void _0x3B296934DB026873(Any p0, Any p1) { invoke<Void>(0x025C8FF0, p0, p1); } // 0x3B296934DB026873 b1207
	static void SET_MIN_TIME_BEFORE_HORSE_BUCKING(Ped mount, int iMinBuckTime) { invoke<Void>(0x025C9000, mount, iMinBuckTime); } // 0x506CE71FB6E8CF5E b1207
	static Any _0xF4CB347D7B5EB0FD() { return invoke<Any>(0x025C90B0); } // 0xF4CB347D7B5EB0FD b1207
	static void _0xCD7CA3013FD12749(Any p0, Any p1) { invoke<Void>(0x025C90C0, p0, p1); } // 0xCD7CA3013FD12749 b1232
	static void _0xE5A3DD2FF84E1A4B(Any p0) { invoke<Void>(0x025C9170, p0); } // 0xE5A3DD2FF84E1A4B b1232
	static Any _0x57028FD99886F6F9() { return invoke<Any>(0x025C91B0); } // 0x57028FD99886F6F9 b1232
	static void _0x35A33783EC3C3448(Any p0) { invoke<Void>(0x025C91D0, p0); } // 0x35A33783EC3C3448 b1311
	static void _0x39D8D7082BC34B72(Any p0) { invoke<Void>(0x025C9260, p0); } // 0x39D8D7082BC34B72 b1311
	static void _0x1AD8AD999C27F44A(Any p0) { invoke<Void>(0x025C92D0, p0); } // 0x1AD8AD999C27F44A b1311
}

namespace POPULATION
{
	static int GET_NUM_MODELS_IN_POPULATION_SET(Hash popSetHash) { return invoke<int>(0x025CF2D0, popSetHash); } // 0xA1E3171ED0E47564 b1207
	static Hash GET_PED_MODEL_NAME_IN_POPULATION_SET(Hash popSetHash, int index) { return invoke<Hash>(0x025CF360, popSetHash, index); } // 0x3EAFA1C533B7139E b1207
	static Hash GET_RANDOM_MODEL_FROM_POPULATION_SET(Hash popSetHash, int flags, Hash p2, BOOL p3, BOOL p4, float x, float y, float z) { return invoke<Hash>(0x025CF400, popSetHash, flags, p2, p3, p4, x, y, z); } // 0x6B12ED8C77E8567B b1207
	static PopZone _CREATE_POPZONE_FROM_VOLUME(Volume volume) { return invoke<PopZone>(0x025CF450, volume); } // 0x9AC1C64FE46B6D09 b1207
	static void _DELETE_SCRIPT_POPZONE(PopZone popZone) { invoke<Void>(0x025CF470, popZone); } // 0xA6E6A66FC4CA4224 b1207
	static BOOL _IS_POPZONE_VALID(PopZone popZone) { return invoke<BOOL>(0x025CF580, popZone); } // 0xA5BD585005EFCAD4 b1207
	static void SET_POPZONE_POPULATION_SET(PopZone popZone, Hash populationSetHash) { invoke<Void>(0x025CF620, popZone, populationSetHash); } // 0x3E6A49D9B519E85C b1207
	static void _0x7E6BC0B94F5928F0(PopZone popZone, int p1, int p2) { invoke<Void>(0x025CF8B0, popZone, p1, p2); } // 0x7E6BC0B94F5928F0 b1207
	static void _0x578E2FA64E847C60(PopZone popZone, int p1) { invoke<Void>(0x025CF9C0, popZone, p1); } // 0x578E2FA64E847C60 b1207
	static void _0x08892122769770D5(PopZone popZone, BOOL p1) { invoke<Void>(0x025CFA60, popZone, p1); } // 0x08892122769770D5 b1207
	static void _0x0F1861101C9A9944(PopZone popZone, BOOL p1) { invoke<Void>(0x025CFB00, popZone, p1); } // 0x0F1861101C9A9944 b1207
	static void SET_SPAWNER_INFO_PRIORITY(Hash p0, Hash p1, int priority) { invoke<Void>(0x025CFBA0, p0, p1, priority); } // 0x60CDE717A6D47769 b1207
	static void CLEAR_SPAWNER_INFO_PRIORITY(Hash p0, Hash p1) { invoke<Void>(0x025CFC20, p0, p1); } // 0x217A54DE2D200305 b1207
	static void _0x638FCFC6042A9473(Any p0, Any p1) { invoke<Void>(0x025CFC90, p0, p1); } // 0x638FCFC6042A9473 b1207
	static void _0xB56D41A694E42E86(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x025CFCE0, p0, p1, p2, p3, p4, p5, p6); } // 0xB56D41A694E42E86 b1207
	static void _REMOVE_AMBIENT_SPAWN_RESTRICTION(Volume volume) { invoke<Void>(0x025CFD10, volume); } // 0x74C2B3DC0B294102 b1207
	static void _0x18262CAFEBB5FBE1(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x025CFDB0, p0, p1, p2, p3, p4, p5, p6); } // 0x18262CAFEBB5FBE1 b1207
	static void _REMOVE_AMBIENT_MOVE_RESTRICTION(Volume volume) { invoke<Void>(0x025CFDE0, volume); } // 0xA1CFB35069D23C23 b1207
	static void _0x2161278C6322F740(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x025CFF30, p0, p1, p2, p3, p4, p5); } // 0x2161278C6322F740 b1207
	static void _0xF45E46DEECF7DF6E(int bitFlag, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x025CFF50, bitFlag, p1, p2, p3, p4); } // 0xF45E46DEECF7DF6E b1207
	static void _0x8EC7CD701F872F87(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x025D0120, p0, p1, p2, p3, p4, p5); } // 0x8EC7CD701F872F87 b1207
	static void _0xC4533E3E87125C9E(Any p0) { invoke<Void>(0x025D02E0, p0); } // 0xC4533E3E87125C9E b1207
	static void _SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Ped ped, int p1) { invoke<Void>(0x025D03E0, ped, p1); } // 0xF74E134F40192884 b1207
	static void _0xDBBF12EA7C1029B2(Any p0, Any p1) { invoke<Void>(0x025D04F0, p0, p1); } // 0xDBBF12EA7C1029B2 b1207
	static void _0x247F86595D396344(Any p0) { invoke<Void>(0x025D0520, p0); } // 0x247F86595D396344 b1207
	static void _0x324AB2A68AD8AEE5() { invoke<Void>(0x025D0560); } // 0x324AB2A68AD8AEE5 b1207
	static void DISABLE_AMBIENT_ROAD_POPULATION(BOOL unk) { invoke<Void>(0x025D0570, unk); } // 0xC6DCC2A3A8825C85 b1207
	static void ENABLE_AMBIENT_ROAD_POPULATION() { invoke<Void>(0x025D0600); } // 0xBC90BDF4E5228EA1 b1207
	static void _0x2660E7720EDC4BD0(Any p0, Any p1, Any p2) { invoke<Void>(0x025D06E0, p0, p1, p2); } // 0x2660E7720EDC4BD0 b1311
	static Hash _GET_RANDOM_FISH_TYPE_FOR_LOCATION() { return invoke<Hash>(0x025D0710); } // 0x595478B3BBC3076D b1207
	static void _0xEC116EDB683AD479(BOOL p0) { invoke<Void>(0x025D0730, p0); } // 0xEC116EDB683AD479 b1207
}

namespace POSSE
{
	static Any _0xC086FF658B2E51DB() { return invoke<Any>(0xDEADBEEF); } // 0xC086FF658B2E51DB b1207
	static Any _0xC086FF658B2E51DA(Any p0) { return invoke<Any>(0x025D8E30, p0); } // 0xC086FF658B2E51DA b1207
	static Any _0xC087FF658B2E51DA(Any p0, Any p1) { return invoke<Any>(0x025D8E90, p0, p1); } // 0xC087FF658B2E51DA b1207
	static int POSSE_GET_POSSE_MEMBERSHIP_COUNT() { return invoke<int>(0x025D8F60); } // 0xC088FF658B2E51DA b1207
	static Any _0xC089FF658B2E51DA(Any p0, Any p1) { return invoke<Any>(0x025D8FC0, p0, p1); } // 0xC089FF658B2E51DA b1207
	static void _0xC08AFF658B2E51DA(Any p0) { invoke<Void>(0x025D9060, p0); } // 0xC08AFF658B2E51DA b1207
	static Any _0xC08BFF658B2E51DA(Any p0) { return invoke<Any>(0x025D90C0, p0); } // 0xC08BFF658B2E51DA b1207
	static void _0xC08AFF658B2E51DB(Any p0) { invoke<Void>(0xDEADBEEF, p0); } // 0xC08AFF658B2E51DB b1207
	static Any _0xC08CFF658B2E51DA(Any p0, Any p1) { return invoke<Any>(0x025D91E0, p0, p1); } // 0xC08CFF658B2E51DA b1207
	static Any _0xC09CFF658B2E51DA(Any p0, Any p1, Any p2) { return invoke<Any>(0x025D9210, p0, p1, p2); } // 0xC09CFF658B2E51DA b1207
	static Any _0xC08DEF658B2E51DA(Any p0) { return invoke<Any>(0x025D9240, p0); } // 0xC08DEF658B2E51DA b1207
	static Any _0xC08DFF658B2E51DA() { return invoke<Any>(0x025D92C0); } // 0xC08DFF658B2E51DA b1207
	static Any _0xC08DFF658B2E51DB(Any p0) { return invoke<Any>(0xDEADBEEF, p0); } // 0xC08DFF658B2E51DB b1207
	static Any _0xC08EFF658B2E51DB(Any p0, Any p1) { return invoke<Any>(0x025D93B0, p0, p1); } // 0xC08EFF658B2E51DB b1207
	static Any _0xC08FFF658B2E51DA() { return invoke<Any>(0x025D94D0); } // 0xC08FFF658B2E51DA b1207
	static Any _0xC08FFF658B2E51DB(Any p0) { return invoke<Any>(0xDEADBEEF, p0); } // 0xC08FFF658B2E51DB b1207
	static Any _0xC084FF658B2E61DA(Any p0) { return invoke<Any>(0xDEADBEEF, p0); } // 0xC084FF658B2E61DA b1207
	static Any _0xC084FF658B2E71DA(Any p0, Any p1, Any p2) { return invoke<Any>(0xDEADBEEF, p0, p1, p2); } // 0xC084FF658B2E71DA b1207
	static Any _0xC084FF658B2E81DA(Any p0, Any p1, Any p2) { return invoke<Any>(0xDEADBEEF, p0, p1, p2); } // 0xC084FF658B2E81DA b1207
	static Any _0xC084FF658B2E52DA(Any p0) { return invoke<Any>(0x025D95C0, p0); } // 0xC084FF658B2E52DA b1207
	static Any _0xC084FF658B2E53DA() { return invoke<Any>(0xDEADBEEF); } // 0xC084FF658B2E53DA b1207
	static Any _0xC084FF658B2E54DA(Any p0) { return invoke<Any>(0xDEADBEEF, p0); } // 0xC084FF658B2E54DA b1207
	static Any _0xC084FF658B2E55DA(Any p0, Any p1) { return invoke<Any>(0xDEADBEEF, p0, p1); } // 0xC084FF658B2E55DA b1207
	static void _0xC484FF658B2E55DA(Any p0) { invoke<Void>(0x025D99F0, p0); } // 0xC484FF658B2E55DA b1207
	static void _0xC584FF658B2E55DA(Any p0) { invoke<Void>(0x025D9A10, p0); } // 0xC584FF658B2E55DA b1207
	static void _0xC684FF658B2E55DA(Any p0) { invoke<Void>(0x025D9A30, p0); } // 0xC684FF658B2E55DA b1207
	static Any _0xC184FF658B2E55DA(Any p0, Any p1) { return invoke<Any>(0x025D9A50, p0, p1); } // 0xC184FF658B2E55DA b1207
	static Any _0xC284FF658B2E55DA(Any p0, Any p1, Any p2) { return invoke<Any>(0x025D9A80, p0, p1, p2); } // 0xC284FF658B2E55DA b1207
	static Any _0xC394FF658B2E55DA(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x025D9AB0, p0, p1, p2, p3); } // 0xC394FF658B2E55DA b1207
	static Any _0xC07CFF658B2E51DA(Any p0, Any p1) { return invoke<Any>(0x025D9B00, p0, p1); } // 0xC07CFF658B2E51DA b1207
	static Any _0xC06CFF658B2E51DA(Any p0, Any p1, Any p2) { return invoke<Any>(0x025D9BA0, p0, p1, p2); } // 0xC06CFF658B2E51DA b1207
}

namespace PROPSET
{
	static BOOL _REQUEST_PROP_SET(Hash hash) { return invoke<BOOL>(0x025E0EA0, hash); } // 0xF3DE57A46D5585E9 b1207
	static BOOL _REQUEST_PROP_SET_2(Hash hash) { return invoke<BOOL>(0x025E0ED0, hash); } // 0xE72F591958F3ACAB b1207
	static BOOL _HAS_PROP_SET_LOADED(Hash hash) { return invoke<BOOL>(0x025E0F00, hash); } // 0x48A88FC684C55FDC b1207
	static BOOL _HAS_PROP_SET_LOADED_2(Hash hash) { return invoke<BOOL>(0x025E0FB0, hash); } // 0xD090ABEF4D6A7D96 b1207
	static void _SET_PROP_SET_AS_NO_LONGER_NEEDED(PropSet propSet) { invoke<Void>(0x025E1060, propSet); } // 0x909E3C7FAE539FB1 b1207
	static void _DELETE_PROP_SET(PropSet propSet, BOOL p1, BOOL p2) { invoke<Void>(0x025E1070, propSet, p1, p2); } // 0x58AC173A55D9D7B4 b1207
	static BOOL _RELEASE_PROP_SET(Hash hash) { return invoke<BOOL>(0x025E1090, hash); } // 0xB1964A83B345B4AB b1207
	static PropSet _CREATE_PROP_SET(Hash hash, float x, float y, float z, int p4, float p5, float p6, BOOL p7, BOOL p8) { return invoke<PropSet>(0x025E10C0, hash, x, y, z, p4, p5, p6, p7, p8); } // 0xE65C5CBA95F0E510 b1207
	static PropSet _CREATE_PROP_SET_2(Hash hash, float x, float y, float z, int p4, float p5, float p6, BOOL p7, BOOL p8) { return invoke<PropSet>(0x025E1110, hash, x, y, z, p4, p5, p6, p7, p8); } // 0x899C97A1CCE7D483 b1207
	static PropSet CREATE_PROP_SET_INSTANCE_ATTACHED_TO_ENTITY(Hash hash, float x, float y, float z, Entity entity, float p5, BOOL p6, int p7, BOOL p8) { return invoke<PropSet>(0x025E1160, hash, x, y, z, entity, p5, p6, p7, p8); } // 0x9609DBDDE18FAD8C b1207
	static PropSet _CREATE_PROP_SET_4(Hash hash, float x, float y, float z, Entity entity, float p5, BOOL p6, int p7, BOOL p8) { return invoke<PropSet>(0x025E11B0, hash, x, y, z, entity, p5, p6, p7, p8); } // 0xACA7FB30269096D4 b1207
	static BOOL DOES_PROP_SET_EXIST(PropSet propSet) { return invoke<BOOL>(0x025E1200, propSet); } // 0x7DDDCF815E650FF5 b1207
	static BOOL _DOES_PROP_SET_OF_TYPE_EXIST_NEAR_COORDS(Hash propsetHash, float x, float y, float z) { return invoke<BOOL>(0x025E12A0, propsetHash, x, y, z); } // 0x72068021F498E6E3 b1207
	static BOOL IS_PROP_SET_FULLY_LOADED(PropSet propSet) { return invoke<BOOL>(0x025E1460, propSet); } // 0xF42DB680A8B2A4D9 b1207
	static void _SET_PROP_SET_VISIBLE(PropSet propSet, BOOL toggle) { invoke<Void>(0x025E1590, propSet, toggle); } // 0x9D096A5BD02F953E b1207
	static BOOL _IS_PROP_SET_VISIBLE(PropSet propSet) { return invoke<BOOL>(0x025E16C0, propSet); } // 0x0CE8AAFE9E433A23 b1207
	static Hash _GET_PROP_SET_MODEL(PropSet propSet) { return invoke<Hash>(0x025E1770, propSet); } // 0xA6A9712955F53D9C b1207
	static Hash _GET_VEHICLE_PROP_SET_HASH(Vehicle vehicle) { return invoke<Hash>(0x025E1850, vehicle); } // 0x36F69E7A22655653 b1207
	static int _GET_ENTITIES_FROM_PROP_SET(PropSet propSet, ItemSet itemSet, Hash model, BOOL p3, BOOL p4) { return invoke<int>(0x025E1940, propSet, itemSet, model, p3, p4); } // 0x738271B660FE0695 b1207
	static void _0xC4B67EF3FD65622D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x025E1980, p0, p1, p2, p3, p4, p5); } // 0xC4B67EF3FD65622D b1207
	static void _0x58E0B01D45CA7357(Any p0) { invoke<Void>(0x025E1A80, p0); } // 0x58E0B01D45CA7357 b1207
	static void _0xC1AB7EEFD3E6EE49(Any p0, Any p1) { invoke<Void>(0x025E1B30, p0, p1); } // 0xC1AB7EEFD3E6EE49 b1207
	static PropSet _GET_VEHICLE_PROP_SET(Vehicle vehicle) { return invoke<PropSet>(0x025E1C50, vehicle); } // 0xCE2ACD6F602803E5 b1207
	static BOOL _DOES_VEHICLE_HAVE_ANY_PROP_SET(Vehicle vehicle) { return invoke<BOOL>(0x025E1D70, vehicle); } // 0x53784CEA0159439B b1207
	static void _ADD_PROP_SET_FOR_VEHICLE(Vehicle vehicle, Hash propset) { invoke<Void>(0x025E1E20, vehicle, propset); } // 0xD80FAF919A2E56EA b1207
	static void _REMOVE_VEHICLE_PROP_SETS(Vehicle vehicle) { invoke<Void>(0x025E1EF0, vehicle); } // 0x3BCF32FF37EA9F1D b1207
	static BOOL _IS_VEHICLE_PROP_SET_LOADED(Vehicle vehicle) { return invoke<BOOL>(0x025E1FC0, vehicle); } // 0x155B2FBE72D7D1D0 b1207
	static void _ADD_ADDITIONAL_PROP_SET_FOR_VEHICLE(Vehicle vehicle, Hash propset) { invoke<Void>(0x025E20F0, vehicle, propset); } // 0x75F90E4051CC084C b1207
	static BOOL _IS_VEHICLE_PROP_SET_LOADED_ADDITIONAL(Vehicle vehicle) { return invoke<BOOL>(0x025E21C0, vehicle); } // 0x7264F9CA87A9830B b1207
	static PropSet _GET_VEHICLE_LIGHT_PROP_SET(Vehicle vehicle) { return invoke<PropSet>(0x025E22F0, vehicle); } // 0xA079300AF757FB1A b1207
	static BOOL _DOES_VEHICLE_HAVE_ANY_LIGHT_PROP_SET(Vehicle vehicle) { return invoke<BOOL>(0x025E2410, vehicle); } // 0xC9B4B3A36F81FD75 b1207
	static void _ADD_LIGHT_PROP_SET_TO_VEHICLE(Vehicle vehicle, Hash lightPropset) { invoke<Void>(0x025E24C0, vehicle, lightPropset); } // 0xC0F0417A90402742 b1207
	static void _REMOVE_VEHICLE_LIGHT_PROP_SETS(Vehicle vehicle) { invoke<Void>(0x025E2590, vehicle); } // 0xE31C0CB1C3186D40 b1207
	static BOOL _IS_VEHICLE_LIGHT_PROP_SET_LOADED(Vehicle vehicle) { return invoke<BOOL>(0x025E2650, vehicle); } // 0x0790473EEE1977D3 b1207
	static PropSet _GET_TRAIN_CARRIAGE_PROP_SET(Entity trainCarriage) { return invoke<PropSet>(0x025E2780, trainCarriage); } // 0xCFC0BD09BB1B73FF b1207
	static Any _0x8F3333F0A6900B3C(Any p0, Any p1) { return invoke<Any>(0x025E28B0, p0, p1); } // 0x8F3333F0A6900B3C b1207
	static PropSet _GET_PROP_SET_AT_COORDS(Hash propsetHash, float x, float y, float z) { return invoke<PropSet>(0x025E2A10, propsetHash, x, y, z); } // 0xC061E50F8D299F95 b1207
}

namespace QUEUE
{
	static BOOL _EVENT_QUEUE_IS_EMPTY(Hash hash) { return invoke<BOOL>(0x0616DAD0, hash); } // 0x402B5D7D269FF796 b1207
	static void _EVENT_QUEUE_POP(Hash hash) { invoke<Void>(0x0616DB90, hash); } // 0xD87DF294B049211D b1207
}

namespace RECORDING
{
	static void _STOP_RECORDING_THIS_FRAME() { invoke<Void>(0x025E38E0); } // 0xA8C44C13419634F2 b1207
}

namespace REPLAY
{
	static BOOL _IS_INTERIOR_RENDERING_DISABLED() { return invoke<BOOL>(0x025E4310); } // 0x0F838D47DE58EDB2 b1207
	static void _0x57C6525034E76EB0() { invoke<Void>(0x025E4320); } // 0x57C6525034E76EB0 b1207
	static BOOL OPEN_VIDEO_EDITOR() { return invoke<BOOL>(0x025E4330); } // 0xB3F2829907403C13 b1207
	static BOOL CLOSE_VIDEO_EDITOR(Any p0) { return invoke<BOOL>(0x025E4340, p0); } // 0xCEEC64BD27A59312 b1207
	static BOOL IS_VIDEO_EDITOR_RUNNING() { return invoke<BOOL>(0x025E4350); } // 0x9EEB007317FA3B9C b1207
}

namespace SCRIPTS
{
	static void _SET_PLAYER_BIT_AT_INDEX(Any* value, int bitIndex) { invoke<Void>(0x025F8470, value, bitIndex); } // 0x31010318BA9897AC b1207
	static void _CLEAR_PLAYER_BIT_AT_INDEX(Any* value, int bitIndex) { invoke<Void>(0x025F8490, value, bitIndex); } // 0xD426E2E3288469D6 b1207
	static void _0xE4ABE20DCE7C7CFE(Any p0, Any p1, Any p2) { invoke<Void>(0x025F84C0, p0, p1, p2); } // 0xE4ABE20DCE7C7CFE b1207
	static void _0xFFDDF802279BE128(Any p0, Any p1, Any p2) { invoke<Void>(0x025F84F0, p0, p1, p2); } // 0xFFDDF802279BE128 b1207
	static void _0x64F765D9A1F8F02C(Any p0, Any p1, Any p2) { invoke<Void>(0x025F8520, p0, p1, p2); } // 0x64F765D9A1F8F02C b1207
	static void _SET_ALL_PLAYER_BITS(Any* value) { invoke<Void>(0x025F8550, value); } // 0x20F4CB76689ACDBC b1207
	static void _CLEAR_ALL_PLAYER_BITS(Any* value) { invoke<Void>(0x025F8570, value); } // 0xDE544B7EC0C187CC b1207
	static Any _0x72B2E00C9BAC6789(Any p0, Any p1) { return invoke<Any>(0x025F8590, p0, p1); } // 0x72B2E00C9BAC6789 b1207
	static Any _0x179A6F0EE2E79026(Any p0) { return invoke<Any>(0x025F85C0, p0); } // 0x179A6F0EE2E79026 b1207
	static int GET_BLOCK_OF_PLAYER_BITS(Any* value, int p1) { return invoke<int>(0x025F85E0, value, p1); } // 0xFA3B530A5CC693D5 b1207
	static void SET_BLOCK_OF_PLAYER_BITS(Any* value, int p1, int p2) { invoke<Void>(0x025F8600, value, p1, p2); } // 0xC6DFB8C04C86D5A5 b1207
	static int COUNT_PLAYER_BITS(Any* value) { return invoke<int>(0x025F8630, value); } // 0x462C687BEA254BD9 b1207
	static void _0x1BDB5A07307F6929(Any p0, Any p1) { invoke<Void>(0x025F8650, p0, p1); } // 0x1BDB5A07307F6929 b1207
	static void _0x1C5EB3C27F7508CB(Any p0, Any p1) { invoke<Void>(0x025F8670, p0, p1); } // 0x1C5EB3C27F7508CB b1207
	static void _0x42A429CDFED6D99D(Any p0, Any p1, Any p2) { invoke<Void>(0x025F86A0, p0, p1, p2); } // 0x42A429CDFED6D99D b1207
	static void _0x5827BE85A87B073D(Any p0) { invoke<Void>(0x025F86D0, p0); } // 0x5827BE85A87B073D b1207
	static Any _0x0A79C81C418F5D38(Any p0, Any p1) { return invoke<Any>(0x025F86F0, p0, p1); } // 0x0A79C81C418F5D38 b1207
	static Any _0xA88E1D7FA1E20080(Any p0) { return invoke<Any>(0x025F8720, p0); } // 0xA88E1D7FA1E20080 b1207
	static int COUNT_PARTICIPANT_BITS(Any* value) { return invoke<int>(0x025F8740, value); } // 0x2F050A3FF8738245 b1207
	static void REQUEST_SCRIPT(const char* scriptName) { invoke<Void>(0x025F87F0, scriptName); } // 0x46ED607DDD40D7FE 0xE26B2666 b1207
	static void SET_SCRIPT_AS_NO_LONGER_NEEDED(const char* scriptName) { invoke<Void>(0x025F89C0, scriptName); } // 0x0086D3067E1CFD1C 0x6FCB7795 b1207
	static BOOL HAS_SCRIPT_LOADED(const char* scriptName) { return invoke<BOOL>(0x025F8C30, scriptName); } // 0xE97BD36574F8B0A6 0x5D67F751 b1207
	static BOOL DOES_SCRIPT_EXIST(const char* scriptName) { return invoke<BOOL>(0x025F8E80, scriptName); } // 0x552B171E3F69E5AE 0xDEAB87AB b1207
	static void REQUEST_SCRIPT_WITH_NAME_HASH(Hash scriptHash) { invoke<Void>(0x025F90C0, scriptHash); } // 0xF6B9CE3F8D5B9B74 0x1C68D9DC b1207
	static void SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(Hash scriptHash) { invoke<Void>(0x025F9180, scriptHash); } // 0x50723A1567C8361E 0x96C26F66 b1207
	static BOOL HAS_SCRIPT_WITH_NAME_HASH_LOADED(Hash scriptHash) { return invoke<BOOL>(0x025F92D0, scriptHash); } // 0xA5D8E0C2F3C7EEBC 0x06674818 b1207
	static BOOL DOES_SCRIPT_WITH_NAME_HASH_EXIST(Hash scriptHash) { return invoke<BOOL>(0x025F9400, scriptHash); } // 0xA34E89749F628284 0x19EAE282 b1207
	static void TERMINATE_THREAD(int threadId) { invoke<Void>(0x025F94F0, threadId); } // 0x87ED52AE40EA1A52 0x253FD520 b1207
	static BOOL IS_THREAD_ACTIVE(int threadId, BOOL ignoreKilledState) { return invoke<BOOL>(0x025F95B0, threadId, ignoreKilledState); } // 0x46E9AE36D8FA6417 0x78D7A5A0 b1207
	static BOOL DOES_THREAD_EXIST(int threadId) { return invoke<BOOL>(0x025F96D0, threadId); } // 0xFF975BC4435A0FA3 b1207
	static void GET_THREAD_EXISTENCE_DETAILS(int threadId, BOOL* threadExists, BOOL* hasScriptHandler) { invoke<Void>(0x025F9790, threadId, threadExists, hasScriptHandler); } // 0xD92FA81B64920E85 b1207
	static Hash _GET_HASH_OF_THREAD(int threadId) { return invoke<Hash>(0x025F9870, threadId); } // 0x724CB89D35B283D0 b1207
	static void SCRIPT_THREAD_ITERATOR_RESET() { invoke<Void>(0x025F98D0); } // 0x39382EB8DCD8684D 0xBB4E2F66 b1207
	static int SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID() { return invoke<int>(0x025F98E0); } // 0x3CE3FB167E837D7C 0x1E28B28F b1207
	static BOOL _IS_BACKGROUND_SCRIPT(int threadId) { return invoke<BOOL>(0x025F9940, threadId); } // 0x20B7F69B40C6B755 b1207
	static int GET_ID_OF_THIS_THREAD() { return invoke<int>(0x025F99A0); } // 0x55525C346BEF6960 0xDE524830 b1207
	static void TERMINATE_THIS_THREAD() { invoke<Void>(0x025F99B0); } // 0x5E8B6D17FF91CD59 0x3CD9CBB7 b1207
	static int _GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Hash scriptHash) { return invoke<int>(0x025F99C0, scriptHash); } // 0x8E34C953364A76DD 0x029D3841 b1207
	static void _REQUEST_THREAD_EXIT(int threadId) { invoke<Void>(0x025F99E0, threadId); } // 0x7DE4643157AD646C b1207
	static void _REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(Hash nameHash) { invoke<Void>(0x025F9A40, nameHash); } // 0x7423F7835770F619 b1207
	static BOOL IS_THREAD_EXIT_REQUESTED() { return invoke<BOOL>(0x025F9AA0); } // 0x9E4EF615E307FBBE b1207
	static BOOL _IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID(int threadId) { return invoke<BOOL>(0x025F9AC0, threadId); } // 0x30BED53646C86D11 b1207
	static int _GET_THREAD_EXIT_REASON() { return invoke<int>(0x025F9B20); } // 0x54AE4FDEEFEAB77E b1207
	static Hash GET_HASH_OF_THIS_SCRIPT_NAME() { return invoke<Hash>(0xDEADBEEF); } // 0xBC2C927F5C264960 0x2BEE1F45 b1207
	static int GET_NUMBER_OF_EVENTS(int eventGroup) { return invoke<int>(0x025F9B60, eventGroup); } // 0x5CE8DE5909565748 0xA3525D60 b1207
	static BOOL GET_EVENT_EXISTS(int eventGroup, int eventIndex) { return invoke<BOOL>(0x025F9B80, eventGroup, eventIndex); } // 0xC9F59C0A710ECD34 0xA1B447B5 b1207
	static Hash GET_EVENT_AT_INDEX(int eventGroup, int eventIndex) { return invoke<Hash>(0x025F9BB0, eventGroup, eventIndex); } // 0xA85E614430EFF816 0xB49C1442 b1207
	static BOOL GET_EVENT_DATA(int eventGroup, int eventIndex, Any* eventData, int eventDataSize) { return invoke<BOOL>(0x025F9BF0, eventGroup, eventIndex, eventData, eventDataSize); } // 0x57EC5FA4D4D6AFCA 0x4280F92F b1207
	static void SET_EVENT_FLAG_FOR_DELETION(Any p0, Any p1, Any p2) { invoke<Void>(0x025F9C40, p0, p1, p2); } // 0x4768D5252EAEB76F b1207
	static void TRIGGER_SCRIPT_EVENT(int eventGroup, Any* eventData, int eventDataSize, int scriptMetadataIndex, int* playerBits) { invoke<Void>(0x025F9C80, eventGroup, eventData, eventDataSize, scriptMetadataIndex, playerBits); } // 0x5AE99C571D5BBE5D 0x54763B35 b1207
	static void _TRIGGER_SCRIPT_EVENT_2(Any* eventData, int eventDataSize, int scriptMetadataIndex, int threadId) { invoke<Void>(0x025F9CC0, eventData, eventDataSize, scriptMetadataIndex, threadId); } // 0x8B61C950A148FFA2 b1207
	static Any _0xE7282390542F570D(Any p0) { return invoke<Any>(0x025F9D00, p0); } // 0xE7282390542F570D b1207
	static void _0x11B0A0B282FA9B10(Any p0) { invoke<Void>(0x025F9D20, p0); } // 0x11B0A0B282FA9B10 b1207
	static void _0x6F700A4BF7C3331B(Any p0) { invoke<Void>(0x025F9D40, p0); } // 0x6F700A4BF7C3331B b1207
	static void _0xF9E951A1E5517C06() { invoke<Void>(0x025F9D60); } // 0xF9E951A1E5517C06 b1207
	static void _0x76CBCD9EADC00955() { invoke<Void>(0x025F9DE0); } // 0x76CBCD9EADC00955 b1207
	static void SHUTDOWN_LOADING_SCREEN() { invoke<Void>(0x025F9E60); } // 0xFC179D7E8886DADF 0xA2826D17 b1207
	static void SET_NO_LOADING_SCREEN(BOOL toggle) { invoke<Void>(0x025F9E80, toggle); } // 0x5CB83156AA038F95 0xC8055034 b1207
	static BOOL GET_NO_LOADING_SCREEN() { return invoke<BOOL>(0x025F9E90); } // 0x323DAF00687E0F28 0x27512BA0 b1207
	static void _DISPLAY_LOADING_SCREENS(Hash p0, Hash p1, Hash p2, const char* gamemodeName, const char* title, const char* subtitle) { invoke<Void>(0x025F9EA0, p0, p1, p2, gamemodeName, title, subtitle); } // 0x1E5B70E53DB661E5 b1207
	static void _0x29FB4CE89472C3CB(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x025F9F00, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x29FB4CE89472C3CB b1207
	static void STOP_DISPLAYING_MP_TRANSITION_LOADING_SCREENS(Any p0) { invoke<Void>(0x025F9F70, p0); } // 0x778D4733E0F2F265 b1207
	static BOOL IS_LOADING_SCREEN_VISIBLE() { return invoke<BOOL>(0x025F9FC0); } // 0xB54ADBE65D528FCB b1207
	static void BAIL_TO_LANDING_PAGE(int bailCode) { invoke<Void>(0x025F9B40, bailCode); } // 0xBC2C927F5C264243 b1207
	static void BAIL_WITH_PASS_THROUGH_PARAMS(const char* params) { invoke<Void>(0x025F9FF0, params); } // 0xE98204D3C25AE14C b1207
	static BOOL _0x2238EC3EC631AB1F() { return invoke<BOOL>(0x025FA010); } // 0x2238EC3EC631AB1F b1207
	static void _0x4858148E3B8A75D0() { invoke<Void>(0x025FA030); } // 0x4858148E3B8A75D0 b1207
	static void BG_START_CONTEXT_HASH(Hash contextHash) { invoke<Void>(0x025FA040, contextHash); } // 0x2EB67D564DCC09D5 0x67B23E17 b1207
	static void BG_END_CONTEXT_HASH(Hash contextHash) { invoke<Void>(0x025FA0E0, contextHash); } // 0x6D1431744182CDE8 0x3D981EBF b1207
	static void BG_START_CONTEXT(const char* contextName) { invoke<Void>(0x025FA160, contextName); } // 0x49BA5678BA040CA7 0xF3F1D953 b1207
	static void BG_END_CONTEXT(const char* contextName) { invoke<Void>(0x025FA290, contextName); } // 0x3ABF7BA1C3E2C8CF 0x11F38FB3 b1207
	static BOOL _0x4AE1DFF337A86FDE(int scriptIndex, const char* p1) { return invoke<BOOL>(0x025FA390, scriptIndex, p1); } // 0x4AE1DFF337A86FDE 0xF8E5F73A b1207
	static int _0x55C40B7592BAD213(int scriptIndex, const char* p1) { return invoke<int>(0x025FA470, scriptIndex, p1); } // 0x55C40B7592BAD213 0x682CB7E1 b1207
	static int _0x829CD22E043A2577(Hash p0) { return invoke<int>(0x025FA570, p0); } // 0x829CD22E043A2577 0xC515E735 b1207
	static void _BG_RELOAD_ALL_BACKGROUND_SCRIPTS() { invoke<Void>(0x025FA5C0); } // 0xBE7D814CFA181B56 b1207
	static void _0x7D654266025E921B(Hash p0) { invoke<Void>(0x025FA5F0, p0); } // 0x7D654266025E921B b1207
	static void _0x50B72A754EE64A71(Any p0) { invoke<Void>(0x025FA6C0, p0); } // 0x50B72A754EE64A71 b1207
	static Any _0x7409669C5ED50144(Any p0) { return invoke<Any>(0x025FA710, p0); } // 0x7409669C5ED50144 b1207
	static const char* _NET_RPC_GUID_TO_STRING(Any* netRpcGuid) { return invoke<const char*>(0x025FA770, netRpcGuid); } // 0xAC9FF854BD4BA9B5 b1311
	static Any _0xAC8FAB22A914AE34(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x025FA8E0, p0, p1, p2, p3); } // 0xAC8FAB22A914AE34 b1207
	static Any _0xB9467E41DAB1CF2C(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x025FA910, p0, p1, p2, p3); } // 0xB9467E41DAB1CF2C b1207
	static Any _0x4293B44A855F82CC(Any p0, Any p1, Any p2) { return invoke<Any>(0x025FAA30, p0, p1, p2); } // 0x4293B44A855F82CC b1207
	static Any _0xF1E9045F5AA9E428(Any p0, Any p1, Any p2) { return invoke<Any>(0x025FAA60, p0, p1, p2); } // 0xF1E9045F5AA9E428 b1311
	static BOOL _STORE_GLOBAL_BLOCK(int index) { return invoke<BOOL>(0x025FAB70, index); } // 0xB952A3AC41D58F2F b1207
	static BOOL _RESTORE_GLOBAL_BLOCK(int index) { return invoke<BOOL>(0x025FABA0, index); } // 0xDC3914A99B4A5FDF b1207
	static BOOL _DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST(int index) { return invoke<BOOL>(0x025FAC10, index); } // 0x66EE5B93C308F734 b1207
	static void _SET_GLOBAL_BLOCK_CAN_BE_ACCESSED(int index, BOOL toggle) { invoke<Void>(0x025FAC40, index, toggle); } // 0xE66F392BFCE734AF b1207
	static BOOL _GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(int index) { return invoke<BOOL>(0x025FAC60, index); } // 0x42A7EB5C814C2DE0 b1207
	static void _SET_ALL_GLOBAL_BLOCKS_HAVE_BEEN_LOADED(BOOL toggle) { invoke<Void>(0x025FAC90, toggle); } // 0x11986B05885564D2 b1207
	static Any _0x380FFA15B72408FB(Any p0) { return invoke<Any>(0x025FACA0, p0); } // 0x380FFA15B72408FB b1207
	static int START_NEW_SCRIPT(const char* scriptName, int stackSize) { return invoke<int>(0x025ED570, scriptName, stackSize); } // 0xE81651AD79516E48 0x3F166D0E b1207
	static int START_NEW_SCRIPT_WITH_ARGS(const char* scriptName, Any* args, int argCount, int stackSize) { return invoke<int>(0x025ED620, scriptName, args, argCount, stackSize); } // 0xB8BA7F44DF1575E1 0x4A2100E4 b1207
	static int START_NEW_SCRIPT_WITH_NAME_HASH(Hash scriptHash, int stackSize) { return invoke<int>(0x025ED6D0, scriptHash, stackSize); } // 0xEB1C67C3A5333A92 0x8D15BE5D b1207
	static int START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(Hash scriptHash, Any* args, int argCount, int stackSize) { return invoke<int>(0x025ED700, scriptHash, args, argCount, stackSize); } // 0xC4BB298BD441BE78 0xE38A3AD4 b1207
}

namespace SAVE
{
	static void _0x4FB5869E2B37FC00() { invoke<Void>(0x025E8040); } // 0x4FB5869E2B37FC00 b1207
	static BOOL SAVEGAME_SAVE_SP(Hash savegameType) { return invoke<BOOL>(0x025E8260, savegameType); } // 0x62C9EB51656D68CE b1207
	static BOOL SAVEGAME_SAVE_MP(Hash savegameType) { return invoke<BOOL>(0x025E8290, savegameType); } // 0x1840F3B30ED0105F b1207
	static BOOL SAVEGAME_IS_SAVE_PENDING() { return invoke<BOOL>(0x025E82C0); } // 0x3CF46F55C6585590 b1207
	static Any _0x1431540BCA1A1BD2() { return invoke<Any>(0x025E83D0); } // 0x1431540BCA1A1BD2 b1207
	static Any _0xA7ECEBAFBAF997A5(Hash savegameType) { return invoke<Any>(0x025E8550, savegameType); } // 0xA7ECEBAFBAF997A5 b1436
	static void _0xED4B0C1057892B2E(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x025E85F0, p0, p1, p2, p3); } // 0xED4B0C1057892B2E b1207
	static void _0x9BB83C4DD7BE0802(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x025E8620, p0, p1, p2, p3, p4); } // 0x9BB83C4DD7BE0802 b1207
	static void _0xE8346E62FD7FB962() { invoke<Void>(0x025E8650); } // 0xE8346E62FD7FB962 b1207
	static void _0xC0ABF784590798A9(Any p0) { invoke<Void>(0x025E8720, p0); } // 0xC0ABF784590798A9 b1207
	static Any _0xB00CE33465B5406D(Any p0, Any p1) { return invoke<Any>(0x025E8740, p0, p1); } // 0xB00CE33465B5406D b1207
	static void _0x529B9CCD0972AF4D(Any p0, Any p1) { invoke<Void>(0x025E87D0, p0, p1); } // 0x529B9CCD0972AF4D b1207
	static void _0x529B9CCD0972AF4E(Any p0, Any p1) { invoke<Void>(0xDEADBEEF, p0, p1); } // 0x529B9CCD0972AF4E b1207
	static void _0xB25B5A375BE5BE26(Any p0, Any p1) { invoke<Void>(0x025E8810, p0, p1); } // 0xB25B5A375BE5BE26 b1207
	static void _0x35DEFECAE36D4FAE(Any p0, Any p1) { invoke<Void>(0x025E8830, p0, p1); } // 0x35DEFECAE36D4FAE b1207
	static void _0xBB7F4273C186BC4B(Any p0, Any p1) { invoke<Void>(0x025E8850, p0, p1); } // 0xBB7F4273C186BC4B b1207
	static void _0x5A10D6506B2F2C63(Any p0, Any p1) { invoke<Void>(0x025E8870, p0, p1); } // 0x5A10D6506B2F2C63 b1207
	static void _0x4845E7E7643A908C(Any p0, Any p1) { invoke<Void>(0x025E8890, p0, p1); } // 0x4845E7E7643A908C b1207
	static void _0x186608A2AC6F9E88(Any p0, Any p1) { invoke<Void>(0x025E88B0, p0, p1); } // 0x186608A2AC6F9E88 b1207
	static void _0x443174C20B8B9E7F(Any p0, Any p1, Any p2) { invoke<Void>(0x025E88D0, p0, p1, p2); } // 0x443174C20B8B9E7F b1207
	static void _0x8E8FFB9E4AD051D2(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x025E8900, p0, p1, p2, p3); } // 0x8E8FFB9E4AD051D2 b1207
	static void _0xE0B45E983BFC0768() { invoke<Void>(0x025E8920); } // 0xE0B45E983BFC0768 b1207
	static void _0x81F4E92BE3958364(Any p0, Any p1, Any p2) { invoke<Void>(0x025E89F0, p0, p1, p2); } // 0x81F4E92BE3958364 b1207
	static void _0xA844FEB5C22C2C74() { invoke<Void>(0x025E8A20); } // 0xA844FEB5C22C2C74 b1207
}

namespace SHAPETEST
{
	static ScrHandle START_SHAPE_TEST_LOS_PROBE(float x1, float y1, float z1, float x2, float y2, float z2, int flags, Entity entity, int p8) { return invoke<ScrHandle>(0x025FD700, x1, y1, z1, x2, y2, z2, flags, entity, p8); } // 0x7EE9F5D83DD4F90E 0xEFAF4BA6 b1207
	static Any _0x04AA59CA40571C2E(Any p0, Any p1) { return invoke<Any>(0x025FD730, p0, p1); } // 0x04AA59CA40571C2E b1207
	static ScrHandle START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(float x1, float y1, float z1, float x2, float y2, float z2, int flags, Entity entity, int p8) { return invoke<ScrHandle>(0x025FD7F0, x1, y1, z1, x2, y2, z2, flags, entity, p8); } // 0x377906D8A31E5586 0x8251485D b1207
	static ScrHandle START_SHAPE_TEST_BOX(float x, float y, float z, float x1, float y2, float z2, float rotX, float rotY, float rotZ, Any p9, Any p10, Any entity, Any p12) { return invoke<ScrHandle>(0x025FD820, x, y, z, x1, y2, z2, rotX, rotY, rotZ, p9, p10, entity, p12); } // 0xFE466162C4401D18 0x249BC876 b1207
	static ScrHandle START_SHAPE_TEST_CAPSULE(float x1, float y1, float z1, float x2, float y2, float z2, float radius, int flags, Entity entityToIgnore, int p9) { return invoke<ScrHandle>(0x025FD860, x1, y1, z1, x2, y2, z2, radius, flags, entityToIgnore, p9); } // 0x28579D1B8F8AAC80 0x591EA833 b1207
	static ScrHandle START_SHAPE_TEST_SWEPT_SPHERE(float x1, float y1, float z1, float x2, float y2, float z2, float radius, int flags, Entity entity, Any p9) { return invoke<ScrHandle>(0x025FD8A0, x1, y1, z1, x2, y2, z2, radius, flags, entity, p9); } // 0xAA5B7C8309F73230 0x4559460A b1207
	static ScrHandle _START_SHAPE_TEST_SURROUNDING_COORDS(Vector3* pVec1, Vector3* pVec2, int flag, Entity entity, int flag2) { return invoke<ScrHandle>(0x025FD8E0, pVec1, pVec2, flag, entity, flag2); } // 0x9839013D8B6014F1 b1207
	static int GET_SHAPE_TEST_RESULT(ScrHandle shapeTestHandle, BOOL* hit, Vector3* endCoords, Vector3* surfaceNormal, Entity* entityHit) { return invoke<int>(0x025FD990, shapeTestHandle, hit, endCoords, surfaceNormal, entityHit); } // 0xEDE8AC7C5108FB1D 0xF3C2875A b1207
}

namespace SOCIALCLUB
{
	static int SC_INBOX_GET_TOTAL_NUM_MESSAGES() { return invoke<int>(0x02603820); } // 0x8EF0F633280C0663 0x6BE5DF29 b1207
	static Hash SC_INBOX_GET_MESSAGE_TYPE_AT_INDEX(int msgIndex) { return invoke<Hash>(0x02603840, msgIndex); } // 0xFF92537C4DDC1241 0x5ECF955D b1207
	static BOOL SC_INBOX_GET_MESSAGE_IS_READ_AT_INDEX(int msgIndex) { return invoke<BOOL>(0x02603910, msgIndex); } // 0x74CF39E030A382C4 0xD1ED1D48 b1207
	static BOOL SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(int msgIndex) { return invoke<BOOL>(0x02603940, msgIndex); } // 0x63CAC501FFF66DC4 0x19EE0CCB b1207
	static BOOL SC_INBOX_MESSAGE_GET_DATA_INT(int p0, const char* context, int* out) { return invoke<BOOL>(0x02603970, p0, context, out); } // 0x95BB39C4DA99F348 0x88068C7C b1207
	static BOOL SC_INBOX_MESSAGE_GET_DATA_STRING(int p0, const char* context, char* out) { return invoke<BOOL>(0x026039B0, p0, context, out); } // 0x66F77FD58506FF6B 0x15607620 b1207
	static const char* SC_INBOX_MESSAGE_GET_RAW_TYPE_AT_INDEX(int p0) { return invoke<const char*>(0x026039F0, p0); } // 0x176D077685CD83E4 0x2C959AF9 b1207
	static BOOL SC_PRESENCE_ATTR_SET_FLOAT(Hash attrHash, float value) { return invoke<BOOL>(0x02603A30, attrHash, value); } // 0xA31DAFCDC33775E9 0x94BF0D35 b1207
	static BOOL SC_PRESENCE_ATTR_SET_INT_EX(const char* attrName, int value, BOOL p2) { return invoke<BOOL>(0x02603A60, attrName, value, p2); } // 0x0000000085488C49 b1207
	static BOOL SC_PRESENCE_ATTR_SET_FLOAT_EX(const char* attrName, float value, BOOL p2) { return invoke<BOOL>(0x02603B10, attrName, value, p2); } // 0x00000000467F4CAA b1207
	static BOOL SC_PRESENCE_ATTR_SET_STRING_EX(const char* attrName, const char* value, BOOL p2) { return invoke<BOOL>(0xDEADBEEF, attrName, value, p2); } // 0x00000000EB2D93B3 b1207
	static BOOL SC_PROFANITY_CHECK_STRING(const char* string, int* token) { return invoke<BOOL>(0x02603C10, string, token); } // 0x9C74AC9D87B3FFF4 0xDF084A6B b1207
	static BOOL SC_PROFANITY_GET_CHECK_IS_VALID(int token) { return invoke<BOOL>(0x02603C90, token); } // 0x08C8052AF40C4247 0xFFED3676 b1207
	static BOOL SC_PROFANITY_GET_CHECK_IS_PENDING(int token) { return invoke<BOOL>(0x02603CC0, token); } // 0x3A10BCD0C8AA0B82 0xA796D7A7 b1207
	static BOOL SC_PROFANITY_GET_STRING_PASSED(int token) { return invoke<BOOL>(0x02603CF0, token); } // 0xF302973BB8BE70E6 0x09497F31 b1207
	static int SC_PROFANITY_GET_STRING_STATUS(int token) { return invoke<int>(0x02603D20, token); } // 0x0CF3BFB99EBBE5B1 0x4D8A6521 b1207
	static BOOL _0xCBF743C984695CF3() { return invoke<BOOL>(0x02603D40); } // 0xCBF743C984695CF3 0xC96456BA b1207
	static int _0xD635DF6BAA5A6017() { return invoke<int>(0x02603EA0); } // 0xD635DF6BAA5A6017 0xC5E08B66 b1207
	static BOOL _0xB4411D4D6B81438E(const char* p0, int* p1) { return invoke<BOOL>(0x02603FF0, p0, p1); } // 0xB4411D4D6B81438E 0x04EE74A3 b1207
	static BOOL _0x060BBAD634C2B44B(const char* p0, float* p1) { return invoke<BOOL>(0x02604230, p0, p1); } // 0x060BBAD634C2B44B 0x8DA93C3D b1207
	static BOOL _0x9F6DCD0C939C71E9(const char* p0, char* p1) { return invoke<BOOL>(0x02604470, p0, p1); } // 0x9F6DCD0C939C71E9 0x37DD48B5 b1207
	static BOOL _0x89D9BDE7334B110F(char* p0) { return invoke<BOOL>(0x02604680, p0); } // 0x89D9BDE7334B110F 0xF929F61D b1207
	static BOOL _0x09937EB0CEBC2F9F(const char* p0) { return invoke<BOOL>(0x02604820, p0); } // 0x09937EB0CEBC2F9F 0x0572EB5E b1207
	static int _0x03C03ABBABBEF752(const char* p0) { return invoke<int>(0x02604960, p0); } // 0x03C03ABBABBEF752 0x8E7AEEB7 b1207
	static BOOL _0x3519CC3525319A96(const char* p0, int* p1, const char* p2) { return invoke<BOOL>(0x02604AB0, p0, p1, p2); } // 0x3519CC3525319A96 0x28C57FA0 b1207
	static BOOL _0x1BDB56DB258F052D(const char* p0, float* p1, const char* p2) { return invoke<BOOL>(0x02604CE0, p0, p1, p2); } // 0x1BDB56DB258F052D 0x59394583 b1207
	static BOOL _0xC8FC3B2432E8229D(const char* p0, char* p1, const char* p2) { return invoke<BOOL>(0x02604F10, p0, p1, p2); } // 0xC8FC3B2432E8229D 0x92452C0E b1207
	static BOOL _0x85EA0BEC7B1F7622(char* p0, const char* p1) { return invoke<BOOL>(0x02605100, p0, p1); } // 0x85EA0BEC7B1F7622 0xBBA8D34D b1207
	static BOOL _0x62B384FEFDE06817(int p0) { return invoke<BOOL>(0x02605290, p0); } // 0x62B384FEFDE06817 0xB21288FA b1207
	static BOOL _0x7C981DE05A7403A0(int p0, const char* p1, int* p2) { return invoke<BOOL>(0x02605400, p0, p1, p2); } // 0x7C981DE05A7403A0 0xE778B2A7 b1207
	static BOOL _0x91C9E2A0F9DD6DD4(int p0, const char* p1, float* p2) { return invoke<BOOL>(0x02605550, p0, p1, p2); } // 0x91C9E2A0F9DD6DD4 0x7E24BD6E b1207
	static BOOL _0x049D2196D9D11184(int p0, const char* p1, char* p2) { return invoke<BOOL>(0x026056A0, p0, p1, p2); } // 0x049D2196D9D11184 0xCE7D50A8 b1207
	static BOOL _0x11EA52CAD1B55910(int p0, char* p1) { return invoke<BOOL>(0x02605800, p0, p1); } // 0x11EA52CAD1B55910 0xD26CCA46 b1207
}

namespace SOCIALCLUBFEED
{
	static int _SC_FEED_SUBMIT_PRESET_MESSAGE(int type, int subType) { return invoke<int>(0x02606000, type, subType); } // 0xEFB64240F6B17817 b1207
	static BOOL SC_FEED_HUB_HAS_NEW_DATA() { return invoke<BOOL>(0x02606100); } // 0x068332D20CB6F897 b1232
}

namespace SPACTIONPROXY
{
	static BOOL _SPACTIONPROXY_START_MANAGER() { return invoke<BOOL>(0xDEADBEEF); } // 0x1F471B79ACC91BEE b1207
	static BOOL _SPACTIONPROXY_MANAGER_IS_READY() { return invoke<BOOL>(0xDEADBEEF); } // 0x1F471B79ACC91BED b1207
	static BOOL _SPACTIONPROXY_MANAGER_IS_FAILED() { return invoke<BOOL>(0x02607010); } // 0x1F471B79ACC91BEC b1207
	static BOOL _SPACTIONPROXY_GET_NEXT_PENDING_CRAFTING_ACTION(Any* data) { return invoke<BOOL>(0xDEADBEEF, data); } // 0x1F471B79ACC97BEF b1207
	static BOOL _SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(Any* data) { return invoke<BOOL>(0xDEADBEEF, data); } // 0x1F471B79ACC98BEF b1207
	static BOOL _SPACTIONPROXY_PROCESS_ACTION(Any p0, BOOL p1) { return invoke<BOOL>(0xDEADBEEF, p0, p1); } // 0x1F471B79ACC94BEF b1207
}

namespace STATS
{
	static BOOL STAT_ID_IS_VALID(Any* statId) { return invoke<BOOL>(0x02617E90, statId); } // 0xC48FE1971C9743FF b1207
	static BOOL STAT_ID_SET_INT(Any* statId, int value, BOOL p2) { return invoke<BOOL>(0x02617F00, statId, value, p2); } // 0xA4DDF5DF95E65EEE b1207
	static BOOL STAT_ID_SET_FLOAT(Any* statId, float value, BOOL p2) { return invoke<BOOL>(0x02617FA0, statId, value, p2); } // 0x481BDF6A10C5EF68 b1207
	static BOOL STAT_ID_SET_BOOL(Any* statId, BOOL value, BOOL p2) { return invoke<BOOL>(0x02618040, statId, value, p2); } // 0x3B5107353267D7A1 b1207
	static BOOL STAT_ID_SET_GXT_LABEL(Any* statId, const char* label, BOOL p2) { return invoke<BOOL>(0x026180F0, statId, label, p2); } // 0x05060A54834F2382 b1207
	static BOOL STAT_ID_SET_DATE(Any* statId, Any* date, BOOL p2) { return invoke<BOOL>(0x02618130, statId, date, p2); } // 0x1FAE9B2FAA2DFE06 b1207
	static BOOL STAT_ID_GET_INT(Any* statId, int* p1) { return invoke<BOOL>(0x02618190, statId, p1); } // 0x767FBC2AC802EF3E b1207
	static BOOL STAT_ID_GET_FLOAT(Any* statId, float* value) { return invoke<BOOL>(0x026181C0, statId, value); } // 0xD7AE6C9C9C6AC54D b1207
	static BOOL STAT_ID_GET_BOOL(Any* statId, BOOL* value) { return invoke<BOOL>(0x026181F0, statId, value); } // 0x11B5E6D2AE73F48F b1207
	static BOOL STAT_ID_GET_DATE(Any* statId, Any* date) { return invoke<BOOL>(0x02618220, statId, date); } // 0x8B0FACEFC36C824C b1207
	static void _0x0FEE2561120F3333(Any* statId) { invoke<Void>(0x02618280, statId); } // 0x0FEE2561120F3333 b1207
	static void _STAT_ID_INCREMENT_INT(Any* statId, int value) { invoke<Void>(0x026182E0, statId, value); } // 0x6A0184E904CDF25E b1207
	static void _STAT_ID_INCREMENT_FLOAT(Any* statId, float value) { invoke<Void>(0x02618340, statId, value); } // 0x4A47E38EA3D60939 b1207
	static void _0xBD861AE8A5181ED7(Any* statId, Any p1) { invoke<Void>(0x026183A0, statId, p1); } // 0xBD861AE8A5181ED7 b1207
	static void _0x91A4F58E01ED5E4C(Any* p0, Any p1) { invoke<Void>(0x02618400, p0, p1); } // 0x91A4F58E01ED5E4C b1207
	static void _0xE141F6B40B1E3683(Any p0, Any p1) { invoke<Void>(0x02618460, p0, p1); } // 0xE141F6B40B1E3683 b1207
	static void STAT_ID_SET_TO_POSSE_ID(Any* statId) { invoke<Void>(0x026184C0, statId); } // 0x34B22DE38477EDB4 b1207
	static Any _0x1E7384AB5D4F4581(Any p0) { return invoke<Any>(0x02618510, p0); } // 0x1E7384AB5D4F4581 b1207
	static Any _0x5420D398A42917FC(Any* p0, Any p1) { return invoke<Any>(0x02618570, p0, p1); } // 0x5420D398A42917FC b1311
	static void _0xDA26263C87CCE9C1(Any p0, Any p1, Hash category, Hash subcategory) { invoke<Void>(0xDEADBEEF, p0, p1, category, subcategory); } // 0xDA26263C87CCE9C1 b1207
	static void _0x831BF01C56149A8A(Any p0) { invoke<Void>(0x02618690, p0); } // 0x831BF01C56149A8A b1207
	static void _0x7C2ABF6E556B21FC(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x026187A0, p0, p1, p2, p3); } // 0x7C2ABF6E556B21FC b1207
	static void _0x8312F09C56149A8A(Any p0) { invoke<Void>(0x02618830, p0); } // 0x8312F09C56149A8A b1207
	static void _0x378D3B1B11D9385B(Any p0) { invoke<Void>(0x02618890, p0); } // 0x378D3B1B11D9385B b1207
	static void _0xDA26263C07CCE9C2(Any p0) { invoke<Void>(0x026185A0, p0); } // 0xDA26263C07CCE9C2 b1207
	static void _0xD64DBC8B0424135F(Any p0, Any p1) { invoke<Void>(0x02618B60, p0, p1); } // 0xD64DBC8B0424135F b1207
	static void _0xA59590050F80FF2E(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02618CA0, p0, p1, p2, p3); } // 0xA59590050F80FF2E b1207
	static void _0x90E9A5DADBABC918(Any p0) { invoke<Void>(0x02618D40, p0); } // 0x90E9A5DADBABC918 b1355
	static void _0xF8181B5EF156862C(Any p0) { invoke<Void>(0x02618DA0, p0); } // 0xF8181B5EF156862C b1207
	static void STAT_ADD_BOUNTY_TARGET(Hash p0, Ped ped) { invoke<Void>(0x02618E50, p0, ped); } // 0x6B1044FDC2B09101 b1207
	static void _0x8C889E4CBB4B2356(Any p0, Any p1) { invoke<Void>(0x02618F10, p0, p1); } // 0x8C889E4CBB4B2356 b1207
	static void STAT_BOUNTY_CAPTURED(Any p0) { invoke<Void>(0x02618FE0, p0); } // 0x262EF7CF49CF1EB9 b1207
	static void _0xA596890CF55B5095(Ped ped, BOOL p1) { invoke<Void>(0x02619090, ped, p1); } // 0xA596890CF55B5095 b1436
	static void STAT_BOUNTY_ESCAPED(Ped ped) { invoke<Void>(0x02619160, ped); } // 0xB22F05732F72F70C b1207
	static void _0xF21A5D66874FCEDD(Any p0, Any p1, Any p2) { invoke<Void>(0x02619210, p0, p1, p2); } // 0xF21A5D66874FCEDD b1207
	static void _0x3EB2791A1FBC8A42(Any p0, Any p1) { invoke<Void>(0x02619290, p0, p1); } // 0x3EB2791A1FBC8A42 b1207
	static void _0xDF95DF488A645CE7() { invoke<Void>(0x02619310); } // 0xDF95DF488A645CE7 b1207
	static void STAT_PHOTOGRAPH_TAKEN(ItemSet itemset) { invoke<Void>(0x02619370, itemset); } // 0x4D31051A4CA83787 b1311
	static void _0xBE66B26B6529E943(Any p0, Any p1, Any p2) { invoke<Void>(0x02619380, p0, p1, p2); } // 0xBE66B26B6529E943 b1311
	static void _0xF2B5ABDE09958689(Any p0, Any p1, Any p2) { invoke<Void>(0x02619460, p0, p1, p2); } // 0xF2B5ABDE09958689 b1311
	static void STAT_REGISTER_LEGENDARY_ANIMAL_DEED(Hash deedHash) { invoke<Void>(0x026195A0, deedHash); } // 0xCD0D69C65BB0E8B9 b1311
	static Any _0x302E71C1D9EE75B9(Any p0, Any p1, Any p2) { return invoke<Any>(0x02619600, p0, p1, p2); } // 0x302E71C1D9EE75B9 b1207
	static BOOL STATSTRACKER_IS_INITIALIZED(Hash p0) { return invoke<BOOL>(0x026196C0, p0); } // 0x01F4D242765C6B24 b1207
	static void _0x6123E2832C34243D(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x02619710, p0, p1, p2, p3, p4); } // 0x6123E2832C34243D b1207
	static void _0xCA41E86545413B5B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x02619770, p0, p1, p2, p3, p4, p5, p6); } // 0xCA41E86545413B5B b1207
	static void STATSTRACKER_DEED_STARTED(Hash p0, Any p1) { invoke<Void>(0x026197B0, p0, p1); } // 0xB2A38826E5886E83 b1207
	static void _0xD5910ECF81A2278C(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x026198E0, p0, p1, p2, p3); } // 0xD5910ECF81A2278C b1207
	static void _0x99230691875FC218(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x02619900, p0, p1, p2, p3, p4); } // 0x99230691875FC218 b1207
	static void _0x025E98E317652CDD(Any p0) { invoke<Void>(0x02619940, p0); } // 0x025E98E317652CDD b1207
	static void _0xE5A680A5D8B1F687(Any p0) { invoke<Void>(0x02619970, p0); } // 0xE5A680A5D8B1F687 b1207
	static Any _0x4DAC398297981B87(Any p0) { return invoke<Any>(0x02619990, p0); } // 0x4DAC398297981B87 b1207
	static BOOL CHAL_IS_GOAL_ACTIVE(Hash chalHash, Hash goalHash) { return invoke<BOOL>(0x026199F0, chalHash, goalHash); } // 0x04DAC3929796EB87 b1207
	static void CHAL_SET_GOAL_DISABLED(Hash chalHash, Hash goalHash, BOOL disabled) { invoke<Void>(0x02619AC0, chalHash, goalHash, disabled); } // 0xF63DF9EE16393343 b1436
	static int CHAL_GET_NUM_RANKS_COMPLETED(Hash chalHash) { return invoke<int>(0x02619BA0, chalHash); } // 0x58CB53DB63F84DE9 b1207
	static int CHAL_GET_MAX_RANKS(Hash chalHash) { return invoke<int>(0xDEADBEEF, chalHash); } // 0x58CB53DB63F84DEA b1207
	static void CHAL_ADD_GOAL_PROGRESS_INT(Hash chalHash, Hash goalHash, int value) { invoke<Void>(0xDEADBEEF, chalHash, goalHash, value); } // 0xDDBD560745B1EE9A b1207
	static void CHAL_ADD_GOAL_PROGRESS_FLOAT(Hash chalHash, Hash goalHash, float value) { invoke<Void>(0x02619D40, chalHash, goalHash, value); } // 0x86922D8C02FB7703 b1207
	static void CHAL_SET_GOAL_PROGRESS_INT(Hash chalHash, Hash goalHash, int value) { invoke<Void>(0xDEADBEEF, chalHash, goalHash, value); } // 0xDDBD560745B1EE9B b1207
	static void CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(Hash p0, int value) { invoke<Void>(0xDEADBEEF, p0, value); } // 0xDDBD560745B1EE9C b1207
	static void CHAL_ADD_GOAL_PROGRESS_FLOAT_BY_SCORE_ID(Hash p0, float value) { invoke<Void>(0xDEADBEEF, p0, value); } // 0x86922D8C02FB7705 b1232
	static BOOL CHAL_ACHIEVEMENT_IS_COMPLETE(Hash p0, Hash p1) { return invoke<BOOL>(0x02619EB0, p0, p1); } // 0x77B97A827739D434 b1232
	static int CHAL_ACHIEVEMENT_GET_PROGRESS_INT(Hash p0, Hash p1) { return invoke<int>(0x02619FB0, p0, p1); } // 0x808712E428F697B8 b1232
	static void CHAL_NET_START_CHAL(Hash chalHash) { invoke<Void>(0x0261A0D0, chalHash); } // 0x4ABF7E4DB6279E8F b1207
	static void CHAL_NET_STOP_CHAL(Hash chalHash) { invoke<Void>(0x0261A0F0, chalHash); } // 0x43B0163154A50C86 b1207
	static void CHAL_NET_START_GOAL(Hash chalHash, Hash goalHash) { invoke<Void>(0x0261A110, chalHash, goalHash); } // 0xC3FCB47344DCB638 b1207
	static void CHAL_NET_STOP_GOAL(Hash chalHash, Hash goalHash) { invoke<Void>(0x0261A130, chalHash, goalHash); } // 0x00CE6A93324A590B b1207
	static Any _0xDDBD560745B1EE98(Any p0, Any p1, Any p2) { return invoke<Any>(0x0261A1D0, p0, p1, p2); } // 0xDDBD560745B1EE98 b1207
	static Any _0xB112B9262EC29C20(Any p0, Any p1) { return invoke<Any>(0x0261A260, p0, p1); } // 0xB112B9262EC29C20 b1207
	static void _0x4FCBCC0584CD08E9(Any p0) { invoke<Void>(0x0261A290, p0); } // 0x4FCBCC0584CD08E9 b1207
	static Any _0xCA1F0B5103936891(Any p0) { return invoke<Any>(0x0261A300, p0); } // 0xCA1F0B5103936891 b1207
	static Any _0x8BA3D7B1E83EF803(Any p0) { return invoke<Any>(0x0261A3B0, p0); } // 0x8BA3D7B1E83EF803 b1207
	static int CHAL_MISSION_GET_NUM_GOALS(Hash missionHash) { return invoke<int>(0x0261A3E0, missionHash); } // 0x0B0576DD3A75E58D b1207
	static int CHAL_MISSION_GET_NUM_GOALS_COMPLETE(Hash missionHash) { return invoke<int>(0x0261A480, missionHash); } // 0xA785A52B59B7E7B2 b1207
	static BOOL CHAL_MISSION_IS_GOAL_COMPLETE(Hash missionHash, Hash goalHash) { return invoke<BOOL>(0x0261A570, missionHash, goalHash); } // 0xC0BB774787BBF301 b1207
	static void CHAL_MISSION_ADD_GOAL_PROGRESS_INT(Hash missionHash, Hash goalHash, int value) { invoke<Void>(0x0261A670, missionHash, goalHash, value); } // 0x97E18E7C098626DE b1207
	static Any _0x9D0F5D2E1951CD84() { return invoke<Any>(0x0261A690); } // 0x9D0F5D2E1951CD84 b1207
	static void _0x218F7710A139D012() { invoke<Void>(0x0261A790); } // 0x218F7710A139D012 b1207
	static Any _0x3AEABAE3F3C7600C() { return invoke<Any>(0x0261A7B0); } // 0x3AEABAE3F3C7600C b1207
	static Any _0x3F6FD87D2030ADC6() { return invoke<Any>(0x0261A920); } // 0x3F6FD87D2030ADC6 b1207
	static Any _0xA2E2BEA4E83F6270(Any p0) { return invoke<Any>(0x0261A940, p0); } // 0xA2E2BEA4E83F6270 b1207
	static Any _0xB5E2EDA2135E0FA1(Any p0, Any p1, Any p2) { return invoke<Any>(0x0261A9E0, p0, p1, p2); } // 0xB5E2EDA2135E0FA1 b1207
	static int WEEKLY_COLLECTIBLE_GET_NUM_SETS(Hash chalHash) { return invoke<int>(0x0261AA10, chalHash); } // 0x8F5317729F791D10 b1207
	static Hash WEEKLY_COLLECTIBLE_GET_ITEM_SET_BUY_AWARD(Hash chalHash, int index) { return invoke<Hash>(0x0261AAA0, chalHash, index); } // 0x610783F646894D25 b1207
	static Hash WEEKLY_COLLECTIBLE_GET_ITEM_SET_LABEL(Hash chalHash, int index) { return invoke<Hash>(0x0261ABA0, chalHash, index); } // 0xBFFA88522FF0F730 b1207
	static int WEEKLY_COLLECTIBLE_GET_NUM_ITEMS_IN_SET(Hash chalHash, int index) { return invoke<int>(0x0261ACE0, chalHash, index); } // 0x7D675C9DDDB365BE b1207
	static BOOL WEEKLY_COLLECTIBLE_GET_ITEM_IN_SET(Hash chalHash, int setIndex, int itemIndex, Hash* p3, int* p4) { return invoke<BOOL>(0x0261AD10, chalHash, setIndex, itemIndex, p3, p4); } // 0xBA61BA6205A3F5A8 b1207
	static void _0x4F2D5FA23DB992DE() { invoke<Void>(0x0261AD50); } // 0x4F2D5FA23DB992DE b1207
	static void _0x4E463A3CDEFFFE96() { invoke<Void>(0x0261AD80); } // 0x4E463A3CDEFFFE96 b1207
}

namespace STREAMING
{
	static void REQUEST_MODEL(Hash model, BOOL p1) { invoke<Void>(0x0262D620, model, p1); } // 0xFA28FE3A6246FC30 0xFFF1B500 b1207
	static BOOL HAS_MODEL_LOADED(Hash model) { return invoke<BOOL>(0x0262D640, model); } // 0x1283B8B89DD5D1B6 0x62BFDB37 b1207
	static void SET_MODEL_AS_NO_LONGER_NEEDED(Hash model) { invoke<Void>(0x0262D670, model); } // 0x4AD96EF928BD4F9A 0xAE0F069E b1207
	static BOOL IS_MODEL_IN_CDIMAGE(Hash model) { return invoke<BOOL>(0x0262D760, model); } // 0xD6F3B6D7716CFF8E 0x1094782F b1207
	static BOOL IS_MODEL_VALID(Hash model) { return invoke<BOOL>(0x0262D800, model); } // 0x392C8D8E07B70EFC 0xAF8F8E9D b1207
	static BOOL IS_MODEL_A_PED(Hash model) { return invoke<BOOL>(0x0262D8A0, model); } // 0xC3F09DE9D6D17DDA b1207
	static BOOL IS_MODEL_A_VEHICLE(Hash model) { return invoke<BOOL>(0x0262D990, model); } // 0x354F62672DE7DB0A 0xFFFC85D4 b1207
	static BOOL _IS_MODEL_AN_OBJECT(Hash model) { return invoke<BOOL>(0x0262DA80, model); } // 0x274EE1B90CFA669E b1207
	static BOOL _HAS_COLLISION_LOADED_AT_COORD(float x, float y, float z) { return invoke<BOOL>(0x0262DB50, x, y, z); } // 0xDA8B2EAF29E872E2 b1207
	static void _0x80B3E0597366ADF1() { invoke<Void>(0x0262DBB0); } // 0x80B3E0597366ADF1 b1207
	static void REQUEST_COLLISION_AT_COORD(float x, float y, float z) { invoke<Void>(0x0262DBD0, x, y, z); } // 0x0A3720F162A033C9 0xCD9805E7 b1207
	static void _0xA8432A14D4DC2101(float x, float y, float z) { invoke<Void>(0x0262DC00, x, y, z); } // 0xA8432A14D4DC2101 b1207
	static void REQUEST_COLLISION_FOR_MODEL(Hash model) { invoke<Void>(0x0262DC30, model); } // 0xF1767BE37F661551 0x3930C042 b1207
	static BOOL HAS_COLLISION_FOR_MODEL_LOADED(Hash model) { return invoke<BOOL>(0x0262DC40, model); } // 0x210A79C9EC89778F 0x41A094F8 b1207
	static void REQUEST_ADDITIONAL_COLLISION_AT_COORD(float x, float y, float z) { invoke<Void>(0x0262DD60, x, y, z); } // 0x83A8D71650D1894F 0xC2CC1DF2 b1311
	static BOOL DOES_ANIM_DICT_EXIST(const char* animDict) { return invoke<BOOL>(0x0262DD90, animDict); } // 0x537F44CB0D7F150D 0xCD31C872 b1207
	static void REQUEST_ANIM_DICT(const char* animDict) { invoke<Void>(0x0262DEB0, animDict); } // 0xA862A2AD321F94B4 0xDCA96950 b1207
	static BOOL HAS_ANIM_DICT_LOADED(const char* animDict) { return invoke<BOOL>(0x0262DEC0, animDict); } // 0x27FF6FE8009B40CA 0x05E6763C b1207
	static void REMOVE_ANIM_DICT(const char* animDict) { invoke<Void>(0x0262DEF0, animDict); } // 0x4763145053A33D46 0x0AE050B5 b1207
	static void REQUEST_MOVE_NETWORK_DEF(const char* name) { invoke<Void>(0x0262DF00, name); } // 0x2B6529C54D29037A b1207
	static BOOL HAS_MOVE_NETWORK_DEF_LOADED(const char* name) { return invoke<BOOL>(0x0262DF10, name); } // 0x2C04D89A0FB4E244 b1207
	static void REMOVE_MOVE_NETWORK_DEF(const char* name) { invoke<Void>(0x0262E050, name); } // 0x57A197AD83F66BBF b1207
	static void REQUEST_CLIP_SET(const char* clipSet) { invoke<Void>(0x0262E150, clipSet); } // 0xEF7611B57A820126 0x546C627A b1207
	static BOOL HAS_CLIP_SET_LOADED(const char* clipSet) { return invoke<BOOL>(0x0262E160, clipSet); } // 0x1F23D6B6DA1CC3B2 0x230D5455 b1207
	static void REMOVE_CLIP_SET(const char* clipSet) { invoke<Void>(0x0262E2A0, clipSet); } // 0x817FA1B1EE7CD6F0 0x1E21F7AA b1207
	static void _REQUEST_CLIP_SET_BY_HASH(Hash clipSetHash) { invoke<Void>(0x0262E360, clipSetHash); } // 0xAC37644A538F7524 b1207
	static void _0x03DDBF2D73799F9E(Any p0) { invoke<Void>(0x0262E370, p0); } // 0x03DDBF2D73799F9E b1207
	static Any _0x85B8F04555AB49B8(Any p0) { return invoke<Any>(0x0262E380, p0); } // 0x85B8F04555AB49B8 b1207
	static void _0x9F348DE670423460(Any p0) { invoke<Void>(0x0262E430, p0); } // 0x9F348DE670423460 b1207
	static Any _0x5288B7F0690F7C1F(Any p0) { return invoke<Any>(0x0262E4F0, p0); } // 0x5288B7F0690F7C1F b1207
	static int _REQUEST_SCENARIO_TYPE(Hash scenarioType, int p1, Any p2, Any p3) { return invoke<int>(0x0262E520, scenarioType, p1, p2, p3); } // 0x19A6BE7D9C6884D3 b1207
	static BOOL _HAS_SCENARIO_TYPE_LOADED(Hash scenarioType, BOOL p1) { return invoke<BOOL>(0x0262E6A0, scenarioType, p1); } // 0x9427C94D2E4094A4 b1207
	static Any _0x4EDDD9E9CA5AF985(Any p0) { return invoke<Any>(0x0262E6D0, p0); } // 0x4EDDD9E9CA5AF985 b1207
	static Any _0xB223249B7798EEED(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x0262E810, p0, p1, p2, p3); } // 0xB223249B7798EEED b1207
	static Any _0xA0AE7653E8181725(Any p0) { return invoke<Any>(0x0262E840, p0); } // 0xA0AE7653E8181725 b1207
	static Any _0x66BC28E50E85270E(Any p0) { return invoke<Any>(0x0262EA10, p0); } // 0x66BC28E50E85270E b1207
	static BOOL _GET_IPL_BOUNDING_SPHERE(Hash iplHash, Vector3* position, float* radius) { return invoke<BOOL>(0x0262EA60, iplHash, position, radius); } // 0x9C77964B0E07B633 b1207
	static void REQUEST_IPL_HASH(Hash iplHash) { invoke<Void>(0x0262EBC0, iplHash); } // 0x59767C5A7A9AE6DA b1207
	static void REQUEST_IPL_BY_HASH(Hash iplHash) { invoke<Void>(0x0262ED00, iplHash); } // 0x9E211A378F95C97C b1207
	static void REMOVE_IPL_HASH(Hash iplHash) { invoke<Void>(0x0262EE40, iplHash); } // 0x5A3E5CF7B4014B96 b1207
	static void REMOVE_IPL_BY_HASH(Hash iplHash) { invoke<Void>(0x0262EF40, iplHash); } // 0x431E3AB760629B34 b1207
	static BOOL IS_IPL_ACTIVE_HASH(Hash iplHash) { return invoke<BOOL>(0x0262F040, iplHash); } // 0xD779B9B910BD3B7C b1207
	static BOOL IS_IPL_ACTIVE_BY_HASH(Hash iplHash) { return invoke<BOOL>(0x0262F110, iplHash); } // 0x93AC1B91CB6D9913 b1207
	static BOOL _IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(Hash iplHash, float x, float y, float z) { return invoke<BOOL>(0x0262F1E0, iplHash, x, y, z); } // 0x73B40D97D7BAAD77 b1207
	static void _0xDEEE1F265B7ECEF5() { invoke<Void>(0x0262F210); } // 0xDEEE1F265B7ECEF5 b1311
	static void SET_GAME_PAUSES_FOR_STREAMING(BOOL toggle) { invoke<Void>(0x0262F220, toggle); } // 0xB3BC8250F4FE8B63 0x9211A28A b1207
	static int GET_NUMBER_OF_STREAMING_REQUESTS() { return invoke<int>(0x0262F230); } // 0x30CCCC4D88E654CA 0xC2EE9A02 b1207
	static void REQUEST_PTFX_ASSET() { invoke<Void>(0x0262F240); } // 0x001FF43843028E0C 0x2C649263 b1207
	static BOOL HAS_PTFX_ASSET_LOADED() { return invoke<BOOL>(0x0262F250); } // 0x13A3F30A9ED0BC31 0x3EFF96BE b1207
	static void REMOVE_PTFX_ASSET() { invoke<Void>(0x0262F340); } // 0x042F9049EA419E86 0xC10F178C b1207
	static void REQUEST_NAMED_PTFX_ASSET(Hash fxNameHash) { invoke<Void>(0x0262F420, fxNameHash); } // 0xF2B2353BBC0D4E8F 0xCFEA19A9 b1207
	static BOOL HAS_NAMED_PTFX_ASSET_LOADED(Hash fxNameHash) { return invoke<BOOL>(0x0262F430, fxNameHash); } // 0x65BB72F29138F5D6 0x9ACC6446 b1207
	static void REMOVE_NAMED_PTFX_ASSET(Hash fxNameHash) { invoke<Void>(0x0262F490, fxNameHash); } // 0xF20866829E1C81A2 0xC44762A1 b1207
	static void SET_POPULATION_BUDGET_MULTIPLIER(float fBudgetMultiplier) { invoke<Void>(0x0262F4E0, fBudgetMultiplier); } // 0x2F9AC754FE179D58 b1207
	static float GET_POPULATION_BUDGET_MULTIPLIER() { return invoke<float>(0x0262F520); } // 0x8A3945405B31048F b1207
	static Any _0x071769BCB24379E5() { return invoke<Any>(0x0262F530); } // 0x071769BCB24379E5 b1207
	static void CLEAR_FOCUS() { invoke<Void>(0x0262F550); } // 0x86CCAF7CE493EFBE 0x34D91E7A b1207
	static void SET_FOCUS_POS_AND_VEL(float x, float y, float z, float offsetX, float offsetY, float offsetZ) { invoke<Void>(0x0262F560, x, y, z, offsetX, offsetY, offsetZ); } // 0x25F6EF88664540E2 0x14680A60 b1207
	static void SET_FOCUS_ENTITY(Entity entity) { invoke<Void>(0x0262F5E0, entity); } // 0x955AEDD58F4BD309 0x18DB04AC b1207
	static BOOL IS_ENTITY_FOCUS(Entity entity) { return invoke<BOOL>(0x0262F6B0, entity); } // 0xF87DE697E9A06EC6 0xB456D707 b1207
	static void SET_MAPDATACULLBOX_ENABLED(const char* name, BOOL toggle) { invoke<Void>(0x0262F790, name, toggle); } // 0x3CACC83F6FED837C 0x403CD434 b1207
	static void _0x19ABCC581D28E6F9(Any p0) { invoke<Void>(0x0262F870, p0); } // 0x19ABCC581D28E6F9 0xA07BAEB9 b1207
	static void _0xF01D21DF39554115(Any p0) { invoke<Void>(0x0262F880, p0); } // 0xF01D21DF39554115 b1207
	static BOOL LOAD_SCENE_START(float posX, float posY, float posZ, float offsetX, float offsetY, float offsetZ, float radius, int p7) { return invoke<BOOL>(0x0262F890, posX, posY, posZ, offsetX, offsetY, offsetZ, radius, p7); } // 0x387AD749E3B69B70 b1207
	static BOOL LOAD_SCENE_START_SPHERE(float x, float y, float z, float radius, Any p4) { return invoke<BOOL>(0x0262F920, x, y, z, radius, p4); } // 0x513F8AA5BF2F17CF b1207
	static void LOAD_SCENE_STOP() { invoke<Void>(0x0262F9A0); } // 0x5A8B01199C3E79C3 b1207
	static BOOL IS_LOAD_SCENE_ACTIVE() { return invoke<BOOL>(0x0262F9C0); } // 0xCF45DF50C7775F2A b1207
	static BOOL IS_LOAD_SCENE_LOADED() { return invoke<BOOL>(0x0262F9D0); } // 0x0909F71B5C070797 b1207
	static BOOL IS_RENDERED_SCENE_LOADED() { return invoke<BOOL>(0x0262FA10); } // 0x45BF3A6239A576B7 b1207
	static BOOL IS_PLAYER_SWITCH_IN_PROGRESS() { return invoke<BOOL>(0x0262FB60); } // 0xED20CB1F5297791D 0x56135ACC b1207
	static void _0xA03A6812529AD9C8() { invoke<Void>(0x0262FB90); } // 0xA03A6812529AD9C8 b1207
	static void _0x20D504994FDC4412(const char* iplName1, const char* iplName2) { invoke<Void>(0x0262FBA0, iplName1, iplName2); } // 0x20D504994FDC4412 0x9EF0A9CF b1207
	static void _0x31108BB5715D035F() { invoke<Void>(0x0262FBB0); } // 0x31108BB5715D035F 0xF2CDD6A8 b1207
	static BOOL _0xC2C05DEFE85A0B64() { return invoke<BOOL>(0x0262FC10); } // 0xC2C05DEFE85A0B64 0x17B0A1CD b1207
	static void _0x040EE319EFD1D3B5() { invoke<Void>(0x0262FC30); } // 0x040EE319EFD1D3B5 0x3DA7AA5D b1207
	static Any _0xFC464598F6EE97B0() { return invoke<Any>(0x0262FC40); } // 0xFC464598F6EE97B0 0xDAB4BAC0 b1207
	static void PREFETCH_SRL(const char* srl) { invoke<Void>(0x0262FC60, srl); } // 0x354837E5A5BAA5AF 0x37BE2FBB b1207
	static void _0xAE00387E53B1E9FC() { invoke<Void>(0x0262FC80); } // 0xAE00387E53B1E9FC b1207
	static void _0xEF1A8A484118735E() { invoke<Void>(0x0262FC90); } // 0xEF1A8A484118735E b1207
	static void _0xD9F2FF4AF394D926() { invoke<Void>(0x0262FCA0); } // 0xD9F2FF4AF394D926 b1207
	static BOOL IS_SRL_LOADED() { return invoke<BOOL>(0x0262FCB0); } // 0x5C2C88512CF6DAFB 0x670FA2A6 b1207
	static void BEGIN_SRL() { invoke<Void>(0x0262FCE0); } // 0x0360710033BE60D9 0x24F49427 b1207
	static void END_SRL() { invoke<Void>(0x0262FCF0); } // 0x1CE71FB33CA079FE 0x1977C56A b1207
	static void SET_SRL_TIME(float p0) { invoke<Void>(0x0262FD00, p0); } // 0x18231AEF458BCFF2 0x30F8A487 b1207
	static void _0xD346248C1DCE0D76(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x0262FD10, p0, p1, p2, p3); } // 0xD346248C1DCE0D76 0x62F02485 b1207
	static void _0x7C907E8A725E5FD2(BOOL p0) { invoke<Void>(0x0262FD50, p0); } // 0x7C907E8A725E5FD2 0xA6459CAA b1207
	static void SET_HD_AREA(float x, float y, float z, float radius) { invoke<Void>(0x0262FD60, x, y, z, radius); } // 0xB88B905AFA35CB4D 0x80BAA035 b1207
	static void CLEAR_HD_AREA() { invoke<Void>(0x0262FDA0); } // 0xD83B22434E52728D 0x7CAC6FA0 b1207
	static void _0x09FBF15D73EFC900() { invoke<Void>(0x0262FDB0); } // 0x09FBF15D73EFC900 b1207
	static void _0xF11D7CB962FCD747(Any p0) { invoke<Void>(0x0262FDC0, p0); } // 0xF11D7CB962FCD747 b1207
	static void _0xB9B9E47EDB9D63DB() { invoke<Void>(0x0262FEE0); } // 0xB9B9E47EDB9D63DB b1207
	static void _0xBE8DAA9D8D01DA6A(Any p0, Any p1, Any p2) { invoke<Void>(0x02630040, p0, p1, p2); } // 0xBE8DAA9D8D01DA6A b1207
	static Any _0x53764309C4618087(Any p0) { return invoke<Any>(0x026301E0, p0); } // 0x53764309C4618087 b1207
	static void _0x032A14D082A9B269(Hash p0) { invoke<Void>(0x02630240, p0); } // 0x032A14D082A9B269 b1207
	static void _0xAFA87A7D41EE346A(Any p0) { invoke<Void>(0x02630280, p0); } // 0xAFA87A7D41EE346A b1207
	static void _0x6A6E79FBE8678C98() { invoke<Void>(0x026302A0); } // 0x6A6E79FBE8678C98 b1207
	static void _0xCC61D8D6C19D9F14(Any p0) { invoke<Void>(0x026302B0, p0); } // 0xCC61D8D6C19D9F14 b1207
	static Any _0xDA7FDEFF4DE86839() { return invoke<Any>(0x026302D0); } // 0xDA7FDEFF4DE86839 b1207
	static Any _0x5D5E2102B174B8D2() { return invoke<Any>(0x02630320); } // 0x5D5E2102B174B8D2 b1207
	static Any _0x7B8C2B846C05E5AD() { return invoke<Any>(0x02630340); } // 0x7B8C2B846C05E5AD b1207
	static void _0x62D5F0588915B277() { invoke<Void>(0x02630370); } // 0x62D5F0588915B277 b1207
	static Any _0x2F4D53023F826FF0() { return invoke<Any>(0x02630380); } // 0x2F4D53023F826FF0 b1207
	static Any _0xDABFE48BA0D457AA() { return invoke<Any>(0x02630390); } // 0xDABFE48BA0D457AA b1207
	static Any _0xE5B76E5B56CD77DD() { return invoke<Any>(0x026303A0); } // 0xE5B76E5B56CD77DD b1207
	static Any _0x27AF48C62B281341() { return invoke<Any>(0x026303B0); } // 0x27AF48C62B281341 b1207
	static Any _0x99F92061EFE908BA() { return invoke<Any>(0x026303E0); } // 0x99F92061EFE908BA b1207
	static Any _0x05DD384F39DE1C8C(Any p0, Any p1) { return invoke<Any>(0x02630400, p0, p1); } // 0x05DD384F39DE1C8C b1207
	static Any _0x198B85CC3C7A4593(Any p0, Any p1) { return invoke<Any>(0x02630430, p0, p1); } // 0x198B85CC3C7A4593 b1207
	static Any _0x2A6D1DAAB9EBB262(Any p0) { return invoke<Any>(0x02630460, p0); } // 0x2A6D1DAAB9EBB262 b1207
	static void _0x07559B29950301FF(Any p0, Any p1) { invoke<Void>(0x02630490, p0, p1); } // 0x07559B29950301FF b1207
	static Any _0xD6E39DC5D46DF4AB(Any p0) { return invoke<Any>(0x026304B0, p0); } // 0xD6E39DC5D46DF4AB b1207
	static Any _0x8D56BDA343D9519F(Any p0) { return invoke<Any>(0x026304F0, p0); } // 0x8D56BDA343D9519F b1207
	static void _0xD840C130D7AACFA5(Any p0, Any p1, Any p2) { invoke<Void>(0x02630530, p0, p1, p2); } // 0xD840C130D7AACFA5 b1207
	static void _0x2E24C27B112B5B12(Any p0) { invoke<Void>(0x026305D0, p0); } // 0x2E24C27B112B5B12 b1311
	static void _SET_GUARMA_WORLDHORIZON_ACTIVE(BOOL toggle) { invoke<Void>(0x026305E0, toggle); } // 0x74E2261D2A66849A b1207
}

namespace TASK
{
	static void TASK_PAUSE(Ped ped, int ms) { invoke<Void>(0x026D9010, ped, ms); } // 0xE73A266DB0CA9042 0x17A64668 b1207
	static void TASK_STAND_STILL(Ped ped, int time) { invoke<Void>(0x026D90F0, ped, time); } // 0x919BE13EED931959 0x6F80965D b1207
	static void TASK_JUMP(Ped ped, BOOL unused) { invoke<Void>(0x026D9200, ped, unused); } // 0x0AE4086104E067B1 0x0356E3CE b1207
	static void _TASK_JUMP_2(Ped ped, float x, float y, float z, Entity entity) { invoke<Void>(0x026D9220, ped, x, y, z, entity); } // 0x91083103137D7254 b1207
	static void TASK_COWER(Ped ped, int duration, Ped ped2, const char* p3) { invoke<Void>(0x026D92F0, ped, duration, ped2, p3); } // 0x3EB1FE9E8E908E15 0x9CF1C19B b1207
	static void TASK_HANDS_UP(Ped ped, int duration, Ped facingPed, int p3, BOOL p4) { invoke<Void>(0x026D9310, ped, duration, facingPed, p3, p4); } // 0xF2EAB31979A7F910 0x8DCC19C5 b1207
	static void TASK_KNOCKED_OUT(Ped ped, float p1, BOOL permanently) { invoke<Void>(0x026D9330, ped, p1, permanently); } // 0xF90427F00A495A28 b1207
	static void TASK_KNOCKED_OUT_AND_HOGTIED(Ped ped, float p1, int p2) { invoke<Void>(0x026D9350, ped, p1, p2); } // 0x42AC6401ABB8C7E5 b1207
	static void _0xFFB520A3E16F7B7B(Any p0, Any p1) { invoke<Void>(0x026D9370, p0, p1); } // 0xFFB520A3E16F7B7B b1207
	static void _0x8B1FDF63C3193EDA(Any p0, Any p1) { invoke<Void>(0x026D9380, p0, p1); } // 0x8B1FDF63C3193EDA b1207
	static void UPDATE_TASK_HANDS_UP_DURATION(Ped ped, int duration) { invoke<Void>(0x026D9390, ped, duration); } // 0xA98FCAFD7893C834 0x3AA39BE9 b1207
	static void _0x28EF780BDEA8A639(Any p0, Any p1) { invoke<Void>(0x026D9540, p0, p1); } // 0x28EF780BDEA8A639 b1207
	static void TASK_DUCK(Ped ped, int p1) { invoke<Void>(0x026D96D0, ped, p1); } // 0xA14B5FBF986BAC23 b1207
	static void _TASK_BOARD_VEHICLE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x026D96E0, p0, p1, p2, p3, p4, p5); } // 0xE53D17AD837CBF7C b1207
	static void _TASK_DISEMBARK_VEHICLE(Any p0, Vehicle vehicle, int p2, Any p3, float p4, Any p5) { invoke<Void>(0x026D9700, p0, vehicle, p2, p3, p4, p5); } // 0xA7C6854BB5A4192A b1207
	static void _TASK_BOARD_VEHICLE_2(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x026D9720, p0, p1, p2, p3, p4); } // 0xE41A09C8DDFF7AA4 b1207
	static void TASK_DISEMBARK_NEAREST_TRAIN_CARRIAGE(Any p0, Any p1, Any p2) { invoke<Void>(0x026D9740, p0, p1, p2); } // 0x0A11F3BDEC03ED5F b1207
	static void TASK_ENTER_VEHICLE(Ped ped, Vehicle vehicle, int timeout, int seat, float speed, int flag, Any p6) { invoke<Void>(0x026D9760, ped, vehicle, timeout, seat, speed, flag, p6); } // 0xC20E50AA46D09CA8 0xB8689B4E b1207
	static void TASK_LEAVE_VEHICLE(Ped ped, Vehicle vehicle, int flags, Ped unkPed) { invoke<Void>(0x026D9790, ped, vehicle, flags, unkPed); } // 0xD3DBCE61A490BE02 0x7B1141C6 b1207
	static void TASK_MOUNT_ANIMAL(Ped ped, Ped mount, int timer, int seatIndex, float pedSpeed, int mountStyle, Any p6, Any p7) { invoke<Void>(0x026D97B0, ped, mount, timer, seatIndex, pedSpeed, mountStyle, p6, p7); } // 0x92DB0739813C5186 b1207
	static void TASK_DISMOUNT_ANIMAL(Ped rider, int taskFlag, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x026D97F0, rider, taskFlag, p2, p3, p4, p5); } // 0x48E92D3DDE23C23A b1207
	static void TASK_HITCH_ANIMAL(Ped ped, int scenarioPoint, int flag) { invoke<Void>(0x026D9820, ped, scenarioPoint, flag); } // 0x9030AD4B6207BFE8 b1207
	static void _0xE05A5D39BE6E93AF(Any p0) { invoke<Void>(0x026D9840, p0); } // 0xE05A5D39BE6E93AF b1207
	static void TASK_VEHICLE_DRIVE_TO_COORD(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, Any p6, Hash vehicleModel, int drivingMode, float stopRange, float p10) { invoke<Void>(0x026D9940, ped, vehicle, x, y, z, speed, p6, vehicleModel, drivingMode, stopRange, p10); } // 0xE2A2AA2F659D77A7 0xE4AC0387 b1207
	static void _TASK_VEHICLE_DRIVE_TO_COORD_2(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0x026D9990, ped, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xF0108F01FB105DA2 b1207
	static void TASK_VEHICLE_DRIVE_WANDER(Ped ped, Vehicle vehicle, float speed, int drivingStyle) { invoke<Void>(0x026D99E0, ped, vehicle, speed, drivingStyle); } // 0x480142959D337D00 0x36EC0EB0 b1207
	static void TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Ped ped, Entity entity, float offsetX, float offsetY, float offsetZ, float movementSpeed, int timeout, float stoppingRange, BOOL persistFollowing, BOOL p9, BOOL walkOnly, BOOL p11, BOOL p12, BOOL p13) { invoke<Void>(0x026D9A00, ped, entity, offsetX, offsetY, offsetZ, movementSpeed, timeout, stoppingRange, persistFollowing, p9, walkOnly, p11, p12, p13); } // 0x304AE42E357B8C7E 0x2DF5A6AC b1207
	static void TASK_FOLLOW_TO_OFFSET_OF_COORD(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { invoke<Void>(0x026D9A90, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // 0x2E3676282C18A692 b1207
	static void _0x3FFCD7BBA074CC80(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0x026D9B10, ped, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x3FFCD7BBA074CC80 b1207
	static void TASK_GO_STRAIGHT_TO_COORD(Ped ped, float x, float y, float z, float moveBlendSpeedY, int p5, float p6, float p7, int p8) { invoke<Void>(0x026D9B30, ped, x, y, z, moveBlendSpeedY, p5, p6, p7, p8); } // 0xD76B57B44F1E6F8B 0x80A9E7A7 b1207
	static void TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x026D9B60, ped, p1, p2, p3, p4, p5, p6, p7); } // 0x61E360B7E040D12E 0xD26CAC68 b1207
	static void TASK_MOVE_IN_TRAFFIC(Ped ped, Any p1, Any p2, Any p3) { invoke<Void>(0x026D9C30, ped, p1, p2, p3); } // 0x8AA1593AEC087A29 b1207
	static void TASK_MOVE_IN_TRAFFIC_TO_DESTINATION(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x026D9CA0, ped, p1, p2, p3, p4, p5, p6, p7); } // 0xDCA3A13F7A45338B b1207
	static void TASK_MOVE_IN_TRAFFIC_AWAY_FROM_ENTITY(Ped ped, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x026D9CD0, ped, p1, p2, p3, p4); } // 0x13DED0BC45600FE1 b1207
	static void _0xBAAB791AA72C2821(Any p0, Any p1) { invoke<Void>(0x026D9DB0, p0, p1); } // 0xBAAB791AA72C2821 b1207
	static void TASK_MOVE_FOLLOW_ROAD_USING_NAVMESH(Ped ped, Any p1, float x, float y, float z, Any p5) { invoke<Void>(0x026D9DC0, ped, p1, x, y, z, p5); } // 0x79482C12482A860D b1207
	static void TASK_ACHIEVE_HEADING(Ped ped, float heading, int timeout) { invoke<Void>(0x026D9DF0, ped, heading, timeout); } // 0x93B93A37987F1F3D 0x0A0E9B42 b1207
	static void TASK_FLUSH_ROUTE() { invoke<Void>(0x026D9E10); } // 0x841142A1376E9006 0x34219154 b1207
	static void TASK_EXTEND_ROUTE(float x, float y, float z) { invoke<Void>(0x026D9E20, x, y, z); } // 0x1E7889778264843A 0x43271F69 b1207
	static void TASK_FOLLOW_POINT_ROUTE(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x026D9E70, ped, p1, p2, p3, p4, p5); } // 0x0E14C5550DC3CD1D b1207
	static void TASK_ENTER_ANIM_SCENE(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0x026D9EA0, ped, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xC2329B0206426644 b1207
	static void TASK_MOVE_BE_IN_FORMATION(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x026D9EF0, ped, p1, p2, p3, p4, p5, p6); } // 0x4AA5AA97C65E4A2F b1207
	static void TASK_GO_TO_ENTITY(Ped ped, Entity target, int duration, float distance, float speed, float p5, int p6) { invoke<Void>(0x026D9F10, ped, target, duration, distance, speed, p5, p6); } // 0x6A071245EB0D1882 0x374827C2 b1207
	static void TASK_FOLLOW_AND_CONVERSE_WITH_PED(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoke<Void>(0x026D9FE0, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x489FFCCCE7392B55 b1207
	static void _0xA052608A12559BBB(Any p0, Any p1) { invoke<Void>(0x026DA200, p0, p1); } // 0xA052608A12559BBB b1207
	static void TASK_WANDER_AND_CONVERSE_WITH_PED(Ped ped, Any p1, Any p2, Any p3) { invoke<Void>(0x026DA210, ped, p1, p2, p3); } // 0x8AC76D1408731732 b1207
	static void TASK_LEAD_AND_CONVERSE(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0x026DA3B0, ped, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xAA19711D33C6708C b1207
	static void _0xDE0C8B145EA466FF(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x026DA4B0, p0, p1, p2, p3, p4, p5); } // 0xDE0C8B145EA466FF b1207
	static void TASK_SEEK_CLEAR_LOS_TO_ENTITY(Ped ped, Entity entity, float p2, float p3, float p4) { invoke<Void>(0x026DA4E0, ped, entity, p2, p3, p4); } // 0x8D7F2A63688C20A4 b1207
	static void TASK_GO_TO_WHISTLE(Ped ped, Any p1, Any p2) { invoke<Void>(0x026DA6A0, ped, p1, p2); } // 0xBAD6545608CECA6E b1207
	static Any _0xEB67D4E056C85A81(Any p0) { return invoke<Any>(0x026DA760, p0); } // 0xEB67D4E056C85A81 b1207
	static Any _0x78D8C1D4EB80C588(Any p0) { return invoke<Any>(0x026DA790, p0); } // 0x78D8C1D4EB80C588 b1207
	static void TASK_LEAD_HORSE(Ped ped, Ped horse) { invoke<Void>(0x026DA7C0, ped, horse); } // 0x9A7A4A54596FE09D b1207
	static void TASK_STOP_LEADING_HORSE(Ped ped) { invoke<Void>(0x026DA7D0, ped); } // 0xED27560703F37258 b1207
	static void _TASK_FLEE_FROM_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { invoke<Void>(0x026DA7E0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x6879FF208ED87F2A b1207
	static void _TASK_FLEE_FROM_PED(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0x026DA810, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x7B74D8EEDE9B5727 b1207
	static void TASK_SMART_FLEE_COORD(Ped ped, float x, float y, float z, float distance, int time, int fleeType, float fleeSpeed) { invoke<Void>(0x026DA840, ped, x, y, z, distance, time, fleeType, fleeSpeed); } // 0x94587F17E9C365D5 0xB2E686FC b1207
	static void TASK_SMART_FLEE_PED(Ped ped, Ped fleeFromTarget, float fleeDistance, int fleeTime, int fleeType, float fleeSpeed, Any p6) { invoke<Void>(0x026DA860, ped, fleeFromTarget, fleeDistance, fleeTime, fleeType, fleeSpeed, p6); } // 0x22B0D0E37CCB840D 0xE52EB560 b1207
	static void _0x673A8779D229BA5A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x026DA890, p0, p1, p2, p3, p4, p5); } // 0x673A8779D229BA5A b1207
	static void _0x2E1D6D87346BB7D2(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x026DA8C0, p0, p1, p2, p3); } // 0x2E1D6D87346BB7D2 b1207
	static void TASK_FLEE_COORD(Ped ped, float x, float y, float z, int p4, int p5, float p6, int p7, int p8) { invoke<Void>(0x026DA8E0, ped, x, y, z, p4, p5, p6, p7, p8); } // 0x58428248BF4B64E4 b1207
	static void TASK_FLEE_PED(Ped ped, Ped fleeFromTarget, int p2, int p3, float p4, int p5, int p6) { invoke<Void>(0x026DA910, ped, fleeFromTarget, p2, p3, p4, p5, p6); } // 0xFD45175A6DFD7CE9 b1207
	static void TASK_FLEE_COORD_VIA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { invoke<Void>(0x026DA940, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x390E0B697D25EAF5 b1207
	static void TASK_FLEE_PED_VIA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0x026DA980, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x5802E0F910E4CF1D b1207
	static void _0xE8F1A5B4CED3725A(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x026DA9C0, p0, p1, p2, p3, p4); } // 0xE8F1A5B4CED3725A b1207
	static void ADD_FLEE_TARGET_PED(Ped ped, Ped targetPed, float p2) { invoke<Void>(0x026DA9E0, ped, targetPed, p2); } // 0x3923EC958249657D b1207
	static void _0xA42DC7919159CCCF(Any p0) { invoke<Void>(0x026DAA00, p0); } // 0xA42DC7919159CCCF b1207
	static void TASK_FLY_AWAY(Ped ped, Any p1) { invoke<Void>(0x026DAA10, ped, p1); } // 0xE86A537B5A3C297C b1207
	static void TASK_FLY_TO_COORD(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x026DAAD0, ped, p1, p2, p3, p4, p5, p6); } // 0xD6CFC2D59DA72042 b1207
	static void TASK_FLYING_CIRCLE(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x026DAB00, ped, p1, p2, p3, p4, p5, p6); } // 0x72997893BFB8ECCC b1207
	static void TASK_WALK_AWAY(Ped ped, Any p1) { invoke<Void>(0x026DAB20, ped, p1); } // 0x04ACFAC71E6858F9 b1207
	static void TASK_SHOCKING_EVENT_REACT(Ped ped, Any p1, Any p2) { invoke<Void>(0x026DABE0, ped, p1, p2); } // 0x452419CBD838065B 0x9BD00ACF b1207
	static void TASK_REACT(Ped ped, Entity reactingTo, int reactionType, float p3, float p4, int unkFlag, Any p6, Any p7, Any p8) { invoke<Void>(0x026DAC00, ped, reactingTo, reactionType, p3, p4, unkFlag, p6, p7, p8); } // 0xC4C32C31920E1B70 b1207
	static void TASK_WANDER_IN_AREA(Ped ped, float x, float y, float z, float radius, float p5, float p6, int p7) { invoke<Void>(0x026DAC30, ped, x, y, z, radius, p5, p6, p7); } // 0xE054346CA3A0F315 0xC6981FB9 b1207
	static void TASK_WANDER_IN_VOLUME(Ped ped, Volume volume, float p2, float p3, int p4) { invoke<Void>(0x026DAC60, ped, volume, p2, p3, p4); } // 0x9FDA168777B28424 b1207
	static void TASK_WANDER_STANDARD(Ped ped, float p1, int p2) { invoke<Void>(0x026DAC90, ped, p1, p2); } // 0xBB9CE077274F6A1B 0xAF59151A b1207
	static void TASK_WANDER_SWIM(Ped ped, Any p1) { invoke<Void>(0x026DACB0, ped, p1); } // 0x527EA3DB8BC7F03B b1207
	static void TASK_PLANT_BOMB(Ped ped, float x, float y, float z, float heading) { invoke<Void>(0x026DAEC0, ped, x, y, z, heading); } // 0x965FEC691D55E9BF 0x33457535 b1207
	static void TASK_HORSE_ACTION(Ped ped, int action, Any p2, Any p3) { invoke<Void>(0x026DAEE0, ped, action, p2, p3); } // 0xA09CFD29100F06C3 b1207
	static void TASK_ANIMAL_INTERACTION(Ped ped, Ped targetPed, Hash interactionType, Hash interactionModel, BOOL skipIdleAnimationClip) { invoke<Void>(0x026DAF00, ped, targetPed, interactionType, interactionModel, skipIdleAnimationClip); } // 0xCD181A959CFDD7F4 b1207
	static void TASK_COMBAT_ANIMAL_WARN(Ped ped, Any p1, Any p2) { invoke<Void>(0x026DAF20, ped, p1, p2); } // 0xF960F3D57B660E96 b1207
	static void TASK_COMBAT_ANIMAL_CHARGE_PED(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x026DAFE0, ped, p1, p2, p3, p4, p5, p6); } // 0xEE3AA414CF99F368 b1207
	static Any _0x76610D12A838EBDE(Any p0) { return invoke<Any>(0x026DB0D0, p0); } // 0x76610D12A838EBDE b1311
	static void TASK_AMBIENT_ANIMAL_STALK(Ped ped, Any p1, Any p2) { invoke<Void>(0x026DB200, ped, p1, p2); } // 0x37C13863ABA1B4A3 b1207
	static void TASK_AMBIENT_ANIMAL_HUNT(Ped ped, Any p1, Any p2) { invoke<Void>(0x026DB2C0, ped, p1, p2); } // 0x4B39D8F9D0FE7749 b1207
	static void TASK_ANIMAL_UNALERTED(Ped ped, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x026DB380, ped, p1, p2, p3, p4); } // 0x21FDF9A25CFE1CE5 b1207
	static void TASK_ANIMAL_ALERTED(Ped ped, Any p1, Any p2) { invoke<Void>(0x026DB3B0, ped, p1, p2); } // 0x979D93372FC8C565 b1207
	static void TASK_ANIMAL_FLEE(Ped ped, Any p1, Any p2) { invoke<Void>(0x026DB470, ped, p1, p2); } // 0xA899B61C66F09134 b1207
	static Any _0x244430C13BA5258E(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x026DB530, p0, p1, p2, p3); } // 0x244430C13BA5258E b1207
	static void TASK_EAT(Ped ped, Any p1, Any p2) { invoke<Void>(0x026DB570, ped, p1, p2); } // 0xBD7949BD07299672 b1207
	static void TASK_BARK(Ped ped, Ped barkAtTarget, Hash mood) { invoke<Void>(0x026DB590, ped, barkAtTarget, mood); } // 0x83BFC1F836B2F3F2 b1207
	static void TASK_FOLLOW_PAVEMENT_TO_COORD(Ped ped, Any* args) { invoke<Void>(0x026DB650, ped, args); } // 0x1B1475414E70DD8E b1207
	static void TASK_FOLLOW_NAV_MESH_TO_COORD(Ped ped, float x, float y, float z, float speedMultiplier, int timeout, float stoppingRange, int flags, float heading) { invoke<Void>(0x026DB660, ped, x, y, z, speedMultiplier, timeout, stoppingRange, flags, heading); } // 0x15D3A79D4E44B913 0xFE4A10D9 b1207
	static void TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(Ped ped, float x, float y, float z, float speedMultiplier, int timeout, float stoppingRange, int flags, float p8, float p9, float p10, Entity entity, float unk) { invoke<Void>(0x02645CF0, ped, x, y, z, speedMultiplier, timeout, stoppingRange, flags, p8, p9, p10, entity, unk); } // 0x17F58B88D085DBAC 0x6BF6E296 b1207
	static void SET_PED_PATH_CAN_USE_CLIMBOVERS(Ped ped, BOOL toggle) { invoke<Void>(0x026DB800, ped, toggle); } // 0x8E06A6FE76C9EFF4 0xB7B7D442 b1207
	static void SET_PED_PATH_CAN_USE_LADDERS(Ped ped, BOOL toggle) { invoke<Void>(0x026DB910, ped, toggle); } // 0x77A5B103C87F476E 0x53A879EE b1207
	static void SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Ped ped, BOOL toggle) { invoke<Void>(0x026DBA20, ped, toggle); } // 0xE361C5C71C431A4F 0x394B7AC9 b1207
	static Any _0xE6A151364C600B24(Any p0) { return invoke<Any>(0x026DBB30, p0); } // 0xE6A151364C600B24 b1207
	static void _0x1632EB9386CDBE64(Any p0, Any p1) { invoke<Void>(0x026DBC30, p0, p1); } // 0x1632EB9386CDBE64 b1207
	static void SET_PED_PATH_CLIMB_COST_MODIFIER(Ped ped, float modifier) { invoke<Void>(0x026DBD20, ped, modifier); } // 0x88E32DB8C1A4AA4B 0x55E06443 b1207
	static void SET_PED_PATH_DEEP_SNOW_COST_MODIFIER(Ped ped, float modifier) { invoke<Void>(0x026DBE40, ped, modifier); } // 0xE8C296B75EACC357 b1207
	static void SET_PED_PATH_FOLIAGE_COST_MODIFIER(Ped ped, float modifier) { invoke<Void>(0x026DBF60, ped, modifier); } // 0x3AD8EFF9703BE657 b1207
	static void _0x8798CF6815B8FE0F(Any p0, Any p1) { invoke<Void>(0x026DC080, p0, p1); } // 0x8798CF6815B8FE0F b1207
	static void _0x5B68D0007D9C92EB(Any p0, Any p1) { invoke<Void>(0x026DC1A0, p0, p1); } // 0x5B68D0007D9C92EB b1207
	static void _0x82ED59F095056550(Any p0, Any p1) { invoke<Void>(0x026DC2C0, p0, p1); } // 0x82ED59F095056550 b1207
	static void _0xE01C8DC8EDD28D31(Any p0, Any p1) { invoke<Void>(0x026DC3E0, p0, p1); } // 0xE01C8DC8EDD28D31 b1207
	static void _0x098CAA6DBE7D8D82(Any p0, Any p1) { invoke<Void>(0x026DC4F0, p0, p1); } // 0x098CAA6DBE7D8D82 b1207
	static Any _0x1948BBE561A2375A(Any p0) { return invoke<Any>(0x026DC610, p0); } // 0x1948BBE561A2375A b1207
	static void _0x013A7BA5015C1372(Any p0, Any p1) { invoke<Void>(0x026DC700, p0, p1); } // 0x013A7BA5015C1372 b1207
	static void _SET_PED_PATH_LADDER_COST_MODIFIER(Ped ped, float modifier) { invoke<Void>(0x026DC830, ped, modifier); } // 0x70F7A1EAB1AE3AA8 b1232
	static void SET_PED_PATH_MAY_ENTER_WATER(Ped ped, BOOL mayEnterWater) { invoke<Void>(0x026DC950, ped, mayEnterWater); } // 0xF35425A4204367EC 0x9C606EE3 b1207
	static void _SET_PED_PATH_MAY_ENTER_DEEP_WATER(Ped ped, BOOL mayEnterDeepWater) { invoke<Void>(0x026DCA60, ped, mayEnterDeepWater); } // 0x9DE63896B176EA94 b1207
	static void _0xC6170856E54557B2(Any p0, Any p1, Any p2) { invoke<Void>(0x026DCB70, p0, p1, p2); } // 0xC6170856E54557B2 b1207
	static void _0xF948F4356F010F11(Any p0, Any p1, Any p2) { invoke<Void>(0x026DCCA0, p0, p1, p2); } // 0xF948F4356F010F11 b1207
	static void SET_PED_PATH_PREFER_TO_AVOID_WATER(Ped ped, BOOL avoidWater, float p2) { invoke<Void>(0x026DCDD0, ped, avoidWater, p2); } // 0x38FE1EC73743793C 0x0EA39A29 b1207
	static void _0x8BB283A7888AD1AD(Any p0, Any p1, Any p2) { invoke<Void>(0x026DCF00, p0, p1, p2); } // 0x8BB283A7888AD1AD b1207
	static void _0x12990818C1D35886(Any p0, Any p1, Any p2) { invoke<Void>(0x026DD030, p0, p1, p2); } // 0x12990818C1D35886 b1207
	static void _0x7C015D8BCEC72CF4(Any p0, Any p1) { invoke<Void>(0x026DD160, p0, p1); } // 0x7C015D8BCEC72CF4 b1207
	static void SET_PED_PATH_AVOID_FIRE(Ped ped, BOOL avoidFire) { invoke<Void>(0x026DD270, ped, avoidFire); } // 0x4455517B28441E60 0xDCC5B934 b1207
	static void _0x42CFD8FD8CC8DC69(Any p0, Any p1) { invoke<Void>(0x026DD380, p0, p1); } // 0x42CFD8FD8CC8DC69 b1207
	static void _0x216343750545A486(Any p0, Any p1, Any p2) { invoke<Void>(0x026DD490, p0, p1, p2); } // 0x216343750545A486 b1207
	static void _0x06ECF3925BC2ABAE(Any p0, Any p1) { invoke<Void>(0x026DD5C0, p0, p1); } // 0x06ECF3925BC2ABAE b1311
	static void _0xFA30E2254461ADEB(Any p0, Any p1) { invoke<Void>(0x026DD6D0, p0, p1); } // 0xFA30E2254461ADEB b1207
	static void TASK_GO_TO_COORD_ANY_MEANS(Ped ped, float x, float y, float z, float speed, Any p5, BOOL p6, int walkingStyle, float p8) { invoke<Void>(0x026DD7E0, ped, x, y, z, speed, p5, p6, walkingStyle, p8); } // 0x5BC448CB78FA3E88 0xF91DF93B b1207
	static void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS(Ped ped, float x, float y, float z, float speed, Any p5, BOOL p6, int walkingStyle, float p8, Any p9, Any p10, Any p11, Any p12) { invoke<Void>(0x026DD810, ped, x, y, z, speed, p5, p6, walkingStyle, p8, p9, p10, p11, p12); } // 0x1DD45F9ECFDB1BC9 0x094B75EF b1207
	static void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { invoke<Void>(0x026DD850, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // 0xB8ECD61F531A7B02 0x86DC03F9 b1207
	static void TASK_PLAY_ANIM(Ped ped, const char* animDict, const char* animName, float speed, float speedMultiplier, int duration, int flags, float playbackRate, BOOL p8, Any p9, BOOL p10, const char* taskFilter, BOOL p12) { invoke<Void>(0x026DD8B0, ped, animDict, animName, speed, speedMultiplier, duration, flags, playbackRate, p8, p9, p10, taskFilter, p12); } // 0xEA47FE3719165B94 0x5AB552C6 b1207
	static void TASK_PLAY_ANIM_ADVANCED(Ped ped, const char* animDict, const char* animName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float speed, float speedMultiplier, int duration, int flags, float p13, int p14, int p15, int p16) { invoke<Void>(0x026DD9E0, ped, animDict, animName, posX, posY, posZ, rotX, rotY, rotZ, speed, speedMultiplier, duration, flags, p13, p14, p15, p16); } // 0x83CDB10EA29B370B 0x3DDEB0E6 b1207
	static void TASK_PLAY_UPPER_ANIM_FACING_ENTITY(Ped ped, const char* animDict, const char* animName, Entity entity, int p4, float p5, float p6, int p7, float p8, BOOL p9, BOOL p10, float p11, const char* p12, int p13, float p14) { invoke<Void>(0x026DDAF0, ped, animDict, animName, entity, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // 0xAD67214236AB1CFE b1207
	static void STOP_ANIM_TASK(Ped ped, const char* animDictionary, const char* animationName, float p3) { invoke<Void>(0x026DDB60, ped, animDictionary, animationName, p3); } // 0x97FF36A1D40EA00A 0x2B520A57 b1207
	static void TASK_SCRIPTED_ANIMATION(Ped ped, Any* args) { invoke<Void>(0x026DDB80, ped, args); } // 0x126EF75F1E17ABE5 0xFC2DCF47 b1207
	static void PLAY_ENTITY_SCRIPTED_ANIM(Entity entity, Any* args) { invoke<Void>(0x026DDB90, entity, args); } // 0x77A1EEC547E7FCF1 0x02F72AE5 b1207
	static void STOP_ANIM_PLAYBACK(Ped ped, int p1, BOOL p2) { invoke<Void>(0x026DDBA0, ped, p1, p2); } // 0xEE08C992D238C5D1 0xE5F16398 b1207
	static void SET_ANIM_FILTER(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x026DDBC0, p0, p1, p2, p3); } // 0x87B66D77D545DB66 b1207
	static void SET_ANIM_RATE(Any p0, float p1, Any p2, BOOL p3) { invoke<Void>(0x026DDBE0, p0, p1, p2, p3); } // 0x032D49C5E359C847 0x6DB46584 b1207
	static BOOL CAN_START_ITEM_INTERACTION(Ped ped, Hash itemHash, Hash interactionHash, int p3) { return invoke<BOOL>(0x026DDCD0, ped, itemHash, interactionHash, p3); } // 0x2D19BC4DF626CBE7 b1207
	static void _TASK_ITEM_INTERACTION(Ped ped, Hash animType, Hash propId, int p3, int p4, float p5) { invoke<Void>(0x026DDD00, ped, animType, propId, p3, p4, p5); } // 0xAE72E7DF013AAA61 b1207
	static void _TASK_ITEM_INTERACTION_2(Ped ped, Hash propNameGxt, Object prop, Hash propId, Hash itemInteractionState, int p5, Any p6, float p7) { invoke<Void>(0x026DDE10, ped, propNameGxt, prop, propId, itemInteractionState, p5, p6, p7); } // 0x72F52AA2D2B172CC b1207
	static void _TASK_ITEM_INTERACTION_3(Ped ped, Hash item, Any* p2, Any p3, Any p4, Any p5, float p6) { invoke<Void>(0x026DDE50, ped, item, p2, p3, p4, p5, p6); } // 0xD61D5E1AD9876DEB b1207
	static void _0xB35370D5353995CB(Any p0, Any p1, Any p2) { invoke<Void>(0x026DDE80, p0, p1, p2); } // 0xB35370D5353995CB b1207
	static Hash GET_ITEM_INTERACTION_STATE(Ped ped) { return invoke<Hash>(0x026DDEA0, ped); } // 0x6AA3DCA2C6F5EB6D b1207
	static Hash GET_ITEM_INTERACTION_ITEM_ID(Ped ped) { return invoke<Hash>(0x026DDEC0, ped); } // 0x804425C4BBD00883 b1207
	static BOOL IS_PED_RUNNING_INSPECTION_TASK(Ped ped) { return invoke<BOOL>(0x026DDEE0, ped); } // 0x038B1F1674F0E242 b1207
	static BOOL IS_PED_RUNNING_TASK_ITEM_INTERACTION(Ped ped) { return invoke<BOOL>(0x026DE040, ped); } // 0xEC7E480FF8BD0BED b1207
	static Entity _GET_ITEM_INTERACTION_ENTITY_FROM_PED(Ped ped, Hash item) { return invoke<Entity>(0x026DE1A0, ped, item); } // 0x05A0100EA714DB68 b1207
	static float GET_ITEM_INTERACTION_PROMPT_PROGRESS(Ped ped, Hash inputContext) { return invoke<float>(0x026DE1D0, ped, inputContext); } // 0xBC864A70AD55E0C1 b1207
	static Any _0x678D3226CF70B9C8(Any p0, Any p1) { return invoke<Any>(0x026DE200, p0, p1); } // 0x678D3226CF70B9C8 b1207
	static void TASK_EVASIVE_ANIM(Ped ped, Any p1, Any p2) { invoke<Void>(0x026DE3A0, ped, p1, p2); } // 0x5F22926E1BCE9B08 b1207
	static void TASK_LOOK_AT_COORD(Ped ped, float x, float y, float z, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x026DE3C0, ped, x, y, z, p4, p5, p6, p7); } // 0x6FA46612594F7973 0x7B784DD8 b1207
	static void TASK_LOOK_AT_ENTITY(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x026DE3F0, ped, p1, p2, p3, p4, p5); } // 0x69F4BE8C8CC4796C 0x991D6619 b1207
	static void TASK_CLEAR_LOOK_AT(Ped ped) { invoke<Void>(0x026DE420, ped); } // 0x0F804F1DB19B9689 0x60EB4054 b1207
	static Any _0x508F5053E3F6F0C4(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x026DE430, p0, p1, p2, p3, p4); } // 0x508F5053E3F6F0C4 b1207
	static void _0x23767D80C7EED7C6(Any p0, Any p1) { invoke<Void>(0x026DE6B0, p0, p1); } // 0x23767D80C7EED7C6 b1311
	static void OPEN_SEQUENCE_TASK(int* taskSequenceId) { invoke<Void>(0x026DE820, taskSequenceId); } // 0xE8854A4326B9E12B 0xABA6923E b1207
	static void CLOSE_SEQUENCE_TASK(int taskSequenceId) { invoke<Void>(0x026DE970, taskSequenceId); } // 0x39E72BC99E6360CB 0x1A7CEBD0 b1207
	static void TASK_PERFORM_SEQUENCE(Ped ped, int taskSequenceId) { invoke<Void>(0x026DE9C0, ped, taskSequenceId); } // 0x5ABA3986D90D8A3B 0x4D9FBD11 b1207
	static void _TASK_PERFORM_SEQUENCE_2(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x026DE9D0, p0, p1, p2, p3); } // 0x4FC0AF869D6E309D b1207
	static void CLEAR_SEQUENCE_TASK(int* taskSequenceId) { invoke<Void>(0x026DE9F0, taskSequenceId); } // 0x3841422E9C488D8C 0x47ED03CE b1207
	static void SET_SEQUENCE_TO_REPEAT(int taskSequenceId, BOOL repeat) { invoke<Void>(0x026DEA30, taskSequenceId, repeat); } // 0x58C70CF3A41E4AE7 0xCDDF1508 b1207
	static int GET_SEQUENCE_PROGRESS(Ped ped) { return invoke<int>(0x026DEAB0, ped); } // 0x00A9010CFE1E3533 0xA3419909 b1207
	static BOOL GET_IS_TASK_ACTIVE(Ped ped, int taskIndex) { return invoke<BOOL>(0x026DEB60, ped, taskIndex); } // 0xB0760331C7AA4155 0x86FDDF55 b1207
	static int GET_SCRIPT_TASK_STATUS(Ped ped, Hash taskHash, BOOL p2) { return invoke<int>(0x026DECB0, ped, taskHash, p2); } // 0x77F1BEB8863288D5 0xB2477B23 b1207
	static Any _0x9FF5F9B24E870748(Any p0) { return invoke<Any>(0x026DEE20, p0); } // 0x9FF5F9B24E870748 b1207
	static Any _0xA710DC5D25F8B942(Any p0, Any p1) { return invoke<Any>(0x026DEF10, p0, p1); } // 0xA710DC5D25F8B942 b1207
	static void _0xE7FA07624574B79A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0x026DF030, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xE7FA07624574B79A b1207
	static void _0x541E5B41DCA45828(Any p0, Any p1, Any p2) { invoke<Void>(0x026DF080, p0, p1, p2); } // 0x541E5B41DCA45828 b1207
	static BOOL IS_PED_SCENARIO_REACT_LOOKING(Ped ped, BOOL p1) { return invoke<BOOL>(0x026DF1B0, ped, p1); } // 0x916B8E075ABC8B4E b1207
	static int GET_ACTIVE_VEHICLE_MISSION_TYPE(Vehicle vehicle) { return invoke<int>(0x026DF3A0, vehicle); } // 0x534AEBA6E5ED4CAB 0xAFA914EF b1207
	static void TASK_LEAVE_ANY_VEHICLE(Ped ped, int p1, int p2) { invoke<Void>(0x026DF3C0, ped, p1, p2); } // 0x504D54DF3F6F2247 0xDBDD79FA b1207
	static Any _0xBD70108D01875299(Any p0) { return invoke<Any>(0x026DF3E0, p0); } // 0xBD70108D01875299 b1207
	static void TASK_USE_RANDOM_SCENARIO_IN_GROUP(Ped ped, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x026DF530, ped, p1, p2, p3, p4); } // 0x14747F4A5971DE4E b1207
	static void TASK_AIM_GUN_AT_ENTITY(Ped ped, Entity targetEntity, int duration, BOOL p3, int p4) { invoke<Void>(0x026DF780, ped, targetEntity, duration, p3, p4); } // 0x9B53BB6E8943AF53 0xBE32B3B6 b1207
	static void TASK_TURN_PED_TO_FACE_ENTITY(Ped ped, Entity targetEntity, int duration, float p3, float p4, float p5) { invoke<Void>(0x026DF850, ped, targetEntity, duration, p3, p4, p5); } // 0x5AD23D40115353AC 0x3C37C767 b1207
	static void TASK_AIM_GUN_AT_COORD(Ped ped, float x, float y, float z, int time, BOOL p5, BOOL p6) { invoke<Void>(0x026DF870, ped, x, y, z, time, p5, p6); } // 0x6671F3EEC681BDA1 0xFBF44AD3 b1207
	static void TASK_AIM_AT_COORD(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x026DF8A0, ped, p1, p2, p3, p4, p5, p6); } // 0x4AF1D73861212F52 b1207
	static void TASK_AIM_AT_ENTITY(Ped ped, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x026DF8D0, ped, p1, p2, p3, p4); } // 0xCF7569BD0FB480A0 b1207
	static void TASK_SHOOT_AT_COORD(Ped ped, float x, float y, float z, int duration, Hash firingPattern, Any p6) { invoke<Void>(0x026DF9A0, ped, x, y, z, duration, firingPattern, p6); } // 0x46A6CC01E0826106 0x601C22E3 b1207
	static void TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Ped ped, Any p1) { invoke<Void>(0x026DF9C0, ped, p1); } // 0x7AA80209BDA643EB 0xBEAF8F67 b1207
	static void CLEAR_PED_TASKS(Ped ped, BOOL p1, BOOL p2) { invoke<Void>(0x026DF9D0, ped, p1, p2); } // 0xE1EF3C1216AFF2CD 0xDE3316AB b1207
	static void _0x1A7D63CB1B0BB223(Any p0) { invoke<Void>(0x026DF9F0, p0); } // 0x1A7D63CB1B0BB223 b1207
	static void _0xB2D15D3551FE4FAE(Any p0) { invoke<Void>(0x026DFA00, p0); } // 0xB2D15D3551FE4FAE b1311
	static void _0xDF94844D474F31E5(Ped ped) { invoke<Void>(0x026DFB10, ped); } // 0xDF94844D474F31E5 b1207
	static void _0xEBA2081E0A5F4D17(Any p0) { invoke<Void>(0x026DFBF0, p0); } // 0xEBA2081E0A5F4D17 b1207
	static void _0x141BC64C8D7C5529(Vehicle vehicle) { invoke<Void>(0x026DFCF0, vehicle); } // 0x141BC64C8D7C5529 b1207
	static void CLEAR_PED_SECONDARY_TASK(Ped ped) { invoke<Void>(0x026DFDF0, ped); } // 0x176CECF6F920D707 0xA635F451 b1207
	static void TASK_EVERYONE_LEAVE_VEHICLE_IN_ORDER(Vehicle vehicle, BOOL p1) { invoke<Void>(0x026DFF00, vehicle, p1); } // 0x6F1C49F275BD25B3 b1207
	static void TASK_INVESTIGATE(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x026DFF20, ped, p1, p2, p3, p4, p5); } // 0x5C8514540D27FBFB b1207
	static void TASK_GOTO_ENTITY_OFFSET(Ped ped, Entity entity, Any p2, float x, float y, float z, int duration) { invoke<Void>(0x026E0050, ped, entity, p2, x, y, z, duration); } // 0xE39B4FF4FDEBDE27 0x1A17A85E b1207
	static void TASK_GOTO_ENTITY_OFFSET_XY(Ped ped, Entity entity, int duration, float p3, float p4, float p5, float p6, BOOL p7) { invoke<Void>(0x026E0120, ped, entity, duration, p3, p4, p5, p6, p7); } // 0x338E7EF52B6095A9 0xBC1E3D0A b1207
	static void TASK_GOTO_ENTITY_OFFSET_XYZ(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0x026E0210, ped, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xFA6DA9D151769392 b1311
	static void TASK_GOTO_ENTITY_OFFSET_XY_AIMING(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0x026E0300, ped, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x901BD69984400F62 b1207
	static void TASK_GOTO_ENTITY_OFFSET_XYZ_AIMING(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0x026E03F0, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x41B0832CA96B5351 b1207
	static void TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x026E04F0, ped, p1, p2, p3, p4, p5, p6, p7); } // 0x2D532EAA142CF83F b1207
	static void TASK_TURN_PED_TO_FACE_COORD(Ped ped, float x, float y, float z, int duration) { invoke<Void>(0x026E0640, ped, x, y, z, duration); } // 0x1DDA930A0AC38571 0x30463D73 b1207
	static void TASK_VEHICLE_TEMP_ACTION(Ped driver, Vehicle vehicle, int action, int time) { invoke<Void>(0x026E0790, driver, vehicle, action, time); } // 0xC429DCEEB339E129 0x0679DFB8 b1207
	static void TASK_VEHICLE_MISSION(Ped driver, Vehicle vehicle, Vehicle vehicleTarget, int missionType, float p4, Any p5, float p6, float p7, BOOL DriveAgainstTraffic) { invoke<Void>(0x026E07B0, driver, vehicle, vehicleTarget, missionType, p4, p5, p6, p7, DriveAgainstTraffic); } // 0x659427E0EF36BCDE 0x20609E56 b1207
	static void TASK_VEHICLE_DRIVE_TO_DESTINATION(Ped driver, Vehicle vehicle, float x, float y, float z, float speed, int drivingFlags, int p7, float stoppingRange1, float stoppingRange2, BOOL p10) { invoke<Void>(0x026E07F0, driver, vehicle, x, y, z, speed, drivingFlags, p7, stoppingRange1, stoppingRange2, p10); } // 0x7F241A0D14354583 b1207
	static void _TASK_VEHICLE_DRIVE_TO_DESTINATION_2(Vehicle vehicle, float x, float y, float z, float speed, int p5, int p6, float p7, float p8) { invoke<Void>(0x026E0840, vehicle, x, y, z, speed, p5, p6, p7, p8); } // 0x391073B9D3CCE2BA b1207
	static void _TASK_VEHICLE_FLEE_ON_CLEANUP(Vehicle vehicle, float p1, float p2, float p3, float speed, Hash type) { invoke<Void>(0x026E0890, vehicle, p1, p2, p3, speed, type); } // 0x55CD5FDDD4335C1E b1207
	static void TASK_VEHICLE_DRIVE_STRAIGHT_TO_POINT(Ped driver, Vehicle vehicle, float x, float y, float z, float p5, float p6, int flag) { invoke<Void>(0x026E08B0, driver, vehicle, x, y, z, p5, p6, flag); } // 0x089FF2FB965F0A29 b1207
	static void _TASK_VEHICLE_DRIVE_TO_POINT_2(Vehicle vehicle, float x, float y, float z, float p4, float p5, Any p6) { invoke<Void>(0x026E08E0, vehicle, x, y, z, p4, p5, p6); } // 0x6524A8981E8BE7C9 b1207
	static void _0x1D125814EBC517EB(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x026E0910, p0, p1, p2, p3); } // 0x1D125814EBC517EB b1207
	static BOOL _0x583AE9AF9CEE0958(Vehicle vehicle, float x, float y, float z) { return invoke<BOOL>(0x026E0920, vehicle, x, y, z); } // 0x583AE9AF9CEE0958 b1207
	static void TASK_VEHICLE_MISSION_PED_TARGET(Ped ped, Vehicle vehicle, Ped pedTarget, int mode, float maxSpeed, int drivingStyle, float minDistance, float p7, BOOL DriveAgainstTraffic) { invoke<Void>(0x026E0AC0, ped, vehicle, pedTarget, mode, maxSpeed, drivingStyle, minDistance, p7, DriveAgainstTraffic); } // 0x9454528DF15D657A 0xC81C4677 b1207
	static void _0xA263ADBBC8056214(Any p0, Any p1) { invoke<Void>(0x026E0B00, p0, p1); } // 0xA263ADBBC8056214 b1207
	static void TASK_VEHICLE_ESCORT(Ped ped, Vehicle vehicle, Vehicle targetVehicle, int mode, float speed, int drivingStyle, float minDistance, int p7, float noRoadsDistance) { invoke<Void>(0x026E0B10, ped, vehicle, targetVehicle, mode, speed, drivingStyle, minDistance, p7, noRoadsDistance); } // 0x0FA6E4B75F302400 0x9FDCB250 b1207
	static void TASK_BOAT_MISSION(Ped pedDriver, Vehicle boat, Any p2, Any p3, float x, float y, float z, Any p7, float maxSpeed, int drivingStyle, float p10, Any p11) { invoke<Void>(0x026E0B40, pedDriver, boat, p2, p3, x, y, z, p7, maxSpeed, drivingStyle, p10, p11); } // 0x15C86013127CE63F 0x5865B031 b1207
	static void TASK_WEAPON(Ped ped) { invoke<Void>(0x026E0B80, ped); } // 0x7157B82D60E4BC46 b1207
	static void TASK_DRIVE_BY(Ped driverPed, Ped targetPed, Vehicle targetVehicle, float targetX, float targetY, float targetZ, float distanceToShoot, int pedAccuracy, BOOL p8, Hash firingPattern) { invoke<Void>(0x026E0B90, driverPed, targetPed, targetVehicle, targetX, targetY, targetZ, distanceToShoot, pedAccuracy, p8, firingPattern); } // 0x2F8AF0E82773A171 0x2B84D1C4 b1207
	static void SET_DRIVEBY_TASK_TARGET(Ped shootingPed, Ped targetPed, Vehicle targetVehicle, float x, float y, float z) { invoke<Void>(0x026E0BD0, shootingPed, targetPed, targetVehicle, x, y, z); } // 0xE5B302114D8162EE 0xDA6A6FC1 b1207
	static void CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { invoke<Void>(0x026E0BF0, ped); } // 0xC35B5CDB2824CF69 0x9B76F7E6 b1207
	static BOOL IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { return invoke<BOOL>(0x026E0CA0, ped); } // 0x8785E6E40C7A8818 0xB23F46E6 b1207
	static BOOL GET_IS_PED_AIMING_IN_THE_AIR(Ped ped) { return invoke<BOOL>(0xDEADBEEF, ped); } // 0x8785E6E40C7A8819 b1207
	static void _SET_PED_CLEAR_AIMING_IN_THE_AIR(Ped ped, Any p1) { invoke<Void>(0x026E0E40, ped, p1); } // 0x34C0010188D7C54A b1207
	static BOOL IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { return invoke<BOOL>(0x026E0E60, ped); } // 0xA320EF046186FA3B 0x291E938C b1207
	static void TASK_WARP_PED_INTO_VEHICLE(Ped ped, Vehicle vehicle, int seat) { invoke<Void>(0x026E0F80, ped, vehicle, seat); } // 0x9A7D091411C5F684 0x65D4A35D b1207
	static void TASK_SHOOT_AT_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x026E0FA0, p0, p1, p2, p3, p4); } // 0x08DA95E8298AE772 0xAC0631C9 b1207
	static void TASK_SHOOT_WITH_WEAPON(Ped ped, Any* args) { invoke<Void>(0x026E1070, ped, args); } // 0x08AA95E8298AE772 b1207
	static void _0x2416EC2F31F75266(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x026E1080, p0, p1, p2, p3, p4); } // 0x2416EC2F31F75266 b1207
	static void _0x41323F4E0C4AE94B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x026E11C0, p0, p1, p2, p3, p4, p5, p6); } // 0x41323F4E0C4AE94B b1207
	static Any _0x5EA655F01D93667A(Any p0) { return invoke<Any>(0x026E1280, p0); } // 0x5EA655F01D93667A b1207
	static void TASK_CLIMB(Ped ped, BOOL unused) { invoke<Void>(0x026E1330, ped, unused); } // 0x89D9FCC2435112F1 0x90847790 b1207
	static void _TASK_CLIMB_2(Ped ped, float heading) { invoke<Void>(0x026E1350, ped, heading); } // 0xDF1D85BCAF60D537 b1207
	static void TASK_CLIMB_LADDER(Ped ped, Any p1, Any p2, Any p3) { invoke<Void>(0x026E1360, ped, p1, p2, p3); } // 0xB6C987F9285A3814 0x35BB4EE0 b1207
	static void CLEAR_PED_TASKS_IMMEDIATELY(Ped ped, BOOL p1, BOOL resetCrouch) { invoke<Void>(0x026E1580, ped, p1, resetCrouch); } // 0xAAA34F8A7CB32098 0xBC045625 b1207
	static void TASK_PERFORM_SEQUENCE_FROM_PROGRESS(Ped ped, Any p1, Any p2, Any p3) { invoke<Void>(0x026E1640, ped, p1, p2, p3); } // 0x89221B16730234F0 0xFA60601B b1207
	static void SET_PED_DESIRED_MOVE_BLEND_RATIO(Ped ped, float p1) { invoke<Void>(0x026E1660, ped, p1); } // 0x1E982AC8716912C5 0xC65FC712 b1207
	static float GET_PED_DESIRED_MOVE_BLEND_RATIO(Ped ped) { return invoke<float>(0x026E1730, ped); } // 0x8517D4A6CA8513ED 0x5FEFAB72 b1207
	static void TASK_GOTO_ENTITY_AIMING(Ped ped, Entity target, float distanceToStopAt, float StartAimingDist) { invoke<Void>(0x026E18F0, ped, target, distanceToStopAt, StartAimingDist); } // 0xA9DA48FAB8A76C12 0xF1C493CF b1207
	static void TASK_SET_SPHERE_DEFENSIVE_AREA(Ped ped, float p1, float p2, float p3, float p4) { invoke<Void>(0x026E1AA0, ped, p1, p2, p3, p4); } // 0x933C06518B52A9A4 0x9F3C5D6A b1207
	static void TASK_CLEAR_DEFENSIVE_AREA(Ped ped) { invoke<Void>(0x026E1AC0, ped); } // 0x95A6C46A31D1917D 0x7A05BF0D b1207
	static void TASK_PED_SLIDE_TO_COORD(Ped ped, float x, float y, float z, float heading, float p5) { invoke<Void>(0x026E1AD0, ped, x, y, z, heading, p5); } // 0xD04FE6765D990A06 0x225380EF b1207
	static Any _0x9420FB11B8D77948(Any p0) { return invoke<Any>(0x026E1AF0, p0); } // 0x9420FB11B8D77948 b1207
	static Any _0x6BA606AB3A83BC4D(Any p0) { return invoke<Any>(0x026E1B10, p0); } // 0x6BA606AB3A83BC4D b1207
	static ScrHandle ADD_COVER_POINT(float p0, float p1, float p2, float p3, Any p4, Any p5, Any p6, BOOL p7) { return invoke<ScrHandle>(0x026E1B40, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xD5C12A75C7B9497F 0xA0AF0B98 b1207
	static Any _0x59872EA4CBD11C56(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<Any>(0x026E1C10, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x59872EA4CBD11C56 b1207
	static void REMOVE_COVER_POINT(ScrHandle coverpoint) { invoke<Void>(0x026E1D70, coverpoint); } // 0xAE287C923D891715 0x0776888B b1207
	static BOOL DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0x026E1DA0, p0, p1, p2, p3); } // 0xA98B8E3C088E5A31 0x29F97A71 b1207
	static Vector3 GET_SCRIPTED_COVER_POINT_COORDS(ScrHandle coverpoint) { return invoke<Vector3>(0x026E1E50, coverpoint); } // 0x594A1028FC2A3E85 0xC6B6CCC1 b1207
	static Vector3 _0xE116F6F2DA2D777E(Any p0) { return invoke<Vector3>(0x026E1FB0, p0); } // 0xE116F6F2DA2D777E b1207
	static void _0x50AA09A0DA64E73C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x026E20F0, p0, p1, p2, p3, p4, p5, p6); } // 0x50AA09A0DA64E73C b1207
	static void _0xE5831AA1E2FD147C(Any p0) { invoke<Void>(0x026E2260, p0); } // 0xE5831AA1E2FD147C b1207
	static void TASK_COMBAT_PED(Ped ped, Ped targetPed, int p2, int p3) { invoke<Void>(0x026E2320, ped, targetPed, p2, p3); } // 0xF166E48407BAC484 0xCB0D8932 b1207
	static void TASK_COMBAT_PED_TIMED(Ped ped, Ped targetPed, int p2, Any p3) { invoke<Void>(0x026E2340, ped, targetPed, p2, p3); } // 0x944F30DCB7096BDE 0xF5CA2A45 b1207
	static void _TASK_COMBAT_PED_3(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x026E2360, p0, p1, p2, p3, p4, p5); } // 0xC624414FA748B9BA b1207
	static void TASK_SEEK_COVER_FROM_POS(Ped ped, float x, float y, float z, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x026E2380, ped, x, y, z, p4, p5, p6, p7); } // 0x75AC2B60386D89F2 0x83F18EE9 b1207
	static void TASK_SEEK_COVER_FROM_PED(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x026E23C0, ped, p1, p2, p3, p4, p5); } // 0x84D32B3BEC531324 0xC1EC907E b1207
	static void TASK_SEEK_COVER_TO_COVER_POINT(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0x026E23F0, ped, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xD43D95C7A869447F 0x3D026B29 b1207
	static void TASK_SEEK_COVER_TO_COORDS(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoke<Void>(0x026E2440, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x39246A6958EF072C 0xFFFE754E b1207
	static void TASK_PUT_PED_DIRECTLY_INTO_COVER(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { invoke<Void>(0x026E2490, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0x4172393E6BE1FECE 0xC9F00E68 b1207
	static void _0xDF8A5855B9F9A97B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16, Any p17) { invoke<Void>(0x026E2510, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17); } // 0xDF8A5855B9F9A97B b1207
	static void TASK_PUT_PED_DIRECTLY_INTO_MELEE(Ped ped, Ped meleeTarget, Hash meleeStyle, float p3, float p4, Any p5, Any p6) { invoke<Void>(0x026E25C0, ped, meleeTarget, meleeStyle, p3, p4, p5, p6); } // 0x1C6CD14A876FFE39 0x79E1D27D b1207
	static void TASK_PUT_PED_DIRECTLY_INTO_GRAPPLE(Ped ped, Ped grappleTarget, Hash grappleStyle, float p3, float p4, Any p5, Any p6) { invoke<Void>(0x026E25F0, ped, grappleTarget, grappleStyle, p3, p4, p5, p6); } // 0xA05F3F20889D7A5B b1207
	static void TASK_COMPANION_AMBIENT(Ped ped, Any p1) { invoke<Void>(0x026E2620, ped, p1); } // 0xE017CF6E2527FE4F b1207
	static void _0x098036CAB8373D36(Any p0) { invoke<Void>(0x026E2630, p0); } // 0x098036CAB8373D36 b1207
	static void _0x10C44F633E2D6D9E(Any p0) { invoke<Void>(0x026E2640, p0); } // 0x10C44F633E2D6D9E b1207
	static void _0x7FB78B2199C10E92(Any p0) { invoke<Void>(0x026E2660, p0); } // 0x7FB78B2199C10E92 b1207
	static void TASK_GUARD(Ped ped, Any p1, Any p2) { invoke<Void>(0x026E2680, ped, p1, p2); } // 0xB9FB242EACCAF30F b1207
	static void TASK_GUARD_CURRENT_POSITION(Ped ped, float p1, float p2, BOOL p3) { invoke<Void>(0x026E26A0, ped, p1, p2, p3); } // 0x4A58A47A72E3FCB4 0x2FB099E9 b1207
	static void _TASK_GUARD_ASSIGNED_DEFENSIVE_AREA_2(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x026E26C0, ped, p1, p2, p3, p4, p5, p6, p7); } // 0x1FC9B33976BACD6C b1207
	static void TASK_GUARD_ASSIGNED_DEFENSIVE_AREA(Ped ped, float p1, float p2, float p3, float p4, float p5, Any p6) { invoke<Void>(0x026E26E0, ped, p1, p2, p3, p4, p5, p6); } // 0xD2A207EEBDF9889B 0x7AF0133D b1207
	static void TASK_STAND_GUARD(Ped ped, float x, float y, float z, float heading, const char* scenarioName) { invoke<Void>(0x026E2700, ped, x, y, z, heading, scenarioName); } // 0xAE032F8BBA959E90 0xD130F636 b1207
	static void SET_DRIVE_TASK_CRUISE_SPEED(Ped driver, float cruiseSpeed) { invoke<Void>(0x026E2720, driver, cruiseSpeed); } // 0x5C9B84BD7D31D908 0x3CEC07B1 b1207
	static void SET_DRIVE_TASK_MAX_CRUISE_SPEED(Ped ped, float maxCruiseSpeed) { invoke<Void>(0x026E2730, ped, maxCruiseSpeed); } // 0x404A5AA9B9F0B746 0x7FDF6131 b1207
	static void ADD_COVER_BLOCKING_AREA(float playerX, float playerY, float playerZ, float radiusX, float radiusY, float radiusZ, BOOL p6, BOOL p7, BOOL p8, BOOL p9) { invoke<Void>(0x026E27C0, playerX, playerY, playerZ, radiusX, radiusY, radiusZ, p6, p7, p8, p9); } // 0x45C597097DD7CB81 0x3536946F b1207
	static void _0xEB2ED1DC3AEC0654(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x026E28B0, p0, p1, p2, p3, p4); } // 0xEB2ED1DC3AEC0654 b1207
	static void REMOVE_ALL_COVER_BLOCKING_AREAS() { invoke<Void>(0x026E28F0); } // 0xDB6708C0B46F56D8 0xCF9221A7 b1207
	static void _0x2A10538D0A005E81(Any p0, Any p1) { invoke<Void>(0x026E2A00, p0, p1); } // 0x2A10538D0A005E81 b1207
	static void _0x4F57397388E1DFF8() { invoke<Void>(0x026E2A10); } // 0x4F57397388E1DFF8 b1207
	static void TASK_ROB_PED(Ped ped, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x026E2B20, ped, p1, p2, p3, p4); } // 0x7BB967F85D8CCBDB b1207
	static Any _0xBEDBE39B5FD98FD6(Any p0) { return invoke<Any>(0x026E2C00, p0); } // 0xBEDBE39B5FD98FD6 b1207
	static int CREATE_SCENARIO_POINT_HASH(Hash scenarioHash, float x, float y, float z, float heading, Any p5, Any p6, Any p7) { return invoke<int>(0x026E2D10, scenarioHash, x, y, z, heading, p5, p6, p7); } // 0x94B745CE41DB58A1 b1207
	static int CREATE_SCENARIO_POINT_HASH_ATTACHED_TO_ENTITY(Entity entity, Hash scenarioHash, float x, float y, float z, float heading, Any p6, Any p7, Any p8) { return invoke<int>(0x026E2D60, entity, scenarioHash, x, y, z, heading, p6, p7, p8); } // 0x794AB1379A74064D b1207
	static Any _0xEA31F199A73801D3(Any p0) { return invoke<Any>(0x026E2DB0, p0); } // 0xEA31F199A73801D3 b1207
	static Entity _GET_SCENARIO_POINT_ENTITY(int scenarioPoint, const char* name) { return invoke<Entity>(0x026E2EE0, scenarioPoint, name); } // 0x295514F198EFD0CA b1207
	static Any _0x8360C47380B6F351(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x026E3040, p0, p1, p2, p3); } // 0x8360C47380B6F351 b1207
	static void _SET_SCENARIO_POINT_FLAG(int scenario, int flag, BOOL value) { invoke<Void>(0x026E3080, scenario, flag, value); } // 0x5AF19B6CC2115D34 b1207
	static BOOL _IS_SCENARIO_POINT_FLAG_SET(int scenario, int flag) { return invoke<BOOL>(0x026E3180, scenario, flag); } // 0x8569C38D2FB80650 b1207
	static void _0xADC45010BC17AF0E(Any p0, Any p1) { invoke<Void>(0x026E3270, p0, p1); } // 0xADC45010BC17AF0E b1207
	static Any _0x974DA3408DEC4E79(Any p0) { return invoke<Any>(0x026E3340, p0); } // 0x974DA3408DEC4E79 b1207
	static Any _0x6EF4E31B4D5D2DA0(Any p0, Any p1) { return invoke<Any>(0x026E34F0, p0, p1); } // 0x6EF4E31B4D5D2DA0 b1207
	static BOOL DOES_SCENARIO_POINT_EXIST(int scenario) { return invoke<BOOL>(0x026E3520, scenario); } // 0x841475AC96E794D1 b1207
	static Any _0x22CD2C33ED4467A1(Any p0) { return invoke<Any>(0x026E35E0, p0); } // 0x22CD2C33ED4467A1 b1207
	static Entity _GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(int scenario) { return invoke<Entity>(0x026E3670, scenario); } // 0x7467165EE97D3C68 b1207
	static Ped _GET_PED_USING_SCENARIO_POINT(int scenario) { return invoke<Ped>(0x026E3740, scenario); } // 0x5BA659955369B0E2 b1207
	static Vector3 _GET_SCENARIO_POINT_COORDS(int scenario, BOOL p1) { return invoke<Vector3>(0x026E3760, scenario, p1); } // 0xA8452DD321607029 b1207
	static Vector3 _0x91CB5E431F579BA1(Any p0) { return invoke<Vector3>(0x026E3980, p0); } // 0x91CB5E431F579BA1 b1207
	static Any _0x370F57C47F68EBCA(Any p0) { return invoke<Any>(0x026E3A30, p0); } // 0x370F57C47F68EBCA b1207
	static float _GET_SCENARIO_POINT_HEADING(int scenario, BOOL p1) { return invoke<float>(0x026E3AC0, scenario, p1); } // 0xB93EA7184BAA85C3 b1207
	static float _GET_SCENARIO_POINT_RADIUS(int scenario) { return invoke<float>(0x026E3C20, scenario); } // 0x6718F40313A2B5A6 b1207
	static void _SET_SCENARIO_POINT_COORDS(int scenario, float xPos, float yPos, float zPos, BOOL p4) { invoke<Void>(0x026E3D30, scenario, xPos, yPos, zPos, p4); } // 0x2056AB38DF06825C b1207
	static void _SET_SCENARIO_POINT_HEADING(int scenario, float heading, BOOL p2) { invoke<Void>(0x026E3EF0, scenario, heading, p2); } // 0xD3A0DA8F91612C6E b1207
	static void _SET_SCENARIO_POINT_RADIUS(int scenario, float radius) { invoke<Void>(0x026E4220, scenario, radius); } // 0xC47D9080A9A8856A b1207
	static void _0xA7479FB665361EDB(Any p0, Any p1) { invoke<Void>(0x026E4360, p0, p1); } // 0xA7479FB665361EDB b1207
	static void _0xE69FDA40AAC3EFC0(Any p0, Any p1) { invoke<Void>(0x026E4430, p0, p1); } // 0xE69FDA40AAC3EFC0 b1207
	static int GET_SCENARIO_POINTS_IN_AREA(float posX, float posY, float posZ, float radius, Any* scenariosInRadius, int size) { return invoke<int>(0x026E4500, posX, posY, posZ, radius, scenariosInRadius, size); } // 0x345EC3B7EBDE1CB5 b1207
	static Any _0xEFD875C2791EBEFD(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x026E4530, p0, p1, p2, p3); } // 0xEFD875C2791EBEFD b1207
	static Any _0x152664AA3188B193(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x026E4560, p0, p1, p2, p3, p4, p5); } // 0x152664AA3188B193 b1207
	static Any _0xE7BBC4E56B989449(Any p0, Any p1, Any p2) { return invoke<Any>(0x026E4830, p0, p1, p2); } // 0xE7BBC4E56B989449 b1207
	static int _GET_SCENARIO_POINT_PED_IS_USING(Ped ped, BOOL p1) { return invoke<int>(0x026E4860, ped, p1); } // 0xDF7993356F52359A b1207
	static Any GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Ped ped) { return invoke<Any>(0x026E4970, ped); } // 0xD04241BBF6D03A5E b1207
	static void _SET_SCENARIO_CONTAINER_OPENING_STATE(Entity entity, BOOL open) { invoke<Void>(0x026E4A90, entity, open); } // 0x188F8071F244B9B8 b1207
	static Any _0xA9E7672F8C6C6F74(Any p0) { return invoke<Any>(0x026E4BB0, p0); } // 0xA9E7672F8C6C6F74 b1207
	static Any _0x0A98A362C5A19A43(Any p0) { return invoke<Any>(0x026E4E80, p0); } // 0x0A98A362C5A19A43 b1207
	static Any _0x849791EBBDBA0362(Any p0) { return invoke<Any>(0x026E5090, p0); } // 0x849791EBBDBA0362 b1207
	static Any _0x640A602946A8C972(Any p0) { return invoke<Any>(0x026E5240, p0); } // 0x640A602946A8C972 b1207
	static Any _0x01AF8A3729231A43(Any p0) { return invoke<Any>(0x026E53C0, p0); } // 0x01AF8A3729231A43 b1207
	static BOOL _GET_SCENARIO_CONTAINER_OPENING_STATE(Entity entity) { return invoke<BOOL>(0x026E54E0, entity); } // 0xB219612B5568E9EC b1207
	static void _0x2E20878FD208A68E(Any p0, Any p1) { invoke<Void>(0x026E55D0, p0, p1); } // 0x2E20878FD208A68E b1207
	static void _0x4161648394262FDF(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x026E55E0, p0, p1, p2, p3); } // 0x4161648394262FDF b1207
	static void _0x9C8F42A5D1859DC1(Any p0) { invoke<Void>(0x026E5640, p0); } // 0x9C8F42A5D1859DC1 b1207
	static void _DELETE_SCENARIO_POINT(int scenario) { invoke<Void>(0x026E56F0, scenario); } // 0x81948DFE4F5A0283 b1207
	static void TASK_USE_SCENARIO_POINT(Ped ped, int scenario, const char* p2, int p3, BOOL p4, BOOL p5, Hash p6, BOOL p7, float p8, BOOL p9) { invoke<Void>(0x026E57D0, ped, scenario, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xCCDAE6324B6A821C b1207
	static void _TASK_USE_SCENARIO_POINT_2(Ped ped, Ped ped2, Any p2, const char* p3, int p4, Hash p5, float p6, BOOL p7) { invoke<Void>(0x026E5840, ped, ped2, p2, p3, p4, p5, p6, p7); } // 0x0F6641449DD86FBE b1207
	static void TASK_START_SCENARIO_IN_PLACE_HASH(Ped ped, Hash scenarioHash, int p2, BOOL p3, Any p4, float heading, BOOL p6) { invoke<Void>(0x026E5880, ped, scenarioHash, p2, p3, p4, heading, p6); } // 0x524B54361229154F b1207
	static void _TASK_START_SCENARIO_IN_PLACE_2(Ped ped, Any p1, const char* p2, int p3, BOOL p4, float p5, BOOL p6) { invoke<Void>(0x026E58B0, ped, p1, p2, p3, p4, p5, p6); } // 0xA917E39F2CEFD215 b1207
	static void TASK_START_SCENARIO_AT_POSITION(Ped ped, Hash scenarioHash, float x, float y, float z, float heading, int duration, BOOL sittingScenario, BOOL teleport, const char* p9, float p10, BOOL p11) { invoke<Void>(0x026E58E0, ped, scenarioHash, x, y, z, heading, duration, sittingScenario, teleport, p9, p10, p11); } // 0x4D1F61FC34AF3CD1 b1207
	static Any _0xF97F462779B31786(Any p0) { return invoke<Any>(0x026E5940, p0); } // 0xF97F462779B31786 b1207
	static Any _0x6C269F673C47031E(Any p0) { return invoke<Any>(0x026E5A70, p0); } // 0x6C269F673C47031E b1207
	static void _0x9667CCE29BFA0780(Any p0) { invoke<Void>(0x026E5BC0, p0); } // 0x9667CCE29BFA0780 b1207
	static Any _0x00FFE0F85253C572(Any p0) { return invoke<Any>(0x026E5BF0, p0); } // 0x00FFE0F85253C572 b1207
	static void _TASK_USE_NEAREST_SCENARIO_TO_COORD(Ped ped, float x, float y, float z, float distance, int duration, BOOL p6, BOOL p7, BOOL p8, BOOL p9) { invoke<Void>(0x026E5E40, ped, x, y, z, distance, duration, p6, p7, p8, p9); } // 0x322BFDEA666E2B0E b1207
	static void TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Ped ped, float x, float y, float z, float distance, int duration, BOOL p6, BOOL p7, BOOL p8, BOOL p9) { invoke<Void>(0x026E5EA0, ped, x, y, z, distance, duration, p6, p7, p8, p9); } // 0x58E2E0F23F6B76C3 0x1BE9D65C b1207
	static void TASK_USE_NEAREST_TRAIN_SCENARIO_TO_COORD_WARP(Ped ped, float x, float y, float z, float distance) { invoke<Void>(0x026E5F00, ped, x, y, z, distance); } // 0x3774B03456DD6106 b1207
	static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(Ped ped, float x, float y, float z, float distance, BOOL p5, BOOL p6, BOOL p7, BOOL p8) { invoke<Void>(0x026E5F20, ped, x, y, z, distance, p5, p6, p7, p8); } // 0x9FDA1B3D7E7028B3 0xE32FFB22 b1207
	static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(Ped ped, float x, float y, float z, float distance, BOOL p5, BOOL p6, BOOL p7, BOOL p8) { invoke<Void>(0x026E61B0, ped, x, y, z, distance, p5, p6, p7, p8); } // 0x97A28E63F0BA5631 0xBAB4C0AE b1207
	static Any _0xFDECCA06E8B81346(Any p0) { return invoke<Any>(0x026E6440, p0); } // 0xFDECCA06E8B81346 b1207
	static Any _0x2D657B10F211C572(Ped ped, float p1) { return invoke<Any>(0x026E6470, ped, p1); } // 0x2D657B10F211C572 b1207
	static void TASK_RIDE_TRAIN(Ped ped, Vehicle train, int scenarioPoint, Hash scenarioHash) { invoke<Void>(0x026E64A0, ped, train, scenarioPoint, scenarioHash); } // 0x37FB1C870E2EC2C6 b1207
	static Any _0x79197F7D2BB5E73A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x026E64C0, p0, p1, p2, p3, p4, p5); } // 0x79197F7D2BB5E73A b1207
	static BOOL DOES_SCENARIO_EXIST_IN_AREA(float x, float y, float z, float radius, BOOL p4, Any p5, BOOL p6) { return invoke<BOOL>(0x026E6500, x, y, z, radius, p4, p5, p6); } // 0x5A59271FFADD33C1 0xFA7F5047 b1207
	static BOOL DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA_HASH(float x, float y, float z, Hash typeHash, float radius, BOOL p5) { return invoke<BOOL>(0x026E6540, x, y, z, typeHash, radius, p5); } // 0x6EEAD6AF637DA752 b1207
	static int FIND_SCENARIO_OF_TYPE_HASH(float xPos, float yPos, float zPos, Hash scenarioType, float distance, Any p5, BOOL p6) { return invoke<int>(0x026E6700, xPos, yPos, zPos, scenarioType, distance, p5, p6); } // 0xF533D68FF970D190 b1207
	static void _0x0D322AEF8878B8FE(Any p0, Any p1) { invoke<Void>(0x026E68C0, p0, p1); } // 0x0D322AEF8878B8FE b1207
	static Any _0xD508FA229F1C4900(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x026E68D0, p0, p1, p2, p3, p4, p5); } // 0xD508FA229F1C4900 b1207
	static void _0xB8E213D02F37947D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x026E6B20, p0, p1, p2, p3, p4, p5, p6); } // 0xB8E213D02F37947D b1207
	static BOOL IS_SCENARIO_OCCUPIED(float p0, float p1, float p2, float p3, BOOL p4) { return invoke<BOOL>(0x026E6B70, p0, p1, p2, p3, p4); } // 0x788756D73AC2E07C 0x697FC008 b1207
	static Any _0x1ACBC313966C21F3(int scenario) { return invoke<Any>(0x026E6BA0, scenario); } // 0x1ACBC313966C21F3 b1436
	static BOOL PED_HAS_USE_SCENARIO_TASK(Ped ped) { return invoke<BOOL>(0x026E6C70, ped); } // 0x295E3CCEC879CCD7 0x9BE9C691 b1207
	static BOOL _PED_IS_IN_SCENARIO_BASE(Ped ped) { return invoke<BOOL>(0x026E6D80, ped); } // 0x02EBBB3989B7E695 b1207
	static Any _0x90703A8F75EE4ABD(Any p0, Any p1) { return invoke<Any>(0x026E6E30, p0, p1); } // 0x90703A8F75EE4ABD b1207
	static void _0xD999E379265A4501(Any p0, Any p1, Any p2) { invoke<Void>(0x026E6F80, p0, p1, p2); } // 0xD999E379265A4501 b1207
	static void PLAY_ANIM_ON_RUNNING_SCENARIO(Ped ped, const char* animDict, const char* animName) { invoke<Void>(0x026E70C0, ped, animDict, animName); } // 0x748040460F8DF5DC 0x1984A5D1 b1207
	static Any _0x74F0209674864CBD() { return invoke<Any>(0x026E7180); } // 0x74F0209674864CBD b1207
	static Any _0xE1C105E6BBA48270() { return invoke<Any>(0x026E7280); } // 0xE1C105E6BBA48270 b1207
	static Any _0x1AC5A8AB50CFAA33(Any p0) { return invoke<Any>(0x026E7290, p0); } // 0x1AC5A8AB50CFAA33 b1207
	static void _0xBEEFBB608D2AA68A(Any p0) { invoke<Void>(0x026E72B0, p0); } // 0xBEEFBB608D2AA68A b1207
	static void _0x19BC99C678FBA139(Any p0, Any p1, Any p2) { invoke<Void>(0x026E73D0, p0, p1, p2); } // 0x19BC99C678FBA139 b1207
	static void _0x5D9B0BAAF04CF65B(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x026E7430, p0, p1, p2, p3); } // 0x5D9B0BAAF04CF65B b1207
	static void _0x9B6A58FDB0024F12(Any p0, Any p1) { invoke<Void>(0x026E74A0, p0, p1); } // 0x9B6A58FDB0024F12 b1207
	static void _0xBC3F847AE2C3DC65(Any p0, Any p1) { invoke<Void>(0x026E74D0, p0, p1); } // 0xBC3F847AE2C3DC65 b1207
	static void _0x450080DDEDB91258(Any p0, Any p1) { invoke<Void>(0x026E7500, p0, p1); } // 0x450080DDEDB91258 b1207
	static void _0x954451EA2D2120FB(Any p0, Any p1) { invoke<Void>(0x026E7530, p0, p1); } // 0x954451EA2D2120FB b1207
	static void _0x0F4F6C4CE471259D(Any p0, Any p1) { invoke<Void>(0x026E7560, p0, p1); } // 0x0F4F6C4CE471259D b1207
	static void _0xB8E3486D107F4194(Any p0, Any p1) { invoke<Void>(0x026E7590, p0, p1); } // 0xB8E3486D107F4194 b1207
	static void _0x827A58CED9D4D5B4(Any p0, Any p1) { invoke<Void>(0x026E75E0, p0, p1); } // 0x827A58CED9D4D5B4 b1207
	static void _0x4A7D73989F52EB37(Any p0, Any p1) { invoke<Void>(0x026E7630, p0, p1); } // 0x4A7D73989F52EB37 b1207
	static void _0xB79817DB31FF72B9(Any p0, Any p1) { invoke<Void>(0x026E7660, p0, p1); } // 0xB79817DB31FF72B9 b1207
	static void _0x65D281985F2BDFC2(Any p0, Any p1) { invoke<Void>(0x026E7690, p0, p1); } // 0x65D281985F2BDFC2 b1207
	static void _0x885D19AC2B6FBFF4(Any p0, Any p1) { invoke<Void>(0x026E76E0, p0, p1); } // 0x885D19AC2B6FBFF4 b1207
	static void _0x2064B33F6E6B92D4(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x026E7720, p0, p1, p2, p3); } // 0x2064B33F6E6B92D4 b1207
	static void _0xCE4E669400E5F8AA(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x026E7770, p0, p1, p2, p3); } // 0xCE4E669400E5F8AA b1207
	static void _0x2EB977293923C723(Any p0, Any p1) { invoke<Void>(0x026E77C0, p0, p1); } // 0x2EB977293923C723 b1207
	static void _0xE9225354FB7437A7(Any p0, Any p1) { invoke<Void>(0x026E77F0, p0, p1); } // 0xE9225354FB7437A7 b1207
	static void _0x764DB5A48390FBAD(Any p0, Any p1) { invoke<Void>(0x026E7830, p0, p1); } // 0x764DB5A48390FBAD b1207
	static void _0x8F8C84363810691A(Any p0, Any p1) { invoke<Void>(0x026E7870, p0, p1); } // 0x8F8C84363810691A b1207
	static void _0xFF8AFCA532B500D4(Any p0, Any p1) { invoke<Void>(0x026E78A0, p0, p1); } // 0xFF8AFCA532B500D4 b1207
	static Any _0xFE5D28B9B7837CC1(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x026E78D0, p0, p1, p2, p3); } // 0xFE5D28B9B7837CC1 b1207
	static void _0x2B8AF29A78024BD3(Any p0) { invoke<Void>(0x026E7930, p0); } // 0x2B8AF29A78024BD3 b1207
	static Any _0x0365000D8BF86531(Any p0) { return invoke<Any>(0x026E7A60, p0); } // 0x0365000D8BF86531 b1207
	static Vector3 _0x865732725536EE39(Any p0) { return invoke<Vector3>(0x026E7BA0, p0); } // 0x865732725536EE39 b1207
	static void _0x0E184495B27BB57D() { invoke<Void>(0x026E7D30); } // 0x0E184495B27BB57D b1207
	static BOOL DOES_SCENARIO_GROUP_EXIST(const char* scenarioGroup) { return invoke<BOOL>(0x026E7D80, scenarioGroup); } // 0xF9034C136C9E00D3 0x5F072EB9 b1207
	static BOOL _DOES_SCENARIO_GROUP_EXIST_HASH(Hash scenarioGroup) { return invoke<BOOL>(0x026E7E30, scenarioGroup); } // 0x76E98B52369A289C b1207
	static BOOL IS_SCENARIO_GROUP_ENABLED(const char* scenarioGroup) { return invoke<BOOL>(0x026E7ED0, scenarioGroup); } // 0x367A09DED4E05B99 0x90991122 b1207
	static BOOL _IS_SCENARIO_GROUP_ENABLED_HASH(Hash scenarioGroup) { return invoke<BOOL>(0x026E7FA0, scenarioGroup); } // 0xDCC374913DE6AAA6 b1207
	static void SET_SCENARIO_GROUP_ENABLED(const char* scenarioGroup, BOOL toggle) { invoke<Void>(0x026E8040, scenarioGroup, toggle); } // 0x02C8E5B49848664E 0x116997B1 b1207
	static void _SET_SCENARIO_GROUP_ENABLED_HASH(Hash scenarioGroup, BOOL toggle) { invoke<Void>(0x026E8130, scenarioGroup, toggle); } // 0x9925EDDB6EAB88CD b1207
	static void RESET_SCENARIO_GROUPS_ENABLED() { invoke<Void>(0x026E8200); } // 0xDD902D0349AFAD3A 0xBF55025D b1207
	static void _0x358A1A751B335A11(Any p0) { invoke<Void>(0x026E8270, p0); } // 0x358A1A751B335A11 b1207
	static void FORCE_SCENARIO_GROUP_PRIORITY(Any p0, Any p1) { invoke<Void>(0x026E8300, p0, p1); } // 0x444C910A5058E568 b1207
	static Any _0xE55478C5EDF70AC2(Any p0) { return invoke<Any>(0x026E8420, p0); } // 0xE55478C5EDF70AC2 b1207
	static BOOL _IS_SCENARIO_POINT_ACTIVE(int scenario) { return invoke<BOOL>(0x026E8500, scenario); } // 0x0CC36D4156006509 b1207
	static void _SET_SCENARIO_POINT_ACTIVE(int scenario, BOOL active) { invoke<Void>(0x026E85E0, scenario, active); } // 0xEEE4829304F93EEE b1207
	static void _0x5A40040BB5AE3EA2(Any p0) { invoke<Void>(0x026E86D0, p0); } // 0x5A40040BB5AE3EA2 b1207
	static BOOL IS_SCENARIO_TYPE_ENABLED(const char* scenarioType) { return invoke<BOOL>(0x026E87A0, scenarioType); } // 0x3A815DB3EA088722 0xAE37E969 b1207
	static void SET_SCENARIO_TYPE_ENABLED(const char* scenarioType, BOOL toggle) { invoke<Void>(0x026E8950, scenarioType, toggle); } // 0xEB47EC4E34FB7EE1 0xDB18E5DE b1207
	static void _SET_SCENARIO_TYPE_ENABLED_HASH(Hash scenarioType, BOOL toggle) { invoke<Void>(0x026E8B10, scenarioType, toggle); } // 0xD00E50E673802D71 b1207
	static void RESET_SCENARIO_TYPES_ENABLED() { invoke<Void>(0x026E8C50); } // 0x0D40EE2A7F2B2D6D 0xF58FDEB4 b1207
	static int _GET_SCENARIO_POINT_TYPE_PED_IS_USING(Ped ped) { return invoke<int>(0x026E8C60, ped); } // 0x2D0571BB55879DA2 b1207
	static Hash _GET_SCENARIO_POINT_TYPE(int scenario) { return invoke<Hash>(0x026E8DF0, scenario); } // 0xA92450B5AE687AAF b1207
	static BOOL IS_PED_ACTIVE_IN_SCENARIO(Ped ped, int scenario) { return invoke<BOOL>(0x026E8F00, ped, scenario); } // 0xAA135F9482C82CC3 0x05038F1A b1207
	static BOOL IS_PED_EXITING_SCENARIO(Ped ped, BOOL p1) { return invoke<BOOL>(0x026E90D0, ped, p1); } // 0x0C3CB2E600C8977D b1207
	static Any _0x2C497BDEF897C6DF(Any p0) { return invoke<Any>(0x026E9210, p0); } // 0x2C497BDEF897C6DF b1207
	static void TASK_COMBAT_HATED_TARGETS_IN_AREA(Ped ped, float x, float y, float z, float radius, int flags, Any p6) { invoke<Void>(0x026E9330, ped, x, y, z, radius, flags, p6); } // 0x4CF5F55DAC3280A0 0xDF099E18 b1207
	static void TASK_COMBAT_HATED_TARGETS_NO_LOS_TEST(Ped ped, float radius) { invoke<Void>(0x026E9460, ped, radius); } // 0xB5BC69D9C4060BC3 b1207
	static void TASK_COMBAT_HATED_TARGETS_AROUND_PED(Ped ped, float radius, int flags, Any p3) { invoke<Void>(0x026E9560, ped, radius, flags, p3); } // 0x7BF835BB9E2698C8 0x2E7064E4 b1207
	static void TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED(Ped ped, float radius, float p2, Any p3) { invoke<Void>(0x026E9670, ped, radius, p2, p3); } // 0x2BBA30B854534A0C 0xF127AD6A b1207
	static void TASK_COMBAT_HATED_TARGETS(Ped ped, float radius) { invoke<Void>(0x026E9790, ped, radius); } // 0x8182B561A29BD597 b1207
	static void _0x30B391915538EBE2(Any p0) { invoke<Void>(0x026E97A0, p0); } // 0x30B391915538EBE2 b1207
	static void TASK_THROW_PROJECTILE(Ped ped, Any p1, Any p2, Any p3) { invoke<Void>(0x026E9850, ped, p1, p2, p3); } // 0x7285951DBF6B5A51 0xF65C20A7 b1207
	static void _TASK_THROW_PROJECTILE_2(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x026E9860, p0, p1, p2, p3); } // 0x7282356DFF6B5A51 b1207
	static void TASK_WHISTLE_ANIM(Ped ped, Hash audPedWhistleType, Hash p2) { invoke<Void>(0x026E9880, ped, audPedWhistleType, p2); } // 0xD6401A1B2F63BED6 b1207
	static void TASK_SWAP_WEAPON(Ped ped, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x026E98A0, ped, p1, p2, p3, p4); } // 0xA21C51255B205245 0xDAF4F8FC b1207
	static void _0x0000A8ACDC2E1B6A(Any p0, Any p1) { invoke<Void>(0x026E98E0, p0, p1); } // 0x0000A8ACDC2E1B6A b1207
	static void TASK_RELOAD_WEAPON(Ped ped, BOOL unused) { invoke<Void>(0x026E9A30, ped, unused); } // 0x62D2916F56B9CD2D 0xCA6E91FD b1207
	static void TASK_PICK_UP_WEAPON(Ped ped, Any p1) { invoke<Void>(0x026E9B10, ped, p1); } // 0x55B0ECFD98596624 b1207
	static BOOL IS_PED_GETTING_UP(Ped ped) { return invoke<BOOL>(0x026E9B20, ped); } // 0x2A74E1D5F2F00EEC 0x320813E6 b1207
	static void TASK_ANIMAL_WRITHE(Ped ped, Any p1, Any p2) { invoke<Void>(0x026E9C10, ped, p1, p2); } // 0x8C038A39C4A4B6D6 b1207
	static void _TASK_ANIMAL_BLEED_OUT(Ped ped, Ped killer, BOOL p2, Hash weaponHash, int p4, int p5) { invoke<Void>(0x026E9C30, ped, killer, p2, weaponHash, p4, p5); } // 0x30A768C30D385EC5 b1207
	static BOOL IS_PED_IN_WRITHE(Ped ped) { return invoke<BOOL>(0x026E9C60, ped); } // 0xDEB6D52126E7D640 0x09E61921 b1207
	static Any _0x3F8387DB1B9F31B7(Any p0, Any p1) { return invoke<Any>(0x026E9D50, p0, p1); } // 0x3F8387DB1B9F31B7 b1207
	static Any _0x756C7B4C43DF0422(Any p0) { return invoke<Any>(0x026E9E90, p0); } // 0x756C7B4C43DF0422 b1207
	static Any _0x351F74ED6177EBE7() { return invoke<Any>(0x026E9EF0); } // 0x351F74ED6177EBE7 b1207
	static Any _0x6C50B9DCCCA70023(Any p0) { return invoke<Any>(0x026EA030, p0); } // 0x6C50B9DCCCA70023 b1207
	static void TASK_REVIVE_TARGET(Ped ped, Ped reviver, Hash tool) { invoke<Void>(0x026EA180, ped, reviver, tool); } // 0x356088527D9EBAAD b1207
	static void OPEN_PATROL_ROUTE(const char* patrolRoute) { invoke<Void>(0x026EA1A0, patrolRoute); } // 0xA36BFB5EE89F3D82 0xF33F83CA b1207
	static void CLOSE_PATROL_ROUTE() { invoke<Void>(0x026EA290); } // 0xB043ECA801B8CBC1 0x67305E59 b1207
	static void ADD_PATROL_ROUTE_NODE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0x026EA2A0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x8EDF950167586B7C 0x21B48F10 b1207
	static void ADD_PATROL_ROUTE_LINK(Any p0, Any p1) { invoke<Void>(0x026EA500, p0, p1); } // 0x23083260DEC3A551 0xD8761BB3 b1207
	static void CREATE_PATROL_ROUTE() { invoke<Void>(0x026EA540); } // 0xAF8A443CCC8018DC 0x0A6C7864 b1207
	static void DELETE_PATROL_ROUTE(const char* patrolRoute) { invoke<Void>(0x026EA550, patrolRoute); } // 0x7767DD9D65E91319 0x2A4E6706 b1207
	static Any _0x643FD1556F621772(Any p0, Any p1, Any p2) { return invoke<Any>(0x026EA610, p0, p1, p2); } // 0x643FD1556F621772 b1207
	static void TASK_PATROL(Ped ped, const char* p1, Any p2, BOOL p3, BOOL p4) { invoke<Void>(0x026EA7A0, ped, p1, p2, p3, p4); } // 0xBDA5DF49D080FE4E 0xB92E5AF6 b1207
	static void _TASK_PATROL_2(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x026EA950, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x964B06C88E4C86DB b1207
	static void TASK_STAY_IN_COVER(Ped ped) { invoke<Void>(0x026EAB20, ped); } // 0xE5DA8615A6180789 0xA27A9413 b1207
	static void TASK_VEHICLE_SHOOT_AT_PED(Ped ped, Ped target, float p2) { invoke<Void>(0x026EABF0, ped, target, p2); } // 0x10AB107B887214D8 0x59677BA0 b1207
	static void TASK_VEHICLE_AIM_AT_PED(Ped ped, Ped target) { invoke<Void>(0x026EAC10, ped, target); } // 0xE41885592B08B097 0x920AE6DB b1207
	static void TASK_VEHICLE_SHOOT_AT_COORD(Ped ped, float x, float y, float z, float p4) { invoke<Void>(0x026EAC20, ped, x, y, z, p4); } // 0x5190796ED39C9B6D 0xA7AAA4D6 b1207
	static void _0xAF2EF28CE3084505(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x026EAC40, p0, p1, p2, p3); } // 0xAF2EF28CE3084505 b1207
	static void TASK_VEHICLE_AIM_AT_COORD(Ped ped, float x, float y, float z) { invoke<Void>(0x026EAC50, ped, x, y, z); } // 0x447C1E9EF844BC0F 0x010F47CE b1207
	static void TASK_VEHICLE_GOTO_NAVMESH(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, int behaviorFlag, float stoppingRange) { invoke<Void>(0x026EAC60, ped, vehicle, x, y, z, speed, behaviorFlag, stoppingRange); } // 0x195AEEB13CEFE2EE 0x55CF3BCD b1207
	static void TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15) { invoke<Void>(0x026EAC80, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15); } // 0x11315AB3385B8AC0 0x1552DC91 b1207
	static void TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD_USING_COMBAT_STYLE(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15) { invoke<Void>(0x026EACF0, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15); } // 0x639C0425A0B4E77E b1207
	static void TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { invoke<Void>(0x026EAD60, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // 0xB2A16444EAD9AE47 0x9BD52ABD b1207
	static void TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { invoke<Void>(0x026EAE70, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // 0x78426D0982D083C9 b1207
	static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoke<Void>(0x026EAF80, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x97465886D35210E9 0x68E36B7A b1207
	static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoke<Void>(0x026EB0F0, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0xCEF0117C233026AD b1207
	static void TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(Ped ped, float goToLocationX, float goToLocationY, float goToLocationZ, float focusLocationX, float focusLocationY, float focusLocationZ, float speed, BOOL shootAtEnemies, float distanceToStopAt, float noRoadsDistance, BOOL unkTrue, int unkFlag, int aimingFlag, Hash firingPattern) { invoke<Void>(0x026EB260, ped, goToLocationX, goToLocationY, goToLocationZ, focusLocationX, focusLocationY, focusLocationZ, speed, shootAtEnemies, distanceToStopAt, noRoadsDistance, unkTrue, unkFlag, aimingFlag, firingPattern); } // 0xA55547801EB331FC 0x3F91358E b1207
	static void TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD_USING_COMBAT_STYLE(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { invoke<Void>(0x026EB2B0, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // 0x87BD711FC31EA273 b1207
	static void SET_HIGH_FALL_TASK(Ped ped, int p1, int p2, int p3) { invoke<Void>(0x026EB300, ped, p1, p2, p3); } // 0x8C825BDC7741D37C 0xBBB26172 b1207
	static void _0x5217B7B6DB78E1F3(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x026EB3D0, p0, p1, p2, p3, p4); } // 0x5217B7B6DB78E1F3 b1207
	static void REQUEST_WAYPOINT_RECORDING(const char* waypointRecording) { invoke<Void>(0x026EB4B0, waypointRecording); } // 0x9EEFB62EB27B5792 0xAFABFB5D b1207
	static BOOL GET_IS_WAYPOINT_RECORDING_LOADED(const char* waypointRecording) { return invoke<BOOL>(0x026EB4C0, waypointRecording); } // 0xCB4E8BE8A0063C5D 0x87125F5D b1207
	static void REMOVE_WAYPOINT_RECORDING(const char* waypointRecording) { invoke<Void>(0x026EB5B0, waypointRecording); } // 0xFF1B8B4AA1C25DC8 0x624530B0 b1207
	static void _0xF718931A82EEB898() { invoke<Void>(0x026EB5C0); } // 0xF718931A82EEB898 b1207
	static BOOL WAYPOINT_RECORDING_GET_NUM_POINTS(const char* waypointRecording, int* points) { return invoke<BOOL>(0x026EB5D0, waypointRecording, points); } // 0x5343532C01A07234 0xF5F9B71E b1207
	static BOOL WAYPOINT_RECORDING_GET_COORD(const char* waypointRecording, int point, Vector3* coord) { return invoke<BOOL>(0x026EB7B0, waypointRecording, point, coord); } // 0x2FB897405C90B361 0x19266913 b1207
	static float WAYPOINT_RECORDING_GET_SPEED_AT_POINT(const char* waypointRecording, int point) { return invoke<float>(0x026EB820, waypointRecording, point); } // 0x005622AEBC33ACA9 0xC765633A b1207
	static BOOL WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(const char* waypointRecording, float x, float y, float z, int* point) { return invoke<BOOL>(0x026EBA30, waypointRecording, x, y, z, point); } // 0xB629A298081F876F 0xC4CD35AF b1207
	static void TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(Ped ped, Any p1) { invoke<Void>(0x026EBA60, ped, p1); } // 0x0CFC13EBC19BCA52 b1207
	static void TASK_FOLLOW_WAYPOINT_RECORDING(Ped ped, const char* waypointRecording, int p2, int p3, int p4, Any p5, Any p6, int p7) { invoke<Void>(0x026EBA70, ped, waypointRecording, p2, p3, p4, p5, p6, p7); } // 0x0759591819534F7B 0xADF9904D b1207
	static void TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(Ped ped, const char* waypointRecording, float p2, int p3, int p4, int p5, BOOL p6) { invoke<Void>(0x026EBB70, ped, waypointRecording, p2, p3, p4, p5, p6); } // 0xBE9B0520BD7C445B b1207
	static void TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(Ped ped0, Ped ped1, const char* waypointRecording, float p3, float p4, int p5, int p6, int p7, BOOL p8) { invoke<Void>(0x026EBC60, ped0, ped1, waypointRecording, p3, p4, p5, p6, p7, p8); } // 0x4D2B787BAE9AB760 b1207
	static BOOL IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Ped ped, const char* waypointRecording) { return invoke<BOOL>(0x026EBCB0, ped, waypointRecording); } // 0xE03B3F2D3DC59B64 0x85B7725F b1207
	static int GET_PED_WAYPOINT_PROGRESS(Ped ped) { return invoke<int>(0x026EBD70, ped); } // 0x2720AAA75001E094 0x3595B104 b1207
	static float GET_PED_WAYPOINT_DISTANCE(Ped ped) { return invoke<float>(0x026EBE90, ped); } // 0xE6A877C64CAF1BC5 0x084B35B0 b1207
	static Any SET_PED_WAYPOINT_ROUTE_OFFSET(Ped ped, float p1, float p2, float p3) { return invoke<Any>(0x026EBFC0, ped, p1, p2, p3); } // 0xED98E10B0AFCE4B4 0xF867F747 b1207
	static float GET_WAYPOINT_DISTANCE_ALONG_ROUTE(const char* waypointRecording, int p1) { return invoke<float>(0x026EC080, waypointRecording, p1); } // 0xA5B769058763E497 0xE8422AC4 b1207
	static float _0x3ACC128510142B9D(const char* waypointRecording, float x, float y, float z) { return invoke<float>(0x026EC360, waypointRecording, x, y, z); } // 0x3ACC128510142B9D b1207
	static BOOL WAYPOINT_PLAYBACK_GET_IS_PAUSED(Ped ped) { return invoke<BOOL>(0x026EC390, ped); } // 0x701375A7D43F01CB 0xA6BB5717 b1207
	static BOOL WAYPOINT_PLAYBACK_GET_IS_AIMING(Ped ped) { return invoke<BOOL>(0x026EC4E0, ped); } // 0xD73A5D1F0325C71C b1207
	static BOOL WAYPOINT_PLAYBACK_GET_IS_SHOOTING(Ped ped) { return invoke<BOOL>(0x026EC620, ped); } // 0xA5B94DF8AF058F46 b1207
	static void WAYPOINT_PLAYBACK_PAUSE(Ped ped, Any p1, Any p2, Any p3) { invoke<Void>(0x026EC760, ped, p1, p2, p3); } // 0x0F342546AA06FED5 0xFE39ECF8 b1207
	static void WAYPOINT_PLAYBACK_RESUME(Ped ped, BOOL p1, int p2, int p3) { invoke<Void>(0x026EC830, ped, p1, p2, p3); } // 0x244F70C84C547D2D 0x50F392EF b1207
	static void WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Ped ped, float speed, Any p2, Any p3, Any p4) { invoke<Void>(0x026EC8F0, ped, speed, p2, p3, p4); } // 0x7D7D2B47FA788E85 0x23E6BA96 b1207
	static void WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Ped ped) { invoke<Void>(0x026EC9C0, ped); } // 0x6599D834B12D0800 0x1BBB2CAC b1207
	static float GET_PED_WAYPOINT_OVERRIDE_SPEED(Ped ped) { return invoke<float>(0x026ECAE0, ped); } // 0xD39A2F3E7FCAFF08 b1207
	static void USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(const char* waypointRecording, BOOL p1, float p2, float p3, BOOL p4) { invoke<Void>(0x026ECB90, waypointRecording, p1, p2, p3, p4); } // 0x5A353B8E6B1095B5 0x4DFD5FEC b1207
	static void WAYPOINT_PLAYBACK_START_AIMING_AT_PED(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x026ECBC0, p0, p1, p2, p3); } // 0x20E330937C399D29 0x75E60CF6 b1207
	static void WAYPOINT_PLAYBACK_START_AIMING_AT_ENTITY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x026ECCF0, p0, p1, p2, p3); } // 0x4F158205E0C74385 b1207
	static void WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x026ECDB0, p0, p1, p2, p3, p4, p5); } // 0x8968400D900ED8B3 0xF120A34E b1207
	static void WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x026ECE70, p0, p1, p2, p3, p4); } // 0xE70BA7B90F8390DC 0xBD5F0EB8 b1207
	static void WAYPOINT_PLAYBACK_START_SHOOTING_AT_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x026ECFC0, p0, p1, p2, p3, p4); } // 0x4AF458F71C1196D2 b1207
	static void WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x026ED0A0, p0, p1, p2, p3, p4, p5, p6); } // 0x057A25CFCC9DB671 0xCDDB44D5 b1207
	static void WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(Any p0) { invoke<Void>(0x026ED180, p0); } // 0x47EFA040EBB8E2EA 0x6D7CF40C b1207
	static void ASSISTED_MOVEMENT_REMOVE_ROUTE(const char* route) { invoke<Void>(0x026ED290, route); } // 0x3548536485DD792B 0xB3CEC06F b1207
	static Any _0x5C885E0978B6AD60(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x026ED2A0, p0, p1, p2, p3); } // 0x5C885E0978B6AD60 b1207
	static BOOL ASSISTED_MOVEMENT_IS_ROUTE_LOADED(const char* route) { return invoke<BOOL>(0x026ED2D0, route); } // 0x60F9A4393A21F741 0x79B067AF b1207
	static void ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES(const char* route, int props) { invoke<Void>(0x026ED3B0, route, props); } // 0xD5002D78B7162E1B 0x01CAAFCC b1207
	static void SET_ENABLE_SPEED_RESTRAIN_FOR_WAYPOINT_RECORDING_LEADER(Any p0, Any p1) { invoke<Void>(0x026ED3C0, p0, p1); } // 0x295F03DC97BEEBC1 b1207
	static void SET_UP_SPEED_RESTRAIN_INFORMATION_FOR_PLAYER_FOLLOWER(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0x026ED4E0, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xB5C51DD544F14F58 b1207
	static void TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoke<Void>(0x026ED710, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x3123FAA6DB1CF7ED 0x959818B6 b1207
	static void _TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING_2(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0x026ED780, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x041D17A9E221AE30 b1207
	static BOOL IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Any p0, Any p1) { return invoke<BOOL>(0x026ED7F0, p0, p1); } // 0xF5134943EA29868C 0x80DD15DB b1207
	static int GET_VEHICLE_WAYPOINT_PROGRESS(Vehicle vehicle) { return invoke<int>(0x026ED820, vehicle); } // 0x9824CFF8FC66E159 0xD3CCF64E b1207
	static int GET_VEHICLE_WAYPOINT_TARGET_POINT(Vehicle vehicle) { return invoke<int>(0x026ED840, vehicle); } // 0x416B62AC8B9E5BBD 0x81049608 b1207
	static void VEHICLE_WAYPOINT_PLAYBACK_PAUSE(Vehicle vehicle) { invoke<Void>(0x026ED860, vehicle); } // 0x8A4E6AC373666BC5 0x7C00B415 b1207
	static Any VEHICLE_WAYPOINT_PLAYBACK_GET_IS_PAUSED(Any p0) { return invoke<Any>(0x026ED870, p0); } // 0x4D6D30AB18B0B089 b1207
	static void VEHICLE_WAYPOINT_PLAYBACK_RESUME(Vehicle vehicle) { invoke<Void>(0x026ED8A0, vehicle); } // 0xDC04FCAA7839D492 0xBEB14C82 b1207
	static void VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Vehicle vehicle) { invoke<Void>(0x026ED8B0, vehicle); } // 0x5CEB25A7D2848963 0x923C3AA4 b1207
	static void VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0x026ED8C0, vehicle, speed); } // 0x121F0593E0A431D7 0xBE1E7BB4 b1207
	static Any GET_VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Any p0) { return invoke<Any>(0x026ED8D0, p0); } // 0x3DC971EB22F73447 b1207
	static void TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped ped, BOOL toggle) { invoke<Void>(0x026ED900, ped, toggle); } // 0x90D2156198831D69 0x1B54FB6B b1207
	static void TASK_SET_STEALTH_MOVEMENT(Ped ped, BOOL p1, Any p2, BOOL p3) { invoke<Void>(0x026ED920, ped, p1, p2, p3); } // 0x4C3FA937B44A90FA b1207
	static void TASK_SET_CROUCH_MOVEMENT(Ped ped, BOOL p1, Any p2, BOOL p3) { invoke<Void>(0x026EDA20, ped, p1, p2, p3); } // 0x17293C633C8AC019 b1207
	static void TASK_FORCE_MOTION_STATE(Ped ped, Hash motionStateHash, BOOL p2) { invoke<Void>(0x026EDBE0, ped, motionStateHash, p2); } // 0x4F056E1AFFEF17AB 0xCAD2EF77 b1207
	static void TASK_MOVE_NETWORK_BY_NAME(Ped ped, const char* task, float multiplier, BOOL p3, const char* animDict, int flags) { invoke<Void>(0x026EDC00, ped, task, multiplier, p3, animDict, flags); } // 0x2D537BA194896636 0x6F5D215F b1207
	static void TASK_MOVE_NETWORK_BY_NAME_WITH_INIT_PARAMS(Ped ped, const char* p1, Any* data, float p3, BOOL p4, const char* animDict, int flags) { invoke<Void>(0x026EDC30, ped, p1, data, p3, p4, animDict, flags); } // 0x139805C2A67C4795 b1207
	static void TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { invoke<Void>(0x026EDC60, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // 0x7B6A04F98BBAFB2C b1207
	static void TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS_ATTACHED(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16, Any p17) { invoke<Void>(0x026EDCD0, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17); } // 0xF92171093BCABED4 b1207
	static BOOL IS_TASK_MOVE_NETWORK_ACTIVE(Ped ped) { return invoke<BOOL>(0x026EDD70, ped); } // 0x921CE12C489C4C41 0x902656EB b1207
	static Hash _GET_TASK_MOVE_NETWORK_ID(Ped ped) { return invoke<Hash>(0x026EDE30, ped); } // 0xCACC2F9D994504B7 b1207
	static BOOL IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Ped ped) { return invoke<BOOL>(0x026EDF10, ped); } // 0x30ED88D5E0C56A37 0x92FDBAE6 b1207
	static void REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Ped ped, const char* name) { invoke<Void>(0x026EE000, ped, name); } // 0xD01015C7316AE176 0x885724DE b1207
	static const char* GET_TASK_MOVE_NETWORK_STATE(Ped ped) { return invoke<const char*>(0x026EE010, ped); } // 0x717E4D1F2048376D 0x96C0277B b1207
	static Any _0xE9A6400D1A0E7A55(Any p0) { return invoke<Any>(0x026EE0E0, p0); } // 0xE9A6400D1A0E7A55 b1207
	static void _0x615DC4A82E90BB48(Any p0, Any p1, Any p2) { invoke<Void>(0x026EE1A0, p0, p1, p2); } // 0x615DC4A82E90BB48 b1207
	static void SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Ped ped, const char* signalName, float value) { invoke<Void>(0x026EE1C0, ped, signalName, value); } // 0xD5BB4025AE449A4E 0xA79BE783 b1207
	static void _0x099D4A855D53B03B(Any p0, Any p1, Any p2) { invoke<Void>(0x026EE1E0, p0, p1, p2); } // 0x099D4A855D53B03B b1207
	static void SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(Ped ped, const char* signalName, BOOL value) { invoke<Void>(0x026EE2C0, ped, signalName, value); } // 0xB0A6CFD2C69C1088 0xF3538041 b1207
	static void _SET_TASK_MOVE_NETWORK_SIGNAL_VECTOR(Ped ped, const char* signalName, float x, float y, float z) { invoke<Void>(0x026EE2E0, ped, signalName, x, y, z); } // 0x4662BFE01938D98D b1207
	static float _GET_TASK_MOVE_NETWORK_PHASE_FLOAT(Ped ped, const char* phaseName) { return invoke<float>(0x026EE300, ped, phaseName); } // 0x844CEEE428EA35B0 b1207
	static BOOL GET_TASK_MOVE_NETWORK_EVENT(Ped ped, const char* eventName) { return invoke<BOOL>(0x026EE400, ped, eventName); } // 0xB4F47213DF45A64C 0x72FA5EF2 b1207
	static void _0x9585FF23C4B8EDE0(Any p0, Any p1) { invoke<Void>(0x026EE4F0, p0, p1); } // 0x9585FF23C4B8EDE0 b1207
	static void _0xEAF87DA2BE78A15B(Any p0, Any p1) { invoke<Void>(0x026EE500, p0, p1); } // 0xEAF87DA2BE78A15B b1207
	static void _0x3BBEECC5B8F35318(Any p0, Any p1) { invoke<Void>(0x026EE5C0, p0, p1); } // 0x3BBEECC5B8F35318 b1207
	static BOOL IS_MOVE_BLEND_RATIO_STILL(Ped ped) { return invoke<BOOL>(0x026EE680, ped); } // 0x349CE7B56DAFD95C 0xE9DAF877 b1207
	static BOOL IS_MOVE_BLEND_RATIO_WALKING(Ped ped) { return invoke<BOOL>(0x026EE6A0, ped); } // 0xF133BBBE91E1691F 0xD21639A8 b1207
	static BOOL IS_MOVE_BLEND_RATIO_RUNNING(Ped ped) { return invoke<BOOL>(0x026EE6D0, ped); } // 0xD4D8636C0199A939 0xE76A2353 b1207
	static BOOL IS_MOVE_BLEND_RATIO_SPRINTING(Ped ped) { return invoke<BOOL>(0x026EE700, ped); } // 0x24A2AD74FA9814E2 0xDD616893 b1207
	static BOOL IS_PED_STILL(Ped ped) { return invoke<BOOL>(0x026EE720, ped); } // 0xAC29253EEF8F0180 0x09E3418D b1207
	static BOOL IS_PED_WALKING(Ped ped) { return invoke<BOOL>(0x026EE830, ped); } // 0xDE4C184B2B9B071A 0x4B865C4A b1207
	static BOOL IS_PED_RUNNING(Ped ped) { return invoke<BOOL>(0x026EE960, ped); } // 0xC5286FFC176F28A2 0xE9A5578F b1207
	static BOOL IS_PED_SPRINTING(Ped ped) { return invoke<BOOL>(0x026EEA90, ped); } // 0x57E457CD2C0FC168 0x4F3E0633 b1207
	static BOOL IS_PED_IN_HIT_REACT(Ped ped) { return invoke<BOOL>(0x026EEB40, ped); } // 0xF330A5C062B29BED b1207
	static void TASK_ARREST_PED(Ped ped, Ped target) { invoke<Void>(0x026EEBF0, ped, target); } // 0xF3B9A78A178572B1 0xBC0F153D b1207
	static BOOL IS_PED_BEING_ARRESTED(Ped ped) { return invoke<BOOL>(0x026EEC00, ped); } // 0x90A09F3A45FED688 0x5FF6C2ED b1207
	static BOOL _IS_PED_ARRESTING_ANY_PED(Ped ped) { return invoke<BOOL>(0x026EECA0, ped); } // 0xA9CC7856D52DBD25 b1207
	static void _CUFF_PED(Ped ped) { invoke<Void>(0x026EEDB0, ped); } // 0x7981037A96E7D174 b1207
	static void UNCUFF_PED(Ped ped) { invoke<Void>(0x026EEEC0, ped); } // 0x67406F2C8F87FC4F 0xA23A1D61 b1207
	static BOOL IS_PED_CUFFED(Ped ped) { return invoke<BOOL>(0x026EEFB0, ped); } // 0x74E559B3BC910685 0x511CE741 b1207
	static BOOL _IS_PED_DUELLING(Ped ped) { return invoke<BOOL>(0x026EF0A0, ped); } // 0xC8B29D18022EA2B7 b1207
	static void TASK_DUEL(Ped ped, Any p1, float p2, Entity entity, float p4, int p5, float vPosOpponentX, float vPosOpponentY, float vPosOpponentZ, float fOpponentHead, int p10) { invoke<Void>(0x026EF1F0, ped, p1, p2, entity, p4, p5, vPosOpponentX, vPosOpponentY, vPosOpponentZ, fOpponentHead, p10); } // 0x5D5B0D5BC3626E5A b1207
	static Any _0x908BB14BCE85C80E(Any p0) { return invoke<Any>(0x026EF240, p0); } // 0x908BB14BCE85C80E b1207
	static Any _0x1F7A9A9C38C13A56(Any p0) { return invoke<Any>(0x026EF360, p0); } // 0x1F7A9A9C38C13A56 b1207
	static Any _0x3FEB770D8ED9047A(Any p0) { return invoke<Any>(0x026EF480, p0); } // 0x3FEB770D8ED9047A b1207
	static Any _0x30146C25686B7836(Any p0, Any p1) { return invoke<Any>(0x026EF5A0, p0, p1); } // 0x30146C25686B7836 b1207
	static Any _0x59AE5CA4FFB4E378(Any p0, Any p1) { return invoke<Any>(0x026EF6E0, p0, p1); } // 0x59AE5CA4FFB4E378 b1207
	static void _0x748D5E0D2A1A4C61(Any p0, Any p1, Any p2) { invoke<Void>(0x026EF820, p0, p1, p2); } // 0x748D5E0D2A1A4C61 b1207
	static void _0xEED08A3A98B847E2(Any p0, Any p1, Any p2) { invoke<Void>(0x026EF990, p0, p1, p2); } // 0xEED08A3A98B847E2 b1207
	static void _0x651F0530083C0E5A(Any p0, Any p1) { invoke<Void>(0x026EFAE0, p0, p1); } // 0x651F0530083C0E5A b1207
	static void TASK_CARRIABLE(Entity entity, Hash carryConfig, Ped carrier, int carriableSlot, int flags) { invoke<Void>(0x026EFC10, entity, carryConfig, carrier, carriableSlot, flags); } // 0xF0B4F759F35CC7F5 b1207
	static void _0x9EBD34958AB6F824(Any p0) { invoke<Void>(0x026EFC30, p0); } // 0x9EBD34958AB6F824 b1207
	static BOOL GET_IS_CARRIABLE_ENTITY(Entity entity) { return invoke<BOOL>(0x026EFD20, entity); } // 0x0CCFE72B43C9CF96 b1207
	static Any _0x10ADFDF07B7DFFBA(Any p0, Any p1, Any p2) { return invoke<Any>(0x026EFDE0, p0, p1, p2); } // 0x10ADFDF07B7DFFBA b1207
	static void TASK_PLACE_CARRIED_ENTITY_AT_COORD(Ped ped, Entity entity, float x, float y, float z, float p5, int flags) { invoke<Void>(0x026EFE10, ped, entity, x, y, z, p5, flags); } // 0xC7F0B43DCDC57E3D b1207
	static void TASK_PLACE_CARRIED_ENTITY_ON_MOUNT(Ped ped, Entity entity, Ped mount, float p3) { invoke<Void>(0x026EFE30, ped, entity, mount, p3); } // 0x6D3D87C57B3D52C7 b1207
	static void TASK_DUMP_CARRIABLE_FROM_PARENT(Ped ped, Ped ped2, Entity entity) { invoke<Void>(0x026EFE50, ped, ped2, entity); } // 0x17CA98707B15926A b1207
	static void _0x36D188AECB26094B(Any p0) { invoke<Void>(0x026EFE70, p0); } // 0x36D188AECB26094B b1207
	static void _0xE2CF104ADD49D4BF(Any p0) { invoke<Void>(0x026EFE80, p0); } // 0xE2CF104ADD49D4BF b1207
	static void TASK_PICKUP_CARRIABLE_ENTITY(Ped ped, Entity entity) { invoke<Void>(0x026EFFD0, ped, entity); } // 0x502EC17B1BED4BFA b1207
	static void TASK_HOGTIE_TARGET_PED(Ped ped, Ped targetPed) { invoke<Void>(0x026F0090, ped, targetPed); } // 0x27829AFD3E03AC1A b1207
	static void _TASK_CUT_FREE_HOGTIED_TARGET_PED(Ped ped, Ped targetPed) { invoke<Void>(0x026F0160, ped, targetPed); } // 0x81D16C4FF3A77ADF b1207
	static void _TASK_CUT_FREE_HOGTIED_TARGET_PED_2(Ped ped, Ped targetPed, float p2) { invoke<Void>(0x026F0230, ped, targetPed, p2); } // 0x525421A507216084 b1207
	static void _SET_HOGTIE_ESCAPE_TIMER(Ped ped, float time) { invoke<Void>(0x026F0250, ped, time); } // 0xAB591AE6B48B913E b1207
	static Any _0x4687E69D258BBE41(Any p0) { return invoke<Any>(0x026F03B0, p0); } // 0x4687E69D258BBE41 b1207
	static Any _0x03D741CB4052E26C(Any p0) { return invoke<Any>(0x026F0480, p0); } // 0x03D741CB4052E26C b1232
	static BOOL _REQUEST_HERB_COMPOSITE_ASSET(Hash asset) { return invoke<BOOL>(0x026F0550, asset); } // 0x73F0D0327BFA0812 b1207
	static BOOL ARE_COMPOSITE_LOOTABLE_ENTITY_DEF_ASSETS_LOADED(Hash asset) { return invoke<BOOL>(0x026F0610, asset); } // 0x5E5D96BE25E9DF68 b1207
	static int _CREATE_HERB_COMPOSITES(Hash asset, float x, float y, float z, float heading, int groundSetting, Any* p6, int p7) { return invoke<int>(0x026F06D0, asset, x, y, z, heading, groundSetting, p6, p7); } // 0x5B4BBE80AD5972DC b1207
	static void _DELETE_PATCH_OBJECTS_FROM_HERB_COMPOSITES(int compositeId, BOOL p1) { invoke<Void>(0x026F0710, compositeId, p1); } // 0x5758B1EE0C3FD4AC b1207
	static int _GET_HERB_COMPOSITE_NUM_ENTITIES(int compositeId, Any* outEntities) { return invoke<int>(0x026F0770, compositeId, outEntities); } // 0x96C6ED22FB742C3E b1207
	static Any _0xDF56A2B50C04DEA4(Any p0, Any p1) { return invoke<Any>(0x026F08C0, p0, p1); } // 0xDF56A2B50C04DEA4 b1207
	static void TASK_LOOT_ENTITY(Ped ped, Entity entity) { invoke<Void>(0x026F0A00, ped, entity); } // 0x48FAE038401A2888 b1207
	static void TASK_BREAK_VEHICLE_DOOR_LOCK(Ped ped, Vehicle vehicle) { invoke<Void>(0x026F0A10, ped, vehicle); } // 0xBB28D1BC9EA8A6A5 b1207
	static void TASK_LOOT_NEAREST_ENTITY(Ped ped, float x, float y, float z, int p4, float p5) { invoke<Void>(0x026F0A20, ped, x, y, z, p4, p5); } // 0xCF1501CBC4059412 b1207
	static void TASK_LASSO_PED(Ped ped, Ped targetPed) { invoke<Void>(0x026F0C20, ped, targetPed); } // 0xC716EB2BD16370A3 b1207
	static void TASK_HOGTIEABLE(Ped ped) { invoke<Void>(0x026F0C30, ped); } // 0x6AFD8FE0D723328F b1207
	static void UNHOGTIE_PED(Ped ped, int flags, Hash getupSetHash, const char* p3, const char* p4, float p5) { invoke<Void>(0x026F0DC0, ped, flags, getupSetHash, p3, p4, p5); } // 0x79559BAD83CCD038 b1207
	static void _0x722D6A49200174FE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x026F0EA0, p0, p1, p2, p3, p4); } // 0x722D6A49200174FE b1207
	static void _MAKE_OBJECT_CARRIABLE(Object object) { invoke<Void>(0x026F0F80, object); } // 0x78B4567E18B54480 b1207
	static void MAKE_OBJECT_NOT_CARRIABLE(Object object) { invoke<Void>(0x026F1020, object); } // 0x67BFCED22909834D b1207
	static void _0x8E1DDE26D270CC5E(Any p0, Any p1) { invoke<Void>(0x026F1030, p0, p1); } // 0x8E1DDE26D270CC5E b1207
	static void _0xA6A76D666A281F2D(Any p0, Any p1) { invoke<Void>(0x026F12E0, p0, p1); } // 0xA6A76D666A281F2D b1207
	static void _0xA21AA2F0C2180125(Any p0, Any p1) { invoke<Void>(0x026F1580, p0, p1); } // 0xA21AA2F0C2180125 b1207
	static Any _0xE47DD64B9F02677D(Any p0) { return invoke<Any>(0x026F1810, p0); } // 0xE47DD64B9F02677D b1207
	static void _0xFF745B0346E19E2C(Any p0) { invoke<Void>(0x026F1890, p0); } // 0xFF745B0346E19E2C b1207
	static Any _0xB8F52A3F84A7CC59(Any p0) { return invoke<Any>(0x026F1980, p0); } // 0xB8F52A3F84A7CC59 b1207
	static void _0x6AFDA2264925BD11(Any p0) { invoke<Void>(0x026F1B70, p0); } // 0x6AFDA2264925BD11 b1207
	static void _0x816A3ACD265E2297(Any p0, Any p1) { invoke<Void>(0x026F1BE0, p0, p1); } // 0x816A3ACD265E2297 b1207
	static void _0x4E806A395D43A458(Any p0) { invoke<Void>(0x026F1DC0, p0); } // 0x4E806A395D43A458 b1207
	static void SET_TEAM_CARRIABLE_ENTITY(Any p0, Any p1, Any p2) { invoke<Void>(0x026F1DF0, p0, p1, p2); } // 0x545BF19F86E80F11 b1207
	static BOOL IS_TEAM_CARRIABLE_ENTITY(Any p0, Any p1) { return invoke<BOOL>(0x026F1FB0, p0, p1); } // 0x559A6F8C5133B4EE b1207
	static BOOL _0x11CD066F54DA0133(Object hatObject) { return invoke<BOOL>(0x026F2080, hatObject); } // 0x11CD066F54DA0133 b1207
	static void _0x9ADDBB9242179D56(Object object, Ped ped) { invoke<Void>(0x026F21C0, object, ped); } // 0x9ADDBB9242179D56 b1207
	static BOOL _0x4ECCC2815CA79AE2(Object hatObject) { return invoke<BOOL>(0x026F21D0, hatObject); } // 0x4ECCC2815CA79AE2 b1207
	static void _0xAA0AF6025160243A(Object hatObject, Ped ped) { invoke<Void>(0x026F22C0, hatObject, ped); } // 0xAA0AF6025160243A b1207
	static Any _0x7CB99FADDE73CD1B(Any p0) { return invoke<Any>(0x026F22D0, p0); } // 0x7CB99FADDE73CD1B b1311
	static void _0xF3C3503276F4A034(Entity entity, Any p1) { invoke<Void>(0x026F23D0, entity, p1); } // 0xF3C3503276F4A034 b1436
	static Any _0x6DAC799857EF3F11(Any p0, Any p1) { return invoke<Any>(0x026F24B0, p0, p1); } // 0x6DAC799857EF3F11 b1311
	static Any _0x920684BE432875B1(Any p0) { return invoke<Any>(0x026F24E0, p0); } // 0x920684BE432875B1 b1311
	static BOOL SET_ENHANCED_BREAK_FREE(Ped ped, BOOL p1, const char* p2) { return invoke<BOOL>(0x026F25D0, ped, p1, p2); } // 0x1BF9D36A5EAFFBAE b1207
	static Any _0x6AFD84AEAA3EA538(Any p0) { return invoke<Any>(0x026F2610, p0); } // 0x6AFD84AEAA3EA538 b1207
	static void _0xBD1C3C0F271C39D3(Any p0, Any p1) { invoke<Void>(0x026F2640, p0, p1); } // 0xBD1C3C0F271C39D3 b1207
	static void _0x1ECF56C040FD839C(Any p0, Any p1) { invoke<Void>(0x026F2650, p0, p1); } // 0x1ECF56C040FD839C b1207
	static void _0xF40A109B4B79A848(Any p0, Any p1, Any p2) { invoke<Void>(0x026F2660, p0, p1, p2); } // 0xF40A109B4B79A848 b1207
	static BOOL _IS_PED_LEADING_HORSE(Ped ped) { return invoke<BOOL>(0x026F27A0, ped); } // 0xEFC4303DDC6E60D3 b1207
	static Any _0xAC5045AB7F1A34FD(Any p0) { return invoke<Any>(0x026F28B0, p0); } // 0xAC5045AB7F1A34FD b1207
	static Ped _GET_LED_HORSE_FROM_PED(Ped ped) { return invoke<Ped>(0x026F29A0, ped); } // 0xED1F514AF4732258 b1207
	static void TASK_TURN_TO_FACE_CLOSEST_PED(Ped ped, float p1, float p2, int p3) { invoke<Void>(0x026F29C0, ped, p1, p2, p3); } // 0x84179419DBDD36F2 b1207
	static BOOL TASK_CONFRONT(Ped ped, Ped targetPed, int p2) { return invoke<BOOL>(0x026F2AC0, ped, targetPed, p2); } // 0x3A2A2071DF5CC569 b1207
	static BOOL TASK_POLICE(Ped ped, BOOL p1) { return invoke<BOOL>(0x026F2AF0, ped, p1); } // 0x87BE56724650408E b1207
	static BOOL TASK_MELEE(Ped ped, Ped targetPed, Hash p2, Any p3, Any p4, float p5, Any p6, float p7) { return invoke<BOOL>(0x026F2B20, ped, targetPed, p2, p3, p4, p5, p6, p7); } // 0x482C99D0B38D1B0A b1207
	static BOOL TASK_GRAPPLE(Ped ped, Ped targetPed, Hash grappleStyle, int p3, float p4, int p5, int p6) { return invoke<BOOL>(0x026F2BD0, ped, targetPed, grappleStyle, p3, p4, p5, p6); } // 0x779A2FFACEFAEA7B b1207
	static BOOL _TASK_INTIMIDATED(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<BOOL>(0x026F2C20, p0, p1, p2, p3, p4); } // 0x648B75D44930D6BD b1207
	static BOOL _TASK_INTIMIDATED_2(Ped ped0, Ped ped1, int p2, BOOL p3, BOOL p4, BOOL p5, BOOL p6, BOOL p7, int p8) { return invoke<BOOL>(0x026F2C60, ped0, ped1, p2, p3, p4, p5, p6, p7, p8); } // 0x933ACC1A1771A288 b1207
	static void _0x2948235DB2058E99(Any p0, Any p1) { invoke<Void>(0x026F2CD0, p0, p1); } // 0x2948235DB2058E99 b1207
	static void _0xB2F47A1AFDFCC595(Any p0, Any p1) { invoke<Void>(0x026F2EA0, p0, p1); } // 0xB2F47A1AFDFCC595 b1207
	static void _0x41D1331AFAD5A091(Any p0, Any p1, Any p2) { invoke<Void>(0x026F3070, p0, p1, p2); } // 0x41D1331AFAD5A091 b1207
	static void _0x801BD27403F3CBA0(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x026F3190, p0, p1, p2, p3); } // 0x801BD27403F3CBA0 b1207
	static void _0x0FE797DD9F70DFA6(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x026F3400, p0, p1, p2, p3); } // 0x0FE797DD9F70DFA6 b1207
	static void TASK_PERSISTENT_CHARACTER(Ped ped) { invoke<Void>(0x026F3680, ped); } // 0x4391700CBD89C3D8 b1207
	static void _0xFC7F71CF49F70B6B(Any p0) { invoke<Void>(0x026F3690, p0); } // 0xFC7F71CF49F70B6B b1207
	static void _0xE01F55B2896F6B37(Any p0, Any p1) { invoke<Void>(0x026F3740, p0, p1); } // 0xE01F55B2896F6B37 b1207
	static Any _0xE62754D09354F6CF(Any p0) { return invoke<Any>(0x026F3760, p0); } // 0xE62754D09354F6CF b1207
	static void _0x4BA972D0E5AD8122(Any p0, Any p1) { invoke<Void>(0x026F3850, p0, p1); } // 0x4BA972D0E5AD8122 b1207
	static BOOL _GET_TASK_FISHING(Ped ped, Any* p1) { return invoke<BOOL>(0x026F3860, ped, p1); } // 0xF3735ACD11ACD500 b1207
	static BOOL _SET_TASK_FISHING(Ped ped, Any* p1) { return invoke<BOOL>(0xDEADBEEF, ped, p1); } // 0xF3735ACD11ACD501 b1207
	static void TASK_SWAP_FISHING_BAIT(Ped ped, const char* bait, BOOL withoutBuoy) { invoke<Void>(0x026F38C0, ped, bait, withoutBuoy); } // 0x2C28AC30A72722DA b1207
	static void _SET_FISHING_BAIT(Ped ped, const char* bait, BOOL withoutBuoy, BOOL instantly) { invoke<Void>(0x026F38E0, ped, bait, withoutBuoy, instantly); } // 0x9B0C7FA063E67629 b1207
	static void _0x1F298C7BD30D1240(Ped ped) { invoke<Void>(0x026F3900, ped); } // 0x1F298C7BD30D1240 b1207
	static void _PED_FISHINGROD_HOOK_ENTITY(Ped ped, Entity entity) { invoke<Void>(0x026F3910, ped, entity); } // 0x1A52076D26E09004 b1207
	static void _0xCE71C2F9BAA3F975(Ped ped, Entity entity) { invoke<Void>(0x026F3920, ped, entity); } // 0xCE71C2F9BAA3F975 b1207
	static BOOL _0xB520DBDA7FCF573F(Ped ped) { return invoke<BOOL>(0x026F3930, ped); } // 0xB520DBDA7FCF573F b1207
	static void _0x31BB338F64D5C861(Ped ped, BOOL p1) { invoke<Void>(0x026F3960, ped, p1); } // 0x31BB338F64D5C861 b1207
	static void _0x517D01BF27B682D1(Ped ped, Entity entity, float p2, float p3, float p4, float p5, int p6) { invoke<Void>(0x026F3A80, ped, entity, p2, p3, p4, p5, p6); } // 0x517D01BF27B682D1 b1207
	static void _0x88FD60D846D9CD63(Ped ped) { invoke<Void>(0x026F3AA0, ped); } // 0x88FD60D846D9CD63 b1207
	static void _0x9050DF2C53801208(Ped ped, float p1) { invoke<Void>(0x026F3AB0, ped, p1); } // 0x9050DF2C53801208 b1207
	static void _0x22CDBF317C40A122(Ped ped) { invoke<Void>(0x026F3BA0, ped); } // 0x22CDBF317C40A122 b1207
	static Any _0x5952DFA38FA529FE() { return invoke<Any>(0x026F3C80); } // 0x5952DFA38FA529FE b1232
	static void TASK_PLAY_EMOTE_WITH_HASH(Ped ped, int emoteType, int playbackMode, Hash emote, BOOL isSecondaryTask, BOOL canBreakOut, BOOL disableEarlyOutAnimTag, BOOL ignoreInvalidMainTask, BOOL destroyProps) { invoke<Void>(0x026F3CA0, ped, emoteType, playbackMode, emote, isSecondaryTask, canBreakOut, disableEarlyOutAnimTag, ignoreInvalidMainTask, destroyProps); } // 0xB31A277C1AC7B7FF b1207
	static void _TASK_PLAY_EMOTE(Ped ped, int emoteType, int playbackMode, Hash emote, BOOL isSecondaryTask, BOOL canBreakOut, BOOL disableEarlyOutAnimTag, BOOL ignoreInvalidMainTask, BOOL destroyProps) { invoke<Void>(0x026F3E70, ped, emoteType, playbackMode, emote, isSecondaryTask, canBreakOut, disableEarlyOutAnimTag, ignoreInvalidMainTask, destroyProps); } // 0x884E3436CC1F41DD b1207
	static void _0x6A1AF481407BF6E9(Any p0) { invoke<Void>(0x026F3EE0, p0); } // 0x6A1AF481407BF6E9 b1207
	static void _TASK_EMOTE_OUTRO(Ped ped) { invoke<Void>(0x026F40A0, ped); } // 0xBDFEEB7600BCD938 b1207
	static void _0xEC516FE805D2CB2D(Any p0) { invoke<Void>(0x026F4260, p0); } // 0xEC516FE805D2CB2D b1207
	static void _0x59AEA4DC640814B9(Any p0, Any p1) { invoke<Void>(0x026F4420, p0, p1); } // 0x59AEA4DC640814B9 b1207
	static Any _0x11C7CE1AE38911B5(Any p0) { return invoke<Any>(0x026F4530, p0); } // 0x11C7CE1AE38911B5 b1207
	static Any _0xD0ABC4EA3B5E21A0(Any p0, Any p1) { return invoke<Any>(0x026F4620, p0, p1); } // 0xD0ABC4EA3B5E21A0 b1311
	static BOOL IS_EMOTE_TASK_RUNNING(Ped ped, Any p1) { return invoke<BOOL>(0x026F4650, ped, p1); } // 0xCF9B71C0AF824036 b1355
}

namespace TELEMETRY
{
	static void _0x9BEE018A63FFFAD9(Any p0) { invoke<Void>(0x02705910, p0); } // 0x9BEE018A63FFFAD9 b1207
	static void _0xEC0BD8736DCAF841(Any p0) { invoke<Void>(0x02705960, p0); } // 0xEC0BD8736DCAF841 b1207
	static void _TELEMETRY_MISSION_STARTED(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02705980, p0, p1, p2, p3); } // 0x15B0CC1B36F1DE29 b1207
	static void _TELEMETRY_MISSION_OVER(Any p0, Any p1) { invoke<Void>(0x02705AE0, p0, p1); } // 0xD894437E12C17AEC b1207
	static void _TELEMETRY_MISSION_CHECKPOINT(Any p0, Any p1, Any p2) { invoke<Void>(0x02705AF0, p0, p1, p2); } // 0x8EC7890D446BD9C1 b1207
	static void _TELEMETRY_PLAYER_SPAWNED(Ped ped) { invoke<Void>(0x02705B20, ped); } // 0x5DA4718DF897EB25 b1207
	static BOOL _TELEMETRY_CREATE_UUID(Any* uuid) { return invoke<BOOL>(0x02705BD0, uuid); } // 0xE692D336F8A2A97F b1207
	static void _TELEMETRY_MATCH_QUEUE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x02705C40, p0, p1, p2, p3, p4, p5, p6); } // 0x4C08D2B6D8BE17E4 b1311
	static void _0xF620F47B4F4A78C4(Any p0, Any p1) { invoke<Void>(0x02705D90, p0, p1); } // 0xF620F47B4F4A78C4 b1207
	static void _TELEMETRY_MATCH_OVER(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x02705DA0, p0, p1, p2, p3, p4); } // 0xA2058154357726BB b1207
	static void _0xEF3C68F56BAD7B69(Any p0, Any p1) { invoke<Void>(0x02705DD0, p0, p1); } // 0xEF3C68F56BAD7B69 b1207
	static void _0xECD67E9FA677CCCF(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02705EA0, p0, p1, p2, p3); } // 0xECD67E9FA677CCCF b1207
	static void _TELEMETRY_GAME_PROGRESS(Any p0, Any p1) { invoke<Void>(0x02705EC0, p0, p1); } // 0x51EC204A6E5B5A1A b1207
	static void _TELEMETRY_HERB_PICKED(Hash herbType) { invoke<Void>(0x027060C0, herbType); } // 0xAE693EC3A178F6C2 b1207
	static void _TELEMETRY_ANIMAL_SKINNED(Hash type, Any* items) { invoke<Void>(0x027060D0, type, items); } // 0x7581972ADF5D699A b1207
	static void _TELEMETRY_CAMP_CREATED(Any p0) { invoke<Void>(0x02706160, p0); } // 0x565EAA726B2CE3B7 b1207
	static void _TELEMETRY_CAMP_SUPPLIES(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x02706180, p0, p1, p2, p3, p4); } // 0x217F47761376E16E b1207
	static void _0xCD6F8A0335D821F9(Any p0) { invoke<Void>(0x02706200, p0); } // 0xCD6F8A0335D821F9 b1207
	static void _0x775B2ED944E44973(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x02706320, p0, p1, p2, p3, p4, p5); } // 0x775B2ED944E44973 b1207
	static void _TELEMETRY_SHOP_EXIT(Any p0, Any p1) { invoke<Void>(0x027064C0, p0, p1); } // 0xF78E669FDC202E73 b1207
	static void _0xCA9E42F437625A85(Any p0, Any p1, Any p2) { invoke<Void>(0x02706670, p0, p1, p2); } // 0xCA9E42F437625A85 b1232
	static void _TELEMETRY_SHOP_PURCHASE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x02706690, p0, p1, p2, p3, p4); } // 0x2A374E6F0075EE81 b1207
	static void _TELEMETRY_SHOP_SELL(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x02706800, p0, p1, p2, p3, p4); } // 0x9BD8A9D0A774A6F8 b1207
	static void _TELEMETRY_GOLD_STORE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02706970, p0, p1, p2, p3); } // 0x536B6025E94AC48F b1207
	static void _0x32D5898C4898CD95() { invoke<Void>(0x027069B0); } // 0x32D5898C4898CD95 b1207
	static void _TELEMETRY_SHOP_CUTSCENE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x027069E0, p0, p1, p2, p3); } // 0xB0B19B56697836F5 b1311
	static void _0x3145044F3990D321(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x02706A70, p0, p1, p2, p3, p4, p5, p6); } // 0x3145044F3990D321 b1207
	static void _0xF5EAD898EF387E73(Any p0) { invoke<Void>(0x02706C20, p0); } // 0xF5EAD898EF387E73 b1207
	static void _TELEMETRY_HONOR(Any p0, Any p1) { invoke<Void>(0x02706D50, p0, p1); } // 0xE6B763C7F4902201 b1207
	static void _TELEMETRY_CRAFT_ITEM(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02706D60, p0, p1, p2, p3); } // 0x78C2E029DB205A3A b1207
	static void TELEMETRY_CAMP_DONATE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0x02706D80, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xDF516E598D966D06 b1207
	static void _TELEMETRY_MOONSHINE_BREW(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoke<Void>(0x02706DD0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0xB5013EFBB5516867 b1232
	static void _TELEMETRY_COLLECT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x02706F70, p0, p1, p2, p3, p4, p5, p6); } // 0xD6CB05DDAEE43AFD b1207
	static void _TELEMETRY_MISSION_ILO_OPTION(Any p0, Any p1) { invoke<Void>(0x02706FC0, p0, p1); } // 0xEA323F5E1A4DA2F1 b1207
	static void _0x6571E4327390EC0B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x02707040, p0, p1, p2, p3, p4, p5); } // 0x6571E4327390EC0B b1207
	static void _TELEMETRY_GANG_SHARES(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x027070D0, p0, p1, p2, p3); } // 0xE6DC9B21AC7A8729 b1207
	static void _TELEMETRY_FAST_TRAVEL(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x02707150, p0, p1, p2, p3, p4); } // 0x7CEF4AC79F7E7FAD b1207
	static void _TELEMETRY_NET_CAMP(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x02707290, p0, p1, p2, p3, p4, p5, p6); } // 0xA72773C3134F9A57 b1207
	static void _0x7E002A36AEFCFB55() { invoke<Void>(0x02707340); } // 0x7E002A36AEFCFB55 b1207
	static void _0xF9F14080D80937BD(Any p0) { invoke<Void>(0x02707450, p0); } // 0xF9F14080D80937BD b1207
	static void _TELEMETRY_PARLEY_FEUD(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x02707560, p0, p1, p2, p3, p4); } // 0xF37A2149BC9A8A27 b1207
	static void TELEMETRY_PLAYER_MENU_PIN(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02707690, p0, p1, p2, p3); } // 0x076C5843371EB889 b1311
	static void _TELEMETRY_NOTORIETY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02707700, p0, p1, p2, p3); } // 0xE26970A7AE0F28E9 b1207
	static void _TELEMETRY_DEFENSIVE(Any p0, Any p1, Any p2) { invoke<Void>(0x02707820, p0, p1, p2); } // 0xE57529D23541D2DD b1207
	static void _TELEMETRY_LOOT(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02707940, p0, p1, p2, p3); } // 0xCF63EF77B0DF0397 b1207
	static void _0x2C24AF8EEEEF8A55(Any p0, Any p1, Any p2) { invoke<Void>(0x02707AC0, p0, p1, p2); } // 0x2C24AF8EEEEF8A55 b1207
	static void _0x16B23D4F7A1F50D9(Any p0, Any p1, Any p2) { invoke<Void>(0x02707BE0, p0, p1, p2); } // 0x16B23D4F7A1F50D9 b1207
	static void _TELEMETRY_POKER_OVER(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0x02707D00, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x8127C5AA05C5A210 b1207
	static Any _0x80A02D9F948A8BCA(Any p0, Any p1) { return invoke<Any>(0x027080C0, p0, p1); } // 0x80A02D9F948A8BCA b1207
	static Any _0xF184B3ECE36219CF(Any p0, Any p1) { return invoke<Any>(0x02708190, p0, p1); } // 0xF184B3ECE36219CF b1207
	static void _TELEMETRY_ROLE_BOUNTY(Any p0) { invoke<Void>(0x02708240, p0); } // 0xAB43D1C80B5E9500 b1207
	static void _TELEMETRY_BOUNTY_TARGET(Any* data) { invoke<Void>(0x02708250, data); } // 0x52FA31DB8F3AD25D b1207
	static void _TELEMETRY_PRISON(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x02708260, p0, p1, p2, p3, p4, p5, p6); } // 0xB204BF9F30298D77 b1207
	static void _TELEMETRY_ROLE_TRADER(Any p0, Any p1) { invoke<Void>(0x027082A0, p0, p1); } // 0x476038B5A0734C10 b1207
	static void _TELEMETRY_ROLE_MOONSHINER(Any p0, Any p1) { invoke<Void>(0x027082B0, p0, p1); } // 0x99D40C5D74BC88E9 b1232
	static void _TELEMETRY_ROLE_COLLECTOR(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x027084D0, p0, p1, p2, p3, p4, p5, p6); } // 0x4AC38DFD286DAD14 b1207
	static void _TELEMETRY_PHOTO(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02708560, p0, p1, p2, p3); } // 0xED22BE4C5A399E63 b1207
	static void _0xF0D54E0651DD7E07() { invoke<Void>(0x027086A0); } // 0xF0D54E0651DD7E07 b1207
	static void _TELEMETRY_GUN_LOCKER() { invoke<Void>(0x027086C0); } // 0x415FE28ED44BFF14 b1207
	static void _0xC3ADF4880784FA9C(Any p0) { invoke<Void>(0x027086D0, p0); } // 0xC3ADF4880784FA9C b1207
	static void _0x317D9C9560529CC2(Any p0) { invoke<Void>(0x02708770, p0); } // 0x317D9C9560529CC2 b1207
	static void _TELEMETRY_ROLE_TOKEN_TRANSACTION(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x02708810, p0, p1, p2, p3, p4, p5); } // 0x32C2939564D74BFF b1207
	static void _TELEMETRY_COUPON(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x02708960, p0, p1, p2, p3, p4, p5); } // 0x621D719C4836292B b1232
	static void TELEMETRY_PERSONAL_VEHICLE_MOUNT(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02708AB0, p0, p1, p2, p3); } // 0xFF9052BC7A3B7D33 b1207
	static void _0xE67AF24C5A3B6058(Any p0, Any p1, Any p2) { invoke<Void>(0x02708B80, p0, p1, p2); } // 0xE67AF24C5A3B6058 b1207
	static void _TELEMETRY_MENU_NAVIGATION(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02708BA0, p0, p1, p2, p3); } // 0x3255D4D2082C6339 b1207
	static void _TELEMETRY_HUB_NAVIGATION(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02708C10, p0, p1, p2, p3); } // 0x25CC50EC1A6F3A96 b1232
	static void _0x37AA282163B0D2C4(Any p0, Any p1) { invoke<Void>(0x02708D30, p0, p1); } // 0x37AA282163B0D2C4 b1232
	static void _TELEMETRY_SAMPLE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x02708D90, p0, p1, p2, p3, p4); } // 0x61559675D23D8BD1 b1311
	static void _TELEMETRY_ROLE_NATURALIST(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0x02708DC0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x6FB9EA308F302922 b1311
	static void _TELEMETRY_PHOTO_CAM(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0x02709070, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x0777D65EE8A17517 b1311
	static void _TELEMETRY_INTRO_SKIP(Any p0, Any p1, Any p2) { invoke<Void>(0x027091C0, p0, p1, p2); } // 0x1B554723799245F4 b1355
	static void ANALYTICS_PLAYTIME_FREEMODE_START() { invoke<Void>(0x02709230); } // 0xE9F24081D84931B8 b1207
	static void ANALYTICS_PLAYTIME_FREEMODE_END() { invoke<Void>(0x02709260); } // 0x3180E991D4B8F248 b1207
	static void _TELEMETRY_CUSTOM(Any* args) { invoke<Void>(0x02709280, args); } // 0x40914CCF2A1AB531 b1207
	static void _0x330029E121380CEB(Any* args) { invoke<Void>(0x027093A0, args); } // 0x330029E121380CEB b1355
	static void _TELEMETRY_CHAR_CREATOR(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x02709440, p0, p1, p2, p3, p4, p5, p6); } // 0x7207AD471BC9278C b1355
}

namespace TXD
{
	static BOOL DOES_STREAMED_TXD_EXIST(Hash txdHash) { return invoke<BOOL>(0x0270ADE0, txdHash); } // 0xBA0163B277C2D2D0 b1207
	static void REQUEST_STREAMED_TXD(Hash txdHash, BOOL p1) { invoke<Void>(0x0270AE90, txdHash, p1); } // 0xDB1BD07FB464584D b1207
	static BOOL HAS_STREAMED_TXD_LOADED(Hash txdHash) { return invoke<BOOL>(0x0270B050, txdHash); } // 0xBE72591D1509FFE4 b1207
	static void SET_STREAMED_TXD_AS_NO_LONGER_NEEDED(Hash txdHash) { invoke<Void>(0x0270B130, txdHash); } // 0x8232F37DF762ACB2 b1207
	static BOOL DOES_STREAMED_TEXTURE_DICT_EXIST(const char* textureDict) { return invoke<BOOL>(0x0270B200, textureDict); } // 0x7332461FC59EB7EC b1207
	static void REQUEST_STREAMED_TEXTURE_DICT(const char* textureDict, BOOL p1) { invoke<Void>(0x0270B340, textureDict, p1); } // 0xC1BA29DF5631B0F8 0x4C9B035F b1207
	static BOOL HAS_STREAMED_TEXTURE_DICT_LOADED(const char* textureDict) { return invoke<BOOL>(0x0270B590, textureDict); } // 0x54D6900929CCF162 0x3F436EEF b1207
	static void SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(const char* textureDict) { invoke<Void>(0x0270B700, textureDict); } // 0x4ACA10A91F66F1E2 0xF07DDA38 b1207
}

namespace UIAPPS
{
	static BOOL IS_UIAPP_ACTIVE_BY_HASH(Hash appNameHash) { return invoke<BOOL>(0x0270E840, appNameHash); } // 0x25B7A0206BDFAC76 b1207
	static BOOL IS_ANY_UIAPP_ACTIVE() { return invoke<BOOL>(0x0270E960); } // 0xAC959AB99AAF3D9F b1207
	static BOOL IS_UIAPP_RUNNING_BY_HASH(Hash appNameHash) { return invoke<BOOL>(0x0270E9E0, appNameHash); } // 0x4E511D093A86AD49 b1207
	static BOOL IS_UIAPP_RUNNING(const char* appName) { return invoke<BOOL>(0x0270EB00, appName); } // 0xDE4A9B35D028979F b1232
	static BOOL IS_ANY_UIAPP_RUNNING() { return invoke<BOOL>(0x0270EC40); } // 0xDB30BEC7A7A5CBD3 b1207
	static Hash _GET_UIAPP_CURRENT_ACTIVITY_BY_HASH(Hash appNameHash) { return invoke<Hash>(0x0270ECE0, appNameHash); } // 0x96FD694FE5BE55DC b1207
	static void _CLOSE_UIAPP_BY_HASH(Hash appNameHash) { invoke<Void>(0x0270EE10, appNameHash); } // 0x2FF10C9C3F92277E b1207
	static void _CLOSE_UIAPP_BY_HASH_IMMEDIATE(Hash appNameHash) { invoke<Void>(0x0270EE70, appNameHash); } // 0x04428420A248A354 b1207
	static void _CLOSE_UIAPP(const char* appName) { invoke<Void>(0x0270EED0, appName); } // 0x818C6CA9B659E8EC b1207
	static void _CLOSE_UIAPP_IMMEDIATE(const char* appName) { invoke<Void>(0x0270EF50, appName); } // 0x3015635426D1B17C b1207
	static void _CLOSE_ALL_UIAPPS() { invoke<Void>(0x0270EFD0); } // 0xAD7B70F7230C5A12 b1207
	static void _CLOSE_ALL_UIAPPS_IMMEDIATE() { invoke<Void>(0x0270EFF0); } // 0x12769EEB8DBD7A7B b1207
	static int LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(Hash appNameHash, Hash entryHash) { return invoke<int>(0x0270F010, appNameHash, entryHash); } // 0xC1BCF31E975B3195 b1207
	static int LAUNCH_UIAPP_BY_HASH(Hash appNameHash) { return invoke<int>(0x0270F080, appNameHash); } // 0xC8FC7F4E4CF4F581 b1207
	static int LAUNCH_UIAPP_WITH_ENTRY(const char* appName, const char* entry) { return invoke<int>(0x0270F0F0, appName, entry); } // 0x7B2027BAC5C8EC89 b1207
	static BOOL CAN_LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(Hash appNameHash, Hash entryHash) { return invoke<BOOL>(0x0270F190, appNameHash, entryHash); } // 0x16F47D434B6086BF b1207
	static BOOL CAN_LAUNCH_UIAPP_BY_HASH(Hash appNameHash) { return invoke<BOOL>(0x0270F200, appNameHash); } // 0xE555EC27D65EDE80 b1207
	static BOOL REQUEST_UIAPP_TRANSITION_BY_HASH(Hash appNameHash, Hash transitionHash) { return invoke<BOOL>(0x0270F270, appNameHash, transitionHash); } // 0x7689CD255655BFD7 b1207
	static BOOL IS_UIAPP_TRANSITIONING_BY_HASH(Hash appNameHash) { return invoke<BOOL>(0x0270F3D0, appNameHash); } // 0x42095B886D30DE66 b1232
}

namespace UIDEBUG
{
	static void _BG_DISPLAY_TEXT(const char* text, float x, float y) { invoke<Void>(0x0270FB90, text, x, y); } // 0x16794E044C9EFB58 b1355
	static void _BG_SET_TEXT_SCALE(float scaleX, float scaleY) { invoke<Void>(0x0270FBB0, scaleX, scaleY); } // 0xA1253A3C870B6843 b1355
	static void _BG_SET_TEXT_COLOR(int red, int green, int blue, int alpha) { invoke<Void>(0x0270FBD0, red, green, blue, alpha); } // 0x16FA5CE47F184F1E b1355
}

namespace UIEVENTS
{
	static BOOL EVENTS_UI_IS_PENDING(Hash hash) { return invoke<BOOL>(0x027105A0, hash); } // 0x67ED5A7963F2F722 b1207
	static BOOL EVENTS_UI_GET_MESSAGE(Hash hash, Any* eventData) { return invoke<BOOL>(0x02710600, hash, eventData); } // 0xE24E957294241444 b1207
	static BOOL EVENTS_UI_PEEK_MESSAGE(Hash hash, Any* eventData) { return invoke<BOOL>(0x02710690, hash, eventData); } // 0x90237103F27F7937 b1207
	static void EVENTS_UI_POP_MESSAGE(Hash hash) { invoke<Void>(0x02710710, hash); } // 0x8E8A2369F48EC839 b1207
}

namespace UIFEED
{
	static Any _UI_FEED_POST_HELP_TEXT(Any* p0, Any* p1, BOOL p2) { return invoke<Any>(0x02717E40, p0, p1, p2); } // 0x049D5C615BD38BAD b1207
	static int _UI_FEED_POST_LOCATION_SHARD(Any* duration, Any* data, BOOL p2, BOOL p3) { return invoke<int>(0x02717E70, duration, data, p2, p3); } // 0xD05590C1AB38F068 b1207
	static Any _UI_FEED_POST_OBJECTIVE(Any* p0, Any* p1, BOOL p2) { return invoke<Any>(0x02717EB0, p0, p1, p2); } // 0xCEDBF17EFCC0E4A4 b1207
	static Any _UI_FEED_POST_FEED_TICKER(Any* p0, Any* p1, BOOL p2) { return invoke<Any>(0x02717EE0, p0, p1, p2); } // 0xB2920B9760F0F36B b1207
	static Any _UI_FEED_POST_SAMPLE_TOAST(Any* p0, Any* p1, BOOL p2, BOOL p3) { return invoke<Any>(0x02717F20, p0, p1, p2, p3); } // 0x26E87218390E6729 b1207
	static Any _0xAFF5BE9BA496CE40(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x02717F60, p0, p1, p2, p3, p4); } // 0xAFF5BE9BA496CE40 b1207
	static Any _UI_FEED_POST_SAMPLE_TOAST_WITH_APP_LINK(Any* p0, Any* p1, BOOL p2, BOOL p3, BOOL p4) { return invoke<Any>(0x02717FA0, p0, p1, p2, p3, p4); } // 0x38838A646FB30AAE b1311
	static Any _UI_FEED_POST_SAMPLE_NOTIFICATION(Any* p0, Any* p1, int p2, int p3) { return invoke<Any>(0x02717FE0, p0, p1, p2, p3); } // 0xC927890AA64E9661 b1207
	static Any _0x3F9FDDBA79117C69(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x02718020, p0, p1, p2, p3); } // 0x3F9FDDBA79117C69 b1207
	static Any _0x18D6869FBFFEC0F8(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x02718060, p0, p1, p2, p3); } // 0x18D6869FBFFEC0F8 b1207
	static Any _UI_FEED_POST_SAMPLE_TOAST_RIGHT(Any* p0, Any* p1, BOOL p2) { return invoke<Any>(0x027180A0, p0, p1, p2); } // 0xB249EBCB30DD88E0 b1207
	static Any _UI_FEED_POST_MISSION_NAME(Any* p0, Any* p1, BOOL p2) { return invoke<Any>(0x027180D0, p0, p1, p2); } // 0x2024F4F333095FB1 b1207
	static Any _UI_FEED_POST_RETICLE_MESSAGE(Any* p0, Any* p1, BOOL p2) { return invoke<Any>(0x02718100, p0, p1, p2); } // 0x893128CDB4B81FBB b1207
	static Any _UI_FEED_POST_ONE_TEXT_SHARD(Any* p0, Any* p1, BOOL p2) { return invoke<Any>(0x02718130, p0, p1, p2); } // 0x860DDFE97CC94DF0 b1207
	static Any _UI_FEED_POST_TWO_TEXT_SHARD(Any* p0, Any* p1, BOOL p2, BOOL p3) { return invoke<Any>(0x02718170, p0, p1, p2, p3); } // 0xA6F4216AB10EB08E b1207
	static Any _UI_FEED_POST_THREE_TEXT_SHARD(Any* p0, Any* p1, BOOL p2, BOOL p3, BOOL p4) { return invoke<Any>(0x027181C0, p0, p1, p2, p3, p4); } // 0x02BCC0FE9EBA3529 b1207
	static Any _UI_FEED_POST_GAME_UPDATE_SHARD(Any* p0, Any* p1, BOOL p2) { return invoke<Any>(0x02718210, p0, p1, p2); } // 0x8D1249BD28791878 b1207
	static Any _UI_FEED_POST_VOICE_CHAT_FEED(Any* p0, Any* p1, BOOL p2) { return invoke<Any>(0x02718240, p0, p1, p2); } // 0xC48152BC6B3E821C b1207
	static void UI_FEED_CLEAR_CHANNEL(Any p0, Any p1, Any p2) { invoke<Void>(0x02718270, p0, p1, p2); } // 0xDD1232B332CBB9E7 b1207
	static void _UI_FEED_CLEAR_ALL_CHANNELS() { invoke<Void>(0x027182D0); } // 0x6035E8FBCA32AC5E b1207
	static void _0x2F901291EF177B02(Any p0, Any p1) { invoke<Void>(0x02718390, p0, p1); } // 0x2F901291EF177B02 b1207
	static void _0x6D85126F6CCF02C9(Any p0, Any p1, Any p2) { invoke<Void>(0x02718400, p0, p1, p2); } // 0x6D85126F6CCF02C9 b1207
	static Any _0x4E88A65968A55C78(Any p0, Any p1) { return invoke<Any>(0x02718420, p0, p1); } // 0x4E88A65968A55C78 b1207
	static Any _0x0FD07141AD048AAE(Any p0, Any p1) { return invoke<Any>(0x02718550, p0, p1); } // 0x0FD07141AD048AAE b1207
	static Any _0x59FA676177DBE4C9(Any p0) { return invoke<Any>(0x02718580, p0); } // 0x59FA676177DBE4C9 b1207
	static int UI_FEED_GET_CURRENT_MESSAGE(int p0) { return invoke<int>(0x02718690, p0); } // 0xC17F69E1418CD11F b1207
	static BOOL _0xB7223B91CD6B7E07(int p0) { return invoke<BOOL>(0x02718720, p0); } // 0xB7223B91CD6B7E07 b1207
}

namespace UILOG
{
	static BOOL _UILOG_IS_ENTRY_REGISTERED(int p0, Hash p1) { return invoke<BOOL>(0x0271D280, p0, p1); } // 0xB8188CCF52202475 b1207
	static void _UILOG_ADD_ENTRY_HASH(int p0, int p1, float x, float y, float z, Hash p5, Hash p6, Any p7) { invoke<Void>(0x0271D2B0, p0, p1, x, y, z, p5, p6, p7); } // 0x69D5479982355D8F b1207
	static void _0x49C63FDF69744A27(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x0271D420, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x49C63FDF69744A27 b1207
	static void _UILOG_SET_ENTRY_ICON_TEXTURE(int p0, Hash p1, Hash icon, Hash iconDictionary) { invoke<Void>(0x0271D5D0, p0, p1, icon, iconDictionary); } // 0x6965469934958D8F b1207
	static void _UILOG_SET_ENTRY_BRIEF_TEXTURE(int p0, Hash p1, Hash texture, Hash textureDictionary) { invoke<Void>(0x0271D5F0, p0, p1, texture, textureDictionary); } // 0x69684D9936958D8F b1207
	static void _UILOG_UPDATE_ENTRY_SUBHEADER(int p0, Hash p1, const char* p2) { invoke<Void>(0x0271D610, p0, p1, p2); } // 0x80D6524190258C3E b1207
	static void _UILOG_SET_ENTRY_PINNED(int p0, Hash p1, BOOL p2) { invoke<Void>(0x0271D630, p0, p1, p2); } // 0x72A5CD214B342568 b1207
	static void _UILOG_MARK_MISSION_COMPLETED(Hash p0) { invoke<Void>(0x0271D6A0, p0); } // 0xDE31D66D1E54C471 b1207
	static void _UILOG_MARK_ENTRY_AVAILABILITY(int p0, Hash p1, int p2, const char* p3) { invoke<Void>(0x0271D6C0, p0, p1, p2, p3); } // 0x13E8D7DD08543482 b1207
	static void _UILOG_MARK_ALL_ENTRIES_AVAILABILITY(int p0, const char* p1) { invoke<Void>(0x0271D6E0, p0, p1); } // 0x3920574CF0A2B7B6 b1207
	static void _UILOG_REMOVE_ENTRY(int p0, Hash p1) { invoke<Void>(0x0271D790, p0, p1); } // 0xD594A19BE09A75C6 b1207
	static void _0xA31013798FADCADC(Any p0, Any p1, Any p2) { invoke<Void>(0x0271D810, p0, p1, p2); } // 0xA31013798FADCADC b1207
	static void _0xA49D6D503E3EA847(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x0271D830, p0, p1, p2, p3, p4); } // 0xA49D6D503E3EA847 b1207
	static void _0x763637F9B838B0A7(Any p0, Any p1, Any p2) { invoke<Void>(0x0271D9A0, p0, p1, p2); } // 0x763637F9B838B0A7 b1207
	static void _UILOG_CLEAR_ALL_ENTRIES() { invoke<Void>(0x0271DA00); } // 0xB95B4EA6B1EDF035 b1207
	static void _UILOG_ADD_OR_UPDATE_OBJECTIVE(int p0, Hash p1, Hash p2, const char* p3, BOOL p4, BOOL p5, BOOL p6) { invoke<Void>(0x0271DA40, p0, p1, p2, p3, p4, p5, p6); } // 0xB43163388484CC87 b1207
	static void _0xA20398536B7F1134(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x0271DA90, p0, p1, p2, p3, p4, p5); } // 0xA20398536B7F1134 b1207
	static void _UILOG_SET_CACHED_OBJECTIVE(const char* p0) { invoke<Void>(0x0271DB30, p0); } // 0xFA233F8FE190514C b1207
	static void _UILOG_CLEAR_CACHED_OBJECTIVE() { invoke<Void>(0x0271DB50); } // 0xDFF0D417277B41F8 b1207
	static BOOL _UILOG_HAS_DISPLAYED_CACHED_OBJECTIVE() { return invoke<BOOL>(0x0271DBB0); } // 0xCC48FFBB45B54F71 b1207
	static void _UILOG_CLEAR_HAS_DISPLAYED_CACHED_OBJECTIVE() { invoke<Void>(0x0271DBD0); } // 0xA3108D6981A5CADB b1207
	static void _UILOG_SET_HAS_DISPLAYED_CACHED_OBJECTIVE() { invoke<Void>(0xDEADBEEF); } // 0xA3108D6981A5CADC b1207
	static const char* _UILOG_GET_CACHED_OBJECTIVE() { return invoke<const char*>(0x0271DBF0); } // 0x15A4461BEB788096 b1207
	static void _UILOG_PRINT_CACHED_OBJECTIVE() { invoke<Void>(0x0271DC20); } // 0xE9990552DEC71600 b1207
	static Any _UILOG_SET_PENDING_DETAILS_ID(int p0, Hash p1) { return invoke<Any>(0x0271DC30, p0, p1); } // 0x136A027CF37B0A4F b1207
	static Any _0x2A4765812202E671() { return invoke<Any>(0x0271DC60); } // 0x2A4765812202E671 b1207
	static void _UILOG_ADD_TOTAL_TAKE_ENTRY(Hash p0, Hash p1, const char* p2, const char* p3, Hash p4) { invoke<Void>(0x0271DCB0, p0, p1, p2, p3, p4); } // 0x60C59968E8E87E6B b1207
	static void _UILOG_SET_TOTAL_TAKE_SUMMARY(const char* p0, const char* p1) { invoke<Void>(0x0271DD20, p0, p1); } // 0xD106B211EF1B8F04 b1207
	static int _UILOG_POST_NOTIFICATION(Any* data) { return invoke<int>(0x0271DD70, data); } // 0x49E58FE6EF40B987 b1207
	static void _0xDA0A30153FCC0FFD() { invoke<Void>(0x0271DDA0); } // 0xDA0A30153FCC0FFD b1207
}

namespace UIPINNING
{
	static const char* _0x3138582E0A13BFAB(Hash hash) { return invoke<const char*>(0x0271E0E0, hash); } // 0x3138582E0A13BFAB b1207
}

namespace UITUTORIAL
{
	static BOOL _UITUTORIAL_GET_IS_THREAT_INDICATOR_CAPABLE_RADAR_SHOWN() { return invoke<BOOL>(0x0271E930); } // 0x2CC24A2A7A1489C4 b1207
	static BOOL _UITUTORIAL_GET_IS_THREAT_INDICATOR_ON() { return invoke<BOOL>(0x0271E9D0); } // 0xFC2E0A5E9ED4E1B4 b1207
	static void _UITUTORIAL_SET_RPG_ICON_VISIBILITY(int rpgIcon, int visibility) { invoke<Void>(0x0271E9F0, rpgIcon, visibility); } // 0xC116E6DF68DCE667 b1207
}

namespace UISTATEMACHINE
{
	static Any _UIFLOWBLOCK_REQUEST(Any p0) { return invoke<Any>(0x0273A2B0, p0); } // 0xC0081B34E395CE48 b1207
	static void _UIFLOWBLOCK_RELEASE(Any p0) { invoke<Void>(0x0273A2D0, p0); } // 0xF320A77DD5F781DF b1207
	static Any _UIFLOWBLOCK_IS_LOADED(Any p0) { return invoke<Any>(0x0273A2E0, p0); } // 0x10A93C057B6BD944 b1207
	static Any _UIFLOWBLOCK_ENTER(Any p0, Any p1) { return invoke<Any>(0x0273A440, p0, p1); } // 0x3B7519720C9DCB45 b1207
	static Any UI_STATE_MACHINE_EXISTS(Any p0) { return invoke<Any>(0x0273A470, p0); } // 0x5D15569C0FEBF757 b1207
	static Any UI_STATE_MACHINE_CREATE(Any p0, Any p1) { return invoke<Any>(0x0273A530, p0, p1); } // 0x4C6F2C4B7A03A266 b1207
	static Any UI_STATE_MACHINE_CAN_REQUEST_TRANSITION(Any p0) { return invoke<Any>(0x0273A560, p0); } // 0xF7C180F57F85D0B8 b1207
	static Any UI_STATE_MACHINE_REQUEST_TRANSITION(Any p0, Any p1) { return invoke<Any>(0x0273A670, p0, p1); } // 0x7EA9C3547E80350E b1207
	static void UI_STATE_MACHINE_REQUEST_EXIT(Any p0, Any p1) { invoke<Void>(0x0273A750, p0, p1); } // 0x6B9FE4F0BA521A19 b1207
	static Any _0x11E73195E735B25B(Any p0) { return invoke<Any>(0x0273A830, p0); } // 0x11E73195E735B25B b1207
	static void UI_STATE_MACHINE_DESTROY(Any p0) { invoke<Void>(0x0273A940, p0); } // 0x4EB122210A90E2D8 b1207
	static void UI_STATE_MACHINE_DESTROY_AND_CLEAR(Any* p0) { invoke<Void>(0x0273A970, p0); } // 0x2738D68D2B4E09E7 b1207
}

namespace UISTICKYFEED
{
	static int _UI_STICKY_FEED_CREATE_ERROR_MESSAGE(Any* p0, Any* p1, BOOL p2) { return invoke<int>(0x0273CF80, p0, p1, p2); } // 0x9F2CC2439A04E7BA b1207
	static int _UI_STICKY_FEED_CREATE_DEATH_FAIL_MESSAGE(Any* p0, Any* p1, BOOL p2) { return invoke<int>(0x0273CFB0, p0, p1, p2); } // 0x815C4065AE6E6071 b1207
	static int _UI_STICKY_FEED_CREATE_WARNING_MESSAGE(Any* p0, Any* p1, BOOL p2) { return invoke<int>(0x0273CFE0, p0, p1, p2); } // 0x339E16B41780FC35 b1207
	static void _UI_STICKY_FEED_UPDATE_MESSAGE(int msgId, Any* p1, BOOL p2) { invoke<Void>(0x0273D010, msgId, p1, p2); } // 0xBC6F454E310124DA b1207
	static void _UI_STICKY_FEED_CLEAR_MESSAGE(int msgId) { invoke<Void>(0x0273D030, msgId); } // 0x00A15B94CBA4F76F b1207
	static BOOL _UI_STICKY_FEED_IS_CHANNEL_ACTIVE(int p0) { return invoke<BOOL>(0x0273D090, p0); } // 0xC5C395C60B542A3C b1207
	static BOOL _UI_STICKY_FEED_IS_ALERT_SCREEN_ACTIVE() { return invoke<BOOL>(0x0273D0C0); } // 0xF8806EC3FF840FDC b1207
	static int _UI_STICKY_FEED_GET_MESSAGE_STATE(int msgId) { return invoke<int>(0x0273D0F0, msgId); } // 0x07954320D77F6A3D b1207
}

namespace UNLOCK
{
	static BOOL _UNLOCK_IS_UNLOCK_FLAG_SET(Hash unlockHash, int flag) { return invoke<BOOL>(0x0273E940, unlockHash, flag); } // 0x6B6369647F26F09F b1207
	static BOOL UNLOCK_IS_UNLOCKED(Hash unlockHash) { return invoke<BOOL>(0x0273EA10, unlockHash); } // 0xC4B660C7B6040E75 b1207
	static void UNLOCK_SET_UNLOCKED(Hash unlockHash, BOOL toggle) { invoke<Void>(0x0273EAD0, unlockHash, toggle); } // 0x1B7C5ADA8A6910A0 b1207
	static BOOL UNLOCK_IS_VISIBLE(Hash unlockHash) { return invoke<BOOL>(0x0273EBC0, unlockHash); } // 0x8588A14B75AF096B b1207
	static void UNLOCK_SET_VISIBLE(Hash unlockHash, BOOL toggle) { invoke<Void>(0x0273EC80, unlockHash, toggle); } // 0x46B901A8ECDB5A61 b1207
	static BOOL _UNLOCK_IS_NEW(Hash unlockHash) { return invoke<BOOL>(0x0273ED30, unlockHash); } // 0x644166BA7AA49DEA b1207
	static void _UNLOCK_SET_NEW(Hash unlockHash, BOOL toggle) { invoke<Void>(0x0273EDF0, unlockHash, toggle); } // 0xA6D79C7AEF870A99 b1207
	static BOOL _UNLOCK_IS_LOOTABLE(Hash unlockHash) { return invoke<BOOL>(0x0273EE90, unlockHash); } // 0x66BF197E066050DE b1207
	static void _0x7C1C2062CFAD06FE(Hash unlockHash, Any* data) { invoke<Void>(0x0273EF50, unlockHash, data); } // 0x7C1C2062CFAD06FE b1207
}

namespace VEHICLE
{
	static void _0x6355602C02EDC6DF(Entity entity, Any p1) { invoke<Void>(0x02789070, entity, p1); } // 0x6355602C02EDC6DF b1207
	static void _0xCE1531927AD6C9F8(Vehicle vehicle, BOOL enabled) { invoke<Void>(0x02789170, vehicle, enabled); } // 0xCE1531927AD6C9F8 b1207
	static Vehicle CREATE_VEHICLE(Hash modelHash, float x, float y, float z, float heading, BOOL isNetwork, BOOL bScriptHostVeh, BOOL p7, BOOL p8) { return invoke<Vehicle>(0x02789270, modelHash, x, y, z, heading, isNetwork, bScriptHostVeh, p7, p8); } // 0xAF35D0D2583051B0 0xDD75460A b1207
	static Vehicle _CREATE_DRAFT_VEHICLE(Hash modelHash, float x, float y, float z, float heading, BOOL isNetwork, BOOL bScriptHostVeh, BOOL p7, int numHorses, BOOL p9) { return invoke<Vehicle>(0x027892D0, modelHash, x, y, z, heading, isNetwork, bScriptHostVeh, p7, numHorses, p9); } // 0x214651FB1DFEBA89 b1207
	static void DELETE_VEHICLE(Vehicle* vehicle) { invoke<Void>(0x02789330, vehicle); } // 0xE20A909D8C4A70F8 0x9803AF60 b1207
	static void _0x35DC1877312FBA0F(Vehicle* vehicle) { invoke<Void>(0x02789340, vehicle); } // 0x35DC1877312FBA0F b1207
	static BOOL _IS_VEHICLE_FADING_OUT(Vehicle vehicle) { return invoke<BOOL>(0x02789350, vehicle); } // 0x5136B284B67B35C7 b1207
	static void _0x1240E8596A8308B9(Any p0, Any p1) { invoke<Void>(0x02789400, p0, p1); } // 0x1240E8596A8308B9 0xBB54ECCA b1207
	static void SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(Vehicle veh, BOOL toggle) { invoke<Void>(0x027894D0, veh, toggle); } // 0xECB9E9BC887E8060 0x8BAAC437 b1207
	static BOOL IS_VEHICLE_MODEL(Vehicle vehicle, Hash model) { return invoke<BOOL>(0x027895B0, vehicle, model); } // 0x0045A54EC7A22455 0x013B10B6 b1207
	static void _0x424FFCB9F0D2D4B5(Any p0, Any p1) { invoke<Void>(0x02789700, p0, p1); } // 0x424FFCB9F0D2D4B5 b1207
	static void SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, BOOL p7) { invoke<Void>(0x027897B0, x1, y1, z1, x2, y2, z2, p6, p7); } // 0xBBB134FB9D50C0CC 0xB4E0E69A b1207
	static void SET_ALL_VEHICLE_GENERATORS_ACTIVE() { invoke<Void>(0x027898E0); } // 0x3D596E6E88A02C24 0xAB1FDD76 b1207
	static BOOL SET_VEHICLE_ON_GROUND_PROPERLY(Vehicle vehicle, BOOL p1) { return invoke<BOOL>(0x02789990, vehicle, p1); } // 0x7263332501E07F52 0xE14FDBA6 b1207
	static BOOL IS_VEHICLE_STOPPED(Vehicle vehicle) { return invoke<BOOL>(0x02789B10, vehicle); } // 0x78C3311A73135241 0x655F072C b1207
	static int GET_VEHICLE_NUMBER_OF_PASSENGERS(Vehicle vehicle) { return invoke<int>(0x02789C50, vehicle); } // 0x59F3F16577CD79B2 0x1EF20849 b1207
	static int GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Vehicle vehicle) { return invoke<int>(0x02789D80, vehicle); } // 0xA9C55F1C15E62E06 0x0A2FC08C b1207
	static int GET_VEHICLE_MODEL_NUMBER_OF_SEATS(Hash modelHash) { return invoke<int>(0x02789E70, modelHash); } // 0x9A578736FF3A17C3 0x838F7BF7 b1207
	static BOOL IS_SEAT_WARP_ONLY(Vehicle vehicle, int seatIndex) { return invoke<BOOL>(0x0278A020, vehicle, seatIndex); } // 0x7892685BF6D9775E 0x769E5CF2 b1207
	static BOOL _GET_VEHICLE_TURRET_SEAT(Vehicle vehicle, int* seatIndex) { return invoke<BOOL>(0x0278A050, vehicle, seatIndex); } // 0xFF5791B7639C2A46 b1207
	static Any _0xA9E185D498B9AC67(Any p0, Any p1) { return invoke<Any>(0x0278A1C0, p0, p1); } // 0xA9E185D498B9AC67 b1207
	static void SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0x0278A1F0, multiplier); } // 0x606374EBFC27B133 0xF4187E51 b1207
	static void SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0x0278A230, multiplier); } // 0x1F91D44490E1EA0C 0x543F712B b1207
	static void SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0x0278A250, multiplier); } // 0xFEDFA97638D61D4A 0xDD46CEBE b1207
	static void SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(BOOL toggle) { invoke<Void>(0x0278A270, toggle); } // 0xD4288603E8766FF7 0x09462665 b1207
	static void SET_VEHICLE_DOORS_LOCKED(Vehicle vehicle, int doorLockStatus) { invoke<Void>(0x0278A280, vehicle, doorLockStatus); } // 0x96F78A6A075D55D9 0x4CDD35D0 b1207
	static void SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(Vehicle vehicle, int doorId, int doorLockStatus) { invoke<Void>(0x0278A370, vehicle, doorId, doorLockStatus); } // 0xA9F1D75195CC40F6 0xD61D182D b1207
	static void SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(Vehicle vehicle, Player player, BOOL toggle) { invoke<Void>(0x0278A4A0, vehicle, player, toggle); } // 0x359A8EA1FB8D6F0F 0x49829236 b1207
	static BOOL GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(Vehicle vehicle, Player player) { return invoke<BOOL>(0x0278A4C0, vehicle, player); } // 0xFA2CDDFEB8BC898B 0x1DC50247 b1207
	static void SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x0278A590, vehicle, toggle); } // 0x2381977DA948F8DC 0x891BA8A4 b1207
	static void SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(Vehicle vehicle, int team, BOOL toggle) { invoke<Void>(0x0278A5B0, vehicle, team, toggle); } // 0xE712BC978770F105 0x4F85E783 b1207
	static BOOL _GET_VEHICLE_DOORS_LOCKED_FOR_TEAM(Vehicle vehicle, int team) { return invoke<BOOL>(0x0278A690, vehicle, team); } // 0xDD1E1393D966D39A b1207
	static void EXPLODE_VEHICLE(Vehicle vehicle, BOOL isAudible, BOOL isInvisible, Any p3, Any p4) { invoke<Void>(0x0278A770, vehicle, isAudible, isInvisible, p3, p4); } // 0x75DCED9EEC5769D7 0xBEDEACEB b1207
	static void _0x750D42C013F64AE7(Any p0, Any p1) { invoke<Void>(0x0278A7A0, p0, p1); } // 0x750D42C013F64AE7 b1207
	static void _0xE78993FF9022C064(Any p0) { invoke<Void>(0x0278A870, p0); } // 0xE78993FF9022C064 b1207
	static void _0x9868C0D0134855F7(Any p0) { invoke<Void>(0x0278A940, p0); } // 0x9868C0D0134855F7 b1207
	static void _0x201B8ED4FF7FE9F5(Any p0) { invoke<Void>(0x0278A950, p0); } // 0x201B8ED4FF7FE9F5 b1207
	static void _0x41CDA90EE3450921(Any p0) { invoke<Void>(0x0278AA50, p0); } // 0x41CDA90EE3450921 b1207
	static void _0xD21A3D421E7F09F7(Any p0, Any p1) { invoke<Void>(0x0278AB10, p0, p1); } // 0xD21A3D421E7F09F7 b1207
	static void _0xA13028E22564A1BD(Any p0, Any p1) { invoke<Void>(0x0278AC10, p0, p1); } // 0xA13028E22564A1BD b1207
	static void _0x485B05EF05B9AEE9(Any p0, Any p1) { invoke<Void>(0x0278AD10, p0, p1); } // 0x485B05EF05B9AEE9 b1207
	static void SET_BOAT_ANCHOR(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x0278ADE0, vehicle, toggle); } // 0xAEAB044F05B92659 0xA3906284 b1207
	static void _0x6B53F4B811E583D2(Any p0, Any p1) { invoke<Void>(0x0278AE00, p0, p1); } // 0x6B53F4B811E583D2 b1207
	static BOOL CAN_ANCHOR_BOAT_HERE(Vehicle vehicle) { return invoke<BOOL>(0x0278AE20, vehicle); } // 0xC075176CFB8B4128 0xE97A4F5E b1207
	static void _SET_BOAT_FROZEN_WHEN_ANCHORED(Vehicle vehicle, BOOL p1, BOOL p2) { invoke<Void>(0x0278B000, vehicle, p1, p2); } // 0x286771F3059A37A7 0x0ED84792 b1207
	static void _0x75B49ACD73617437(Vehicle vehicle, BOOL p1) { invoke<Void>(0x0278B020, vehicle, p1); } // 0x75B49ACD73617437 0xA739012A b1207
	static void _SET_BOAT_MOVEMENT_RESISTANCE(Vehicle vehicle, float value) { invoke<Void>(0x0278B100, vehicle, value); } // 0xE3261532550D6A9F 0x66FA450C b1207
	static void SET_BOAT_SINKS_WHEN_WRECKED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x0278B1D0, vehicle, toggle); } // 0x62A6D317A011EA1D 0x35614622 b1207
	static void _0x1098CDA477890165(Any p0, Any p1) { invoke<Void>(0x0278B2B0, p0, p1); } // 0x1098CDA477890165 b1207
	static void _0x98A7598C579EE871(Any p0, Any p1, Any p2) { invoke<Void>(0x0278B360, p0, p1, p2); } // 0x98A7598C579EE871 b1207
	static void _0x9E8711C81AA17876(Any p0, Any p1) { invoke<Void>(0x0278B480, p0, p1); } // 0x9E8711C81AA17876 b1207
	static void SET_VEHICLE_STRONG(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x0278B550, vehicle, toggle); } // 0xAB315515C9F8803D 0xC758D19F b1207
	static BOOL IS_VEHICLE_SEAT_FREE(Vehicle vehicle, int seatIndex) { return invoke<BOOL>(0x0278B620, vehicle, seatIndex); } // 0xE052C1B1CAA4ECE4 0xDAF42B02 b1207
	static Ped GET_PED_IN_VEHICLE_SEAT(Vehicle vehicle, int seatIndex) { return invoke<Ped>(0x0278B650, vehicle, seatIndex); } // 0xBB40DD2270B65366 0x388FDE9A b1207
	static Ped GET_LAST_PED_IN_VEHICLE_SEAT(Vehicle vehicle, int seatIndex) { return invoke<Ped>(0x0278B760, vehicle, seatIndex); } // 0x74583B19FEEAFDA7 0xF7C6792D b1207
	static BOOL IS_DRAFT_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0x0278B8B0, vehicle); } // 0xEA44E97849E9F3DD b1207
	static Ped _GET_PED_IN_DRAFT_HARNESS(Vehicle vehicle, int harnessId) { return invoke<Ped>(0x0278B960, vehicle, harnessId); } // 0xA8BA0BAE0173457B b1207
	static void SET_VEHICLE_FORWARD_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0x0278BA40, vehicle, speed); } // 0xF9F92AF49F12F6E7 0x69880D14 b1207
	static void BRING_VEHICLE_TO_HALT(Vehicle vehicle, float distance, int duration, BOOL unknown) { invoke<Void>(0x0278BB20, vehicle, distance, duration, unknown); } // 0x260BE8F09E326A20 0xCBC7D3C8 b1207
	static Any _0x404527BC03DA0E6C(Any p0) { return invoke<Any>(0x0278BB40, p0); } // 0x404527BC03DA0E6C b1207
	static void _STOP_BRING_VEHICLE_TO_HALT(Vehicle vehicle) { invoke<Void>(0x0278BC30, vehicle); } // 0x7C06330BFDDA182E b1207
	static void _0xE12F5ED49F44D40D(Any p0) { invoke<Void>(0x0278BD40, p0); } // 0xE12F5ED49F44D40D b1207
	static void _0xF6E3D38869D0F7AD(Any p0) { invoke<Void>(0x0278BD50, p0); } // 0xF6E3D38869D0F7AD b1207
	static void SET_VEHICLE_DOORS_SHUT(Vehicle vehicle, BOOL closeInstantly) { invoke<Void>(0x0278BE50, vehicle, closeInstantly); } // 0xA4FFCD645B11F25A 0xBB1FF6E7 b1207
	static void SET_VEHICLE_TYRES_CAN_BURST(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x0278BE70, vehicle, toggle); } // 0xEBD0A4E935106FE5 0xA198DB54 b1207
	static void SET_VEHICLE_WHEELS_CAN_BREAK(Vehicle vehicle, BOOL enabled) { invoke<Void>(0x0278BF50, vehicle, enabled); } // 0x839137C40275FB77 0x829ED654 b1207
	static void SET_VEHICLE_DOORS_TO_OPEN_AT_ANY_DISTANCE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x0278C020, vehicle, toggle); } // 0x362CEDD2A41E0747 b1232
	static void SET_VEHICLE_DOOR_OPEN(Vehicle vehicle, int doorId, BOOL loose, BOOL openInstantly) { invoke<Void>(0x0278C0E0, vehicle, doorId, loose, openInstantly); } // 0x550CE392A4672412 0xBB75D38B b1207
	static void REMOVE_VEHICLE_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0x0278C100, vehicle, windowIndex); } // 0x745F15A215F2DDF1 0xBB8104A3 b1207
	static void _0x8878FF3EEE2868A9(Any p0, Any p1) { invoke<Void>(0x0278C1E0, p0, p1); } // 0x8878FF3EEE2868A9 b1207
	static void _SET_VEHICLE_DIRT_LEVEL_2(Vehicle vehicle, float dirtLevel) { invoke<Void>(0x0278C2E0, vehicle, dirtLevel); } // 0xBAE0EEDF93F05EAA b1207
	static void _SET_VEHICLE_MUD_LEVEL(Vehicle vehicle, float mudLevel) { invoke<Void>(0x0278C3F0, vehicle, mudLevel); } // 0x4D15E49764CB328A b1207
	static void SET_VEHICLE_LIGHTS(Vehicle vehicle, int state) { invoke<Void>(0x0278C500, vehicle, state); } // 0x629F0A0E952CAE7D 0xE8930226 b1207
	static void SET_RANDOM_TRAINS(BOOL toggle) { invoke<Void>(0x0278C610, toggle); } // 0x1156C6EE7E82A98A 0xD461CA7F b1207
	static Any _0x331CBD247FC5DAA8(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x0278C620, p0, p1, p2, p3, p4, p5); } // 0x331CBD247FC5DAA8 b1207
	static Any _0x0516FAE561276EFC(Any p0) { return invoke<Any>(0x0278C650, p0); } // 0x0516FAE561276EFC b1207
	static Any _0x45853F4E17D847D5(Any p0) { return invoke<Any>(0x0278C670, p0); } // 0x45853F4E17D847D5 b1207
	static Any _0x6E585A616ABB8401(Any p0) { return invoke<Any>(0x0278C740, p0); } // 0x6E585A616ABB8401 b1207
	static void _0x15206E88FF7617DF(Any p0, Any p1) { invoke<Void>(0x0278C7B0, p0, p1); } // 0x15206E88FF7617DF b1207
	static void _0xA7966807953A18EE(Any p0, Any p1) { invoke<Void>(0x0278C800, p0, p1); } // 0xA7966807953A18EE b1207
	static void _0x6B34BE961F639E21(Any p0, Any p1) { invoke<Void>(0x0278C870, p0, p1); } // 0x6B34BE961F639E21 b1207
	static void _0xE6BD7DD3FD474415(Any p0, Any p1) { invoke<Void>(0x0278C8C0, p0, p1); } // 0xE6BD7DD3FD474415 b1207
	static void _0x615B3B8E73634509(Any p0, Any p1) { invoke<Void>(0x0278C9B0, p0, p1); } // 0x615B3B8E73634509 b1207
	static void _0x38E7DD70A242D5CB(Any p0, Any p1) { invoke<Void>(0x0278CA00, p0, p1); } // 0x38E7DD70A242D5CB b1207
	static void _0x63509DDF102E08E8(Any p0, Any p1) { invoke<Void>(0x0278CAA0, p0, p1); } // 0x63509DDF102E08E8 b1207
	static void _0x7408B5C66BA31ADB(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoke<Void>(0x0278CB40, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x7408B5C66BA31ADB b1207
	static void _0x41365DB586CD9E8E(Any p0, Any p1) { invoke<Void>(0x0278CC20, p0, p1); } // 0x41365DB586CD9E8E b1207
	static void _0xD0AABE5B9F8FA589(Any p0, Any p1) { invoke<Void>(0x0278CC70, p0, p1); } // 0xD0AABE5B9F8FA589 b1207
	static void _0x427C919E9809E370(Any p0, Any p1) { invoke<Void>(0x0278CCC0, p0, p1); } // 0x427C919E9809E370 b1207
	static BOOL _0xC29996A337BDD099(int trackIndex) { return invoke<BOOL>(0x0278CD50, trackIndex); } // 0xC29996A337BDD099 b1207
	static Vector3 _0x1E8A921112891651(int trackIndex) { return invoke<Vector3>(0x0278CDA0, trackIndex); } // 0x1E8A921112891651 b1207
	static Any _0xB4241AD8F5AEE9ED(Any p0) { return invoke<Any>(0x0278CE30, p0); } // 0xB4241AD8F5AEE9ED b1207
	static void _0xA230A5DDE12ED374(Any p0) { invoke<Void>(0x0278CEA0, p0); } // 0xA230A5DDE12ED374 b1207
	static void _0x0D5FDF0D36FA10CD(Any p0) { invoke<Void>(0x0278CEF0, p0); } // 0x0D5FDF0D36FA10CD b1207
	static void _0xE682002DB1F30669(Any p0) { invoke<Void>(0x0278CF40, p0); } // 0xE682002DB1F30669 b1207
	static void _0x718EB706B6E998A0(Any p0) { invoke<Void>(0x0278D080, p0); } // 0x718EB706B6E998A0 b1207
	static Any _0xF05DFAF1ADFEF2CD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x0278D1B0, p0, p1, p2, p3, p4, p5); } // 0xF05DFAF1ADFEF2CD b1207
	static Any _0xD1DF5E54F4ACBE1A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0x0278D290, p0, p1, p2, p3, p4, p5, p6); } // 0xD1DF5E54F4ACBE1A b1207
	static Any _0x0FDDEE66E3465726(Any p0) { return invoke<Any>(0x0278D360, p0); } // 0x0FDDEE66E3465726 b1207
	static void _0x4C05B42A8D937796() { invoke<Void>(0x0278D4D0); } // 0x4C05B42A8D937796 b1207
	static void _0xB961DD799A837BD7() { invoke<Void>(0x0278D4E0); } // 0xB961DD799A837BD7 b1207
	static void _0x16B86A49E072AA85() { invoke<Void>(0x0278D4F0); } // 0x16B86A49E072AA85 b1207
	static void _0x2A7413168F6CD5A8() { invoke<Void>(0x0278D500); } // 0x2A7413168F6CD5A8 b1207
	static void _0xFFFE15B433300B8C(Any p0, Any p1, Any p2) { invoke<Void>(0x0278D510, p0, p1, p2); } // 0xFFFE15B433300B8C b1207
	static void _0x6EA1273D525427F4(Any p0, Any p1, Any p2) { invoke<Void>(0x0278D530, p0, p1, p2); } // 0x6EA1273D525427F4 b1207
	static Any _0x7BE0746539DEF0C8(Any p0, Any p1) { return invoke<Any>(0x0278D650, p0, p1); } // 0x7BE0746539DEF0C8 b1207
	static void _0x3137EDC899E6DAE4(Any p0, Any p1) { invoke<Void>(0x0278D680, p0, p1); } // 0x3137EDC899E6DAE4 b1355
	static Any _0x6C87F49BFA181DB5(Any p0, Any p1, Any p2) { return invoke<Any>(0x0278D790, p0, p1, p2); } // 0x6C87F49BFA181DB5 b1207
	static Any _0x85D39F5E3B6D7EB0(Any p0, Any p1, Any p2) { return invoke<Any>(0x0278D860, p0, p1, p2); } // 0x85D39F5E3B6D7EB0 b1207
	static Vector3 _GET_NEAREST_TRAIN_TRACK_POSITION(float x, float y, float z) { return invoke<Vector3>(0x0278D8F0, x, y, z); } // 0x6DE03BCC15E81710 b1207
	static void DELETE_ALL_TRAINS() { invoke<Void>(0x0278D950); } // 0xA3120A1385F17FF7 0x83DE7ABF b1207
	static Any _0x0E558D3A49D759D6(Any p0, Any p1) { return invoke<Any>(0x0278D960, p0, p1); } // 0x0E558D3A49D759D6 b1207
	static void _0xD4907EF4334C7602(Any p0, Any p1) { invoke<Void>(0x0278D990, p0, p1); } // 0xD4907EF4334C7602 b1207
	static void _0x68830738A6BFB370(Any p0, Any p1) { invoke<Void>(0x0278DA60, p0, p1); } // 0x68830738A6BFB370 b1207
	static void SET_TRAIN_SPEED(Vehicle train, float speed) { invoke<Void>(0x0278DB30, train, speed); } // 0xDFBA6BBFF7CCAFBB 0xDFC35E4D b1207
	static void _SET_TRAIN_MAX_SPEED(Vehicle train, float speed) { invoke<Void>(0x0278DC10, train, speed); } // 0x9F29999DFDF2AEB8 b1207
	static void SET_TRAIN_CRUISE_SPEED(Vehicle train, float speed) { invoke<Void>(0x0278DCF0, train, speed); } // 0x01021EB2E96B793C 0xB507F51D b1207
	static Any _0x60B7D1DCC312697D(Any p0) { return invoke<Any>(0x0278DD00, p0); } // 0x60B7D1DCC312697D b1207
	static Hash _0x8DF5F6A19F99F0D5(Hash trainConfig, int trainCarIndex) { return invoke<Hash>(0x0278DDF0, trainConfig, trainCarIndex); } // 0x8DF5F6A19F99F0D5 b1207
	static int _0x635423D55CA84FC8(Hash trainConfig) { return invoke<int>(0x0278DE50, trainConfig); } // 0x635423D55CA84FC8 b1207
	static Any _0x671A07C9A1CD50A5(Any p0) { return invoke<Any>(0x0278DE90, p0); } // 0x671A07C9A1CD50A5 b1207
	static void _SET_TRAIN_STOPS_FOR_STATIONS(Vehicle train, BOOL toggle) { invoke<Void>(0x0278DF80, train, toggle); } // 0x4182C037AA1F0091 b1207
	static void _0xDD100CE1EBBF37E3(Any p0, Any p1) { invoke<Void>(0x0278E0A0, p0, p1); } // 0xDD100CE1EBBF37E3 b1207
	static void _0x160C1B5AB48AB87C(Any p0, Any p1) { invoke<Void>(0x0278E1C0, p0, p1); } // 0x160C1B5AB48AB87C b1207
	static BOOL IS_TRAIN_WAITING_AT_STATION(Vehicle train) { return invoke<BOOL>(0x0278E290, train); } // 0xE887BD31D97793F6 b1207
	static void _0x3660BCAB3A6BB734(Vehicle train) { invoke<Void>(0x0278E360, train); } // 0x3660BCAB3A6BB734 b1207
	static void _0x787E43477746876F(Vehicle train) { invoke<Void>(0x0278E420, train); } // 0x787E43477746876F b1207
	static void SET_RANDOM_BOATS(BOOL toggle) { invoke<Void>(0x0278E4E0, toggle); } // 0xF44D446D4E36DB87 0xB505BD89 b1207
	static void REQUEST_VEHICLE_RECORDING(int recording, const char* script) { invoke<Void>(0x0278E4F0, recording, script); } // 0xC474CF16EDA45DC9 0x91AFEFD9 b1207
	static BOOL HAS_VEHICLE_RECORDING_BEEN_LOADED(int recording, const char* script) { return invoke<BOOL>(0x0278E640, recording, script); } // 0xBA9325BE372AB6EA 0xF52CD7F5 b1207
	static void REMOVE_VEHICLE_RECORDING(Any p0, Any* p1) { invoke<Void>(0x0278E790, p0, p1); } // 0x139E35755418F6AA 0xD3C05B00 b1207
	static Vector3 GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(int recording, float time, const char* script) { return invoke<Vector3>(0x0278E8D0, recording, time, script); } // 0x1A00961A1BE94E5E 0x7178558D b1207
	static Vector3 GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(int recording, float time, const char* script) { return invoke<Vector3>(0x0278EAB0, recording, time, script); } // 0x61787DD28B8CC0D5 0xD96DEC68 b1207
	static float GET_TIME_POSITION_IN_RECORDING(Vehicle vehicle) { return invoke<float>(0x0278EC10, vehicle); } // 0x233B51C7913FA031 0xF8C3E4A2 b1207
	static void START_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle, int recording, const char* script, BOOL p3) { invoke<Void>(0x0278ECC0, vehicle, recording, script, p3); } // 0x4932B84E3276508E 0xCF614CA8 b1207
	static void FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Vehicle vehicle, BOOL p1) { invoke<Void>(0x0278ECE0, vehicle, p1); } // 0x59ECA796021B0539 0x01B91CD0 b1207
	static void STOP_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle) { invoke<Void>(0x0278ED00, vehicle); } // 0xBF9B4D6267E8C26D 0xAE99C57C b1207
	static BOOL IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0x0278EDC0, vehicle); } // 0x02774B3A9034278F 0x61F7650D b1207
	static BOOL IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0x0278EE80, vehicle); } // 0x5A7472606EC5B7C1 0x63022C58 b1207
	static void SET_PLAYBACK_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0x0278EF40, vehicle, speed); } // 0xD78084EED4CD94C6 0x684E26E4 b1207
	static void SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle, float time) { invoke<Void>(0x0278F040, vehicle, time); } // 0x5F5E6379C59EFC56 0xCF3EFA4B b1207
	static Vehicle GET_CLOSEST_VEHICLE(float x, float y, float z, float radius, Hash modelHash, int flags) { return invoke<Vehicle>(0x0278F100, x, y, z, radius, modelHash, flags); } // 0x52F45D033645181B 0xD7E26B2C b1207
	static Entity GET_TRAIN_CARRIAGE(Vehicle train, int trailerNumber) { return invoke<Entity>(0x0278F130, train, trailerNumber); } // 0xD0FB093A4CDB932C 0x2544E7A6 b1207
	static void DELETE_MISSION_TRAIN(Vehicle* train) { invoke<Void>(0x0278F220, train); } // 0x0D3630FB07E8B570 0x86C9497D b1207
	static void SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(Vehicle* train, BOOL p1) { invoke<Void>(0x0278F230, train, p1); } // 0xBBE7648349B49BE8 0x19808560 b1207
	static void SET_MISSION_TRAIN_COORDS(Vehicle train, float x, float y, float z) { invoke<Void>(0x0278F240, train, x, y, z); } // 0x7632755962AB9922 0xD6D70803 b1207
	static void _0xC9EA26893C9E4024(Vehicle train, float x, float y, float z, BOOL takePassengers) { invoke<Void>(0x0278F3A0, train, x, y, z, takePassengers); } // 0xC9EA26893C9E4024 b1207
	static void _0xA72B1BF3857B94D7(Any p0, Any p1) { invoke<Void>(0x0278F3C0, p0, p1); } // 0xA72B1BF3857B94D7 b1207
	static BOOL _0xB9D5BDDA88E1BB66(Hash model) { return invoke<BOOL>(0x0278F4F0, model); } // 0xB9D5BDDA88E1BB66 b1207
	static BOOL IS_THIS_MODEL_A_BOAT(Hash model) { return invoke<BOOL>(0x0278F5E0, model); } // 0x799CFC7C5B743B15 0x10F6085C b1207
	static BOOL IS_THIS_MODEL_A_TRAIN(Hash model) { return invoke<BOOL>(0x0278F6E0, model); } // 0xFC08C8F8C1EDF174 0xF87DCFFD b1207
	static void SET_VEHICLE_CAN_BE_TARGETTED(Vehicle vehicle, BOOL state) { invoke<Void>(0x0278F7E0, vehicle, state); } // 0x05254BA0B44ADC16 0x64B70B1D b1207
	static void _0x63DC1F22C903B709(Vehicle vehicle, BOOL p1) { invoke<Void>(0x0278F8B0, vehicle, p1); } // 0x63DC1F22C903B709 0x486C1280 b1207
	static void SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Vehicle vehicle, BOOL state) { invoke<Void>(0x0278F8D0, vehicle, state); } // 0x4BF8131AE811541C 0xC5D94017 b1207
	static void SET_VEHICLE_HAS_UNBREAKABLE_LIGHTS(Vehicle vehicle, BOOL p1) { invoke<Void>(0x0278F9A0, vehicle, p1); } // 0xC903855E028A05F2 0x009AB49E b1207
	static void _0x33992A808DF1C1BA(Vehicle vehicle, BOOL p1) { invoke<Void>(0x0278FA70, vehicle, p1); } // 0x33992A808DF1C1BA 0x758C5E2E b1207
	static void _0x065D03A9D6B2C6B5(Any p0, Any p1) { invoke<Void>(0x0278FB40, p0, p1); } // 0x065D03A9D6B2C6B5 b1207
	static void SET_VEHICLE_DIRT_LEVEL(Vehicle vehicle, float dirtLevel) { invoke<Void>(0x0278FC00, vehicle, dirtLevel); } // 0x758C3460EE915D0A 0x2B39128B b1207
	static BOOL IS_VEHICLE_DOOR_FULLY_OPEN(Vehicle vehicle, int doorId) { return invoke<BOOL>(0x0278FD10, vehicle, doorId); } // 0x7AE191143C7A9107 0xC2385B6F b1207
	static void SET_VEHICLE_ENGINE_ON(Vehicle vehicle, BOOL value, BOOL instantly) { invoke<Void>(0x0278FE30, vehicle, value, instantly); } // 0xB64CFA14CB9A2E78 0x7FBC86F1 b1207
	static void SET_VEHICLE_UNDRIVEABLE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x0278FE50, vehicle, toggle); } // 0x6E884BAB713A2A94 0x48D02A4E b1207
	static void SET_VEHICLE_PROVIDES_COVER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x0278FF50, vehicle, toggle); } // 0x652712478F1721F4 0xEFC01CA9 b1207
	static void _0x3053064F909B5F42(Any p0, Any p1) { invoke<Void>(0x02790020, p0, p1); } // 0x3053064F909B5F42 b1207
	static void SET_VEHICLE_DOOR_CONTROL(Vehicle vehicle, int doorId, int speed, float angle) { invoke<Void>(0x02790120, vehicle, doorId, speed, angle); } // 0xD57F10EBBA814ECF 0x572DD360 b1207
	static void SET_VEHICLE_DOOR_LATCHED(Vehicle vehicle, int doorId, BOOL p2, BOOL p3, BOOL p4) { invoke<Void>(0x02790140, vehicle, doorId, p2, p3, p4); } // 0x06F8A202EB312A3C 0x4EB7BBFC b1207
	static void SET_VEHICLE_DOOR_SHUT(Vehicle vehicle, int doorId, BOOL closeInstantly) { invoke<Void>(0x02790170, vehicle, doorId, closeInstantly); } // 0x6A3C24B91FD0EA09 0x142606BD b1207
	static void SET_VEHICLE_DOOR_BROKEN(Vehicle vehicle, int doorId, BOOL deleteDoor) { invoke<Void>(0x02790190, vehicle, doorId, deleteDoor); } // 0x9666CF20A1C6D780 0x8147FEA7 b1207
	static void SET_VEHICLE_CAN_BREAK(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x027901B0, vehicle, toggle); } // 0xC5ED9D59B4646611 0x90A810D1 b1207
	static void SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x027902B0, vehicle, toggle); } // 0x54800D386C5825E5 0x14413319 b1207
	static void _0x7549B9E841940695(Vehicle vehicle, BOOL p1) { invoke<Void>(0x02790360, vehicle, p1); } // 0x7549B9E841940695 0x2F98B4B7 b1207
	static int GET_VEHICLE_DOOR_LOCK_STATUS(Vehicle vehicle) { return invoke<int>(0x02790470, vehicle); } // 0xC867FD144F2469D3 0x0D72CEF2 b1207
	static void _SET_VEHICLE_DOOR_CAN_BREAK(Vehicle vehicle, int doorId, BOOL isBreakable) { invoke<Void>(0x02790520, vehicle, doorId, isBreakable); } // 0x081FB9D6422F804C 0x065B92B3 b1207
	static BOOL IS_VEHICLE_ON_ALL_WHEELS(Vehicle vehicle) { return invoke<BOOL>(0x02790540, vehicle); } // 0x0D5D119529654EE0 0x10089F8E b1207
	static Any _0x3C9628A811CBD724(Any p0) { return invoke<Any>(0x027906B0, p0); } // 0x3C9628A811CBD724 b1207
	static BOOL _0x67995318F5FAA496(int trackIndex) { return invoke<BOOL>(0x02790780, trackIndex); } // 0x67995318F5FAA496 b1207
	static Any _0x09034479E6E3E269(Any p0, Any p1, Any p2) { return invoke<Any>(0x027907E0, p0, p1, p2); } // 0x09034479E6E3E269 b1207
	static BOOL _0x86AFC343CF7F0B34(Hash trainConfig, float x, float y, float z, int* junctionIndex) { return invoke<BOOL>(0x02790900, trainConfig, x, y, z, junctionIndex); } // 0x86AFC343CF7F0B34 b1207
	static Any _0xD9BF3ED8EFB67EA3(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x02790A30, p0, p1, p2, p3, p4); } // 0xD9BF3ED8EFB67EA3 b1207
	static Vector3 _0x785639D89F8451AB(Any p0, Any p1) { return invoke<Vector3>(0x02790B50, p0, p1); } // 0x785639D89F8451AB b1207
	static void _0xE6C5E2125EB210C1(int trackIndex, int junctionIndex, BOOL enabled) { invoke<Void>(0x02790BF0, trackIndex, junctionIndex, enabled); } // 0xE6C5E2125EB210C1 b1207
	static void _0x3ABFA128F5BF5A70(Any p0, Any p1, Any p2) { invoke<Void>(0x02790D30, p0, p1, p2); } // 0x3ABFA128F5BF5A70 b1207
	static Any _0x2C46D2A591D8C322(Any p0, Any p1, Any p2) { return invoke<Any>(0x02790E80, p0, p1, p2); } // 0x2C46D2A591D8C322 b1207
	static Any _0xCAFF2C9747103C02(Any p0, Any p1, Any p2) { return invoke<Any>(0x02790F40, p0, p1, p2); } // 0xCAFF2C9747103C02 b1207
	static void _0x138398153824E332() { invoke<Void>(0x02790FE0); } // 0x138398153824E332 b1207
	static void _0x34BCF6209B9668A7(Any p0, Any p1) { invoke<Void>(0x027910A0, p0, p1); } // 0x34BCF6209B9668A7 b1207
	static void _0xD0BA1853D76683C8(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x027910F0, p0, p1, p2, p3, p4); } // 0xD0BA1853D76683C8 b1207
	static void SET_TRAIN_OFFSET_FROM_STATION(Vehicle train, float offset) { invoke<Void>(0x02791300, train, offset); } // 0x8EC47DD4300BF063 b1207
	static void _0xDC69F6913CCA0B99(Any p0, Any p1) { invoke<Void>(0x027913C0, p0, p1); } // 0xDC69F6913CCA0B99 b1207
	static void _0x7840576C50A13DBA(Any p0, Any p1) { invoke<Void>(0x027914D0, p0, p1); } // 0x7840576C50A13DBA b1207
	static Any _0xD0116DF21E6C7B36(Any p0, Any p1) { return invoke<Any>(0x027915E0, p0, p1); } // 0xD0116DF21E6C7B36 b1207
	static void _0x54CBDD6E1B4CB4DF(Any p0) { invoke<Void>(0x027916B0, p0); } // 0x54CBDD6E1B4CB4DF b1207
	static Any _0x1180A2974D251B7B(Any p0) { return invoke<Any>(0x02791760, p0); } // 0x1180A2974D251B7B b1207
	static int GET_CURRENT_STATION_FOR_TRAIN(Vehicle train) { return invoke<int>(0x02791820, train); } // 0x86FA6D8B48667D75 b1207
	static Any _0x9CC94A948EAF5372(Any p0, Any p1) { return invoke<Any>(0x027918E0, p0, p1); } // 0x9CC94A948EAF5372 b1207
	static Any _0xDE8C5B9F65017FA1(Any p0) { return invoke<Any>(0x02791920, p0); } // 0xDE8C5B9F65017FA1 b1207
	static Any _0xAF787E081AC4A8EE(Any p0) { return invoke<Any>(0x02791A10, p0); } // 0xAF787E081AC4A8EE b1207
	static Vector3 _0xBA958F68031DDBFC(Any p0, Any p1) { return invoke<Vector3>(0x02791AE0, p0, p1); } // 0xBA958F68031DDBFC b1207
	static int GET_TRACK_INDEX_OF_TRAIN(Vehicle train) { return invoke<int>(0x02791B30, train); } // 0x865FEC2FA899F29C b1207
	static void _0x1A861F899EBBE17C(Any p0, Any p1) { invoke<Void>(0x02791BF0, p0, p1); } // 0x1A861F899EBBE17C b1207
	static void _0xF8F7DA13CFBD4532(int trackIndex, BOOL p1) { invoke<Void>(0x02791CE0, trackIndex, p1); } // 0xF8F7DA13CFBD4532 b1207
	static void _0xCFE122EC635CC2B2(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02791D30, p0, p1, p2, p3); } // 0xCFE122EC635CC2B2 b1207
	static void _0x2BB2B5BCF0DF8008(Any p0, Any p1) { invoke<Void>(0x02791EC0, p0, p1); } // 0x2BB2B5BCF0DF8008 b1207
	static void _0x6703872EC09BC158(Any p0, Any p1) { invoke<Void>(0x02791FA0, p0, p1); } // 0x6703872EC09BC158 b1207
	static void _0x1BFBAFCC6760FF02(Any p0, Any p1) { invoke<Void>(0x02792140, p0, p1); } // 0x1BFBAFCC6760FF02 b1207
	static Any _0xF5EA41C1408695FB(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x02792220, p0, p1, p2, p3); } // 0xF5EA41C1408695FB b1207
	static void SET_VEHICLE_FIXED(Vehicle vehicle) { invoke<Void>(0x02792330, vehicle); } // 0x79811282A9D1AE56 0x17469AA1 b1207
	static void SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x02792400, vehicle, toggle); } // 0xB70986AB19B04AFF 0xC40192B5 b1207
	static void SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x027924E0, vehicle, toggle); } // 0x5795FBE7A2001C14 0xAD3E05F2 b1207
	static void SET_DISABLE_VEHICLE_ENGINE_FIRES(Vehicle vehicle, BOOL p1) { invoke<Void>(0x027925C0, vehicle, p1); } // 0xD146EE5F2B06B95E 0x1784BA1A b1207
	static void _0x8F75941C86EEBFCA(Vehicle vehicle, BOOL p1) { invoke<Void>(0x027926A0, vehicle, p1); } // 0x8F75941C86EEBFCA 0x40C323AE b1207
	static void _0xC84E138448507567(Vehicle vehicle, BOOL p1) { invoke<Void>(0x027927B0, vehicle, p1); } // 0xC84E138448507567 0x847F1304 b1207
	static void REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x027928B0, p0, p1, p2, p3, p4, p5); } // 0xC619A44639BC0CB4 0x42CC15E0 b1207
	static void SET_VEHICLE_STEER_BIAS(Vehicle vehicle, float value) { invoke<Void>(0x02792AC0, vehicle, value); } // 0x84DAAE11E9EE4FC3 0x7357C1EB b1207
	static BOOL IS_VEHICLE_EXTRA_TURNED_ON(Vehicle vehicle, int extraId) { return invoke<BOOL>(0x02792B80, vehicle, extraId); } // 0xFA9A55D9C4351625 0x042098B5 b1207
	static void SET_VEHICLE_EXTRA(Vehicle vehicle, int extraId, BOOL disable) { invoke<Void>(0x02792C80, vehicle, extraId, disable); } // 0xBB6F89150BC9D16B 0x642D065C b1207
	static BOOL DOES_EXTRA_EXIST(Vehicle vehicle, int extraId) { return invoke<BOOL>(0x02792CA0, vehicle, extraId); } // 0xAF5E7E9A7620FFB5 0x409411CC b1207
	static void SET_VEHICLE_DAMAGE(Vehicle vehicle, float xOffset, float yOffset, float zOffset, float damage, float radius, BOOL p6) { invoke<Void>(0x02792D90, vehicle, xOffset, yOffset, zOffset, damage, radius, p6); } // 0x1D7678F81452BB41 0x21B458B2 b1207
	static float GET_VEHICLE_ENGINE_HEALTH(Vehicle vehicle) { return invoke<float>(0x02792DC0, vehicle); } // 0x90DBFFAC43B22081 0x8880038A b1207
	static void SET_VEHICLE_ENGINE_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0x02792E80, vehicle, health); } // 0x8BDC5B998B4654EF 0x1B760FB5 b1207
	static float GET_VEHICLE_PETROL_TANK_HEALTH(Vehicle vehicle) { return invoke<float>(0x02792FB0, vehicle); } // 0x1E5A9B356D5098BE 0xE41595CE b1207
	static void SET_VEHICLE_PETROL_TANK_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0x02793060, vehicle, health); } // 0x6AB2918EE3BEC94C 0x660A3692 b1207
	static BOOL IS_VEHICLE_STUCK_TIMER_UP(Vehicle vehicle, int stuckType, int ms) { return invoke<BOOL>(0x02793120, vehicle, stuckType, ms); } // 0x1ABA9753939503C5 0x2FCF58C1 b1207
	static void RESET_VEHICLE_STUCK_TIMER(Vehicle vehicle, int nullAttributes) { invoke<Void>(0x02793250, vehicle, nullAttributes); } // 0x23298B468F7D88B6 0xEF2A6016 b1207
	static BOOL IS_VEHICLE_DRIVEABLE(Vehicle vehicle, BOOL p1, BOOL p2) { return invoke<BOOL>(0x02793350, vehicle, p1, p2); } // 0xB86D29B10F627379 0x41A7267A b1207
	static BOOL IS_VEHICLE_WRECKED(Vehicle vehicle) { return invoke<BOOL>(0x02793640, vehicle); } // 0xDDBEA5506C848227 b1207
	static Any _0x0E3BF7ED4169EC43(Any p0) { return invoke<Any>(0x02793700, p0); } // 0x0E3BF7ED4169EC43 b1207
	static void SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Vehicle vehicle, BOOL owned) { invoke<Void>(0x027937F0, vehicle, owned); } // 0xBB5A3FA8ED3979C5 0xB4D3DBFB b1207
	static void START_VEHICLE_HORN(Vehicle vehicle, int duration, Hash mode, BOOL forever) { invoke<Void>(0x027938A0, vehicle, duration, mode, forever); } // 0xB4E3BFC39CA16057 0x0DF5ADB3 b1207
	static void SET_VEHICLE_HAS_STRONG_AXLES(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x027938C0, vehicle, toggle); } // 0x252253C8A45AA1FC 0x0D1CBC65 b1207
	static void _SET_VEHICLE_SNOW_LEVEL(Vehicle vehicle, float snowLevel) { invoke<Void>(0x02793990, vehicle, snowLevel); } // 0x6F73EFAB11651D7F b1207
	static void _SET_VEHICLE_WET_LEVEL(Vehicle vehicle, float wetLevel) { invoke<Void>(0x02793B70, vehicle, wetLevel); } // 0x5AABB09F6FBD1F87 b1207
	static void _SET_VEHICLE_TINT(Vehicle vehicle, int tintId) { invoke<Void>(0x02793C70, vehicle, tintId); } // 0x8268B098F6FCA4E2 b1207
	static void _SET_VEHICLE_LIVERY(Vehicle vehicle, int liveryIndex) { invoke<Void>(0x02793C80, vehicle, liveryIndex); } // 0xF89D82A0582E46ED b1207
	static int _GET_VEHICLE_TINT(Vehicle vehicle) { return invoke<int>(0x02793D90, vehicle); } // 0xA44D65E6C624526F b1207
	static int _GET_VEHICLE_LIVERY(Vehicle vehicle) { return invoke<int>(0x02793E50, vehicle); } // 0xBB765B8FD49A796C b1207
	static BOOL IS_VEHICLE_WINDOW_INTACT(Vehicle vehicle, int windowIndex) { return invoke<BOOL>(0x02793F10, vehicle, windowIndex); } // 0x0E7910A63E05B12C 0xAC4EF23D b1436
	static BOOL ARE_ANY_VEHICLE_SEATS_FREE(Vehicle vehicle) { return invoke<BOOL>(0x02793FE0, vehicle); } // 0xA0A424505A1B6429 0x648E685A b1207
	static void SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x02794110, vehicle, toggle); } // 0xA402939C6761E1A3 0x38CC692B b1207
	static void _0x8D3230A0ED7DE39F(Vehicle vehicle, BOOL p1) { invoke<Void>(0x027941E0, vehicle, p1); } // 0x8D3230A0ED7DE39F 0xC306A9A3 b1207
	static BOOL IS_ANY_VEHICLE_NEAR_POINT(float x, float y, float z, float radius) { return invoke<BOOL>(0x027942B0, x, y, z, radius); } // 0x5698BA4FD04D39C4 0x2867A834 b1207
	static void REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Vehicle vehicle) { invoke<Void>(0x027943A0, vehicle); } // 0x84B81EF78BD22357 0x9DA21956 b1207
	static void REQUEST_VEHICLE_ASSET(Hash vehicleHash, int vehicleAsset) { invoke<Void>(0x02794450, vehicleHash, vehicleAsset); } // 0x81A15811460FAB3A 0x902B4F06 b1207
	static void _0xCF9DA72002FC16BF(Any p0, Any p1, Any p2) { invoke<Void>(0x02794590, p0, p1, p2); } // 0xCF9DA72002FC16BF b1207
	static BOOL HAS_VEHICLE_ASSET_LOADED(int vehicleAsset) { return invoke<BOOL>(0x027945B0, vehicleAsset); } // 0xB935F3154BC913C8 0x8DAAC3CB b1207
	static void REMOVE_VEHICLE_ASSET(int vehicleAsset) { invoke<Void>(0x027945E0, vehicleAsset); } // 0x888A4E675B38F5AD 0x9620E9C6 b1207
	static Any SET_VEHICLE_AUTOMATICALLY_ATTACHES(Vehicle vehicle, BOOL p1, Any p2) { return invoke<Any>(0x027946D0, vehicle, p1, p2); } // 0x501354951CD942DE 0x4273A8D3 b1207
	static void _0x104D9A7B1C0D0783(Any p0, Any p1) { invoke<Void>(0x027947C0, p0, p1); } // 0x104D9A7B1C0D0783 b1207
	static BOOL IS_VEHICLE_IN_BURNOUT(Vehicle vehicle) { return invoke<BOOL>(0x02794A90, vehicle); } // 0x3F5029A8FC060C48 0x6632BC12 b1207
	static void SET_VEHICLE_HANDBRAKE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x02794B50, vehicle, toggle); } // 0x91BE51AEC4E99710 0xBA729A25 b1207
	static void INSTANTLY_FILL_VEHICLE_POPULATION() { invoke<Void>(0x02794C40); } // 0x1FF00DB43026B12F 0x37BC6ACB b1207
	static BOOL HAS_INSTANT_FILL_VEHICLE_POPULATION_FINISHED() { return invoke<BOOL>(0x02794C60); } // 0x2701D01D5E18FC31 0x71D898EF b1207
	static BOOL GET_VEHICLE_TRAILER_VEHICLE(Vehicle vehicle, Vehicle* trailer) { return invoke<BOOL>(0x02794C80, vehicle, trailer); } // 0xCF867A239EC30741 0xAE84D758 b1207
	static float GET_VEHICLE_ESTIMATED_MAX_SPEED(Vehicle vehicle) { return invoke<float>(0x02794E30, vehicle); } // 0xFE52F34491529F0B 0x7D1A0616 b1207
	static int ADD_ROAD_NODE_SPEED_ZONE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return invoke<int>(0x02794EE0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x4C221BAC54D735C3 0xD6685803 b1207
	static BOOL REMOVE_ROAD_NODE_SPEED_ZONE(int speedzone) { return invoke<BOOL>(0x02795070, speedzone); } // 0xFE9AB3354ACE6C9C 0x0C0332A6 b1207
	static BOOL _IS_VEHICLE_SEAT_ACCESSIBLE(Ped ped, Vehicle vehicle, int seatIndex, BOOL side, BOOL onEnter) { return invoke<BOOL>(0x027950C0, ped, vehicle, seatIndex, side, onEnter); } // 0x80DDCCB2F4A3EB57 0xAB0E79EB b1207
	static BOOL CAN_SHUFFLE_SEAT(Vehicle vehicle, int seatIndex) { return invoke<BOOL>(0x02795190, vehicle, seatIndex); } // 0xF8B2D32A2231FD24 0xB3EB01ED b1207
	static void MODIFY_VEHICLE_TOP_SPEED(Vehicle vehicle, float value) { invoke<Void>(0x02795290, vehicle, value); } // 0x35AD938C74CACD6A 0xE943B09C b1207
	static void _0x23A3AB86E0807721(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x02795550, vehicle, toggle); } // 0x23A3AB86E0807721 0xDF594D8D b1207
	static void _0xC1842F40FD501DA2(Any p0, BOOL p1) { invoke<Void>(0x02795620, p0, p1); } // 0xC1842F40FD501DA2 0x04F5546C b1207
	static Any _0x30D86B2B7622D0EB(Any p0) { return invoke<Any>(0x027956F0, p0); } // 0x30D86B2B7622D0EB b1207
	static void _0x09C970AE59ABF6B2(Vehicle vehicle, BOOL p1) { invoke<Void>(0x02795720, vehicle, p1); } // 0x09C970AE59ABF6B2 0x1984F88D b1207
	static void _0x1EF36558FBDE2DAA(Vehicle vehicle) { invoke<Void>(0x027957F0, vehicle); } // 0x1EF36558FBDE2DAA 0x3FBE904F b1207
	static Vehicle GET_LAST_DRIVEN_VEHICLE() { return invoke<Vehicle>(0x027958C0); } // 0xA94F3E0AB9695E19 0xFEB0C0C8 b1207
	static void CLEAR_LAST_DRIVEN_VEHICLE() { invoke<Void>(0x027958F0); } // 0x0EFC5DC62E67609B 0x07186AD9 b1207
	static void SET_PED_OWNS_VEHICLE(Ped ped, Vehicle vehicle) { invoke<Void>(0x02795900, ped, vehicle); } // 0x838C216C2B05A009 b1207
	static Entity _GET_VEHICLE_OWNER(Vehicle vehicle) { return invoke<Entity>(0x02795A60, vehicle); } // 0xB729679356A889AE b1207
	static void SET_VEHICLE_LOD_MULTIPLIER(Vehicle vehicle, float multiplier) { invoke<Void>(0x02795B20, vehicle, multiplier); } // 0x5F5E2B1B9EAECC0F 0x569E5AE3 b1207
	static void _SET_VEHICLE_LOD_LEVEL(Vehicle vehicle, int lodLevel) { invoke<Void>(0x02795BE0, vehicle, lodLevel); } // 0x3FA7D7D1E0EA809E b1207
	static void _0x7F8E2B131E1DCA6C(Any p0, BOOL p1) { invoke<Void>(0x02795CA0, p0, p1); } // 0x7F8E2B131E1DCA6C 0x900C878C b1207
	static void COPY_VEHICLE_DAMAGES(Vehicle sourceVehicle, Vehicle targetVehicle) { invoke<Void>(0x02795D70, sourceVehicle, targetVehicle); } // 0xDBC28A8C683CD80B 0xBAE491C7 b1207
	static void SET_VEHICLE_SHOOT_AT_TARGET(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x02795D80, p0, p1, p2, p3, p4, p5); } // 0xB79BE78C665B3E6D 0x2343FFDF b1207
	static void SET_FORCE_HD_VEHICLE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x02795E60, vehicle, toggle); } // 0x373CB1283308BD7B 0xE0FC6A32 b1207
	static void TRACK_VEHICLE_VISIBILITY(Vehicle vehicle) { invoke<Void>(0x02795F30, vehicle); } // 0x1F3969B140DEE157 0x78122DC1 b1207
	static BOOL IS_VEHICLE_VISIBLE(Vehicle vehicle) { return invoke<BOOL>(0x02795FD0, vehicle); } // 0x424910CD5DE8C246 0x7E0D6056 b1207
	static Any _0x13C190302369308B(Any p0) { return invoke<Any>(0x027960B0, p0); } // 0x13C190302369308B b1207
	static void SET_ENABLE_VEHICLE_SLIPSTREAMING(BOOL p0) { invoke<Void>(0x02796190, p0); } // 0x73F1E4F6DF26FE30 0xD2B8ACBD b1207
	static void SET_VEHICLE_INACTIVE_DURING_PLAYBACK(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x027961A0, vehicle, toggle); } // 0x4EA71B4C9DB3C3F1 0x50F89338 b1207
	static void SET_VEHICLE_ENGINE_CAN_DEGRADE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x027961C0, vehicle, toggle); } // 0x48E4C137A71C2688 0x081DAC12 b1207
	static void SET_VEHICLE_IS_STOLEN(Vehicle vehicle, BOOL isStolen) { invoke<Void>(0x027962C0, vehicle, isStolen); } // 0x6C32FC81DFF25C9A 0x70912E42 b1207
	static void _0xCBF88256E44D5D39(Any p0, Any p1) { invoke<Void>(0x02796390, p0, p1); } // 0xCBF88256E44D5D39 b1207
	static void _0xC325A6BAA62CF8A2(Any p0, Any p1) { invoke<Void>(0x027964A0, p0, p1); } // 0xC325A6BAA62CF8A2 b1207
	static void _0x0CD7914D17A970AB(Any p0, Any p1) { invoke<Void>(0x02796570, p0, p1); } // 0x0CD7914D17A970AB b1207
	static void _0x23F66C36F8E5EAAB(Any p0, Any p1) { invoke<Void>(0x02796640, p0, p1); } // 0x23F66C36F8E5EAAB b1207
	static void _0x697DF68F3A761A50(Any p0) { invoke<Void>(0x02796770, p0); } // 0x697DF68F3A761A50 b1207
	static void _0x27E3F2B57209FA54(Any p0, Any p1) { invoke<Void>(0x02796880, p0, p1); } // 0x27E3F2B57209FA54 b1207
	static void DISABLE_VEHICLE_WEAPON(BOOL disabled, Hash weaponHash, Vehicle vehicle, Ped owner) { invoke<Void>(0x02796980, disabled, weaponHash, vehicle, owner); } // 0x94B1E71B144356A5 0xA688B7D1 b1207
	static void SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x02796A60, vehicle, toggle); } // 0xE42952510F84AFDB 0x5130DB1E b1207
	static void SET_VEHICLE_KEEP_ENGINE_ON_WHEN_ABANDONED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x02796B40, vehicle, toggle); } // 0x1549BA7FE83A2383 0x51E0064F b1207
	static void SET_VEHICLE_WHEELS_CAN_BREAK_OFF_WHEN_BLOW_UP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x02796C10, vehicle, toggle); } // 0xC462C79379ABBCB1 0x670913A4 b1207
	static void _0x15CC8C33D7FFCC4A(Vehicle vehicle, int p1) { invoke<Void>(0x02796CE0, vehicle, p1); } // 0x15CC8C33D7FFCC4A b1436
	static void _0x0893DAFBFA67110E(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x02796DE0, vehicle, toggle); } // 0x0893DAFBFA67110E 0xFF62D324 b1207
	static void SET_VEHICLE_EXCLUSIVE_DRIVER(Vehicle vehicle, Ped ped, int index) { invoke<Void>(0x02796E90, vehicle, ped, index); } // 0xC6B9BF123B9463B6 0xAA8BD440 b1207
	static BOOL _IS_PED_EXCLUSIVE_DRIVER_OF_VEHICLE(Ped ped, Vehicle vehicle, int* outIndex) { return invoke<BOOL>(0x02796EB0, ped, vehicle, outIndex); } // 0xB213D2A560B2E48B b1207
	static void _0xDC0556D0F484ECAA(Any p0) { invoke<Void>(0x02797060, p0); } // 0xDC0556D0F484ECAA b1207
	static void _SET_DISABLE_SUPERDUMMY_MODE(Vehicle vehicle, BOOL p1) { invoke<Void>(0x02797110, vehicle, p1); } // 0x1716D787D9B94202 b1232
	static float GET_VEHICLE_BODY_HEALTH(Vehicle vehicle) { return invoke<float>(0x027971E0, vehicle); } // 0x42113B857E33C16E 0x2B2FCC28 b1207
	static void SET_VEHICLE_BODY_HEALTH(Vehicle vehicle, float value) { invoke<Void>(0x02797290, vehicle, value); } // 0x55CCAAE4F28C67A0 0x920C2517 b1207
	static Any _0xE777DDF3E78397E8(Any p0) { return invoke<Any>(0x02797350, p0); } // 0xE777DDF3E78397E8 b1207
	static void _0xCEC4CA2CAB8FA98C(Vehicle vehicle, BOOL p1) { invoke<Void>(0x02797400, vehicle, p1); } // 0xCEC4CA2CAB8FA98C b1207
	static void _0x012701ED938B85DE(Any p0, Any p1) { invoke<Void>(0x027974C0, p0, p1); } // 0x012701ED938B85DE b1207
	static void _0x8379E05871AD24E0() { invoke<Void>(0x027974E0); } // 0x8379E05871AD24E0 b1207
	static void _0xF5FFB08976911B50(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x027974F0, p0, p1, p2, p3); } // 0xF5FFB08976911B50 b1207
	static BOOL _0x316CDB5B6E8F4110(Ped mount, Vehicle draft, int harnessId) { return invoke<BOOL>(0x02797560, mount, draft, harnessId); } // 0x316CDB5B6E8F4110 b1207
	static Any _0x4402960666000E62(Vehicle draft, int harnessId) { return invoke<Any>(0x02797630, draft, harnessId); } // 0x4402960666000E62 b1207
	static BOOL _0xB36D3EC70963BE60(Vehicle draft, Ped ped) { return invoke<BOOL>(0x02797660, draft, ped); } // 0xB36D3EC70963BE60 b1207
	static void _0x0F7F603BDE08C4D3(Any p0) { invoke<Void>(0x02797690, p0); } // 0x0F7F603BDE08C4D3 b1207
	static Any _0x5B1A26BB18E7D451(Any p0) { return invoke<Any>(0x02797760, p0); } // 0x5B1A26BB18E7D451 b1207
	static Vector3 _0x35D302397E524939(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Vector3>(0x02797900, p0, p1, p2, p3, p4, p5); } // 0x35D302397E524939 b1207
	static void _0xC399CC89FBA05DA0(Vehicle vehicle, BOOL p1) { invoke<Void>(0x02797CE0, vehicle, p1); } // 0xC399CC89FBA05DA0 b1207
	static void _GET_ROWING_OARS(Vehicle vehicle, Entity* left, Entity* right) { invoke<Void>(0x02797DF0, vehicle, left, right); } // 0xA6E210FB4283B767 b1207
	static Ped GET_DRIVER_OF_VEHICLE(Vehicle vehicle) { return invoke<Ped>(0x02797F00, vehicle); } // 0x2963B5C1637E8A27 b1207
	static void _0xF489F94BFEE12BB0(Vehicle vehicle, Hash coachrobberyLoot) { invoke<Void>(0x02798010, vehicle, coachrobberyLoot); } // 0xF489F94BFEE12BB0 b1207
	static Any _0x0BA4250D20007C2E(Any p0) { return invoke<Any>(0x02798020, p0); } // 0x0BA4250D20007C2E b1207
	static void _0x2200AB13CBD10F4E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x02798140, p0, p1, p2, p3, p4, p5); } // 0x2200AB13CBD10F4E b1207
	static void _0xB42C87521D1BDD2F(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x02798160, p0, p1, p2, p3); } // 0xB42C87521D1BDD2F b1207
	static void _0xC351394B932A6A50(Any p0) { invoke<Void>(0x02798250, p0); } // 0xC351394B932A6A50 b1207
	static void _0x172E9DD35858DCD7(Any p0) { invoke<Void>(0x02798320, p0); } // 0x172E9DD35858DCD7 b1207
	static int _GET_BREAKABLE_VEHICLE_LOCKS_STATE(Vehicle vehicle) { return invoke<int>(0x027985F0, vehicle); } // 0xE015CF1F2C0959D8 b1207
	static Any _0x877EA24EB1614495(Any p0, Any p1, Any p2) { return invoke<Any>(0x02798700, p0, p1, p2); } // 0x877EA24EB1614495 b1207
	static Object _GET_BREAKABLE_VEHICLE_LOCK_OBJECT(Vehicle vehicle, int index) { return invoke<Object>(0x027987F0, vehicle, index); } // 0x58F2244C1286D09A b1207
	static int _GET_NUM_BREAKABLE_VEHICLE_LOCK_OBJECTS(Vehicle vehicle) { return invoke<int>(0x02798970, vehicle); } // 0x2FA86833E3617E2D b1207
	static void SET_BREAKABLE_VEHICLE_LOCKS_UNBREAKABLE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x02798A70, vehicle, toggle); } // 0xBC4735F48CD983EF b1207
	static void _0x9D12796EF4BF9EA9(Any p0) { invoke<Void>(0x02798B90, p0); } // 0x9D12796EF4BF9EA9 b1207
	static void _0x850CE59DEC2028F3(Vehicle vehicle, Any p1) { invoke<Void>(0x02798CA0, vehicle, p1); } // 0x850CE59DEC2028F3 b1207
	static void _0x0355FE37240E2C77(Any p0, Any p1) { invoke<Void>(0x02798D90, p0, p1); } // 0x0355FE37240E2C77 b1207
	static void _0x3D86997A86FEEF0D(Any p0, Any p1) { invoke<Void>(0x02798E90, p0, p1); } // 0x3D86997A86FEEF0D b1207
	static void _0xD826690B5CF3BEFF(Vehicle vehicle, Any p1) { invoke<Void>(0x02798F50, vehicle, p1); } // 0xD826690B5CF3BEFF b1207
	static void _0xC372B6A88F6E4AD8(Vehicle vehicle, int wheelIndex, float destroyingForce) { invoke<Void>(0x02799030, vehicle, wheelIndex, destroyingForce); } // 0xC372B6A88F6E4AD8 b1207
	static BOOL GET_DRAFT_ANIMAL_COUNT(Vehicle vehicle, int* expected, int* actual) { return invoke<BOOL>(0x02799050, vehicle, expected, actual); } // 0xA19447D83294E29F b1207
	static void _0x165BE2001E5E4B75(Any p0) { invoke<Void>(0x027991B0, p0); } // 0x165BE2001E5E4B75 b1207
	static void _0x6090A031C69F384E(Any p0, Any p1) { invoke<Void>(0x02799270, p0, p1); } // 0x6090A031C69F384E b1207
	static void _0x226C6A4E3346D288(Vehicle draft, Any p1) { invoke<Void>(0x02799330, draft, p1); } // 0x226C6A4E3346D288 b1207
	static void _0x41503629D1139ABC(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x02799400, p0, p1, p2, p3, p4); } // 0x41503629D1139ABC b1207
	static void _0x0794199B25E499E1(Any p0, Any p1) { invoke<Void>(0x02799420, p0, p1); } // 0x0794199B25E499E1 b1207
	static void _0x73118A3EE9C9B6DB(Any p0, Any p1, Any p2) { invoke<Void>(0x02799520, p0, p1, p2); } // 0x73118A3EE9C9B6DB b1207
	static Any _0xE1C0F8781BF130C2(Any p0, Any p1) { return invoke<Any>(0x02799680, p0, p1); } // 0xE1C0F8781BF130C2 b1207
	static Any _0xCB2CA620C48BC875(Any p0, Any p1) { return invoke<Any>(0x027997D0, p0, p1); } // 0xCB2CA620C48BC875 b1207
	static Any _0x18714953CCED17D3(Any p0) { return invoke<Any>(0x02799890, p0); } // 0x18714953CCED17D3 b1207
	static void _0x41F0B254DDF71473(Any p0) { invoke<Void>(0x02799970, p0); } // 0x41F0B254DDF71473 b1207
	static void _SET_VEHICLE_TO_DETERIORATE(Vehicle vehicle, float amount, int p2, BOOL p3) { invoke<Void>(0x02799AD0, vehicle, amount, p2, p3); } // 0x8E5DA070BAD3279E b1207
	static BOOL _IS_VEHICLE_DOOR_BROKEN(Vehicle vehicle, int doorId) { return invoke<BOOL>(0x02799BD0, vehicle, doorId); } // 0xE979BB5602AD3402 b1207
	static Entity _BREAK_OFF_VEHICLE_WHEEL(Vehicle vehicle, int wheelIndex) { return invoke<Entity>(0x02799CF0, vehicle, wheelIndex); } // 0xD4F5EFB55769D272 b1207
	static Any _0xE1A83D4A3B5D7938(Any p0) { return invoke<Any>(0x02799D20, p0); } // 0xE1A83D4A3B5D7938 b1207
	static void _0x6DE072AC8A95FFC1(Any p0, Any p1) { invoke<Void>(0x02799E70, p0, p1); } // 0x6DE072AC8A95FFC1 b1207
	static void _SET_DRAFT_VEHICLE_DESIRED_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0x02799F50, vehicle, speed); } // 0x0C3F0F7F92CA847C b1207
	static float _GET_DRAFT_VEHICLE_DESIRED_SPEED(Vehicle vehicle) { return invoke<float>(0x0279A020, vehicle); } // 0xC6D7DDC843176701 b1207
	static void _0xC4A2C11FC0D41916(Any p0, Any p1) { invoke<Void>(0x0279A0E0, p0, p1); } // 0xC4A2C11FC0D41916 b1207
	static void _0xFC4F15A7DDDC47B1(Any p0, Any p1) { invoke<Void>(0x0279A1B0, p0, p1); } // 0xFC4F15A7DDDC47B1 b1207
	static void _0x4C60C333F9CCA2B6(Vehicle vehicle, int p1) { invoke<Void>(0x0279A280, vehicle, p1); } // 0x4C60C333F9CCA2B6 b1207
	static void _0xCF342503CA4C8DF1(Any p0, Any p1) { invoke<Void>(0x0279A350, p0, p1); } // 0xCF342503CA4C8DF1 b1207
	static void _0x06A09A6E0C6D2A84(Any p0, Any p1) { invoke<Void>(0x0279A430, p0, p1); } // 0x06A09A6E0C6D2A84 b1207
	static void _0xAE7E66A61E7C17A5(Any p0, Any p1) { invoke<Void>(0x0279A510, p0, p1); } // 0xAE7E66A61E7C17A5 b1207
	static void _0xEF28A614B4B264B8(Any p0, Any p1) { invoke<Void>(0x0279A640, p0, p1); } // 0xEF28A614B4B264B8 b1207
	static void _0x04F0579DBDD32F34(Any p0) { invoke<Void>(0x0279A770, p0); } // 0x04F0579DBDD32F34 b1207
	static void _0x12F6C6ED3EFF42DE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x0279A840, p0, p1, p2, p3); } // 0x12F6C6ED3EFF42DE b1207
	static void _0x87B974E54C71BA7B(Any p0, Any p1) { invoke<Void>(0x0279A920, p0, p1); } // 0x87B974E54C71BA7B b1207
	static Any _0xBD3C4A2ED509205E(Any p0) { return invoke<Any>(0x0279AA20, p0); } // 0xBD3C4A2ED509205E b1207
	static Vehicle _CREATE_MISSION_TRAIN(Hash configHash, float x, float y, float z, BOOL direction, BOOL passengers, BOOL p6, BOOL conductor) { return invoke<Vehicle>(0x0279AB30, configHash, x, y, z, direction, passengers, p6, conductor); } // 0xC239DBD9A57D2A71 b1207
	static void _0xD1EFA8D68BF5D63D(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x0279AB80, p0, p1, p2, p3); } // 0xD1EFA8D68BF5D63D b1207
	static Any _0x1121B07088ED3013(Any p0) { return invoke<Any>(0x0279AB90, p0); } // 0x1121B07088ED3013 b1207
	static Any _0x42404D57D621601A(Any p0) { return invoke<Any>(0x0279ACF0, p0); } // 0x42404D57D621601A b1207
	static Any _0x288CBB414C3C2FBB(Any p0) { return invoke<Any>(0x0279AD10, p0); } // 0x288CBB414C3C2FBB b1207
	static void _0x6FD7BDF10304363A(Any p0, Any p1) { invoke<Void>(0x0279AEA0, p0, p1); } // 0x6FD7BDF10304363A b1207
	static void _0xCEB1F1EED484A5B4(Any p0, Any p1) { invoke<Void>(0x0279AFB0, p0, p1); } // 0xCEB1F1EED484A5B4 b1207
	static Any _0xF57DB8E83DCD8349(Any p0) { return invoke<Any>(0x0279B0B0, p0); } // 0xF57DB8E83DCD8349 b1207
	static void _0x7C9E45A4CED2E8DA(Any p0, Any p1) { invoke<Void>(0x0279B180, p0, p1); } // 0x7C9E45A4CED2E8DA b1207
	static void _0x87344305778E5415(Any p0, Any p1) { invoke<Void>(0x0279B240, p0, p1); } // 0x87344305778E5415 b1207
	static void _0x6835AFEA10E186F4(Any p0, Any p1) { invoke<Void>(0x0279B310, p0, p1); } // 0x6835AFEA10E186F4 b1207
	static void _0x8C6D9A399126C194(Any p0, Any p1) { invoke<Void>(0x0279B3E0, p0, p1); } // 0x8C6D9A399126C194 b1207
	static Any _0x14DA8C4BC2CCD90A(Any p0) { return invoke<Any>(0x0279B510, p0); } // 0x14DA8C4BC2CCD90A b1207
	static Any _0xCACAB2B123BBDBD6(Any p0, Any p1, Any p2) { return invoke<Any>(0x0279B620, p0, p1, p2); } // 0xCACAB2B123BBDBD6 b1207
	static void _0xFF2B1F59FB892F14(Any p0) { invoke<Void>(0x0279B660, p0); } // 0xFF2B1F59FB892F14 b1207
	static void _0x5AADC7BBBB1BCEEB(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x0279B720, p0, p1, p2, p3, p4); } // 0x5AADC7BBBB1BCEEB b1207
	static BOOL _0xD798DF5DB67B1659(Vehicle vehicle) { return invoke<BOOL>(0x0279B740, vehicle); } // 0xD798DF5DB67B1659 b1207
	static void _0x31F343383F19C987(Vehicle vehicle, float height, BOOL immediately) { invoke<Void>(0x0279B800, vehicle, height, immediately); } // 0x31F343383F19C987 b1207
	static void _0x07E2E21E799080A0(Any p0, Any p1) { invoke<Void>(0x0279B8E0, p0, p1); } // 0x07E2E21E799080A0 b1207
	static void _0xC2E62678D602853C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x0279B9C0, p0, p1, p2, p3, p4, p5, p6); } // 0xC2E62678D602853C b1207
	static void _0x873AAF600CC36DAC(Any p0) { invoke<Void>(0x0279BAE0, p0); } // 0x873AAF600CC36DAC b1207
	static Any _0x51C7694E140FAE43(Any p0) { return invoke<Any>(0x0279BB90, p0); } // 0x51C7694E140FAE43 b1207
	static void _0x8DECD262602548B9(Any p0, Any p1) { invoke<Void>(0x0279BC60, p0, p1); } // 0x8DECD262602548B9 b1207
	static void _0xCBC7B6F9A56B79F6(Any p0, Any p1) { invoke<Void>(0x0279BD30, p0, p1); } // 0xCBC7B6F9A56B79F6 b1207
	static Any _0x37D238BE69F7378A(Any p0) { return invoke<Any>(0x0279BE00, p0); } // 0x37D238BE69F7378A b1207
	static void _0x703D4FB366DA4452(Any p0, Any p1) { invoke<Void>(0x0279C070, p0, p1); } // 0x703D4FB366DA4452 b1207
	static void _0x762FDC4C19E5A981(Any p0, Any p1) { invoke<Void>(0x0279C170, p0, p1); } // 0x762FDC4C19E5A981 b1207
	static Any _0x2045429505158D1A(Any p0) { return invoke<Any>(0x0279C240, p0); } // 0x2045429505158D1A b1207
	static void _0x13EB275BF81636D1(Any p0, Any p1) { invoke<Void>(0x0279C380, p0, p1); } // 0x13EB275BF81636D1 b1207
}

namespace VOICE
{
	static BOOL _0xCCF71FCFA0070B1A() { return invoke<BOOL>(0x0279FC60); } // 0xCCF71FCFA0070B1A b1207
	static void _0x79F478FF5F9F4F05(BOOL p0) { invoke<Void>(0x0279FC80, p0); } // 0x79F478FF5F9F4F05 b1207
	static BOOL _0xAA35FD9ABAB490A3(Player player) { return invoke<BOOL>(0x0279FCB0, player); } // 0xAA35FD9ABAB490A3 b1207
	static BOOL _0x356135B9B10A2A82(Any* gamerHandle) { return invoke<BOOL>(0x0279FDB0, gamerHandle); } // 0x356135B9B10A2A82 b1207
	static BOOL _0xEF6F2A35FAAF2ED7(Player player) { return invoke<BOOL>(0x0279FEC0, player); } // 0xEF6F2A35FAAF2ED7 b1207
	static BOOL _0x49623BCFC3A3D829(Player player, BOOL muted) { return invoke<BOOL>(0x027A00A0, player, muted); } // 0x49623BCFC3A3D829 b1207
	static BOOL _0x919AF2D93E9AA89D(Player player) { return invoke<BOOL>(0x027A0110, player); } // 0x919AF2D93E9AA89D b1207
	static BOOL _0x0DED260A1958A82E(Player player) { return invoke<BOOL>(0x027A01F0, player); } // 0x0DED260A1958A82E b1207
	static BOOL _0x8E462DB1EAA9C47C(Player player) { return invoke<BOOL>(0x027A02D0, player); } // 0x8E462DB1EAA9C47C b1207
	static float _0x5CA7FB7D6DE49DCC(Player player) { return invoke<float>(0x027A03B0, player); } // 0x5CA7FB7D6DE49DCC b1207
	static void _0x58125B691F6827D5(float proximity) { invoke<Void>(0x027A0410, proximity); } // 0x58125B691F6827D5 b1207
	static float _0x2F82CAB262C8AE26(Player player) { return invoke<float>(0x027A0480, player); } // 0x2F82CAB262C8AE26 b1207
	static void _0x08797A8C03868CB8(float threshold) { invoke<Void>(0x027A04D0, threshold); } // 0x08797A8C03868CB8 b1207
	static void _0xB779F4FA19269AEC(int p0) { invoke<Void>(0x027A0530, p0); } // 0xB779F4FA19269AEC b1207
	static void _0x1FBF7F5BA7E4BE3A(int p0) { invoke<Void>(0x027A0560, p0); } // 0x1FBF7F5BA7E4BE3A b1207
	static void _0xDC9B361CB7776673(Player player) { invoke<Void>(0x027A0590, player); } // 0xDC9B361CB7776673 b1207
	static void _0xEC8703E4536A9952() { invoke<Void>(0x027A05C0); } // 0xEC8703E4536A9952 b1207
	static Any _0xDB622ECD3DCBE078(Player player) { return invoke<Any>(0x027A05E0, player); } // 0xDB622ECD3DCBE078 b1207
	static void _0xB6E79850B759A30E(int teamId, BOOL allow) { invoke<Void>(0x027A0630, teamId, allow); } // 0xB6E79850B759A30E b1207
	static void _0x4791899615D70FA2(Player player, int p1, int p2) { invoke<Void>(0x027A0650, player, p1, p2); } // 0x4791899615D70FA2 b1207
	static void _0xF8938CF3984092A5(Player player) { invoke<Void>(0x027A0670, player); } // 0xF8938CF3984092A5 b1207
	static int _0x767931C727DF2ED7(Player player, int p1) { return invoke<int>(0x027A06D0, player, p1); } // 0x767931C727DF2ED7 b1207
	static void _0x1C38C3577901AF1F() { invoke<Void>(0x027A0760); } // 0x1C38C3577901AF1F b1207
	static void _0xB3E8841F6BDAF83E() { invoke<Void>(0x027A0780); } // 0xB3E8841F6BDAF83E b1207
}

namespace VOLUME
{
	static Volume _CREATE_VOLUME_BY_HASH(Hash volumeType, float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ) { return invoke<Volume>(0x027AF760, volumeType, x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ); } // 0x502022FA1AF9DC86 b1207
	static Volume _CREATE_VOLUME_BOX(float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ) { return invoke<Volume>(0x027AF7A0, x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ); } // 0xDF85637F22706891 b1207
	static Volume _CREATE_VOLUME_CYLINDER(float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ) { return invoke<Volume>(0x027AF7E0, x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ); } // 0x0522D4774B82E3E6 b1207
	static Volume _CREATE_VOLUME_SPHERE(float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ) { return invoke<Volume>(0x027AF820, x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ); } // 0xB3FB80A32BAE3065 b1207
	static Volume _CREATE_VOLUME_AGGREGATE() { return invoke<Volume>(0x027AF860); } // 0x59F6F5C1D129F106 b1207
	static Volume _CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Hash volumeType, float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, const char* name) { return invoke<Volume>(0x027AFA70, volumeType, x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, name); } // 0x1F85E4AC774A201E b1207
	static Volume _CREATE_ANTI_GRIEF_VOLUME(Hash volumeType, float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ) { return invoke<Volume>(0x027AFAA0, volumeType, x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ); } // 0x0EB78C2B156635B1 b1207
	static void _0xBE551C2CC421185D(Any p0, Any p1) { invoke<Void>(0x027AFAD0, p0, p1); } // 0xBE551C2CC421185D b1207
	static void _0x5B23DFF8E0948BB2(Any p0, Any p1) { invoke<Void>(0x027AFB80, p0, p1); } // 0x5B23DFF8E0948BB2 b1207
	static Volume _CREATE_WALK_AND_TALK_VOLUME(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { return invoke<Volume>(0x027AFC30, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xFD0E389CD44434B6 b1207
	static Volume _CREATE_SPEED_VOLUME(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14) { return invoke<Volume>(0x027AFC60, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); } // 0xBBE768E3AE76E07C b1207
	static Volume _CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, const char* name) { return invoke<Volume>(0x027AFD50, x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, name); } // 0xF68485C7495D848E b1207
	static Volume _CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoke<Volume>(0x027AFD80, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xDF1E350EDDF06E59 b1207
	static Volume _CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, const char* name) { return invoke<Volume>(0x027AFDB0, x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, name); } // 0x10157BC3247FF3BA b1207
	static Volume _CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME(const char* name) { return invoke<Volume>(0x027AFDE0, name); } // 0x5D580DE6398BB162 b1207
	static void _ADD_BOUNDS_TO_AGGREGATE_VOLUME(Any p0, Any p1) { invoke<Void>(0x027AFFF0, p0, p1); } // 0x6E0D3C3F828DA773 b1207
	static void _REMOVE_BOUNDS_FROM_AGGREGATE_VOLUME(Any p0, Any p1) { invoke<Void>(0x027B0110, p0, p1); } // 0xF92FA8890DECECF6 b1207
	static void _ADD_VOLUME_TO_VOLUME_AGGREGATE(Volume aggregate, Hash typeHash, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10) { invoke<Void>(0x027B02A0, aggregate, typeHash, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x12FCAA23F2320422 b1207
	static void _ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Volume aggregate, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9) { invoke<Void>(0x027B02C0, aggregate, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x39816F6F94F385AD b1207
	static void _ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Volume aggregate, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9) { invoke<Void>(0x027B02E0, aggregate, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xBCE668AAF83608BE b1207
	static void _ADD_SPHERE_VOLUME_TO_VOLUME_AGGREGATE(Volume aggregate, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9) { invoke<Void>(0x027B0300, aggregate, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x5B7D7BF36D2DE18B b1207
	static void _DELETE_VOLUME(Volume volume) { invoke<Void>(0x027B0320, volume); } // 0x43F867EF5C463A53 b1207
	static BOOL DOES_VOLUME_EXIST(Volume volume) { return invoke<BOOL>(0x027B03F0, volume); } // 0x92A78D0BEDB332A3 b1207
	static BOOL IS_POINT_IN_VOLUME(Volume volume, float x, float y, float z) { return invoke<BOOL>(0x027B0490, volume, x, y, z); } // 0xF256A75210C5C0EB b1207
	static Vector3 _GET_VOLUME_COORDS(Volume volume) { return invoke<Vector3>(0x027B0580, volume); } // 0xF70F00013A62F866 b1207
	static BOOL _SET_VOLUME_COORDS(Volume volume, float posX, float posY, float posZ) { return invoke<BOOL>(0x027B0670, volume, posX, posY, posZ); } // 0x541B8576615C33DE b1207
	static Vector3 _GET_VOLUME_ROTATION(Volume volume) { return invoke<Vector3>(0x027B0770, volume); } // 0x18675BC914891122 b1207
	static BOOL _SET_VOLUME_ROTATION(Volume volume, float rotX, float rotY, float rotZ) { return invoke<BOOL>(0x027B0A10, volume, rotX, rotY, rotZ); } // 0xA07CF1B21B56F041 b1207
	static Vector3 _GET_VOLUME_SCALE(Volume volume) { return invoke<Vector3>(0x027B0C90, volume); } // 0x3E2A25B2416DD67E b1207
	static BOOL _SET_VOLUME_SCALE(Volume volume, float scaleX, float scaleY, float scaleZ) { return invoke<BOOL>(0x027B0E40, volume, scaleX, scaleY, scaleZ); } // 0xA46E98BDC407E23D b1207
	static void _GET_VOLUME_BOUNDS(Volume volume, Vector3* min, Vector3* max) { invoke<Void>(0x027B0F40, volume, min, max); } // 0x5737199AF2DC609F b1207
	static void _0x748C5F51A18CB8F0(Any p0) { invoke<Void>(0x027B1080, p0); } // 0x748C5F51A18CB8F0 b1207
	static Any _0x2B32B11520626229(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x027B1090, p0, p1, p2, p3, p4); } // 0x2B32B11520626229 b1207
	static Any _0x40F769D31A00D5A0(Any p0, Any p1) { return invoke<Any>(0x027B10C0, p0, p1); } // 0x40F769D31A00D5A0 b1207
	static Vector3 _0xD882C5B3991575B7(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Vector3>(0x027B11F0, p0, p1, p2, p3, p4); } // 0xD882C5B3991575B7 b1207
	static void _0xB469CFD9E065EB99(Any p0, Any p1) { invoke<Void>(0x027B1300, p0, p1); } // 0xB469CFD9E065EB99 b1207
	static Any _0x7FD78DFD0C5D7B9B(Any p0) { return invoke<Any>(0x027B1540, p0); } // 0x7FD78DFD0C5D7B9B b1207
	static Any _0xEE1D6FF54CAF7714(Any p0, Any p1) { return invoke<Any>(0x027B1600, p0, p1); } // 0xEE1D6FF54CAF7714 b1207
	static void _0xD52DF30355EA7C8E(Any p0, Any p1, Any p2) { invoke<Void>(0x027B17A0, p0, p1, p2); } // 0xD52DF30355EA7C8E b1207
	static void SET_VOLUME_OWNER_PERSISTENT_CHARACTER(Volume volume, PersChar persChar, BOOL p2) { invoke<Void>(0x027B1950, volume, persChar, p2); } // 0xE2BE6FFA4A13CBB0 b1207
	static void _0x6D5F9E69BA1BE783(Any p0) { invoke<Void>(0x027B1A70, p0); } // 0x6D5F9E69BA1BE783 b1207
	static void _0x998202B206872672(Any p0) { invoke<Void>(0x027B1B10, p0); } // 0x998202B206872672 b1207
	static void _0x4A8FEFC43FD8AC9B(Any p0, Any p1, Any p2) { invoke<Void>(0x027B1CD0, p0, p1, p2); } // 0x4A8FEFC43FD8AC9B b1207
	static void _0xF3A2FBA5985C8CD5(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x027B1E10, p0, p1, p2, p3); } // 0xF3A2FBA5985C8CD5 b1207
	static void _0x53D05D60E5F5B40C(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x027B2010, p0, p1, p2, p3); } // 0x53D05D60E5F5B40C b1207
	static Any _0xCA5C90D40665D5CE(Any p0, Any p1) { return invoke<Any>(0x027B21A0, p0, p1); } // 0xCA5C90D40665D5CE b1207
	static void _0x3EFABB21E14A6BD1(Any p0, Any p1, Any p2) { invoke<Void>(0x027B22D0, p0, p1, p2); } // 0x3EFABB21E14A6BD1 b1207
	static Any _0xFEFF01B5725BCD22(Any p0) { return invoke<Any>(0x027B2390, p0); } // 0xFEFF01B5725BCD22 b1207
	static Any _0x00BBF7CEAE8C666A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x027B2440, p0, p1, p2, p3, p4, p5); } // 0x00BBF7CEAE8C666A b1207
	static Any _0xF383E96C4904DF0C(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x027B2470, p0, p1, p2, p3); } // 0xF383E96C4904DF0C b1207
	static Any _0xF6A8A652A6B186CD(Any p0) { return invoke<Any>(0x027B2530, p0); } // 0xF6A8A652A6B186CD b1207
	static Vector3 _0xC4019CF9AE8E931A(Any p0) { return invoke<Vector3>(0x027B2590, p0); } // 0xC4019CF9AE8E931A b1207
	static Any _0xF6CE6F9C3897804E(Any p0) { return invoke<Any>(0x027B26B0, p0); } // 0xF6CE6F9C3897804E b1207
	static Any _0xF6F5447D418DAA82(Any p0) { return invoke<Any>(0x027B2700, p0); } // 0xF6F5447D418DAA82 b1207
	static void _0xD4FA73FE628FEC63(Any p0, Any p1) { invoke<Void>(0x027B2840, p0, p1); } // 0xD4FA73FE628FEC63 b1207
	static void _0xB440F4E35393FC39(Any p0, Any p1) { invoke<Void>(0x027B2860, p0, p1); } // 0xB440F4E35393FC39 b1207
	static void _0xD460135C98940274(Any p0, Any p1) { invoke<Void>(0x027B28B0, p0, p1); } // 0xD460135C98940274 b1207
	static void _0xEBA87B9273835CF3(Any p0, Any p1) { invoke<Void>(0x027B28D0, p0, p1); } // 0xEBA87B9273835CF3 b1207
	static Any _0xAA9EE2AAFC717623(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x027B2960, p0, p1, p2, p3, p4, p5); } // 0xAA9EE2AAFC717623 b1207
	static Any _0x870E9981ED27C815(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x027B29A0, p0, p1, p2, p3, p4, p5); } // 0x870E9981ED27C815 b1207
	static BOOL DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(float x, float y, float z, float radius, BOOL p4, int p5, int p6) { return invoke<BOOL>(0x027B29E0, x, y, z, radius, p4, p5, p6); } // 0x397769175A7DBB30 b1207
	static Any _0x769BB7626B8CDB06(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0x027B2A20, p0, p1, p2, p3, p4, p5, p6); } // 0x769BB7626B8CDB06 b1207
	static Any _0x51E52C9687FCDEEC(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0x027B2A60, p0, p1, p2, p3, p4, p5, p6); } // 0x51E52C9687FCDEEC b1207
	static Any _0x77A6E4AD0C496F81(Any p0) { return invoke<Any>(0x027B2AA0, p0); } // 0x77A6E4AD0C496F81 b1207
	static void _0xEC43C2FFB70E3F30(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x027B2AD0, p0, p1, p2, p3); } // 0xEC43C2FFB70E3F30 b1207
	static void _0x695DAC2DB928F308(Any p0, Any p1) { invoke<Void>(0x027B2B00, p0, p1); } // 0x695DAC2DB928F308 b1207
	static void _0xFDFECC6EE4491E11(Any p0) { invoke<Void>(0x027B2BB0, p0); } // 0xFDFECC6EE4491E11 b1207
	static void _0xAC355980681A7F89(Any p0) { invoke<Void>(0x027B2BD0, p0); } // 0xAC355980681A7F89 b1207
	static Any _0x58D3803FA639A3BB(Any p0) { return invoke<Any>(0x027B2BF0, p0); } // 0x58D3803FA639A3BB b1311
	static void _0xC61E2FD926DBB406() { invoke<Void>(0x027B2CA0); } // 0xC61E2FD926DBB406 b1311
	static int REQUEST_VOLUME_LOCK(float x, float y, float z, float radius, int p4, int p5) { return invoke<int>(0x027B2CC0, x, y, z, radius, p4, p5); } // 0xF14BCEF290F869E1 b1207
	static int REQUEST_VOLUME_LOCK_WITH_ARGS(Any* args) { return invoke<int>(0x027B2CF0, args); } // 0x183C0B6CFEFFCAE4 b1207
	static BOOL IS_VOLUME_LOCK_REQUEST_VALID(int volLockRequestId) { return invoke<BOOL>(0x027B2D20, volLockRequestId); } // 0xA4A4359320345B34 b1207
	static int GET_VOLUME_LOCK_REQUEST_STATUS(int volLockRequestId) { return invoke<int>(0x027B2D40, volLockRequestId); } // 0xB33A604345F58202 b1207
	static Any _0x351D71B8B72B858B(Any p0) { return invoke<Any>(0x027B2DF0, p0); } // 0x351D71B8B72B858B b1207
	static void _0xFA15C9A320E707B0() { invoke<Void>(0x027B2E30); } // 0xFA15C9A320E707B0 b1207
	static void _0x52572B331E693AED(Any p0, Any p1, Any p2) { invoke<Void>(0x027B2E40, p0, p1, p2); } // 0x52572B331E693AED b1207
	static void _0x128FC3A893BF853A(Any p0) { invoke<Void>(0x027B2FA0, p0); } // 0x128FC3A893BF853A b1207
	static void _0xFD010A2154B40676(Volume volume, Hash relationshipGroup) { invoke<Void>(0x027B2FB0, volume, relationshipGroup); } // 0xFD010A2154B40676 b1207
	static Hash _0x666C2F53ABEFC952(Volume volume) { return invoke<Hash>(0x027B3110, volume); } // 0x666C2F53ABEFC952 b1207
}

namespace WATER
{
	static void DISABLE_WATER_LOOKUP() { invoke<Void>(0xDEADBEEF); } // 0x754616EC6965D1FB b1207
	static void ENABLE_WATER_LOOKUP() { invoke<Void>(0x027B6220); } // 0x754616EC6965D1BF b1207
	static BOOL GET_WATER_HEIGHT(float x, float y, float z, float* height) { return invoke<BOOL>(0x027B6260, x, y, z, height); } // 0xFCA8B23F28813F69 0xD864E17C b1207
	static BOOL GET_WATER_HEIGHT_NO_WAVES(float x, float y, float z, float* height) { return invoke<BOOL>(0x027B6460, x, y, z, height); } // 0xDCF3690AA262C03F 0x262017F8 b1207
	static BOOL TEST_PROBE_AGAINST_ALL_WATER(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke<BOOL>(0x027B6630, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x8974647ED222EA5F 0x4A962D55 b1207
	static BOOL TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(float x, float y, float z, Any p3, float* height) { return invoke<BOOL>(0x027B6950, x, y, z, p3, height); } // 0x2B3451FA1E3142E2 0x4C71D143 b1207
	static void REMOVE_EXTRA_CALMING_QUAD(int p0) { invoke<Void>(0x027B6C90, p0); } // 0x4BEF8DD75AF6C71C 0x45268B6F b1207
	static void _0x09A1C7DFDCE54FBC(int p0) { invoke<Void>(0x027B6CC0, p0); } // 0x09A1C7DFDCE54FBC b1207
	static void _0xF0FBF193F1F5C0EA(Ped ped) { invoke<Void>(0x027B6CF0, ped); } // 0xF0FBF193F1F5C0EA b1207
	static void _0xA33F5069B0CB89B8() { invoke<Void>(0x027B6D90); } // 0xA33F5069B0CB89B8 b1207
	static void _0xB34A6009A0DB80B8(Entity entity) { invoke<Void>(0x027B6DB0, entity); } // 0xB34A6009A0DB80B8 b1207
	static void _0xC63540AEF8384732(float wavesHeight, float p1, int p2, float p3, float p4, float p5, float p6, float wavesStrength, int p8) { invoke<Void>(0x027B6F40, wavesHeight, p1, p2, p3, p4, p5, p6, wavesStrength, p8); } // 0xC63540AEF8384732 b1207
	static void _0xC63540AEF8384769() { invoke<Void>(0xDEADBEEF); } // 0xC63540AEF8384769 b1207
	static void _SET_WORLD_WATER_TYPE(int waterType) { invoke<Void>(0x027B7080, waterType); } // 0xE8770EE02AEE45C2 b1207
	static int _GET_WORLD_WATER_TYPE() { return invoke<int>(0x027B70A0); } // 0x189739A7631C1867 b1207
	static void _0x0DCEC6A92E497E17(Entity entity, int p1) { invoke<Void>(0x027B70B0, entity, p1); } // 0x0DCEC6A92E497E17 b1207
	static void _0xE8126623008372AA() { invoke<Void>(0x027B7180); } // 0xE8126623008372AA b1207
}

namespace WEAPON
{
	static Hash _GET_WEAPON_UNLOCK(Hash weaponHash) { return invoke<Hash>(0x027F0620, weaponHash); } // 0x865F36299079FB75 b1207
	static void _ADD_AMMO_TO_PED(Ped ped, Hash weaponHash, int amount, Hash addReason) { invoke<Void>(0x027F0640, ped, weaponHash, amount, addReason); } // 0xB190BCA3F4042F95 b1207
	static void _ADD_AMMO_TO_PED_BY_TYPE(Ped ped, Hash ammoType, int amount, Hash addReason) { invoke<Void>(0x027F0710, ped, ammoType, amount, addReason); } // 0x106A811C6D3035F3 b1207
	static void _REMOVE_AMMO_FROM_PED(Ped ped, Hash weaponHash, int amount, Hash removeReason) { invoke<Void>(0x027F07E0, ped, weaponHash, amount, removeReason); } // 0xF4823C813CB8277D b1207
	static void _REMOVE_AMMO_FROM_PED_BY_TYPE(Ped ped, Hash ammoHash, int amount, Hash removeReason) { invoke<Void>(0x027F08B0, ped, ammoHash, amount, removeReason); } // 0xB6CFEC32E3742779 b1207
	static void _REMOVE_ALL_PED_AMMO(Ped ped) { invoke<Void>(0x027F0980, ped); } // 0x1B83C0DEEBCBB214 b1207
	static void SET_PED_AMMO(Ped ped, Hash weaponHash, int ammo) { invoke<Void>(0x027F0A80, ped, weaponHash, ammo); } // 0x14E56BC5B5DB6A19 0xBF90DF1A b1207
	static void _0x8A779706DA5CA3DD(Any p0, Any p1, Any p2) { invoke<Void>(0x027F0AA0, p0, p1, p2); } // 0x8A779706DA5CA3DD b1207
	static void _0x9409C62504A8F9E9(Any p0, Any p1) { invoke<Void>(0x027F0BB0, p0, p1); } // 0x9409C62504A8F9E9 b1207
	static void _SET_VEHICLE_WEAPON_HEADING_LIMITS(Vehicle vehicle, int p1, float minHeading, float maxHeading) { invoke<Void>(0x027F0C80, vehicle, p1, minHeading, maxHeading); } // 0x56CB3B4305A4F7CE b1207
	static Any _0xBF5987E1CDE63501(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x027F0CA0, p0, p1, p2, p3); } // 0xBF5987E1CDE63501 b1207
	static void SET_VEHICLE_WEAPON_HEADING(Vehicle vehicle, int seatIndex, float heading, BOOL p3) { invoke<Void>(0x027F0CD0, vehicle, seatIndex, heading, p3); } // 0x194D877FC5597B7D b1207
	static void SET_PED_INFINITE_AMMO(Ped ped, BOOL toggle, Hash weaponHash) { invoke<Void>(0x027F0F80, ped, toggle, weaponHash); } // 0x3EDCB0505123623B 0x9CB8D278 b1207
	static void _SET_PED_INFINITE_AMMO_CLIP(Ped ped, BOOL toggle) { invoke<Void>(0x027F0FA0, ped, toggle); } // 0xFBAA1E06B6BCA741 b1207
	static int GET_AMMO_IN_PED_WEAPON(Ped ped, Hash weaponHash) { return invoke<int>(0x027F0FC0, ped, weaponHash); } // 0x015A522136D7F951 0x0C755733 b1207
	static int GET_MAX_AMMO_IN_CLIP(Ped ped, Hash weaponHash, BOOL p2) { return invoke<int>(0x027F10F0, ped, weaponHash, p2); } // 0xA38DCFFCEA8962FA 0x6961E2A4 b1207
	static BOOL GET_AMMO_IN_CLIP(Ped ped, int* ammo, Hash weaponHash) { return invoke<BOOL>(0x027F1120, ped, ammo, weaponHash); } // 0x2E1202248937775C 0x73C100C3 b1207
	static BOOL _GET_AMMO_IN_CLIP_BY_INVENTORY_UID(Ped ped, int* ammo, Any* inventoryUid) { return invoke<BOOL>(0x027F11E0, ped, ammo, inventoryUid); } // 0x678F00858980F516 b1207
	static BOOL SET_AMMO_IN_CLIP(Ped ped, Hash weaponHash, int ammo) { return invoke<BOOL>(0x027F12A0, ped, weaponHash, ammo); } // 0xDCD2A934D65CB497 0xA54B0B10 b1207
	static Any _REFILL_AMMO_IN_CLIP(Ped ped, Any* clipInventoryUid, int p2) { return invoke<Any>(0x027F1370, ped, clipInventoryUid, p2); } // 0xDF4A3404D022ADDE b1207
	static BOOL GET_MAX_AMMO(Ped ped, int* ammo, Hash weaponHash) { return invoke<BOOL>(0x027F1440, ped, ammo, weaponHash); } // 0xDC16122C7A20C933 0x0B294796 b1207
	static void SET_PED_AMMO_BY_TYPE(Ped ped, Hash ammoType, int ammo) { invoke<Void>(0x027F1500, ped, ammoType, ammo); } // 0x5FD1E1F011E76D7E 0x311C52BB b1207
	static int GET_PED_AMMO_BY_TYPE(Ped ped, Hash ammoType) { return invoke<int>(0x027F1520, ped, ammoType); } // 0x39D22031557946C1 0x54077C4D b1207
	static void SET_PED_AMMO_TO_DROP(Ped ped, int p1, int p2) { invoke<Void>(0x027F1550, ped, p1, p2); } // 0xA4EFEF9440A5B0EF 0x2386A307 b1207
	static Hash _GET_AMMO_TYPE_FOR_WEAPON(Hash weaponHash) { return invoke<Hash>(0x027F1660, weaponHash); } // 0x5C2EA6C44F515F34 b1207
	static Hash GET_PED_AMMO_TYPE_FROM_WEAPON(Ped ped, Hash weaponHash) { return invoke<Hash>(0x027F1680, ped, weaponHash); } // 0x7FEAD38B326B9F74 0x09337863 b1207
	static Hash _GET_WEAPON_TYPE_FROM_AMMO_TYPE(Hash ammoType) { return invoke<Hash>(0x027F16B0, ammoType); } // 0x7AA043F6C41D151E b1207
	static Hash _GET_WEAPON_COMPONENT_TYPE_MODEL(Hash componentHash) { return invoke<Hash>(0x027F16D0, componentHash); } // 0x59DE03442B6C9598 b1207
	static Hash _GET_WEAPONTYPE_MODEL(Hash weaponHash) { return invoke<Hash>(0x027F1820, weaponHash); } // 0xF70825EB340E7D15 b1207
	static Any _0x46F032B8DDF46CDE(Any p0) { return invoke<Any>(0x027F1840, p0); } // 0x46F032B8DDF46CDE b1207
	static Hash GET_WEAPONTYPE_GROUP(Hash weaponHash) { return invoke<Hash>(0x027F1860, weaponHash); } // 0xEDCA14CA5199FF25 0x5F2DE833 b1207
	static Hash _0xF8204EF17410BF43(Hash weaponGroupHash, float p1, float p2, Any p3) { return invoke<Hash>(0x027F1880, weaponGroupHash, p1, p2, p3); } // 0xF8204EF17410BF43 b1207
	static BOOL _0x6ABAD7B0A854F8FB(Hash weaponHash) { return invoke<BOOL>(0x027F18C0, weaponHash); } // 0x6ABAD7B0A854F8FB b1207
	static BOOL _0x49E40483948AF062(Hash weaponHash) { return invoke<BOOL>(0x027F18F0, weaponHash); } // 0x49E40483948AF062 b1207
	static BOOL IS_WEAPON_BOW(Hash weaponHash) { return invoke<BOOL>(0x027F1920, weaponHash); } // 0xC4DEC3CA8C365A5D b1207
	static BOOL _IS_WEAPON_LANTERN(Hash weaponHash) { return invoke<BOOL>(0x027F1950, weaponHash); } // 0x79407D33328286C6 b1207
	static BOOL _IS_WEAPON_TORCH(Hash weaponHash) { return invoke<BOOL>(0x027F1980, weaponHash); } // 0x506F1DE1BFC75304 b1207
	static BOOL GIVE_WEAPON_TO_PED_WITH_OPTIONS(Ped ped, Any* data, Any* outData) { return invoke<BOOL>(0x027F19B0, ped, data, outData); } // 0xBE7E42B07FD317AC b1207
	static Hash GIVE_WEAPON_TO_PED(Ped ped, Hash weaponHash, int ammoCount, BOOL bForceInHand, BOOL bForceInHolster, int attachPoint, BOOL bAllowMultipleCopies, float p7, float p8, Hash addReason, BOOL bIgnoreUnlocks, float permanentDegradation, BOOL p12) { return invoke<Hash>(0x027F19E0, ped, weaponHash, ammoCount, bForceInHand, bForceInHolster, attachPoint, bAllowMultipleCopies, p7, p8, addReason, bIgnoreUnlocks, permanentDegradation, p12); } // 0x5E3BDDBCB83F3D84 b1207
	static void _SET_PED_CURRENT_WEAPON_COCKED_STATE(Ped ped, int p1) { invoke<Void>(0x027F1AE0, ped, p1); } // 0x5230D3F6EE56CFE6 b1207
	static Any _0x9F0E1892C7F228A8(Any p0) { return invoke<Any>(0x027F1AF0, p0); } // 0x9F0E1892C7F228A8 b1207
	static void _HOLSTER_PED_WEAPONS(Ped ped, BOOL p1, BOOL p2, BOOL p3, BOOL immediately) { invoke<Void>(0x027F1B10, ped, p1, p2, p3, immediately); } // 0x94A3C1B804D291EC b1207
	static void _HIDE_PED_WEAPONS(Ped ped, int p0, BOOL immediately) { invoke<Void>(0x027F1C70, ped, p0, immediately); } // 0xFCCC886EDE3C63EC b1207
	static void _0x4820A6939D7CEF28(Any p0, Any p1) { invoke<Void>(0x027F1C90, p0, p1); } // 0x4820A6939D7CEF28 b1207
	static void SET_CURRENT_PED_WEAPON(Ped ped, Hash weaponHash, BOOL equipNow, int attachPoint, BOOL p4, BOOL p5) { invoke<Void>(0x027F1DA0, ped, weaponHash, equipNow, attachPoint, p4, p5); } // 0xADF692B254977C0C 0xB8278882 b1207
	static BOOL GET_CURRENT_PED_WEAPON(Ped ped, Hash* weaponHash, BOOL p2, int attachPoint, BOOL p4) { return invoke<BOOL>(0x027F21C0, ped, weaponHash, p2, attachPoint, p4); } // 0x3A87E44BB9A01D54 0xB0237302 b1207
	static Entity GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Ped ped, int attachPoint) { return invoke<Entity>(0x027F2200, ped, attachPoint); } // 0x3B390A939AF0B5FC 0x5D73CD20 b1207
	static Any _0xC395355843BE134B(Any p0) { return invoke<Any>(0x027F2330, p0); } // 0xC395355843BE134B b1207
	static Hash GET_PED_BACKUP_WEAPON(Ped ped, BOOL p1) { return invoke<Hash>(0x027F23F0, ped, p1); } // 0xC71FE230A513C30F b1207
	static Any _0x486C96A0DCD2BC92(Any p0, Any p1) { return invoke<Any>(0x027F2420, p0, p1); } // 0x486C96A0DCD2BC92 b1232
	static Hash _GET_PED_WORST_WEAPON(Ped ped, BOOL p1, BOOL p2, BOOL p3) { return invoke<Hash>(0x027F2580, ped, p1, p2, p3); } // 0xDA37A053C1522F5D b1207
	static Hash GET_BEST_PED_WEAPON(Ped ped, BOOL p1, BOOL p2) { return invoke<Hash>(0x027F2720, ped, p1, p2); } // 0x8483E98E8B888AE2 0xB998D444 b1207
	static Any _0x7B98500614C8E8B8(Any p0, Any p1, Any p2) { return invoke<Any>(0x027F2860, p0, p1, p2); } // 0x7B98500614C8E8B8 b1232
	static void GET_BEST_PED_SHORTARM_GUID(Ped ped, Any* outGUID, BOOL p2, BOOL p3) { invoke<Void>(0x027F29B0, ped, outGUID, p2, p3); } // 0xF52BD94B47CCF736 b1207
	static BOOL GET_PED_WEAPON_GUID_AT_ATTACH_POINT(Ped ped, int attachPoint, Any* weaponGuid) { return invoke<BOOL>(0x027F2AF0, ped, attachPoint, weaponGuid); } // 0x6929E22158E52265 b1207
	static Any _0x9F67929D98E7C6E8(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x027F2C30, p0, p1, p2, p3); } // 0x9F67929D98E7C6E8 b1207
	static Any _0x08FF1099ED2E6E21(Any p0) { return invoke<Any>(0x027F2D20, p0); } // 0x08FF1099ED2E6E21 b1207
	static void _0xBDDA0C290C228159(Any p0, Any p1, Any p2) { invoke<Void>(0x027F2DE0, p0, p1, p2); } // 0xBDDA0C290C228159 b1207
	static BOOL SET_CURRENT_PED_VEHICLE_WEAPON(Ped ped, Hash weaponHash) { return invoke<BOOL>(0x027F2E00, ped, weaponHash); } // 0x75C55983C2C39DAA 0x8E6F2AF1 b1207
	static BOOL GET_CURRENT_PED_VEHICLE_WEAPON(Ped ped, Hash* weaponHash) { return invoke<BOOL>(0x027F2ED0, ped, weaponHash); } // 0x1017582BCD3832DC 0xF26C5D65 b1207
	static BOOL IS_PED_ARMED(Ped ped, int flags) { return invoke<BOOL>(0x027F2FF0, ped, flags); } // 0xCB690F680A3EA971 b1207
	static Any _0xA2091482ED42EF85(Any p0, Any p1) { return invoke<Any>(0x027F30B0, p0, p1); } // 0xA2091482ED42EF85 b1207
	static Any _0x2387D6E9C6B478AA(Any p0) { return invoke<Any>(0x027F32F0, p0); } // 0x2387D6E9C6B478AA b1207
	static BOOL IS_WEAPON_VALID(Hash weaponHash) { return invoke<BOOL>(0x027F33F0, weaponHash); } // 0x937C71165CF334B3 0x38CA2954 b1207
	static BOOL _IS_AMMO_VALID(Hash ammoHash) { return invoke<BOOL>(0x027F3420, ammoHash); } // 0x1F7977C9101F807F b1207
	static Any _0x23BF601A42F329A0(Any p0) { return invoke<Any>(0x027F3450, p0); } // 0x23BF601A42F329A0 b1207
	static BOOL IS_PED_CARRYING_WEAPON(Ped ped, Hash weaponHash) { return invoke<BOOL>(0x027F3550, ped, weaponHash); } // 0xF29A186ED428B552 b1207
	static BOOL HAS_PED_GOT_WEAPON(Ped ped, Hash weaponHash, int p2, BOOL p3) { return invoke<BOOL>(0x027F3870, ped, weaponHash, p2, p3); } // 0x8DECB02F88F428BC 0x43D2FA82 b1207
	static Any _0x07E1C35F0078C3F9(Any p0, Any p1) { return invoke<Any>(0x027F38B0, p0, p1); } // 0x07E1C35F0078C3F9 b1207
	static BOOL IS_PED_WEAPON_READY_TO_SHOOT(Ped ped) { return invoke<BOOL>(0x027F38E0, ped); } // 0xB80CA294F2F26749 0x02A32CB0 b1207
	static Any _0xDBC4B552B2AE9A83(Any p0, Any p1) { return invoke<Any>(0x027F39E0, p0, p1); } // 0xDBC4B552B2AE9A83 b1207
	static void GIVE_DELAYED_WEAPON_TO_PED(Ped ped, Hash weaponHash, int ammoCount, BOOL p3, Hash addReason) { invoke<Void>(0x027F3B80, ped, weaponHash, ammoCount, p3, addReason); } // 0xB282DC6EBD803C75 0x5868D20D b1207
	static void REMOVE_ALL_PED_WEAPONS(Ped ped, BOOL p1, BOOL p2) { invoke<Void>(0x027F3BA0, ped, p1, p2); } // 0xF25DF915FA38C5F3 0xA44CE817 b1207
	static void REMOVE_WEAPON_FROM_PED(Ped ped, Hash weaponHash, BOOL p2, Hash removeReason) { invoke<Void>(0x027F3BC0, ped, weaponHash, p2, removeReason); } // 0x4899CB088EDF59B8 0x9C37F220 b1207
	static void _REMOVE_WEAPON_FROM_PED_BY_GUID(Ped ped, Any* weaponGuid, Hash removeReason) { invoke<Void>(0x027F3BE0, ped, weaponGuid, removeReason); } // 0x51C3B71591811485 b1311
	static void HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(Ped ped, BOOL toggle) { invoke<Void>(0x027F3C00, ped, toggle); } // 0x6F6981D2253C208F 0x00CFD6E9 b1207
	static void SET_PED_CURRENT_WEAPON_VISIBLE(Ped ped, BOOL visible, BOOL deselectWeapon, BOOL p3, BOOL p4) { invoke<Void>(0x027F3CD0, ped, visible, deselectWeapon, p3, p4); } // 0x0725A4CCFDED9A70 0x00BECD77 b1207
	static void _SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Ped ped, int attachPoint, BOOL visible) { invoke<Void>(0x027F3D10, ped, attachPoint, visible); } // 0x67E21ACC5C0C970C b1207
	static void _SET_PED_ALL_WEAPONS_VISIBILITY(Ped ped, BOOL visible) { invoke<Void>(0x027F3E50, ped, visible); } // 0x4F806A6CFED89468 b1207
	static void SET_PED_DROPS_WEAPONS_WHEN_DEAD(Ped ped, BOOL toggle) { invoke<Void>(0x027F3FB0, ped, toggle); } // 0x476AE72C1D19D1A8 0x8A444056 b1207
	static void _0x431240A58484D5D0(Any p0, Any p1) { invoke<Void>(0x027F40B0, p0, p1); } // 0x431240A58484D5D0 b1207
	static void _0x45E57FDD531C9477(Any p0, Any p1) { invoke<Void>(0x027F41B0, p0, p1); } // 0x45E57FDD531C9477 b1207
	static void _0xF08D8FEB455F2C8C(Any p0, Any p1) { invoke<Void>(0x027F42B0, p0, p1); } // 0xF08D8FEB455F2C8C b1207
	static void _0x16D9841A85FA627E(Any p0, Any p1) { invoke<Void>(0x027F43B0, p0, p1); } // 0x16D9841A85FA627E b1207
	static BOOL GET_PED_LAST_WEAPON_IMPACT_COORD(Ped ped, Vector3* coords) { return invoke<BOOL>(0x027F44B0, ped, coords); } // 0x6C4D0409BA1A2BC2 0x9B266079 b1207
	static void _CLEAR_PED_LAST_WEAPON_DAMAGE(Ped ped) { invoke<Void>(0x027F4600, ped); } // 0x087D8F4BC65F68E4 b1207
	static BOOL _HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Entity entity, Hash weaponName, int weaponType) { return invoke<BOOL>(0x027F4700, entity, weaponName, weaponType); } // 0xDCF06D0CDFF68424 b1207
	static void SET_PED_DROPS_INVENTORY_WEAPON(Ped ped, Hash weaponHash, float xOffset, float yOffset, float zOffset, int ammoCount) { invoke<Void>(0x027F48C0, ped, weaponHash, xOffset, yOffset, zOffset, ammoCount); } // 0x208A1888007FC0E6 0x81FFB874 b1207
	static void _0xB0FB9B196A3D13F0(Any p0, Any p1, Any p2) { invoke<Void>(0x027F4990, p0, p1, p2); } // 0xB0FB9B196A3D13F0 b1207
	static void _0x2EBF70E1D8C06683(Any p0, Any p1) { invoke<Void>(0x027F4A60, p0, p1); } // 0x2EBF70E1D8C06683 b1207
	static void _0x63B83A526329AFBC(Any p0) { invoke<Void>(0x027F4B50, p0); } // 0x63B83A526329AFBC b1207
	static Any _MAKE_PED_RELOAD(Ped ped) { return invoke<Any>(0x027F4B60, ped); } // 0x79E1E511FF7EFB13 b1207
	static Any _0x0A2AB7B7ABC055F4(Any p0) { return invoke<Any>(0x027F4C20, p0); } // 0x0A2AB7B7ABC055F4 b1207
	static Entity MAKE_PED_DROP_WEAPON(Ped ped, BOOL p1, BOOL p2, BOOL p3, BOOL p4) { return invoke<Entity>(0x027F4CE0, ped, p1, p2, p3, p4); } // 0xCEF4C65DE502D367 b1207
	static Hash _GET_PED_CURRENT_HELD_WEAPON(Ped ped) { return invoke<Hash>(0x027F4DD0, ped); } // 0x8425C5F057012DAB b1207
	static void SET_ALLOW_ANY_WEAPON_DROP(Ped ped, BOOL toggle) { invoke<Void>(0x027F4ED0, ped, toggle); } // 0x78030C7867D8B9B6 b1207
	static void _0xA3716A77DCF17424(Any p0, Any p1, Any p2) { invoke<Void>(0x027F4F90, p0, p1, p2); } // 0xA3716A77DCF17424 b1207
	static void _0x457B16951AD77C1B(Any p0) { invoke<Void>(0x027F4FB0, p0); } // 0x457B16951AD77C1B b1436
	static Any _0x3799EFCC3C8CD5E1(Any p0) { return invoke<Any>(0x027F4FC0, p0); } // 0x3799EFCC3C8CD5E1 b1207
	static float _0x79B1A6E780266DB0(Ped ped) { return invoke<float>(0x027F5070, ped); } // 0x79B1A6E780266DB0 b1207
	static void _REMOVE_WEAPON_COMPONENT_FROM_PED(Ped ped, Hash componentHash, Hash weaponHash) { invoke<Void>(0x027F5260, ped, componentHash, weaponHash); } // 0x19F70C4D80494FF8 b1207
	static BOOL _HAS_PED_GOT_WEAPON_COMPONENT(Ped ped, Hash componentHash, Hash weaponHash) { return invoke<BOOL>(0x027F5280, ped, componentHash, weaponHash); } // 0xBBC67A6F965C688A b1207
	static BOOL _IS_PED_CURRENT_WEAPON_HOLSTERED(Ped ped) { return invoke<BOOL>(0x027F5340, ped); } // 0xBDD9C235D8D1052E b1207
	static Any _0xD2209866B0CB72EA(Any p0, Any p1) { return invoke<Any>(0x027F5450, p0, p1); } // 0xD2209866B0CB72EA b1207
	static void _REQUEST_WEAPON_ASSET(Hash weaponHash, int p1, BOOL p2) { invoke<Void>(0x027F55A0, weaponHash, p1, p2); } // 0x72D4CB5DB927009C b1207
	static BOOL _HAS_WEAPON_ASSET_LOADED(Hash weaponHash) { return invoke<BOOL>(0x027F55C0, weaponHash); } // 0xFF07CF465F48B830 b1207
	static void _REMOVE_WEAPON_ASSET(Hash weaponHash) { invoke<Void>(0x027F55F0, weaponHash); } // 0xC3896D03E2852236 b1207
	static void _0xE9B3FEC825668291(Any p0, Any p1, Any p2) { invoke<Void>(0x027F5600, p0, p1, p2); } // 0xE9B3FEC825668291 b1207
	static Any _0x9CCA3131E6B53C68(Any p0, Any p1, Any p2) { return invoke<Any>(0x027F5620, p0, p1, p2); } // 0x9CCA3131E6B53C68 b1207
	static const char* _GET_WEAPON_NAME_2(Hash weaponHash) { return invoke<const char*>(0x027F5650, weaponHash); } // 0x6D3AC61694A791C5 b1207
	static const char* _GET_WEAPON_NAME(Hash weaponHash) { return invoke<const char*>(0x027F5680, weaponHash); } // 0x89CF5FF3D363311E b1207
	static const char* _GET_WEAPON_NAME_WITH_PERMANENT_DEGRADATION(Hash weaponHash, float permanentDegradationLevel) { return invoke<const char*>(0x027F56B0, weaponHash, permanentDegradationLevel); } // 0x7A56D66C78D8EF8E b1207
	static void _0xB832F1A686B9B810(Any p0, Any p1, Any p2) { invoke<Void>(0x027F56E0, p0, p1, p2); } // 0xB832F1A686B9B810 b1207
	static Any _0x5A695BD328586B44(Any p0, Any p1) { return invoke<Any>(0x027F5820, p0, p1); } // 0x5A695BD328586B44 b1207
	static void _0x641351E9AD103890(Any p0, Any p1) { invoke<Void>(0x027F5920, p0, p1); } // 0x641351E9AD103890 b1207
	static void SET_INSTANTLY_EQUIP_WEAPON_PICKUPS(Ped ped, BOOL toggle) { invoke<Void>(0x027F5A50, ped, toggle); } // 0x739B9C6D0E7F7F93 b1207
	static void _0xBE711B14A159E84F(Any p0, Any p1) { invoke<Void>(0x027F5B70, p0, p1); } // 0xBE711B14A159E84F b1207
	static void _0xE9BD19F8121ADE3E(Any p0, Any p1) { invoke<Void>(0x027F5C90, p0, p1); } // 0xE9BD19F8121ADE3E b1207
	static void _0x14FF0C2545527F9B(Any p0, Any p1, Any p2) { invoke<Void>(0x027F5CA0, p0, p1, p2); } // 0x14FF0C2545527F9B b1207
	static void _0xD4C6E24D955FF061(Any p0) { invoke<Void>(0x027F5CC0, p0); } // 0xD4C6E24D955FF061 b1311
	static Any _0xAFFD0CCF31F469B8(Any p0) { return invoke<Any>(0x027F5CD0, p0); } // 0xAFFD0CCF31F469B8 b1207
	static Hash _GET_WEAPON_STAT_ID(Hash weaponHash) { return invoke<Hash>(0x027F5FE0, weaponHash); } // 0x8EC44AE8DECFF841 b1207
	static Any _0x9E2D5D6BC97A5F1E(Any p0, Any p1, Any p2) { return invoke<Any>(0x027F6000, p0, p1, p2); } // 0x9E2D5D6BC97A5F1E b1207
	static Hash _GET_PED_HOGTIE_WEAPON(Ped ped) { return invoke<Hash>(0x027F6150, ped); } // 0x90EB1CB189923587 b1207
	static Object _CREATE_WEAPON_OBJECT(Hash weaponHash, int ammoCount, float x, float y, float z, BOOL showWorldModel, float scale) { return invoke<Object>(0x027F6240, weaponHash, ammoCount, x, y, z, showWorldModel, scale); } // 0x9888652B8BA77F73 b1207
	static void REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(Any p0, Any p1) { invoke<Void>(0x027F6350, p0, p1); } // 0xF7D82B0D66777611 0xA6E7ED3C b1207
	static BOOL HAS_WEAPON_GOT_WEAPON_COMPONENT(Object weapon, Hash addonHash) { return invoke<BOOL>(0x027F6360, weapon, addonHash); } // 0x76A18844E743BF91 0x1D368510 b1207
	static void _GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(Object* weaponObject, Ped ped, Hash componentHash, BOOL p3) { invoke<Void>(0x027F6390, weaponObject, ped, componentHash, p3); } // 0x1A47699E8D533E8F b1207
	static Object _0xC6A6789BB405D11C(Ped ped, BOOL p1) { return invoke<Object>(0x027F6470, ped, p1); } // 0xC6A6789BB405D11C b1207
	static Object _0x6CA484C9A7377E4F(Ped ped, BOOL p1) { return invoke<Object>(0x027F6550, ped, p1); } // 0x6CA484C9A7377E4F b1207
	static void _GIVE_WEAPON_COMPONENT_TO_ENTITY(Entity entity, Hash componentHash, Hash weaponHash, BOOL p3) { invoke<Void>(0x027F6670, entity, componentHash, weaponHash, p3); } // 0x74C9090FDD1BB48E b1207
	static void _0x74C9080FDD1BB48E(Any p0, Any p1) { invoke<Void>(0x027F6690, p0, p1); } // 0x74C9080FDD1BB48E b1207
	static void _0x74C9080FDD1BB48F(Any p0, Any p1) { invoke<Void>(0xDEADBEEF, p0, p1); } // 0x74C9080FDD1BB48F b1207
	static void _0x74C2365FDD1BB48F(Any p0, Any p1) { invoke<Void>(0x027F6820, p0, p1); } // 0x74C2365FDD1BB48F b1207
	static void _0x74C90AAACC1DD48F(Any p0) { invoke<Void>(0x027F68E0, p0); } // 0x74C90AAACC1DD48F b1207
	static Any _0x74C8000FDD1BB111(Any p0, Any p1) { return invoke<Any>(0x027F69A0, p0, p1); } // 0x74C8000FDD1BB111 b1207
	static Any _0x74C8000FDD1BB222(Any p0, Any p1) { return invoke<Any>(0xDEADBEEF, p0, p1); } // 0x74C8000FDD1BB222 b1207
	static Any _0xF4601C1203B1A78D(Any p0, Any p1) { return invoke<Any>(0x027F6C60, p0, p1); } // 0xF4601C1203B1A78D b1207
	static void _0xCBCFFF805F1B4596(Any p0, Any p1) { invoke<Void>(0x027F6CE0, p0, p1); } // 0xCBCFFF805F1B4596 b1311
	static Hash _0x2C4FEC3D0EFA9FC0(Ped ped) { return invoke<Hash>(0x027F6DE0, ped); } // 0x2C4FEC3D0EFA9FC0 b1355
	static void _0x01F661BB9C71B465(Any p0, Any p1, Any p2) { invoke<Void>(0x027F6ED0, p0, p1, p2); } // 0x01F661BB9C71B465 b1207
	static Any _0xF3B1620B920D1708(Any p0, Any p1) { return invoke<Any>(0x027F7080, p0, p1); } // 0xF3B1620B920D1708 b1355
	static Any _0x86147D05FA831D3A(Any p0, Any p1) { return invoke<Any>(0x027F71B0, p0, p1); } // 0x86147D05FA831D3A b1355
	static void _0x408CF580C5E96D49(Any p0, Any p1) { invoke<Void>(0x027F7320, p0, p1); } // 0x408CF580C5E96D49 b1355
	static Any _0x6554ECCE226F2A2A(Any p0) { return invoke<Any>(0x027F7450, p0); } // 0x6554ECCE226F2A2A b1207
	static Any _0xCD356B42C57BFE01(Any p0, Any p1) { return invoke<Any>(0x027F7480, p0, p1); } // 0xCD356B42C57BFE01 b1355
	static Any _0xBC9444F2FF94A9C0(Any p0) { return invoke<Any>(0x027F74B0, p0); } // 0xBC9444F2FF94A9C0 b1355
	static Hash _0xD42514C182121C23(Hash pedModel) { return invoke<Hash>(0x027F7570, pedModel); } // 0xD42514C182121C23 b1207
	static void _0x899A04AFCC725D04(Ped ped, Hash weaponCollection) { invoke<Void>(0x027F7670, ped, weaponCollection); } // 0x899A04AFCC725D04 b1207
	static BOOL _0xF252A85B8F3F8C58(Hash weaponCollection, Hash dualwieldVariant) { return invoke<BOOL>(0x027F7790, weaponCollection, dualwieldVariant); } // 0xF252A85B8F3F8C58 b1207
	static Any _0x9EEFD670F10656D7(Hash weaponCollection, Hash weaponGroup) { return invoke<Any>(0x027F78B0, weaponCollection, weaponGroup); } // 0x9EEFD670F10656D7 b1207
	static Any _0xF2F585411E748B9C(Any p0, Any p1) { return invoke<Any>(0x027F7990, p0, p1); } // 0xF2F585411E748B9C b1207
	static int GET_WEAPON_CLIP_SIZE(Hash weaponHash) { return invoke<int>(0x027F79C0, weaponHash); } // 0xD3750CCC00635FC2 b1207
	static void _0xA769D753922B031B(Any p0, Any p1, Any p2) { invoke<Void>(0x027F79E0, p0, p1, p2); } // 0xA769D753922B031B b1207
	static void _0xC5899C4CD2E2495D(Any p0) { invoke<Void>(0x027F7AD0, p0); } // 0xC5899C4CD2E2495D b1207
	static BOOL GET_ALLOW_DUAL_WIELD(Ped ped) { return invoke<BOOL>(0x027F7BC0, ped); } // 0x918990BD9CE08582 b1207
	static void _SET_ALLOW_DUAL_WIELD(Ped ped, BOOL allow) { invoke<Void>(0x027F7CD0, ped, allow); } // 0x83B8D50EB9446BBA b1207
	static Any _0x44C8F4908F1B2622(Any p0, Any p1) { return invoke<Any>(0x027F7CF0, p0, p1); } // 0x44C8F4908F1B2622 b1207
	static BOOL _IS_WEAPON_KNIFE(Hash weaponHash) { return invoke<BOOL>(0x027F7DD0, weaponHash); } // 0x792E3EF76C911959 b1207
	static BOOL IS_WEAPON_REVOLVER(Hash weaponHash) { return invoke<BOOL>(0x027F7E00, weaponHash); } // 0xC212F1D05A8232BB b1207
	static BOOL IS_WEAPON_PISTOL(Hash weaponHash) { return invoke<BOOL>(0x027F7E60, weaponHash); } // 0xDDC64F5E31EEDAB6 b1207
	static BOOL IS_WEAPON_REPEATER(Hash weaponHash) { return invoke<BOOL>(0x027F7EC0, weaponHash); } // 0xDDB2578E95EF7138 b1207
	static BOOL IS_WEAPON_RIFLE(Hash weaponHash) { return invoke<BOOL>(0x027F7F20, weaponHash); } // 0x0A82317B7EBFC420 b1207
	static BOOL IS_WEAPON_SHOTGUN(Hash weaponHash) { return invoke<BOOL>(0x027F7F80, weaponHash); } // 0xC75386174ECE95D5 b1207
	static BOOL _IS_WEAPON_SNIPER(Hash weaponHash) { return invoke<BOOL>(0x027F7FE0, weaponHash); } // 0x6AD66548840472E5 b1207
	static BOOL IS_WEAPON_MELEE_WEAPON(Hash weaponHash) { return invoke<BOOL>(0x027F8040, weaponHash); } // 0x959383DCD42040DA b1207
	static BOOL _IS_WEAPON_THROWABLE(Hash weaponHash) { return invoke<BOOL>(0x027F80A0, weaponHash); } // 0x30E7C16B12DA8211 b1207
	static BOOL _IS_WEAPON_LASSO(Hash weaponHash) { return invoke<BOOL>(0x027F8100, weaponHash); } // 0x6E4E1A82081EABED b1207
	static BOOL _IS_WEAPON_BINOCULARS(Hash weaponHash) { return invoke<BOOL>(0x027F8160, weaponHash); } // 0xC853230E76A152DF b1207
	static BOOL IS_WEAPON_A_GUN(Hash weaponHash) { return invoke<BOOL>(0x027F8190, weaponHash); } // 0x705BE297EEBDB95D b1207
	static BOOL _IS_WEAPON_TWO_HANDED(Hash weaponHash) { return invoke<BOOL>(0x027F81C0, weaponHash); } // 0x0556E9D2ECF39D01 b1207
	static BOOL _IS_WEAPON_ONE_HANDED(Hash weaponHash) { return invoke<BOOL>(0x027F81F0, weaponHash); } // 0xD955FEE4B87AFA07 b1207
	static BOOL _IS_WEAPON_SILENT(Hash weaponHash) { return invoke<BOOL>(0x027F8220, weaponHash); } // 0x5809DBCA0A37C82B b1207
	static Any _0xEA522F991E120D45(Any p0) { return invoke<Any>(0x027F8250, p0); } // 0xEA522F991E120D45 b1207
	static Any _0xD2866CBA797E872E(Any p0) { return invoke<Any>(0x027F8280, p0); } // 0xD2866CBA797E872E b1232
	static Any _0x7EFACC589B98C488(Any p0) { return invoke<Any>(0x027F82B0, p0); } // 0x7EFACC589B98C488 b1207
	static BOOL SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(Hash weaponHash) { return invoke<BOOL>(0x027F82E0, weaponHash); } // 0x2C83212A7AA51D3D b1207
	static Any _0x5B235F24472F2C3B(Any p0, Any p1) { return invoke<Any>(0x027F8310, p0, p1); } // 0x5B235F24472F2C3B b1207
	static Any _0xBFCA7AFABF9D7967(Any p0, Any p1) { return invoke<Any>(0x027F8370, p0, p1); } // 0xBFCA7AFABF9D7967 b1207
	static Any _0x495A04CAEC263AF8(Any p0, Any p1) { return invoke<Any>(0x027F83D0, p0, p1); } // 0x495A04CAEC263AF8 b1207
	static Any _0x95CA12E2C68043E5(Any p0, Any p1) { return invoke<Any>(0x027F8430, p0, p1); } // 0x95CA12E2C68043E5 b1207
	static Any _0xABC18A28BAD4B46F(Any p0, Any p1) { return invoke<Any>(0x027F8490, p0, p1); } // 0xABC18A28BAD4B46F b1207
	static Any _0x80BB243789008A82(Any p0, Any p1) { return invoke<Any>(0x027F84F0, p0, p1); } // 0x80BB243789008A82 b1207
	static float _GET_WEAPON_DAMAGE(Object weaponObject) { return invoke<float>(0x027F8550, weaponObject); } // 0x904103D5D2333977 b1207
	static void _SET_WEAPON_DAMAGE(Object weaponObject, float level, BOOL p2) { invoke<Void>(0x027F8620, weaponObject, level, p2); } // 0xE22060121602493B b1207
	static float _GET_WEAPON_DIRT(Object weaponObject) { return invoke<float>(0x027F8780, weaponObject); } // 0x810E8AE9AFEA7E54 b1207
	static void _SET_WEAPON_DIRT(Object weaponObject, float level, BOOL p2) { invoke<Void>(0x027F8850, weaponObject, level, p2); } // 0x812CE61DEBCAB948 b1207
	static float _GET_WEAPON_SOOT(Object weaponObject) { return invoke<float>(0x027F8990, weaponObject); } // 0x4BF66F8878F67663 b1207
	static void _SET_WEAPON_SOOT(Object weaponObject, float level, BOOL p2) { invoke<Void>(0x027F8A60, weaponObject, level, p2); } // 0xA9EF4AD10BDDDB57 b1207
	static void _SET_WEAPON_LEVEL_THRESHOLD(Object weaponObject, float threshold) { invoke<Void>(0x027F8BA0, weaponObject, threshold); } // 0xD4071EFC83794B2F b1207
	static float GET_WEAPON_DEGRADATION(Object weaponObject) { return invoke<float>(0x027F8D20, weaponObject); } // 0x0D78E1097F89E637 b1207
	static float GET_WEAPON_PERMANENT_DEGRADATION(Object weaponObject) { return invoke<float>(0x027F8E50, weaponObject); } // 0xD56E5F336C675EFA b1207
	static void _SET_WEAPON_DEGRADATION(Object weaponObject, float level) { invoke<Void>(0x027F8F20, weaponObject, level); } // 0xA7A57E89E965D839 b1207
	static void _LISTEN_PROJECTILE_HIT_EVENTS(BOOL listen) { invoke<Void>(0x027F8FF0, listen); } // 0xDA5D3F2C6DD5B5D4 b1207
	static float _GET_WEAPON_SCALE(Object weaponObject) { return invoke<float>(0x027F9000, weaponObject); } // 0x22084CA699219624 b1207
	static void _SET_WEAPON_SCALE(Object weaponObject, float scale) { invoke<Void>(0x027F90D0, weaponObject, scale); } // 0xC3544AD0522E69B4 b1207
	static Any _0x58425FCA3D3A2D15(Any p0) { return invoke<Any>(0x027F9190, p0); } // 0x58425FCA3D3A2D15 b1207
	static Any _0xEC97101A8F311282(Any p0) { return invoke<Any>(0x027F91C0, p0); } // 0xEC97101A8F311282 b1207
	static Hash _0x7E7B19A4355FEE13(Ped ped, Object weaponObject) { return invoke<Hash>(0x027F91E0, ped, weaponObject); } // 0x7E7B19A4355FEE13 b1207
	static Any _0xAF9D167A5656D6A6(Any p0, Any p1) { return invoke<Any>(0x027F9210, p0, p1); } // 0xAF9D167A5656D6A6 b1207
	static BOOL _CAN_WEAPON_USE_AMMO_WITH_TYPE(Hash weaponHash, Hash ammoHash) { return invoke<BOOL>(0x027F9240, weaponHash, ammoHash); } // 0xC570B881754DF609 b1207
	static void _SET_PED_WEAPON_AMMO_TYPE(Ped ped, Hash weaponHash, Hash ammoHash) { invoke<Void>(0x027F9270, ped, weaponHash, ammoHash); } // 0xCC9C4393523833E2 b1207
	static void _0x183CE355115B6E75(Any p0, Any p1) { invoke<Void>(0x027F9290, p0, p1); } // 0x183CE355115B6E75 b1207
	static void _SET_PED_INVENTORY_WEAPON_AMMO_TYPE(Ped ped, Any* weaponInventoryUid, Hash ammoHash) { invoke<Void>(0x027F92A0, ped, weaponInventoryUid, ammoHash); } // 0xEBE46B501BC3FBCF b1207
	static void _DISABLE_AMMO_TYPE_FOR_PED_WEAPON(Ped ped, Hash weaponHash, Hash ammoHash) { invoke<Void>(0x027F92C0, ped, weaponHash, ammoHash); } // 0xF0D728EEA3C99775 b1207
	static void _DISABLE_AMMO_TYPE_FOR_PED(Ped ped, Hash ammoHash) { invoke<Void>(0x027F93A0, ped, ammoHash); } // 0xAA5A52204E077883 b1207
	static void _0xD63B4BA3A02A99E0(Any p0, Any p1) { invoke<Void>(0x027F94A0, p0, p1); } // 0xD63B4BA3A02A99E0 b1207
	static void _ENABLE_AMMO_TYPE_FOR_PED_WEAPON(Ped ped, Hash weaponHash, Hash ammoHash) { invoke<Void>(0x027F95A0, ped, weaponHash, ammoHash); } // 0x23FB9FACA28779C1 b1207
	static void _ENABLE_AMMO_TYPE_FOR_PED(Ped ped, Hash weaponHash) { invoke<Void>(0x027F9680, ped, weaponHash); } // 0x3B7B7908B7ADFB4B b1207
	static void _0x404514D231DB27A0(Any p0, Any p1) { invoke<Void>(0x027F9780, p0, p1); } // 0x404514D231DB27A0 b1207
	static void _0xD53846B9C931C181(Any p0, Any p1, Any p2) { invoke<Void>(0x027F9790, p0, p1, p2); } // 0xD53846B9C931C181 b1207
	static void _0x000FA7A4A8443AF7(Any p0) { invoke<Void>(0x027F9860, p0); } // 0x000FA7A4A8443AF7 b1207
	static void _0xECBB26529A737EF6(Any p0) { invoke<Void>(0x027F99B0, p0); } // 0xECBB26529A737EF6 b1207
	static Any _0xCAD4FE9398820D24(Any p0, Any p1) { return invoke<Any>(0x027F99C0, p0, p1); } // 0xCAD4FE9398820D24 b1207
	static Any _0x4823F13A21F51964(Any p0, Any p1) { return invoke<Any>(0x027F9B00, p0, p1); } // 0x4823F13A21F51964 b1207
	static void SET_CURRENT_PED_WEAPON_BY_GUID(Ped ped, Any* weaponUid, BOOL p2, BOOL p3, BOOL p4, BOOL p5) { invoke<Void>(0x027F9BC0, ped, weaponUid, p2, p3, p4, p5); } // 0x12FB95FE3D579238 b1207
	static void SET_PLAYER_PED_QUICK_SWAP_WEAPON_BY_GUID(Ped ped, Any* p1, Any* p2) { invoke<Void>(0x027F9CB0, ped, p1, p2); } // 0xEC1F85DA51D3D6C4 b1232
	static void _0xB7E52A058B07C7E2(Ped ped, Any* p1, Any* p2) { invoke<Void>(0x027F9D80, ped, p1, p2); } // 0xB7E52A058B07C7E2 b1232
	static Any _0x0DE0944ECCB3DF5D(Any p0) { return invoke<Any>(0x027F9E50, p0); } // 0x0DE0944ECCB3DF5D b1232
	static Any _0x46D42883E873C1D7(Any p0) { return invoke<Any>(0x027F9F70, p0); } // 0x46D42883E873C1D7 b1232
	static BOOL _IS_TARGET_PED_CONSTRAINED_BY_PED_USING_BOLAS(Ped ped, Ped targetPed) { return invoke<BOOL>(0x027FA060, ped, targetPed); } // 0x8D50F43298AB9545 b1232
	static Any _0x65DC4AC5B96614CB(Any p0) { return invoke<Any>(0x027FA090, p0); } // 0x65DC4AC5B96614CB b1311
}

namespace ZONE
{
	static Hash _GET_MAP_ZONE_AT_COORDS(float x, float y, float z, int type) { return invoke<Hash>(0x027FA6E0, x, y, z, type); } // 0x43AD8FC02B429D33 b1207
	static Hash _GET_WATER_MAP_ZONE_AT_COORDS(float x, float y, float z) { return invoke<Hash>(0x027FA760, x, y, z); } // 0x5BA7A68A346A5A91 b1207
}

namespace COMPAPP
{
	static void _0xB6FD96420C0126A1(Hash p0, BOOL p1) { invoke<Void>(0x00DA4C70, p0, p1); } // 0xB6FD96420C0126A1 b1207
	static void _0x74BCCEB233AD95B2(Hash p0, int p1) { invoke<Void>(0x00DA4D90, p0, p1); } // 0x74BCCEB233AD95B2 b1207
	static void _0x29C733459A9011EB(Hash p0, const char* p1) { invoke<Void>(0x00DA4E80, p0, p1); } // 0x29C733459A9011EB b1207
	static BOOL _0x7AF1BB4504EA5ED9() { return invoke<BOOL>(0x00DA5050); } // 0x7AF1BB4504EA5ED9 b1207
	static void _0xCCB4635A071FB62D() { invoke<Void>(0x00DA5090); } // 0xCCB4635A071FB62D b1207
}