// 函数名称: sub_458360
// 虚拟地址: 0x458360
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_458360()
{
    // 第一条实际指令: sub_4361a0(1)
    sub_4361a0(1)
    sub_45e1a0()
    
    if (data_632808 != 0)
        int32_t* ecx_1 = data_632804
        
        if (ecx_1 != 0)
            int32_t i = 0
            
            if (*(*ecx_1 + 4) s> 0)
                int32_t edi_1 = 0
                
                do
                    int32_t eax_3 = *(*(edi_1 + ecx_1 + 0x1c) + 0x14)
                    
                    if (eax_3 != 0)
                        eax_3(ecx_1, i)
                        ecx_1 = data_632804
                    
                    i += 1
                    edi_1 += 0x1bc
                while (i s< *(*ecx_1 + 4))
        
        ecx_1[1] = 0
        sub_48db10(&data_632808)
        data_632804 = 0
    
    void* i_2 = nullptr
    sub_481430(&data_62d6c4, &i_2)
    
    for (void* i_1 = i_2; i_1 != 0xffffffff; i_1 = i_2)
        if (*(i_1 + 4) != 0)
            sub_49a5a0(i_1 + 4)
        
        int32_t ecx_3 = data_62d6d0
        data_62d6d0 = zx.d(*(i_1 + 0x8a8))
        *(i_1 + 0x8a8) = ecx_3
        data_62d6d4 -= 1
        sub_481430(&data_62d6c4, &i_2)
    
    sub_4813c0(&data_62d6c4)
    return sub_481550(&data_632824)
}
