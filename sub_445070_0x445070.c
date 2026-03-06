// 函数名称: sub_445070
// 虚拟地址: 0x445070
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_445070(void* arg1)
{
    // 第一条实际指令: int32_t i_1 = *(arg1 + 0xc0c)
    int32_t i_1 = *(arg1 + 0xc0c)
    int32_t result = 0
    
    if (i_1 s> 0)
        void* ecx = arg1 + 0x8c9
        int32_t i
        
        do
            bool cond:0_1 = *ecx != 0
            int32_t result_1 = result + 1
            ecx += 0xc
            
            if (cond:0_1)
                result_1 = result
            
            result = result_1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
