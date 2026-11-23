typedef struct {
    u8 pad00[0x0C];
    u8 unkC[10];
} StructAE0;

typedef struct {
    u8 unk0[8];
} SubEntryB10;

typedef struct {
    SubEntryB10 *unk0;
    u8 unk4;
    u8 unk5;
    u8 pad6;
    u8 unk7;
    u8 unk8[0x64 - 0x08];
} EntryB10;

extern StructAE0 D_03000AE0;
extern EntryB10 D_03000B10[];

void sub_0805AF9C(void *, void *, void *);

void sub_0805B7D8(void *arg0, void *arg1) {
    s32 i;
    s32 j;
    EntryB10 *entry;

    for (i = 0; i < 10; i++) {
        if (D_03000AE0.unkC[i] != 0) {
            entry = &D_03000B10[i];
            if (entry->unk7 != 0) {
                for (j = 0; j <= entry->unk5; j++) {
                    if (entry->unk8[j] != 0) {
                        sub_0805AF9C(&entry->unk0[j], arg0, arg1);
                    }
                }
            } else {
                sub_0805AF9C(&entry->unk0[entry->unk4], arg0, arg1);
            }
        }
    }
}
