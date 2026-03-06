// 函数名称: sub_51e260
// 虚拟地址: 0x51e260
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __thiscallsub_51e260(void* arg1, int32_t arg2, uint32_t arg3, char arg4, char arg5)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    void* eax = data_1151adc
    int32_t esi
    int32_t var_c = esi
    int32_t edi
    int32_t var_10 = edi
    
    if (*(eax + 0x408c) != 0)
        *(eax + 0x408c) = 0
        (*__glewBindVertexArray)(0)
        void* eax_2 = data_114ec70
        *(eax_2 + 0x14) += 1
    
    (*__glewGenBuffers)(1, &var_8)
    (*__glewBindBuffer)(0x8893, var_8)
    uint32_t (* eax_5)[0x4] = sub_523220(arg1 + 0x4240)
    *eax_5 = var_8
    void* ecx_1
    ecx_1.b = arg4
    (*eax_5)[1] = 1
    (*eax_5)[3].b = arg5
    (*eax_5)[2] = arg3
    void* var_1c_1 = ((zx.d(arg5) ^ 1) << 2) + 0x88e0
    int32_t var_20 = arg2
    *(eax_5 + 0x13e) = ecx_1.b
    (*__glewBufferData)(0x8893, arg3)
    return (*eax_5)[0x52]
}
