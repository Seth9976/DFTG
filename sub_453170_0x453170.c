// 函数名称: sub_453170
// 虚拟地址: 0x453170
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_453170(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* eax_1 = sub_453010(sub_452b90(arg1), 4)
    int32_t* eax_1 = sub_453010(sub_452b90(arg1), 4)
    
    if (eax_1 != 0)
        eax_1 = sub_452cc0(eax_1)
        
        if (eax_1 != 0)
            *arg2 = sub_4530f0(&eax_1[0xc])
            int32_t eax_2
            eax_2.b = 1
            return eax_2
    
    eax_1.b = 0
    return eax_1
}
