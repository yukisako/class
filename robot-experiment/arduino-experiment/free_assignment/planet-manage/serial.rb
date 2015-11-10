require 'rubygems'
gem 'serialport','>=1.0.4'
require 'serialport'
require 'date'

def receive(port)
  sp = SerialPort.new(port, 9600, 8, 1, SerialPort::NONE)
  loop do
      file(sp.readline)
  end 
  sp.close
end

port= "/dev/tty.usbmodem1411"

def file(doc)
  File.open("serial.txt", "a") do |file|
    #d = DateTime.now
    #file.print(d.year, "年", d.month, "月", d.day, "日", d.hour, "時", d.min, "分", d.sec, "秒", d.zone, "\n")
    doc.split("\n").each do |line|
      if line =~ /Plannt information/
        f = true
      end


      file.puts(line)
    end
  end
end


receive(port)