// 函数名称: sub_5656d0
// 虚拟地址: 0x5656d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_5656d0(char* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: char* edx = nullptr
    char* edx = nullptr
    
    if (arg3 s> 0)
        char* esi_1 = arg1
        
        do
            int32_t eax_1 = 0
            
            if (arg4 s> 0)
                do
                    esi_1[eax_1] = edx[arg2]
                    eax_1 += 1
                while (eax_1 s< arg4)
            
            edx = &edx[1]
            esi_1 = &esi_1[arg4]
        while (edx s< arg3)
    
    return arg1
}
