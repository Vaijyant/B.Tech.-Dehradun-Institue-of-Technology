K-      ! ��wZ  �  !             �  ppt/slideLayouts/slideLayout4.xmlPK-      ! n��c  �  !             ]�  ppt/slideLayouts/slideLayout3.xmlPK-      ! -���I  �
  !             �  ppt/slideLayouts/slideLayout2.xmlPK-      ! ��2  P  !             ��  ppt/slideLayouts/slideLayout1.xmlPK-      ! 8h�G�  �  "             �  ppt/slideLayouts/slideLayout11.xmlPK-      ! �}�  "/  !             �  ppt/slideMasters/slideMaster1.xmlPK-      ! �ђ�   7  ,             ��  ppt/slideLayouts/_rels/slideLayout5.xml.relsPK-      ! �ђ�   7  ,             ��  ppt/slideLayouts/_rels/slideLayout3.xml.relsPK-      ! �ђ�   7  ,             ��  ppt/slideLayouts/_rels/slideLayout2.xml.relsPK-      ! �ђ�   7  ,             ��  ppt/slideLayouts/_rels/slideLayout1.xml.relsPK-      ! i�_!  �  ,             ��  ppt/slideMasters/_rels/slideMaster1.xml.relsPK-      ! �ђ�   7  ,             Z�  ppt/slideLayouts/_rels/slideLayout6.xml.relsPK-      ! �ђ�   7  ,             b�  ppt/slideLayouts/_rels/slideLayout7.xml.relsPK-      ! �ђ�   7  ,             j�  ppt/slideLayouts/_rels/slideLayout4.xml.relsPK-      ! ��	9�  \               r�  ppt/theme/theme1.xmlPK- 
       ! q� �   �               '�  docProps/thumbnail.jpegPK-      ! X��ª                  \c ppt/presProps.xmlPK-      ! �(���  W               5d ppt/viewProps.xmlPK-      ! �����   �                �e ppt/tableStyles.xmlPK-      ! +P;y�  ?               �f docProps/app.xmlPK-      ! v�Ò�  �               �j docProps/core.xmlPK    U U   hm                                                                                                                                                                                                                                                                                                                                                                                                nClear);
        jp.add(btnExit);
        
        jf.add(jp);
        
        
        
        
    }
    private void HandleSubmit()
    {
        String id=txtID.getText();
        String name=txtName.getText();
        String city=cmbCity.getSelectedItem().toString();
        
        if(id.length() == 0)
        {
            JOptionPane.showMessageDialog(jf,"Please enter ur id");
            txtID.grabFocus();
            return;
        }
        if(name.length() == 0)
        {
            JOptionPane.showMessageDialog(jf,"Please enter ur name");
            txtName.grabFocus();
            return;
        }
        //String msg="Congratulations following data has been submiteed\n ID = " +id +"\nName = "+name +"\n City = "+city;
        String msg="Congratulations following data has been submiteed\n";
        msg=msg+"Id = "+id+"\n";
        msg=msg+"Name = "+name+"\n";
        msg=msg+"City = "+city+"\n";
        
        JOptionPane.showMessageDialog(jf, msg);
        
    }
    private void HandleClear()
    {
        txtID.setText("");
        txtName.setText("");
        txtID.grabFocus();
    }
    private void HandleExit()
    {
        System.exit(0);
    }
}


