// 函数名称: sub_428880
// 虚拟地址: 0x428880
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_428880(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    if (arg2 s> 0)
        int32_t* ecx = arg1 + 0x20
        int32_t i
        
        do
            int32_t eax_1 = ecx[-1]
            
            if (eax_1 != 0 && (eax_1 != 2 || *ecx != 1))
                result += 1
            
            ecx = &ecx[0xb]
            i = arg2
            arg2 -= 1
        while (i != 1)
    
    return result
}
