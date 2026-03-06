// 函数名称: sub_44e7e0
// 虚拟地址: 0x44e7e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_44e7e0(int32_t* arg1)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    void* result = *arg1
    
    if (*(result + 4) s> 0)
        void* ebx_1 = &arg1[0x6b]
        
        do
            *(ebx_1 - 4) = 0
            *ebx_1 = 0
            *(ebx_1 + 8) = 0
            int32_t j
            
            do
                j = sub_44e0e0(arg1, i)
            while (j != 0)
            sub_4448d0(sub_44e300(arg1, i), i, arg1, 5)
            result = *arg1
            i += 1
            ebx_1 += 0x1bc
        while (i s< *(result + 4))
    
    return result
}
