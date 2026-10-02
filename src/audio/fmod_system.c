#include "fmod.h"
#include "fmod_studio.h"
#include <stdio.h>

static FMOD_STUDIO_SYSTEM *studioSystem = NULL;
static FMOD_SYSTEM *coreSystem = NULL;
static FMOD_STUDIO_BANK *masterBank = NULL;
static FMOD_STUDIO_BANK *stringsBank = NULL;

// Inicializa a engine do FMOD no Android
void PizzaScotch_FMOD_Init() {
    FMOD_Studio_System_Create(&studioSystem, FMOD_VERSION);
    FMOD_Studio_System_GetCoreSystem(studioSystem, &coreSystem);
    
    // Configura o sistema de som
    FMOD_Studio_System_Initialize(studioSystem, 1024, FMOD_STUDIO_INIT_NORMAL, FMOD_INIT_NORMAL, NULL);
    printf("PizzaScotch: FMOD Studio inicializado com sucesso!\n");
}

// Carrega os ficheiros .bank principais do Pizza Tower
void PizzaScotch_FMOD_LoadBanks(const char* basePath) {
    char masterPath[512];
    char stringsPath[512];

    snprintf(masterPath, sizeof(masterPath), "%s/Master.bank", basePath);
    snprintf(stringsPath, sizeof(stringsPath), "%s/Master.strings.bank", basePath);

    FMOD_Studio_System_LoadBankFile(studioSystem, masterPath, FMOD_STUDIO_LOAD_BANK_NORMAL, &masterBank);
    FMOD_Studio_System_LoadBankFile(studioSystem, stringsPath, FMOD_STUDIO_LOAD_BANK_NORMAL, &stringsBank);

    printf("PizzaScotch: Bancos FMOD carregados de %s\n", basePath);
}

// Atualiza o FMOD a cada frame
void PizzaScotch_FMOD_Update() {
    if (studioSystem) {
        FMOD_Studio_System_Update(studioSystem);
    }
}
