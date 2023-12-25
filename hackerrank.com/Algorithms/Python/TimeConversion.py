def timeConversion(s):
    # Write your code here
    hour = int(s.split(":")[0])
    
    format_ = s[-2:]
    c = s.removesuffix(format_).split(":")
    
    if format_ == "PM" and hour < 12:
        c[0] = str(hour + 12)
    elif format_ == "AM" and hour >= 12:
        c[0] = "0" + str(hour - 12) if hour - 12 == 0 else str(hour - 12)
    
    return ":".join(c)
