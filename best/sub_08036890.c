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

u8 sub_08036D94(s32);                               /* extern */
u8 sub_08036D98(s32);                               /* extern */
u8 sub_08036D9C(s32);                               /* extern */
u8 sub_08036DC4(s32);                               /* extern */

u8 sub_08036890(s32 arg0) {
    u16 temp_r1;
    u8 var_r0;

    temp_r1 = *(u16 *)0x03002484;
    if ((s32) temp_r1 <= 0x117) {
        switch ((s32) temp_r1) {                    /* switch 1; irregular */
        case 0x80:                                  /* switch 1 */
            var_r0 = sub_08036D9C(arg0);
            break;
        case 0xCC:                                  /* switch 1 */
            var_r0 = sub_08036DC4(arg0);
            break;
        }
    } else {
        switch ((s32) temp_r1) {                    /* switch 2; irregular */
        case 0x19F:                                 /* switch 2 */
        case 0x1C5:                                 /* switch 2 */
        case 0x19B:                                 /* switch 2 */
        case 0xC1:                                  /* switch 1 */
        case 0xC7:                                  /* switch 1 */
        case 0x91:                                  /* switch 1 */
            var_r0 = sub_08036D98(arg0);
            break;
        case 0x121:                                 /* switch 2 */
            var_r0 = sub_08036DC4(arg0);
            break;
        }
    }
    return var_r0;
    /* bug: did not emit code for node #23; contents below: */
    var_r0 = sub_08036D94(arg0);
}
