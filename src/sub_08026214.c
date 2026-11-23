void *sub_08040A74(u8 arg0);

void sub_08026214(u8 *arg0) {
    u8 *script;
    u8 *obj = sub_08040A74((*(u8 * volatile *)(arg0 + 0x68))[2]);
    if (obj != NULL) {
        script = *(u8 * volatile *)(arg0 + 0x68);
        *(u16 *)obj = script[3] | (script[4] << 8);
        script = *(u8 * volatile *)(arg0 + 0x68);
        *(u16 *)(obj + 4) = script[5] | (script[6] << 8);
        *(u32 *)(arg0 + 0x68) += 7;
    }
}
