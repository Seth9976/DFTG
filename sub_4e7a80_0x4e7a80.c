// 函数名称: sub_4e7a80
// 虚拟地址: 0x4e7a80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_tsub_4e7a80()
{
    // 第一条实际指令: int32_t esi = data_1150db4
    int32_t esi = data_1150db4
    int32_t ebx
    ebx.b = data_1150e1c == 1
    (*(*data_114ec78 + 0x8c))(data_aca230)
    sub_492900()
    uint32_t result = sub_495f10(ebx)
    
    if (esi != 4)
        if (data_114ec74 == 1)
            glFlush()
        
        result = data_aca1ec
        
        if (*(result + 0x1c) != 0 && data_115107f == 0)
            void* eax_1 = data_114e818
            
            if (eax_1 != 0)
                result.b = (*(eax_1 + 0x1c) u>> 0xd).b & 1
            
            if (eax_1 == 0 || result.b == 0)
                int32_t edx_1 = data_1150ddc
                int32_t eax_3 = *data_114ec78
                
                if (data_1150e1c != 1)
                    return (*(eax_3 + 0x90))(*((edx_1 << 2) + &data_1150dbc), 
                        *((edx_1 << 2) + &data_1150dc4))
                
                return (*(eax_3 + 0x90))(*((edx_1 << 2) + &data_1150dc0), 
                    *((edx_1 << 2) + &data_1150dc8))
    
    return result
}
