#ifndef GUARD_BATTLE_DOME_H
#define GUARD_BATTLE_DOME_H

extern u32 gPlayerPartyLostHP;

int GetDomeTrainerSelectedMons(u16 tournamentTrainerId);
int TrainerIdToDomeTournamentId(u16 trainerId);
void CopyFrontierBrainTrainerNameByFacilityIndex(u8 *str, s32 facility);

#endif // GUARD_BATTLE_DOME_H
