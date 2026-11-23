typedef struct {
    u16 reserved[2];
    vu16 readIndex;
    vu16 writeIndex;
} DebugPort;

void sub_080A04A0(s32 drain)
{
    void (*callback)(void);
    vu16 *ime;
    u16 savedIme;
    vu16 *waitcnt;
    u16 savedWaitcnt;
    vu16 *control = (vu16 *)0x09FE2FFE;
    DebugPort *port = (DebugPort *)0x09FE20F8;

    callback = (void (*)(void))0x09FE209D;
    ime = (vu16 *)0x04000208;
    savedIme = *ime;
    waitcnt = (vu16 *)0x04000204;
    savedWaitcnt = *waitcnt;
    *ime = savedIme & 0xFFFE;
    *waitcnt = 0x1800;
    if (drain) {
        while (port->writeIndex != port->readIndex) {
            *control = 0x20;
            callback();
            *control = 0;
        }
    } else {
        if (port->writeIndex != port->readIndex) {
            *control = 0x20;
            callback();
            *control = 0;
        }
    }
    *waitcnt = savedWaitcnt;
    *ime = savedIme;
}
