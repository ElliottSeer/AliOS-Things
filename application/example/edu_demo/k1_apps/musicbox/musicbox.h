#ifndef __MUSICBOX_H__
#define __MUSICBOX_H__

#include "../menu.h"
#include "pitches.h"

extern MENU_TYP musicbox;

typedef struct
{
    char *name;
    int *notes;
    int *noteDurations;
    unsigned int noteLength;
    unsigned int musicTime;
} music_t;

typedef struct
{
    music_t **music_list;
    unsigned int music_list_len;
    int cur_music_index;
    unsigned int cur_music_note;
    unsigned int cur_music_time;
    unsigned int isPlaying;
} player_t;

int musicbox_init(void);
int musicbox_uninit(void);
void musicbox_task(void);
void musicbox_key_handel(key_code_t key_code);
void musicbox_cover_draw(int *draw_index);

static uint8_t icon_data_next_song_24_24[] = {0x00, 0x00, 0x00, 0xFE, 0xFC, 0xF8, 0xF0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7E, 0x3C, 0x18, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x3F, 0x1F, 0x0F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x00};
static icon_t icon_next_song_24_24 = {icon_data_next_song_24_24, 24, 24};

static uint8_t icon_data_previous_song_24_24[] = {0x00, 0x00, 0x00, 0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0xF8, 0xFC, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x18, 0x3C, 0x7E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x1F, 0x3F, 0x7F, 0x00, 0x00, 0x00};
static icon_t icon_previous_song_24_24 = {icon_data_previous_song_24_24, 24, 24};

static uint8_t icon_data_resemu_24_24[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFC, 0xF8, 0xF0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7E, 0x3C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x3F, 0x1F, 0x0F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
static icon_t icon_resume_24_24 = {icon_data_resemu_24_24, 24, 24};

static uint8_t icon_data_pause_24_24[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
static icon_t icon_pause_24_24 = {icon_data_pause_24_24, 24, 24};

static uint8_t icon_data_note_32_32[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF8, 0xF8, 0xF8, 0x7C, 0x7C, 0x7C, 0x3C, 0x3E, 0x3E, 0x3E, 0x9E, 0x9E, 0x9F, 0x9F, 0xCF, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x1C, 0x1C, 0x0E, 0x0E, 0x0F, 0x07, 0x07, 0x07, 0x07, 0x07, 0x03, 0x03, 0x01, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF8, 0xFC, 0xFE, 0x9E, 0x0F, 0x0F, 0x0F, 0x0F, 0x9E, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x7F, 0x7F, 0xFF, 0xF3, 0xE1, 0xE1, 0xE1, 0xE1, 0xF3, 0xFF, 0x7F, 0x3F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x0F, 0x1F, 0x1F, 0x1F, 0x1F, 0x0F, 0x0F, 0x07, 0x01, 0x00};
static icon_t icon_note_32_32 = {icon_data_note_32_32, 32, 32};

static int liang_zhi_lao_hu_Notes[] = {NOTE_C4, NOTE_D4, NOTE_E4, NOTE_C4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_C4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_C4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_C4, NOTE_D4, NOTE_G3, NOTE_C4, 0, NOTE_D4, NOTE_G3, NOTE_C4, 0};
static int liang_zhi_lao_hu_NoteDurations[] = {8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 4, 8, 8, 4, 8, 8, 8, 8, 4, 4, 8, 8, 8, 8, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
static music_t liang_zhi_lao_hu = {"liang_zhi_lao_hu", liang_zhi_lao_hu_Notes, liang_zhi_lao_hu_NoteDurations, 34};

static int Imperial_March_Notes[] = {
    // Dart Vader theme (Imperial March) - Star wars
    // Score available at https://musescore.com/user/202909/scores/1141521
    // The tenor saxophone part was used
    // notes from https://github.com/robsoncouto/arduino-songs/blob/master/imperialmarch/imperialmarch.ino

    NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_F4, REST,
    NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_F4, REST,
    NOTE_A4, NOTE_A4, NOTE_A4, NOTE_F4, NOTE_C5,

    NOTE_A4, NOTE_F4, NOTE_C5, NOTE_A4,
    NOTE_E5, NOTE_E5, NOTE_E5, NOTE_F5, NOTE_C5,
    NOTE_A4, NOTE_F4, NOTE_C5, NOTE_A4,

    NOTE_A5, NOTE_A4, NOTE_A4, NOTE_A5, NOTE_GS5, NOTE_G5,
    NOTE_DS5, NOTE_D5, NOTE_DS5, REST, NOTE_A4, NOTE_DS5, NOTE_D5, NOTE_CS5,

    NOTE_C5, NOTE_B4, NOTE_C5, REST, NOTE_F4, NOTE_GS4, NOTE_F4, NOTE_A4,
    NOTE_C5, NOTE_A4, NOTE_C5, NOTE_E5,

    NOTE_A5, NOTE_A4, NOTE_A4, NOTE_A5, NOTE_GS5, NOTE_G5,
    NOTE_DS5, NOTE_D5, NOTE_DS5, REST, NOTE_A4, NOTE_DS5, NOTE_D5, NOTE_CS5,

    NOTE_C5, NOTE_B4, NOTE_C5, REST, NOTE_F4, NOTE_GS4, NOTE_F4, NOTE_A4,
    NOTE_A4, NOTE_F4, NOTE_C5, NOTE_A4};

static int Imperial_March_NoteDurations[] = {
    -4, -4, 16, 16, 16, 16, 8, 8,
    -4, -4, 16, 16, 16, 16, 8, 8,
    4, 4, 4, -8, 16,

    4, -8, 16, 2,
    4, 4, 4, -8, 16,
    4, -8, 16, 2,

    4, -8, 16, 4, -8, 16,
    16, 16, 8, 8, 8, 4, -8, 16,

    16, 16, 16, 8, 8, 4, -8, 16,
    4, -8, 16, 2,

    4, -8, 16, 4, -8, 16,
    16, 16, 8, 8, 8, 4, -8, 16,

    16, 16, 16, 8, 8, 4, -8, 16,
    4, -8, 16, 2};
static music_t Imperial_March = {"Imperial_March", Imperial_March_Notes, Imperial_March_NoteDurations, 86};

#endif