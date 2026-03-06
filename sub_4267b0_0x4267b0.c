// 函数名称: sub_4267b0
// 虚拟地址: 0x4267b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4267b0(int32_t* arg1)
{
    // 第一条实际指令: void* result = nullptr
    void* result = nullptr
    
    while (true)
        void* result_1
        
        if (result != 0)
            result_1 = *arg1
            result += 0x1e8
        else
            result = *arg1
            result_1 = result
        
        void* edx_1 = result_1 + arg1[1] * 0x1e8
        
        if (result u>= edx_1)
            break
        
        while (true)
            int32_t ecx_1 = *(result + 0x1e0)
            
            if ((ecx_1 & 0xffff0000) != 0)
                int32_t edx_2 = arg1[3]
                arg1[3] = zx.d(ecx_1.w)
                *(result + 0x1e0) = edx_2
                arg1[4] -= 1
                break
            
            result += 0x1e8
            
            if (result u>= edx_1)
                goto label_4267f7
    
    label_4267f7:
    arg1[3] = 0
    arg1[1] = 0
    return result
}
