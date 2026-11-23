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

M2C_UNK sub_0809E4F8(s32);                          /* extern */
M2C_UNK sub_0809F210(s32);                          /* extern */
M2C_UNK sub_080A0214(s32 *, void *, s32);           /* extern */
extern M2C_UNK sub_0809E9E4;
extern M2C_UNK sub_080A0208;

void sub_0809F118(void *arg0) {
    s32 sp0;
    void *temp_r1;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    if (*(s32 *)0x040000C4 & 0x02000000) {
        *(s32 *)0x040000C4 = 0x84400004;
    }
    if (*(s32 *)0x040000D0 & 0x02000000) {
        *(s32 *)0x040000D0 = 0x84400004;
    }
    M2C_FIELD((void *)0x040000C6, s16 *, 0) = 0x400;
    M2C_FIELD((void *)0x040000C6, s16 *, 0xC) = 0x400;
    *(s16 *)0x04000084 = 0x8F;
    *(s16 *)0x04000082 = 0xA90E;
    *(u8 *)0x04000089 = (0x3F & *(u8 *)0x04000089) | 0x40;
    M2C_FIELD((void *)0x040000BC, void **, 0) = (void *) (arg0 + 0x350);
    temp_r1 = (void *)0x040000BC + 4;
    M2C_FIELD((void *)0x040000BC, s32 *, 4) = 0x040000A0;
    M2C_FIELD(temp_r1, void **, 8) = (void *) (arg0 + 0x980);
    M2C_FIELD((temp_r1 + 8), s32 *, 4) = 0x040000A4;
    *(void **)0x03007FF0 = arg0;
    sp0 = 0;
    sub_080A0214(&sp0, arg0, 0x050003EC);
    M2C_FIELD(arg0, s8 *, 6) = 8;
    M2C_FIELD(arg0, s8 *, 7) = 0xF;
    M2C_FIELD(arg0, M2C_UNK **, 0x38) = &sub_0809E9E4;
    M2C_FIELD(arg0, M2C_UNK **, 0x28) = &sub_080A0208;
    M2C_FIELD(arg0, M2C_UNK **, 0x2C) = &sub_080A0208;
    M2C_FIELD(arg0, M2C_UNK **, 0x30) = &sub_080A0208;
    M2C_FIELD(arg0, M2C_UNK **, 0x3C) = &sub_080A0208;
    sub_0809E4F8(0x0203FAF0);
    M2C_FIELD(arg0, s32 *, 0x34) = 0x0203FAF0;
    sub_0809F210(0x40000);
    M2C_FIELD(arg0, s32 *, 0) = 0x68736D53;
}
