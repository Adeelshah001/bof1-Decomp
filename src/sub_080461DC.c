typedef struct {
    u8 padding[0xA4];
    u16 mode;
} MapState;
extern MapState D_030023E0;

u8 sub_08001770(u8 arg0);
void sub_0803A8EC(u8 *arg0);
void sub_0803EE6C(u8 *arg0);
void *sub_080A0A68(void *dst, const void *src, u32 len);

void sub_080461DC(u8 *arg0)
{
    u8 arr1[3];
    u8 arr2[6];
    u8 i;

    sub_080A0A68(arr1, (const u8 *)0x080A6628, 3);
    sub_080A0A68(arr2, (const u8 *)0x080A662B, 6);
    for (i = 0; i < 3; i++) {
        if (D_030023E0.mode == arr1[i]) {
            break;
        }
    }
    i *= 2;
    if (arg0[0x5C] == 1) {
        i |= 1;
    }
    if (sub_08001770(arr2[i])) {
        sub_0803EE6C(arg0);
    } else {
        sub_0803A8EC(arg0);
    }
}
