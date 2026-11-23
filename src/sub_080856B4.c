typedef struct {
    u8 pad[0x50];
    u8 unk50;
    u8 pad51[3];
    u8 unk54 : 8;
    u8 unk55 : 8;
} BattleEffect;

extern u8 D_03004F30[];
void sub_0803EE6C(BattleEffect *effect);
void sub_0807B270(BattleEffect *effect);

void sub_080856B4(BattleEffect *effect)
{
    if ((--effect->unk54) & 0x80) {
        if (effect->unk50 != 0x11 || ((--effect->unk55) & 0x80)) {
            D_03004F30[12] &= 0xFD;
            sub_0803EE6C(effect);
        } else {
            effect->unk54 = 3;
            goto update;
        }
    } else {
update:
        sub_0807B270(effect);
    }
}

extern s32 D_03001108;
extern const u16 D_08152052[];

s32 sub_08085670(u16 input)
{
    s32 result = 0;
    if (input != 0) {
        u32 table = (u32)D_08152052;
        s32 *cursor = &D_03001108;
        s32 index = *cursor;
        s32 value = *(const u16 *)((index * 2) + table) & input;
        if (value != 0) {
            index = ++*cursor;
            value = *(const u16 *)((index * 2) + table);
            if (value == 0) {
                result = 1;
                *cursor = value;
            }
        } else {
            result = 2;
            *cursor = value;
        }
    }
    return result;
}
