Entity *sub_080835F8(Entity *entity, s32 kind);

void sub_0808591C(Entity *entity, s32 kind)
{
    Entity *child = sub_080835F8(entity, kind);
    u8 state;
    entity->unk6C = (u32)child;
    state = entity->unk41;
    child->unk41 = state;
}

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
            sub_0807B270(effect);
        }
    } else {
        sub_0807B270(effect);
    }
}

extern s32 D_03001108;
extern const u16 D_08152052[];

s32 sub_08085670(u16 input)
{
    s32 result = 0;
    if (input != 0) {
        s32 index = D_03001108;
        s32 value = *(const u16 *)((index * 2) + (u32)D_08152052) & input;
        if (value != 0) {
            index++;
            D_03001108 = index;
            value = *(const u16 *)((index * 2) + (u32)D_08152052);
            if (value == 0) {
                result = 1;
                D_03001108 = value;
            }
        } else {
            result = 2;
            D_03001108 = value;
        }
    }
    return result;
}

extern u8 D_03004F50[];
extern u8 D_0202DBD0[];

void sub_08084F90(u16 index)
{
    if (*(u8 *)(index + (u32)(D_03004F50 + 0x68)) == 0xC) {
        u16 *value = (u16 *)((index * 2) + (u32)(D_0202DBD0 + 0x204));
        *value = 0x100 + *value;
    }
}
