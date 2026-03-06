// 函数名称: sub_4f5b10
// 虚拟地址: 0x4f5b10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __thiscallsub_4f5b10(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t* var_8_1 = arg1
    *arg1 = *arg2
    arg1[1] = arg2[1]
    char* eax_2 = arg2[2]
    arg1[2] = eax_2
    
    if (eax_2 != 0 && *eax_2 != 0)
        char* eax_3 = sub_48a080(&arg1[2])
        *(eax_3 + 4) += 1
    
    return arg1
}
