/* machine draft (m2c) for agbcc -O2 -mthumb-interwork, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

void *sub_0803EEF8();                               /* extern */

void *sub_0807C638(void *arg0, s8 arg1) {
    u16 temp_r5;
    void *temp_r0;
    void *temp_r1;
    void *temp_r1_2;

    temp_r0 = sub_0803EEF8();
    if (temp_r0 != NULL) {
        M2C_FIELD(arg0, void **, 0x6C) = temp_r0;
        M2C_FIELD(temp_r0, s8 *, 0xE8) = arg1;
        M2C_FIELD(temp_r0, u8 *, 0x3C) = (u8) M2C_FIELD(arg0, u8 *, 0x3C);
        M2C_FIELD(temp_r0, u8 *, 0x3B) = (u8) M2C_FIELD(arg0, u8 *, 0x3B);
        M2C_FIELD(temp_r0, u16 *, 0x2A) = (u16) M2C_FIELD(arg0, u16 *, 0x2A);
        M2C_FIELD(temp_r0, u16 *, 0x22) = (u16) M2C_FIELD(arg0, u16 *, 0x22);
        M2C_FIELD(temp_r0, u16 *, 0x1E) = (u16) M2C_FIELD(arg0, u16 *, 0x1E);
        M2C_FIELD(temp_r0, u16 *, 0x20) = (u16) M2C_FIELD(arg0, u16 *, 0x20);
        M2C_FIELD(temp_r0, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
        M2C_FIELD(temp_r0, u16 *, 0x26) = (u16) M2C_FIELD(arg0, u16 *, 0x26);
        M2C_FIELD(temp_r0, u16 *, 0x24) = (u16) M2C_FIELD(arg0, u16 *, 0x24);
        M2C_FIELD(temp_r0, u8 *, 0x40) = (u8) M2C_FIELD(arg0, u8 *, 0x40);
        M2C_FIELD(temp_r0, u8 *, 0x41) = (u8) M2C_FIELD(arg0, u8 *, 0x41);
        temp_r1 = (temp_r0 + 0x41) - 4;
        M2C_FIELD(temp_r1, u8 *, 0) = (u8) M2C_FIELD(arg0, u8 *, 0x3D);
        M2C_FIELD(temp_r0, u16 *, 0x1C) = (u16) M2C_FIELD(arg0, u16 *, 0x1C);
        M2C_FIELD(temp_r1, u8 *, 2) = (u8) M2C_FIELD(arg0, u8 *, 0x3F);
        temp_r1_2 = (temp_r1 + 2) - 1;
        M2C_FIELD(temp_r1_2, u8 *, 0) = (u8) M2C_FIELD(arg0, u8 *, 0x3E);
        M2C_FIELD(temp_r0, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
        M2C_FIELD(temp_r0, s32 *, 0x44) = (s32) M2C_FIELD(arg0, s32 *, 0x44);
        M2C_FIELD(temp_r0, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
        M2C_FIELD(temp_r0, s32 *, 0x48) = (s32) M2C_FIELD(arg0, s32 *, 0x48);
        M2C_FIELD(temp_r0, u16 *, 0x38) = (u16) M2C_FIELD(arg0, u16 *, 0x38);
        M2C_FIELD(temp_r0, u16 *, 0x2E) = (u16) M2C_FIELD(arg0, u16 *, 0x2E);
        M2C_FIELD(temp_r0, void **, 0x6C) = (void *) M2C_FIELD(arg0, void **, 0x6C);
        M2C_FIELD(temp_r1_2, u8 *, 0x23) = (u8) M2C_FIELD(arg0, u8 *, 0x61);
        M2C_FIELD(temp_r0, s32 *, 0x54) = (s32) M2C_FIELD(arg0, s32 *, 0x54);
        M2C_FIELD(temp_r0, u8 *, 0x70) = (u8) M2C_FIELD(arg0, u8 *, 0x70);
        M2C_FIELD(temp_r0, s32 *, 0x74) = (s32) M2C_FIELD(arg0, s32 *, 0x74);
        M2C_FIELD(temp_r0, u16 *, 0x28) = (u16) M2C_FIELD(arg0, u16 *, 0x28);
        M2C_FIELD(temp_r0, s32 *, 0x78) = (s32) M2C_FIELD(arg0, s32 *, 0x78);
        M2C_FIELD(temp_r0, s32 *, 0x7C) = (s32) M2C_FIELD(arg0, s32 *, 0x7C);
        M2C_FIELD(temp_r0, u16 *, 2) = (u16) M2C_FIELD(arg0, u16 *, 2);
        temp_r5 = M2C_FIELD(arg0, u16 *, 6);
        M2C_FIELD(temp_r0, u16 *, 6) = temp_r5;
        M2C_FIELD(temp_r0, u16 *, 0x2C) = temp_r5;
        M2C_FIELD(temp_r0, s8 *, 0x3A) = 1;
        M2C_FIELD((temp_r0 + 0x3A), s8 *, 0x9E) = 0x5E;
        return temp_r0;
    }
    return NULL;
}
