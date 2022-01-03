def process_mon(lines, name, index):
    print( "#{0} - {1}".format(str(index).zfill(3), name) )
    for line in lines:
        print(line)

    return

def parse_name( line ):
    return line[9] + line[10:-3].lower()


with open("C:\\Users\\MeekRhino\\AppData\\Local\\Packages\\CanonicalGroupLimited.Ubuntu18.04onWindows_79rhkp1fndgsc\\LocalState\\rootfs\\home\\meekrhino\\poketopaz\\src\\data\\pokemon\\base_stats.h", "r") as f:
    line = f.readline()

    # scan until we find the start of the mons
    while not line.find("VENAP") > -1:
        line = f.readline()

    mon = 1

    while line:
        # find the beginning of a mon

        while line and not line.strip().find("SPECIES") >= 0:
            line = f.readline()

        name = parse_name(line.strip())

        while line and not line.strip().startswith("{"):
            line = f.readline()

        monlines = []
        # go to first data line
        line = f.readline()
        while line and not line.strip().startswith("}"):
            trimmed = line.strip()
            monlines += [ trimmed ]
            line = f.readline()

        if len( monlines ) > 0:
            process_mon( monlines, name, mon )

        mon += 1
