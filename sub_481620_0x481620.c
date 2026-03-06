// 函数名称: sub_481620
// 虚拟地址: 0x481620
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_481620(int32_t* arg1)
{
    // 第一条实际指令: void* result = nullptr
    void* result = nullptr
    
    while (true)
        void* result_1
        
        if (result != 0)
            result_1 = *arg1
            result += 0x24
        else
            result = *arg1
            result_1 = result
        
        void* edx_1 = result_1 + arg1[1] * 0x24
        
        if (result u>= edx_1)
            break
        
        while (true)
            int32_t ecx_2 = *(result + 0x20)
            
            if ((ecx_2 & 0xffff0000) != 0)
                int32_t edx_2 = arg1[3]
                arg1[3] = zx.d(ecx_2.w)
                *(result + 0x20) = edx_2
                arg1[4] -= 1
                break
            
            result += 0x24
            
            if (result u>= edx_1)
                goto label_481653
    
    label_481653:
    arg1[3] = 0
    arg1[1] = 0
    return result
}
