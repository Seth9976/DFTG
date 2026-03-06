// 函数名称: sub_4603d0
// 虚拟地址: 0x4603d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4603d0(void* arg1)
{
    // 第一条实际指令: void* var_4 = arg1
    void* var_4 = arg1
    int32_t esi = 0
    int32_t i = *(arg1 + 0x2c4)
    
    if (i != 0)
        do
            esi += 1
            i = *(sub_452d50(i) + 0x20)
        while (i != 0)
        
        if (esi s> 0)
            int32_t i_1 = *(arg1 + 0x2e8)
            int32_t esi_1 = 0
            
            if (i_1 != 0)
                do
                    esi_1 += 1
                    i_1 = *(sub_452d50(i_1) + 0x20)
                while (i_1 != 0)
                
                if (esi_1 s> 0)
                    return i_1
    
    int32_t eax_2 = sub_4534b0()
    int32_t eax_3 = neg.d(eax_2)
    return sbb.d(eax_3, eax_3, eax_2 != 0) + 2
}
