typedef struct {
    u8 pad00[0x18];
    u8 *commands;
    u8 *cursor;
    u8 pad20[6];
    u8 step;
} CommandWriter;

typedef struct {
    u8 pad00, unk1, unk2, pad03, pad04, unk5, unk6, pad07;
    u8 pad08[8];
    u16 unk10, unk12, unk14, unk16;
    u8 pad18[4];
    u16 unk1C;
    u8 pad1E[0x38 - 0x1E];
    u16 unk38;
    u8 pad3A[0x44 - 0x3A];
    u32 unk44, unk48;
    u8 pad4C[4];
    u8 unk50;
    u8 pad51[7];
    u16 unk58;
    u8 pad5A[0x6C - 0x5A];
    u16 unk6C;
} EffectState;

void sub_08073790(void);
void sub_08073944(void);
void sub_08082BC8(EffectState *);
s32 sub_08082CD0(EffectState *, u16);
s32 sub_08083130(EffectState *);
extern const u8 D_082D308C[][1];

void sub_08082B30(CommandWriter *writer)
{
    CommandWriter *saved = writer;
    u32 odd = writer->step;
    odd &= 1;
    if (odd == 0) {
        *saved->cursor = 9;
        saved->cursor++;
    } else {
        u8 *commands = saved->commands;
        u32 size = commands[0];
        size++;
        odd = 3;
        commands[size] = odd;
        saved->commands[0] = size;
    }
    saved->step++;
}

s32 sub_08082B68(EffectState *state)
{
    u8 byteZero;
    u16 shortZero;
    u32 index;
    const u8 (*table)[1];
    sub_08073790();
    sub_08073944();
    sub_08082BC8(state);
    shortZero = 0;
    byteZero = 0;
    state->unk10 = shortZero;
    state->unk12 = shortZero;
    state->unk14 = shortZero;
    state->unk16 = shortZero;
    *(u16 *)&state->unk2 = shortZero;
    *(u16 *)&state->unk6 = shortZero;
    state->unk1 = byteZero;
    state->unk5 = byteZero;
    index = (state->unk44 & 0xFF0000) >> 16;
    table = D_082D308C;
    index = *(const u8 *)(index + (u32)table);
    state->unk1C = *(const u8 *)(index + (u32)table) | (*(const u8 *)((index + 1) + (u32)table) << 8);
    state->unk38 = *(const u8 *)((index + 2) + (u32)table);
    state->unk48 = index << 8;
    return 0;
}

s32 sub_08082ED4(EffectState *state)
{
    u8 y;
    state->unk6C = (u8)(state->unk2 + 0xE8);
    y = state->unk6 + 0xE8;
    state->unk14 = y << 8;
    state->unk58 = y;
    sub_08082CD0(state, 0);
    state->unk38 = 31;
    state->unk50++;
    return sub_08083130(state);
}

s32 sub_08082F1C(EffectState *state, u16 arg1)
{
    u32 y = state->unk14 >> 8;
    s32 result;
    if (y > 0xE7) {
        u32 coord;
        u16 zero;
        y = state->unk6;
        coord = y << 8;
        zero = 0;
        state->unk14 = coord;
        state->unk38 = zero;
        state->unk50++;
        result = 0;
    } else {
        y = (u8)(y - 16);
        state->unk14 = y << 8;
        state->unk58 = y;
        result = sub_08082CD0(state, arg1);
    }
    return result;
}
