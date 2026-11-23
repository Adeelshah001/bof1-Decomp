void sub_0803EE6C(void *);
void sub_0804FF54(void *);

typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x06 - 0x04];
    u16 unk6;
    u8 pad08[0x54 - 0x08];
    u16 unk54;
} Entity4EE;

void sub_0804EE18(Entity4EE *arg0) {
    Entity4EE *saved = arg0;
    u32 timer;

    if (++arg0->unk54 == 0x84) {
        D_03004830[0x2D] |= 0x10;
        sub_0804FF54(arg0);
    }
    timer = arg0->unk54;
    if (timer >= 0x40) {
        if (timer <= 0x4F) {
            arg0->unk2++;
        } else if (timer >= 0x80) {
            if (timer <= 0x8F) {
                arg0->unk6++;
            } else if (timer >= 0xC0) {
                if (timer <= 0xDF) {
                    arg0->unk6--;
                } else {
                    goto over_df;
                }
            }
        }
    }
    sub_0804FF54(arg0);
    return;
over_df:
    if (timer == 0x118) {
        sub_0803EE6C(arg0);
    } else {
        sub_0804FF54(saved);
    }
}
