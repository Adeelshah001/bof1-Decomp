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

void sub_080007E8(void) {
    if (*(s32 *)0x03001694 & 0x10000) {
        M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x02019FC0;
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06000000;
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000400;
        *(s32 *)0x03001694 &= 0xFFFEFFFF;
    }
    if (*(s32 *)0x03001694 & 0x20000) {
        M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x0201A7C0;
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06000800;
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000400;
        *(s32 *)0x03001694 &= 0xFFFDFFFF;
    }
    if (*(s32 *)0x03001694 & 0x40000) {
        M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x0201AFC0;
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06001000;
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000400;
        *(s32 *)0x03001694 &= 0xFFFBFFFF;
    }
    if (*(s32 *)0x03001694 & 0x80000) {
        M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x0201B7C0;
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06001800;
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000400;
        *(s32 *)0x03001694 &= 0xFFF7FFFF;
    }
}
