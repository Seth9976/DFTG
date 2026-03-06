// 函数名称: sub_467300
// 虚拟地址: 0x467300
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_467300(void* arg1)
{
    // 第一条实际指令: switch (*(arg1 + 4) - 4)
    switch (*(arg1 + 4) - 4)
        case 0
            if (*(arg1 + 0xdc4) s> 0 || *(arg1 + 0xe68) s> 0)
                return 7
        case 2
            int32_t i = *(arg1 + 0x2d0)
            int32_t esi_1 = 0
            
            for (; i != 0; i = *(sub_452d50(i) + 0x20))
                esi_1 += 1
            
            if (esi_1 s< *(arg1 + 0x4cc))
                return 1
        case 5
            return 3
        case 0x11
            int32_t esi_2 = 0
            int32_t i_2 = 0
            sub_481430(&data_62d6c4, &i_2)
            int32_t i_1 = i_2
            
            if (i_1 != 0xffffffff)
                do
                    int32_t eax_7 = esi_2 + 1
                    
                    if (*i_1 != 2)
                        eax_7 = esi_2
                    
                    esi_2 = eax_7
                    sub_481430(&data_62d6c4, &i_2)
                    i_1 = i_2
                while (i_1 != 0xffffffff)
                
                if (esi_2 != 0)
                    return 6
    
    return 0
}
