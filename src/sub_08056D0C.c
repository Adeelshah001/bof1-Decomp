typedef struct {
    u8 pad00[0xFA];
    u16 unkFA;
    u8 padFC[0x124 - 0xFC];
} Struct03002AB0;

typedef struct {
    u8 pad00[0xC4];
    u8 unkC4;
} Struct03004620;

extern Struct03002AB0 D_03002AB0[];
extern Struct03004620 D_03004620;
extern const u8 D_082D2708[];

void sub_0805695C(s32);
u8 sub_08056974(s32);
u8 sub_08056D04(u8 *);

u8 sub_08056D0C(s32 arg0, s32 arg1, u8 *arg2, u16 arg3)
{
    if (sub_08056974(arg1) != 0) {
        Struct03002AB0 *s;
        u8 val;
        sub_0805695C(arg1);
        s = &D_03002AB0[D_03004620.unkC4];
        val = D_082D2708[arg3 + 9];
        if (val > s->unkFA)
            s->unkFA = 0;
        else
            s->unkFA -= val;
        *arg2 = 0xFF;
        return 0;
    }
    return sub_08056D04(arg2);
}
