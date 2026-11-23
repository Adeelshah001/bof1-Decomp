typedef struct {
    u8 unk0;
    u8 pad1[2];
    u8 unk3;
    u8 pad4[3];
    u8 unk7;
} Struct4620;

typedef struct {
    u8 pad00[0x18];
    u8 unk18;
    u8 unk19;
    u8 pad1A;
    u8 unk1B;
} Struct4760;

extern Struct4620 D_03004620;
extern Struct4760 D_03004760;
extern const u8 D_08100BEE[];
extern const u8 D_08100AFC[];
extern const u8 D_08100814[];

void sub_08068850(void);
void sub_08068938(s32, s32);
void sub_08059978(void);
void sub_0805B308(const void *);
void sub_08068984(s32, s32, s32, s32, const void *);
void sub_0805B358(const void *, u8, s32, s32, s32);

s32 sub_08060028(void) {
    if (D_03004620.unk7 == 0) {
        D_03004620.unk0 = 0;
        D_03004620.unk7 = 1;
    } else {
        sub_08068850();
        sub_08068938(0, 0);
        sub_08068938(1, 5);
        sub_08059978();
        sub_0805B308(D_08100BEE);
        sub_08068984(1, 1, 1, 0, D_08100AFC);
        sub_0805B358(D_08100814, D_03004620.unk0, 1, 0, 0);
        D_03004760.unk18 = 0xE;
        D_03004620.unk3 = 2;
        D_03004760.unk19 = 0;
        D_03004760.unk1B = 0;
    }
    return 0;
}
