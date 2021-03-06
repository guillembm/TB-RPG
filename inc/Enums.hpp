#ifndef ENUMS_HPP
#define ENUMS_HPP

#include <string>
#include <vector>

enum WeaponType
{
    WT_SWORD,
    WT_LANCE,
    WT_AXE,
    WT_TOME,
    WT_ROD,
    WT_BOW,
    WT_PROJECTILE,
    WT_OTHER
};

static const std::vector<std::string> WT_Strings{"Sword", "Lance", "Axe", "Tome", "Rod", "Bow", "Projectile", "Other"};

enum DamageType
{
    DT_F,
    DT_M,
    DT_T,
    DT_ELEMS
};

enum MovementType
{
    MT_WALKING,
    MT_FLYING,
    MT_MOUNTED,
    MT_OTHER
};

static const std::vector<std::string> MT_Strings{"Walking", "Flying", "Mounted", "Other"};

enum UnitAttribute
{
    UA_HP,
    UA_RESIST_F,
    UA_RESIST_M,
    UA_DMG_F_B,
    UA_DMG_M_B,
    UA_DMG_T_B,
    UA_HEAL_B,
    UA_DMG_F_P,
    UA_DMG_M_P,
    UA_DMG_T_P,
    UA_HEAL_P,
    UA_ELEMS
};

static const std::vector<std::string> UA_Strings{"HP", "R(F)", "R(M)", "D(F).B", "D(M).B", "D(T).B", "H.B", "D(F).P", "D(M).P", "D(T).P", "H.P"};

enum OtherUnitAttribute
{
};

enum UnitState
{
    FIXED,
    DAZED,
    EFFECTS_IMMUNITY,
    GOD,
    US_ELEMS
};

static const std::vector<std::string> US_Strings{"Fixed", "Dazed", "Eff.Inm.", "GOD"};

enum ActionType
{
    AT_MOVE,
    AT_ENEMY,
    AT_ALLY,
    AT_NONE
};

enum TurnPhase
{
    TP_BEGIN,
    TP_SELECTED,
    TP_ACTION,
    TP_ABILITY,
    TP_CAST
};

enum TarjetTeam
{
    TT_ENEMY,
    TT_ALLY
};

static const std::vector<std::string> TT_Strings{"E", "A"};

enum PredefinedEffect
{
    DAMAGE_F,
    DAMAGE_M,
    DAMAGE_T,
    HEAL
};

static const std::vector<std::string> PE_Strings{"D(F)", "D(M)", "D(T)", "H"};

enum TerrainType
{
    TT_PLAINS,
    TT_FOREST,
    TT_MOUNTAIN,
    TT_WATER,
    TT_WALL,
    TT_FORTRESS
};

enum TerrainAttribute
{
    TA_TYPE,
    TA_WALKABKE,
    TA_FLYABLE,
    TA_MOUNTABLE,
    TA_DEADLY,
    TA_EFFECT
};

enum BfsType
{
    BT_MOVEMENT,
    BT_ACTION
};

#endif