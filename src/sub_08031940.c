void sub_080327A4(void *, u16 *, u16 *);
void sub_08038AB4(u16, u16, u16 *);
void sub_0802E788(s32, u16);

void sub_08031940(s32 arg0) {
    u16 x, y, out;

    sub_080327A4(arg0, &x, &y);
    sub_08038AB4(x, y, &out);
    sub_0802E788(arg0, out);
}
