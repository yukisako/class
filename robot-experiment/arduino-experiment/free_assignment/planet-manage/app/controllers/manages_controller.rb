class ManagesController < ApplicationController
  def index
    doc = File.open("serial.txt").read
    @info = doc
    @line = []
    @count = 0
    d = DateTime.now
    @date = d.year.to_s + "年" + d.month.to_s + "月" + d.day.to_s + "日" + d.hour.to_s + "時" + d.min.to_s + "分" + d.sec.to_s + "秒"
  end
end
