// 函数名称: sub_44ef10
// 虚拟地址: 0x44ef10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_44ef10(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    
    if (arg1[0x304] s> 0)
        int32_t edi_1 = 0
        int32_t eax_2 = *(*arg1 + 4)
        
        if (eax_2 s> 0)
            void* ebx_1 = &arg1[0x5c]
            
            do
                int32_t i = *ebx_1
                int32_t edx_1 = 0
                
                if (i != 0xffffffff)
                    do
                        edx_1 += 1
                        i = sx.d(*(&arg1[i * 3] + 0x8ca))
                    while (i != 0xffffffff)
                    
                    if (edx_1 s>= 0xc)
                        return 1
                
                edi_1 += 1
                ebx_1 += 0x1bc
            while (edi_1 s< eax_2)
        
        if (arg1[0x30e] s<= 0x28)
            return 0
    
    return 1
}
