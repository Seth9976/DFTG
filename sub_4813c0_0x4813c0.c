// 函数名称: sub_4813c0
// 虚拟地址: 0x4813c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4813c0(int32_t* arg1)
{
    // 第一条实际指令: void* result = nullptr
    void* result = nullptr
    
    while (true)
        void* result_1
        
        if (result != 0)
            result_1 = *arg1
            result += 0x8ac
        else
            result = *arg1
            result_1 = result
        
        void* edx_1 = result_1 + arg1[1] * 0x8ac
        
        if (result u>= edx_1)
            break
        
        while (true)
            int32_t ecx_1 = *(result + 0x8a8)
            
            if ((ecx_1 & 0xffff0000) != 0)
                int32_t edx_2 = arg1[3]
                arg1[3] = zx.d(ecx_1.w)
                *(result + 0x8a8) = edx_2
                arg1[4] -= 1
                break
            
            result += 0x8ac
            
            if (result u>= edx_1)
                goto label_481407
    
    label_481407:
    arg1[3] = 0
    arg1[1] = 0
    return result
}
