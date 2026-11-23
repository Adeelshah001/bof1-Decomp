typedef struct {
    u8 pad00[0x06];
    u16 unk6;
    u8 pad08[0x2C - 0x08];
    u16 unk2C;
    u8 pad2E[0x68 - 0x2E];
    const u8 *unk68;
    u8 pad6C[0x6F - 0x6C];
    u8 unk6F;
} Entity54;

typedef u8 (*Func54)(Entity54 *);
extern const Func54 D_080FE0CC[];
extern const Func54 D_080FE0DC[];
void sub_0803A8EC(Entity54 *);

void sub_08054460(Entity54 *arg0) {
    u8 val = *arg0->unk68;
    u8 idx = val - 0x51;
    u32 res;

    if (idx <= 3) {
        res = D_080FE0CC[idx](arg0);
    } else {
        u32 hi = val >> 4;
        if (hi <= 3) {
            arg0->unk6F = hi;
        }
        res = D_080FE0DC[hi](arg0);
    }
    arg0->unk2C = arg0->unk6;
    if (res == 0) {
        sub_0803A8EC(arg0);
    }
}

typedef struct {
    u8 pad00[0x0C];
    u8 *unkC;
} Struct4760;

extern u8 D_0300169C;
extern Struct4760 D_03004760;
void sub_08067BC4(void);
void sub_080696B4(void);
void sub_08059978(void);
void sub_0805B2B4(u16, s32);
void sub_0805A9FC(void);

void sub_0805D9C8(void) {
    u8 val;
    if (D_0300169C == 0) {
        val = D_03004760.unkC[0xB];
        if (val == 4) {
            sub_08067BC4();
        } else if (val == 5) {
            sub_08067BC4();
        } else {
            sub_080696B4();
        }
        sub_08059978();
        sub_0805B2B4(0x700 | val, 0);
        sub_0805A9FC();
    }
}
