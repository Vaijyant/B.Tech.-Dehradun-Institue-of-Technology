import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;

class CopyFile
{
	public static void main (String args[])
	{
		try
		{
		   File sourceFile = new File("D:\\Vaijyant\\thePics\\abstract_0052.jpg");
		   File destinationFile = new File("E:\\" + sourceFile.getName());
		   CopyFile copyFile = new CopyFile();
		   copyFile.copyFile(sourceFile, destinationFile);
		}
		catch (Exception e)
		{
			e.printStackTrace();
		}
	}
	public void copyFile(File sourceFile, File destinationFile)
	{
		try
		{
			FileInputStream fileInputStream = new FileInputStream(sourceFile);
			FileOutputStream fileOutputStream = new FileOutputStream(destinationFile);

			int bufferSize;
			byte[] bufffer = new byte[512];
			while ((bufferSize = fileInputStream.read(bufffer)) > 0)
			{
				fileOutputStream.write(bufffer, 0, bufferSize);
			}
			fileInputStream.close();
			fileOutputStream.close();
		}
		catch (Exception e)
		{
			e.printStackTrace();
		}
	}
}