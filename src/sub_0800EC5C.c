extern void (*D_080F62E4[])(void);
typedef struct { u8 pad[0x68]; u8 *data; } ScriptObject;
extern void (*D_080F6314[])(ScriptObject *);
extern u16 D_0200B810;
void sub_0800EC5C(s32 arg0) {
    void (**handlers)(void) = D_080F62E4;
    u16 value = arg0;
    handlers[(value & 0xFF) >> 1]();
}
void sub_0800EC7C(ScriptObject *arg0) {
    u16 *out = &D_0200B810;
    u8 *data = arg0->data;
    *out = data[1];
    D_080F6314[data[1]](arg0);
}
