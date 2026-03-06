// 函数名称: sub_453250
// 虚拟地址: 0x453250
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_453250(int32_t* arg1)
{
    // 第一条实际指令: int32_t* eax_1 = sub_453010(sub_452b90(*arg1), 4)
    int32_t* eax_1 = sub_453010(sub_452b90(*arg1), 4)
    
    if (eax_1 != 0)
        eax_1 = sub_452cc0(eax_1)
        
        if (eax_1 != 0)
            void* eax_2 = sub_4530f0(&eax_1[0xc])
            int32_t i = arg1[0xb2]
            int32_t esi = 0
            
            for (; i != 0; i = *(sub_452d50(i) + 0x20))
                esi += 1
            
            eax_2.b = esi s>= eax_2
            return eax_2
    
    eax_1.b = 1
    return eax_1
}
