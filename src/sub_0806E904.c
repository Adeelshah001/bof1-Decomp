void sub_08073B80(void);
void sub_0807469C(void *arg0, s32 arg1);

struct SmallEntity {
    u8 unk00;
    u8 unk01;
    u8 unk02;
    u8 pad03[0x0C - 0x03];
    u8 unk0C;
};

void sub_0806E904(struct SmallEntity *entity) {
    u32 val;
    u32 var;
    u8 temp;

    val = entity->unk0C;
    val = val - 1;
    entity->unk0C = val;
    val &= 0xFF;
    val &= 0x80;
    if (val == 0) {
        return;
    }

    sub_08073B80();
    temp = entity->unk00;

    if (temp == 3) {
        goto label_A;
    }
    if (temp != 0x29) {
        goto label_C;
    }
    entity->unk02 = 6;
    sub_0807469C(entity, 0);
    return;

label_A:
    entity->unk01 = 0x24;
    entity->unk02 = 0;
    entity->unk0C = 0x1E;
    temp = entity->unk00;
    if (temp > 0x4F) {
        temp = 0;
    }
    if (temp == 1) {
        goto label_B1;
    }
    if (temp == 3) {
        goto label_B3;
    }
    var = 0;
    goto label_D;

label_B1:
    var = 0x42;
    goto label_D;

label_B3:
    var = 0x80E3;
    goto label_D;

label_D:
    if ((var << 24) == 0) {
        return;
    }
    var = 0xA;
    goto label_E;

label_C:
    var = 2;

label_E:
    entity->unk02 = var;
}
