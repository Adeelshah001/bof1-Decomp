extern void sub_08037FC4(void *arg0, s32 arg1);

void sub_0809A43C(void *arg0) {
    u8 *data;
    u8 byte_val;
    s32 val;
    s32 tmp;
    s32 arg;
    s32 two;
    data = (u8 *)arg0;
    data[0x4C]++;
    byte_val = data[0x55];
    two = 2;
    val = byte_val ^ two;
    tmp = -val;
    arg = (tmp | val) >> 31;
    arg &= two;
    sub_08037FC4(arg0, arg);
}
