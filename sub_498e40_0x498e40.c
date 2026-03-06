// 函数名称: sub_498e40
// 虚拟地址: 0x498e40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __thiscallsub_498e40(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t* var_8_1 = arg1
    char* eax = *arg2
    *arg1 = eax
    
    if (eax != 0 && *eax != 0)
        char* eax_1 = sub_48a080(arg1)
        *(eax_1 + 4) += 1
    
    arg1[1] = arg2[1]
    arg1[1] = arg2[1]
    *(arg1 + 4) = *(arg2 + 4)
    *(arg1 + 4) = *(arg2 + 4)
    arg1[3] = arg2[3]
    arg1[1] = arg2[1]
    arg1[2] = arg2[2]
    arg1[1] = arg2[1]
    arg1[1] = arg2[1]
    return arg1
}
